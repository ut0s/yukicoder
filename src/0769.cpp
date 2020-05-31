/**
  @file 769.cpp
  @title  No.769 UNOシミュレータ - yukicoder
  @url https://yukicoder.me/problems/no/769
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
void show(vector<T>& v) {
  for (uint i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << "\n";
}

int next_turn(int id, int N, bool is_reverse) {
  int next_id = id;
  if (is_reverse) {
    next_id--;
  } else {
    next_id++;
  }
  return (next_id + N) % N;
}

void test() {
  assert(1 == next_turn(0, 5, false));
  assert(0 == next_turn(1, 2, false));
  assert(4 == next_turn(0, 5, true));
  // assert(3 == next_turn(0, 5, true)); // error
}

int main() {
  ::iostream_init();

  int N, M;
  cin >> N >> M;

  vector<string> l(M);
  REP(i, M) {
    cin >> l[i];
  }

  int id      = 0;
  int prev_id = 0;
  int stock   = 0;
  vector<int> card(N, 0);
  vector<int> draw(N, 0);
  bool is_reverse = false;

  REP(i, M) {
    card[id]++;

    if (i == M - 1) {
      cout << id + 1 << " " << card[id] - draw[id] << endl;
      break;
    }

    if (l[i] == "number") {
      draw[prev_id] += stock;
      stock = 0;
    } else if (l[i] == "drawtwo") {
      stock += 2;

      if (l[i + 1] != "drawtwo") {
        prev_id = id;
        id      = next_turn(id, N, is_reverse);
        draw[id] += stock;
        stock = 0;
      }

    } else if (l[i] == "drawfour") {
      stock += 4;

      if (l[i + 1] != "drawfour") {
        prev_id = id;
        id      = next_turn(id, N, is_reverse);
        draw[id] += stock;
        stock = 0;
      }

    } else if (l[i] == "reverse") {
      is_reverse = !is_reverse;

      draw[prev_id] += stock;
      stock = 0;
    } else if (l[i] == "skip") {
      draw[prev_id] += stock;
      stock   = 0;
      prev_id = id;
      id      = next_turn(id, N, is_reverse);
    }

    // cout << "id:\t" << id << "\n";
    // cout << "l[i]:\t" << l[i] << "\n";
    // cout << "is_reversed:\t" << is_reverse << "\n";
    // cout << "card:\n";
    // show(card);
    // cout << "draw:\n";
    // show(draw);
    // OUT("=======================");

    prev_id = id;
    id      = next_turn(id, N, is_reverse);
  }

  test();

  return 0;
}
