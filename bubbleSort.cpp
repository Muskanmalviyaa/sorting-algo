#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
       for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j]> arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

    bubbleSort(arr, n);
    for(int i=0; i<n; i++){
          cout<<arr[i]<<" ";
    }
    return 0;
}
// TC = O(n^2)
// step-1: compares adjacent element
// step-2: and then swap
// step-3: put largest element in the last index