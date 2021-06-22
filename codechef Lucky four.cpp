#include <bits/stdc++.h>
using namespace std;
int main() 
{
      long long int T;
      cin>>T;
      while (T--){
            long long int n,r,c=0;
            cin>>n;
            while (n>0){
                  r=n%10;
                  if (r==4){
                        c++;
                  }
            n=n/10;
            }
            cout<<c<<"\n";
      }s
	return 0;
}
