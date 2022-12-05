#include <iostream>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

int main(void) {
  int a, b, c, d;
  vector<int> hello;
  int overlappingCount = 0;

  int end = 4;
  for (int i = 0; i < 1000; i++) {
    end = scanf("%d-%d,%d-%d", &a, &b, &c, &d);
    if (!(b < c or a > d)) {
      overlappingCount++;
    }
    // printf("%d-%d,%d-%d\n", a, b, c, d);
    // map<int, int> set;
    // for (int i = a; i <= b; i++) {
    //   set[i] = 1;
    // }
    // for (int i = a; i <= b; i++) {
    //   if (set[i] == 1) {
    //     overlappingCount++;
    //     break;
    //   }
    // }
  }

  // part 1
  cout << overlappingCount;

  return 0;
}
