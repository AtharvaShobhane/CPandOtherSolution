#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a;
	    cin>>n>>a;
	    int arr[n];
	    for (int i = 0; i < n; i++) {
	       cin>>arr[i];
	    }
	    sort(arr, arr + n, greater<int>());
	    int ans=0;
	    for(int i=0;i<n;i++){
	        a=a-arr[i];
	        ans++;
	        if(a<=0){
	            break;
	        }
	    }
	    if(a>0){
	        cout<<"-1"<<endl;
	    }
	    else{
	        cout<<ans<<endl;
	    }
	}
	return 0;
}