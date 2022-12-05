#include <iostream>
#include <map>
#include <stack>
#include <stdio.h>
#include <vector>
using namespace std;

// use vectors instead of stacks
// find the first element and then just iterate the rest of the amounts into the
// new vector

int main(void) {
  map<int, vector<char>> stacks;
  map<int, int> heads;
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
    heads[i] = 0;
    for (int j = stackInput[i].size() - 1; j >= 0; j--) {
      stacks[i].push_back(stackInput[i][j]);
      heads[i]++;
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
    int start = stacks[src].size() - amount;
    for (int i = 0; i < amount; i++) {
      stacks[dest].push_back(stacks[src][start + i]);
      stacks[src].pop_back();
      heads[dest]++;
      heads[src]--;
    }
  }

  for (int i = 0; i < 9; i++) {
    cout << stacks[i].back();
  }

  return 0;
}
