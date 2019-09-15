/**
  @file 713.cpp
  @title  No.713 素数の和 - yukicoder
  @url https://yukicoder.me/problems/no/713
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

template <class T>
bool isPrime(T num) {
  if (num < 2)
    return false;
  else if (num == 2)
    return true;
  else if (num % 2 == 0)
    return false; // omit even number

  long double sqrtNum = sqrt(num);
  for (int i = 3; i <= sqrtNum; i += 2) {
    if (num % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  int N;
  cin >> N;

  int ans = 0;
  for (int i = 1; i <= N; i++) {
    if (isPrime(i)) ans += i;
  }

  cout << ans << endl;
  return 0;
}
