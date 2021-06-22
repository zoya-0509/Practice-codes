#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	      int A,B,C;
	      cin>>A>>B>>C;
	      if(A+B+C==180)
	      {
	            if(A>0&&B>0&&C>0)
	            {
	                  cout<<"YES\n";
	            }
	            else
	            cout<<"NO\n";
	      }
	      else
	      cout<<"NO\n";
	}
	
	return 0;
}
