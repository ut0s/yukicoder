/**
  @file 441.cpp
  @title  No.441 和か積 - yukicoder
  @url https://yukicoder.me/problems/no/441
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

#define SORT(x) sort(ALL(x))
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
}

string superlong_add(string A, string B) {
  if (count(ALL(B), '0') == SZ(B)) {
    return A;
  }

  string ret = "";
  if (SZ(A) < SZ(B)) {
    swap(A, B);
  }

  B = string(SZ(A) - SZ(B), '0') + B;

  int carryover = 0;
  RREP(i, SZ(A)) {
    int tmp = stoi(A.substr(i, 1)) + stoi(B.substr(i, 1)) + carryover;
    if (tmp > 9) {
      carryover = tmp / 10;
      tmp %= 10;
    } else {
      carryover = 0;
    }
    ret += to_string(tmp);
  }

  if (carryover != 0) {
    ret += to_string(carryover);
  }

  reverse(ALL(ret));
  return ret;
}

string sl_pro1(string A, string B) {
  string ret    = "";
  int carryover = 0;
  RREP(i, SZ(A)) {
    int tmp = (stoi(A.substr(i, 1)) * stoi(B)) + carryover;
    if (tmp > 9) {
      carryover = tmp / 10;
      tmp %= 10;
    } else {
      carryover = 0;
    }
    ret += to_string(tmp);
  }

  if (carryover != 0) {
    ret += to_string(carryover);
  }
  reverse(ALL(ret));
  return ret;
}

string superlong_pro(string A, string B) {
  string ret = "0";
  if (SZ(A) < SZ(B)) {
    swap(A, B);
  }

  REP(i, SZ(B)) {
    string tmp = sl_pro1(A, B.substr(SZ(B) - i - 1, 1));

    tmp = tmp + string(i, '0');
    ret = superlong_add(tmp, ret);
  }

  return ret;
}

int main() {
  ::iostream_init();

  string A, B;
  cin >> A >> B;

  string add = superlong_add(A, B);
  string pro = superlong_pro(A, B);

  if (SZ(pro) > SZ(add)) {
    add = string(SZ(pro) - SZ(add), '0') + add;
  }

  // DEBUG(add);
  // DEBUG(pro);
  // OUT(add);
  // OUT(pro);

  if (add > pro) {
    OUT("S");
  } else if (add < pro) {
    OUT("P");
  } else if (add == pro) {
    OUT("E");
  }

  return 0;
}
