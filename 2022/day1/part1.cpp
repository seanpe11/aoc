#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

// simple stack solution
// read input into stacks, then just follow operations as stacks

int main(void) {
  vector<string> lines;

  string line;
  vector<int> elves;
  elves.push_back(0);
  int index = 0;
  vector<int> maxes = {0, 0, 0};

  while (getline(cin, line)) {
    if (line.empty()) {
      elves.push_back(0);
      index++;
      continue;
    }

    int wow = stoi(line);
    elves[index] += wow;
  }

  sort(elves.begin(), elves.end());
  int sum = 0;
  for (int i = elves.size() - 1; i >= elves.size() - 3; i--) {
    sum += elves[i];
    cout << elves[i] << endl;
  }
  cout << sum;

  return 0;
}
