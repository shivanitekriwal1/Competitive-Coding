#include<iostream>
#include<algorithm>
using namespace std;

void swap(int*a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int n){
    sort(arr, arr+n);
    
    for(int i=0; i<n-1; i+=2){
        swap(arr[i], arr[i+1]);
    }
}


int main(){
    int t;
    cin >> t;
    for(int i=0 ;i<t; i++){
        int n,a;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>a;
            arr[i]=a;
        }
        sort(arr,n);
        for(int j=0; j<n; j++){
            cout << arr[j] << " ";
        }
    }
    
    return 0;
}
