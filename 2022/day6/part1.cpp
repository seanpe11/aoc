#include <iostream>
#include <set>
#include <stack>
#include <stdio.h>
#include <vector>
using namespace std;

// simple stack solution
// read input into stacks, then just follow operations as stacks

int main(void) {
  string line;
  getline(cin, line);
  int ans;
  int length = 4;
  // int length = 14;

  for (int i = 0; i < line.length() - length; i++) {
    set<char> s;
    for (int j = 0; j < length; j++) {
      s.insert(line[i + j]);
    }
    if (s.size() == length) {
      ans = i + length;
      break;
    }
  }
  cout << ans;

  return 0;
}
