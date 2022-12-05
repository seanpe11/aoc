#include <iostream>
#include <map>
#include <stack>
#include <stdio.h>
#include <vector>
using namespace std;

int main(void) {
  map<int, stack<char>> stacks;
  map<int, vector<char>> stackInput;

  string line;
  // initial pile
  while (line[1] != '1') {
    getline(cin, line, '\n');
    for (long unsigned int i = 1; i < line.length(); i += 4) {
      if (line[line.length() - 2] == '9') {
        break;
      }

      if (line[i] != ' ') {
        stackInput[i / 4].push_back(line[i]);
      }
    }
  }
  for (int i = 0; i < 9; i++) {
    for (int j = stackInput[i].size() - 1; j >= 0; j--) {
      stacks[i].push(stackInput[i][j]);
    }
  }

  // moving from stack to stack
  // instruction here
  string move, from, to;
  int src, dest, amount;
  while (cin >> move >> amount >> from >> src >> to >> dest) {
    cout << "move " << amount << " from " << src << " to " << dest << endl;
    src--;
    dest--;
    for (int i = 0; i < amount; i++) {
      stacks[dest].push(stacks[src].top());
      stacks[src].pop();
    }
  }

  for (int i = 0; i < 9; i++) {
    cout << stacks[i].top();
  }

  return 0;
}
