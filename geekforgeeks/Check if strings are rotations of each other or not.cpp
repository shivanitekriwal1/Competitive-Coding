#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
	    string s1, s2,s="";
	    cin >> s1 >> s2;
	    if(s1.size()==s2.size()){
    	    s = s1+s1;
    	    int n = s2.size();
    	    for(int j=0; j<s.size()-n; j++){
    	        if(s.substr(j, n)==s2){
    	            cout << 1 <<endl;
    	            break;
    	        }
    	        if(j==s.size()-n-1)
    	            cout << 0 << endl;
    	    }
	    }
	    else{
	        cout << 0 << endl;
	    }
	}
	return 0;
}