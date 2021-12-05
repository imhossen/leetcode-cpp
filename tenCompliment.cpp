#include <iostream>
using namespace std;

int main() {
   //code goes here
   int n;
   cin>>n;

   int m = n;
   int mask = 0;

   while(m != 0){
       mask = (mask << 1) | 1;
       cout<<"Mask is:"<<mask<<endl;
       m = m >> 1;
       cout<<"Number is: "<<m<<endl;
   }
   int ans = (~n) & mask;
   cout<<ans<<endl;

    return 0;
}