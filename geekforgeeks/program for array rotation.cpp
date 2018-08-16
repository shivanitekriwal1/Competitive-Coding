#include <iostream>
using namespace std;

void rotatebyone(int arr[], int n){
    int i, temp = arr[0];
    for(i=0; i<n-1; i++)
        arr[i] = arr[i+1];
    arr[i] = temp;
}

void rotate(int arr[],int d,int n){
    for(int i=0; i<d; i++)
        rotatebyone(arr, n);
}

int main(){
    int n,a,d;
    cin >> n >> d;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    rotate(arr, d,n);
    for(int j=0; j<n; j++)
        cout << arr[j] << " ";
        
    return 0;
}