#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        // int current = arr[i];
        int j = i;
        while(arr[j-1]>arr[j] && j>0){
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
        j--;
      }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

    insertionSort(arr, n);
    for(int i=0; i<n; i++){
          cout<<arr[i]<<" ";
    }
    return 0;
}
// avg/worst case TC = O(N^2) || best = O(N)
// step-1: take the elements and
// step-2: place it in it's current position