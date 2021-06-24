#include<bits/stdc++.h>
using namespace std;
int main()
{
      long long int n,k,c=0;
      cin>>n;
      cin>>k;
      while (n--){
            long long int a;
            cin>>a;
            if (a%k==0){
                  c++;
            
            }
      }
      cout<<c<<"\n";
}