#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

string to_find;
ll n;
string given;
ll ans = 0;

bool HasSubstr() {
  for (auto i = 0LL; i < given.length(); ++i) {
    auto is_found = bool{true};
    for (auto j = 0LL; j < to_find.length(); ++j) {
      auto p = (i + j) % given.length();
      if (given[p] != to_find[j]) {
        is_found = false;
      }
    }

    if (is_found) {
      return true;
    }
  }

  return false;
}

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> to_find;
  cin >> n;
  while (0 < (n--)) {
    cin >> given;

    if (HasSubstr()) {
      ++ans;
    }
  }

  cout << ans;

  return 0;
}