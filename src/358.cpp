/**
  @file 358.cpp
  @title  No.358 も～っと！門松列 - yukicoder
  @url https://yukicoder.me/problems/no/358
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

bool is_uniq(vector<int> A) {
  auto tmp = A;
  SORT(tmp);
  UNIQ(tmp);
  return (SZ(tmp) == SZ(A));
}

template <class T>
bool is_prime(T num) {
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

bool is_kado(vector<int> A) {
  return (*max_element(ALL(A)) == A[1] || *min_element(ALL(A)) == A[1]);
}

int main() {
  ::iostream_init();

  vector<int> A(3, 0);
  REP(i, 3) {
    cin >> A[i];
  }

  if ((is_uniq(A) && A[1] == 1) || (is_uniq(A) && is_kado(A))) {
    OUT("INF");
    return 0;
  }

  int ans = 0;
  REPI(p, 1, *max_element(ALL(A)) + 1) {
    vector<int> B = A;
    REP(i, 3) {
      B[i] %= p;
    }

    if (is_uniq(B) && is_kado(B)) {
      ans++;
    }
  }

  OUT(ans);
  return 0;
}
