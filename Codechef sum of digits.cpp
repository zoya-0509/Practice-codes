#include <bits/stdc++.h>
using namespace std;
int main() 
{
      int T;
      cin>>T;
      while(T--){
            long long int n,digits,sum=0;
            cin>>n;
            while(n>0){
                  digits=n%10;
                  sum=sum+digits;
                  n=n/10;
      
            }
            cout<<sum<<"\n";
      }
	return 0;
}
