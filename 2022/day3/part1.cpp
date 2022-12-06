#include <algorithm>
#include <iostream>
#include <set>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

// simply use a set, find the intersection of whatever you're looking for
// for part 1, intersection of two halves of backpack
// for part 2, intersection of first two elves, then intersection of third elf
// and intersection of 1&2
int main(void) {
  vector<string> lines;
  string line;
  int ans1 = 0;
  int ans2 = 0;
  while (getline(cin, line)) {
    lines.push_back(line);

    // part 1
    set<char> l, r;
    for (int i = 0; i < line.length() / 2; i++) {
      l.insert(line[i]);
    }
    for (int i = line.length() / 2; i < line.length(); i++) {
      r.insert(line[i]);
    }
    set<char> inter;
    set_intersection(l.begin(), l.end(), r.begin(), r.end(),
                     std::inserter(inter, inter.begin()));

    for (char c : inter) {
      if ((int)c >= 97) {
        ans1 += (int)c - 96;
      } else if ((int)c >= 65) {
        ans1 += (int)c - 64 + 26;
      }
    }
  }
  // part 2
  for (int i = 0; i < lines.size(); i += 3) {
    vector<set<char>> elves;
    for (int j = 0; j < 3; j++) {
      set<char> elf;
      for (char c : lines[i + j]) {
        elf.insert(c);
      }
      elves.push_back(elf);
    }

    // find intersection of all three
    set<char> three;
    set_intersection(elves[0].begin(), elves[0].end(), elves[1].begin(),
                     elves[1].end(), std::inserter(three, three.begin()));
    set<char> finally;
    set_intersection(three.begin(), three.end(), elves[2].begin(),
                     elves[2].end(), std::inserter(finally, finally.begin()));

    // solve for value
    for (char c : finally) {
      if ((int)c >= 97) {
        ans2 += (int)c - 96;
      } else if ((int)c >= 65) {
        ans2 += (int)c - 64 + 26;
      }
    }
  }

  cout << ans1 << endl;
  cout << ans2 << endl;

  return 0;
}
