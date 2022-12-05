#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

int main(void) {
  int l, w, h;
  vector<int> perims;
  int total = 0;
  int ribbon = 0;
  while (scanf("%dx%dx%d", &l, &w, &h) == 3) {
    printf("%d %d %d\n", l, w, h);

    // part 1
    int sa = 2 * l * w + 2 * w * h + 2 * h * l;
    int smallest = min(l * w, w * h);
    smallest = min(smallest, h * l);

    // part 2
    int smallest2 = min(l * 2 + w * 2, w * 2 + h * 2);
    smallest2 = min(smallest2, h * 2 + l * 2);
    int bow = l * w * h;

    ribbon += smallest2 + bow;
    total += sa + smallest;
    // cout << sa + smallest << endl;
  }
  // part 1
  cout << total << endl;
  // part 2
  cout << ribbon << endl;
  return 0;
}
