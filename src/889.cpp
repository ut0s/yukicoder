/**
  @file 889.cpp
  @title  No.889 素数! - yukicoder
  @url https://yukicoder.me/problems/no/889
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
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

bool is_square(uLL num) {
  return ((uLL)sqrt(num) * (uLL)sqrt(num) == (uLL)num);
}

bool is_cubic(uLL num) {
  return ((uLL)cbrt(num) * (uLL)cbrt(num) * (uLL)cbrt(num) == (uLL)num);
}

template <class T>
vector<T> mk_divs(T n) {
  vector<T> divs;
  for (T i = 1; i <= sqrt(n) + 1; i++) {
    if (n % i == 0) {
      divs.push_back(i);
      divs.push_back(n / i);
    }
  }
  sort(ALL(divs));
  divs.erase(unique(divs.begin(), divs.end()), divs.end());
  return divs;
}

template <class T>
bool is_perfect_num(T num) {
  auto divs = mk_divs(num);
  T sum     = accumulate(ALL(divs), (T)0);
  return (sum - num == num);
}

int main() {
  ::iostream_init();

  int N;
  cin >> N;

  if (N == 0) {
    OUT(0);
  } else if (N == 1) {
    OUT(1);
  } else if (is_prime(N)) {
    OUT("Sosu!");
  } else if (is_square(N)) {
    OUT("Heihosu!");
  } else if (is_cubic(N)) {
    OUT("Ripposu!");
  } else if (is_perfect_num(N)) {
    OUT("Kanzensu!");
  } else {
    OUT(N);
  }

  return 0;
}
