#include<bits/stdc++.h>
using namespace std;
vector<long long int> dp(100 , -1);
int fib(int n) 
{ 
  int f[n+2];
  int i; 
  
  f[0] = 0; 
  f[1] = 1; 
  
  for (i = 2; i <= n; i++) 
  { 
      f[i] = f[i-1] + f[i-2]; 
  } 
  
  return f[n]; 
} 
  
int main(long long int argc, char const *argv[])
{
    long long int test;
    cin>>test;
    while (test--)
    {
        long long int N;
        cin>>N;
        cout<<fib(N+1)<<endl;
    }
    
    return 0;
}
