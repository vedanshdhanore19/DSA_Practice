#include <bits/stdc++.h>
using namespace std;

int largest(int arr[],int n){
    int largest=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int main(){
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter the numbers : ";
        cin >> arr[i];
    }
    cout << "Largest element is : " << largest(arr,n);
    return 0;
}