#include <iostream>
using namespace std;
 
void swap(int *a, int *b){
    int temp = *a; 
    *a = *b;
    *b = temp;
}

void permute(string a, int s, int l){
    if(s==l)
        cout << a << endl;
    else{
        for(int i=s; i<=l; i++){
            swap(a[s], a[i]);
            permute(a, s+1, l);
            swap(a[s], a[i]);
        }
    }
}

int main(){
    string a;
    int s=0;
    cin >> a;
    int l = a.length()-1;
    permute(a, s, l);
    return 0;
}