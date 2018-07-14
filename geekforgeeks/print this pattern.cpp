#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    for(int i=0;i<2*n-1;i++)
	    {
	        for(int j=0;j<2*n-1;j++)
	        {
	            int x;
	            x=1+ max(abs(n-1-i),abs(n-1-j));
	            cout<<x;
	        }
	        cout<<"\n";	    }
	}
	return 0;
#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    for(int i=0;i<2*n-1;i++)
	    {
	        for(int j=0;j<2*n-1;j++)
	        {
	            int x;
	            x=1+ max(abs(n-1-i),abs(n-1-j));
	            cout<<x;
	        }
	        cout<<"\n";	    }
	}
	return 0;
}