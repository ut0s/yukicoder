/**
  @file main.cpp
  @title No.864 四方演算
  @url https://yukicoder.me/problems/no/864
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

vector<LL> make_divisors(LL n) {
  vector<LL> divisors;
  for (LL i = 1; i <= sqrt(n) + 1; i++) {
    if (n % i == 0) {
      divisors.push_back(i);
      divisors.push_back(n / i);
    }
  }
  sort(ALL(divisors));
  divisors.erase(unique(divisors.begin(), divisors.end()), divisors.end());
  return divisors;
}

LL seps(LL q, LL N) {
  if (q <= 1 || q > 2 * N) return 0;
  return N - abs(N + 1LL - q);
}

template <class T>
void show(vector<T>& v) {
  for (LL i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << "\n";
}

int main() {
  LL N, K;
  cin >> N >> K;

  vector<LL> divs = make_divisors(K);
  // show(divs);

  LL ans = 0;
  for (auto i : divs) {
    if (i == 1 || i == K) {
      continue;
    }
    LL j = K / i;

    // cout << seps(i, N) << " , " << seps(j, N) << "\n";
    ans += seps(i, N) * seps(j, N);
  }

  cout << ans << endl;
  return 0;
  }
