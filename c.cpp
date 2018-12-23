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
  ll n, p;
  cin >> n >> p;
  vector<ll> divide;
  for(ll i = 1; i * i <= p; i++)
  {
    if(p % i == 0)
    {
      divide.push_back(i);
      divide.push_back(p / i);
    }
  } 
  sort(divide.begin(), divide.end());
  map<ll, int> m;
  for(auto e : divide)
  {
    m[e] = 1;
  }
  ll max_d = 0;
  for(int i = 0; i < divide.size(); i++)
  {
    ll an = pow(divide[i], n);
    if(m.count(an))
    {
      max_d = max(divide[i], max_d);
    }  
  }
  cout << max_d << endl;
	return 0;
}
