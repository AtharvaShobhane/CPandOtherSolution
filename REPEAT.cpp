#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k,s;
	cin>>t;
	while(t--){
	    int sumOdd =0,j=1;
	    cin>>n>>k>>s;
	    for(int i=0;i<n;i++){
	        sumOdd+=j;
	        j+=2;
	    }
	    cout<<(s-sumOdd)/(k-1)<<endl;
	}
	return 0;
}
