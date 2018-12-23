#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <math.h>

using namespace std;
using ll = long long int;

int main()
{
  int n;
  cin >> n;
  vector<ll> apples(n);
  for(int i = 0; i < n; i++)
  {
    ll a;
    cin >> a;
    apples[i] = a;
  }
  bool flag = false;
  for(auto e : apples)
  {
    if(e % 2 == 1)
    {
      flag = true;
    }
  }
  if(flag)
  {
    cout << "first" << endl;
  }else{
    cout << "second" << endl;
  }
	return 0;
}
