/**
  @file 677.cpp
  @title  No.677 10^Nの約数 - yukicoder
  @url https://yukicoder.me/problems/no/677
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define RALL(x) (x).rbegin(), (x).rend()
#define SZ(x) ((int)(x).size())

#define REPI(i, a, b) for (LL i = LL(a); i < LL(b); ++i)
#define REP(i, N) for (LL i = LL(0); i < LL(N); ++i)
#define REPS(i, N) for (int i = 1; i <= (int)(N); i++)
#define RREP(i, N) for (int i = ((int)(N)-1); i >= 0; i--)
#define RREPS(i, N) for (int i = ((int)(N)); i > 0; i--)

#define chmax(ret, x) ret = max(ret, x)
#define chmin(ret, x) ret = min(ret, x)

#define FILL(x, e) memset(x, e, sizeof(x))
#define ZEROS(x) fill(x, 0)

#define UNIQ(x) x.erase(unique(ALL(x)), x.end());

#define BIT(n) (1LL << (n))

#define OUT(x) cout << (x) << "\n"
#define DEBUG(x) cerr << #x << " : " << x << "\n"
#define DEBUG2(x, y) cerr << "(" << #x << ", " << #y << ") = (" << x << ", " << y << ")\n";

#define PB push_back
#define EB emplace_back
#define MP make_pair
#define MT make_tuple
#define FI first
#define SE second

const int MOD = 1e9 + 7;

void iostream_init() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(12);
}

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

int main() {
  ::iostream_init();

  int N;
  cin >> N;

  // Naive
  // vector<LL> divs = make_divisors(pow(10, N));
  // REP(i, SZ(divs)) {
  //   OUT(divs[i]);
  // }

  vector<LL> divs2 = make_divisors(pow(2, N));
  vector<LL> divs5 = make_divisors(pow(5, N));

  vector<LL> ret;
  REP(i, SZ(divs2)) {
    REP(j, SZ(divs2)) {
      ret.PB(divs2[i] * divs5[j]);
    }
  }

  sort(ALL(ret));
  REP(i, SZ(ret)) {
    OUT(ret[i]);
  }

  return 0;
}
