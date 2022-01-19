#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,xa,xb,xc;
	cin>>t;
	while(t--){
	    string ans;
	    cin>>xa>>xb>>xc;
	    if(xa>50) ans="A";
	    if(xb>50) ans="B";
	    if(xc>50) ans="C";
	    if(xa<=50 && xb<=50){
	        if(xc<=50) ans ="NOTA";
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}