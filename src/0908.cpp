/**
  @file 0908.cpp
  @title  No.908 うしたぷにきあくん文字列 - yukicoder
  @url https://yukicoder.me/problems/no/908
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef unsigned int uint;

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

#define SORT(x) sort(ALL(x))
#define RSORT(x) sort(RALL(x))

#define UNIQ(x) x.erase(unique(ALL(x)), x.end())

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
  // cout.fill('0');
  // cout.width(3);
}

int main() {
  ::iostream_init();

  string S;
  getline(cin, S);

  string d = "abcdefghijklmnopqrstuvwxyz";

  // S = "t s";
  // REP(i, SZ(S)) {
  //   if (i % 2 == 0) {
  //     OUT(i);
  //     cout << S.substr(i, 1) << "\n";
  //     cout << "even\n";
  //     if (d.find(S[i]) != std::string::npos) {
  //       OUT("Yes");
  //       // continue;
  //     } else {
  //       OUT("No");
  //     }
  //   }
  //   if (i % 2 != 0) {
  //     OUT(i);
  //     cout << S.substr(i, 1) << "\n";
  //     cout << "odd\n";
  //     if (S.substr(i, 1) == " ") {
  //       OUT("Yes");
  //       // continue;
  //     } else {
  //       OUT("No");
  //     }
  //   }

  //   cout << "\n";
  // }

  REP(i, SZ(S)) {
    if (i % 2 == 0 && d.find(S[i]) != std::string::npos) {
      continue;
    } else if (i % 2 != 0 && S.substr(i, 1) == " ") {
      continue;
    } else {
      OUT("No");
      return 0;
    }

    OUT("No");
    return 0;
  }

  OUT("Yes");
  return 0;
}
