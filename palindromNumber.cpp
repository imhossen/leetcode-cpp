#include <iostream>
#include<math.h>
using namespace std;

int main() {
   //code goes here
   int x; 
   cin>>x;

        int n = x;
        long ans = 0;
        while(n!=0){
            int last_digit = n % 10;
            ans = (ans * 10) + last_digit;
            n = n / 10;     
        }
        
        if(ans == x && ans > 0){
            cout<<ans<<endl;
            return true;

        } 
        return false;

}