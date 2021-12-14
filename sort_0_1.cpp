#include <iostream>
using namespace std;

void sortOne(int arr[], int n){
    int left = 0;
   int right= n-1;

    while (left <right )
    {
        while (arr[left] == 0 && left<right)
        {
            left++;
        }
        while (arr[right] ==1 & left<right)
        {
            right--;
        }
        
        if(left<right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

void printArray(int arr[], int n){

    for (int i = 0; i < n; i++){
        cout<<arr[i];
    }
    cout<<endl;
}

int main() {
   //code goes here

   int arr[6] = {0, 1, 0, 1, 0, 1};

   sortOne(arr, 6);
    printArray(arr, 6);
    



    return 0;
}