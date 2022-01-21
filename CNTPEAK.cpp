#include <iostream>
using namespace std;
#include <math.h>
int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int ans;
	    if(n<3){
	        ans =0;
	    }else{
	        ans = ((10)*pow(3,(n-3)))*((n-3)+1);
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}
