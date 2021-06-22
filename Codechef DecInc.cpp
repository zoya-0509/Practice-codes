#include <iostream>
using namespace std;

int main() 
{
      long long int N;
      cin>>N;
      if (N%4==0){
            cout<<(N+1)<<"\n";
      }
      else{
            cout<<(N-1)<<"\n";
      }
      return 0;
}
