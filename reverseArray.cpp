#include <iostream>
using namespace std;


void reverse(int arr[], int n){
    int start = 0;
    int end = n - 1;

    while (start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

void printArray(int arr[], int n){

    for (int i = 0; i < n; i++){
        cout<<arr[i];
    }
    cout<<endl;

}

int main() {
   //main code goes here

   int arr[5] = {1,2,3,4,5};
   int brr[6] = {1,2,3,4,5, 6};

   reverse(arr, 5);
   reverse(brr, 6);

   printArray(arr, 5);
   printArray(brr, 6);

}