// Author: Adam Polak

#include <assert.h>
#include <iostream>
using namespace std;

int main() {
  int Z;
  cin >> Z;
  while (Z--) {
    int k;
    cin >> k;
    long long n = 0;
    while (k--) {
      n = (n + 1) * 2;
    }
    n /= 2;
    cout << n << endl;
  }
  return 0;
}
