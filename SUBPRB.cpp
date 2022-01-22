#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int j=1;
	    for(int i=0;i<n;i++){
	        cout<<j<<" ";
	        j+=2;
	    }
	    cout<<endl;
	}
	return 0;
}
