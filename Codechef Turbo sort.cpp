#include <bits/stdc++.h>
using namespace std;

int main() {
long long int t;
cin>>t;

     long long int A[100000000],i;
      for (i=0;i<t;i++){
            cin>>A[i];
            
      }
      sort(A,A+t);
      for (i=0;i<t;i++){
            cout<<A[i]<<"\n";
      }
	return 0;
}
