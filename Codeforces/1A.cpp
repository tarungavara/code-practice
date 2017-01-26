#include <iostream>

using namespace std;
int main()
{
  long long n, m, a, ans, x, y;
  cin >> n >> m >> a;
  if (n % a == 0)
  {
    x = n/a;
  }
  else
  {
    x = n/a + 1;
  }
  if (m % a == 0)
  {
    y = m/a;
  }
  else
  {
    y = m/a + 1;
  }
  ans = x*y;
  cout << ans << endl;
  return 0;
}
