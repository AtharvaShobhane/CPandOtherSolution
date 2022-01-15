// #include <iostream>
// using namespace std;
// int getMin(int arr[], int n)
// {
//     int res = arr[0];
//     for (int i = 1; i < n; i++)
//         res = min(res, arr[i]);
//     return res;
// }
// int arrayAdd(int arr[], int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     return sum;
// }
// int main(){
//     int t,n,x;
//     cin>>t;
//     int final[t];
//     for(int i=0;i<t;i++){
//         cin>>n>>x;
//         int arr[n],ans[n];
//         for(int j=0;j<n;j++){
//             cin>>arr[j];
//         }
//         if(arrayAdd(arr,n)<x){
//                 final[i]=-1;
//                 break;
//             }else{
//         for(int k=0;k<n;k++){
            
//                 if(arr[k]>x){
//                 final[i]=1;
//                 break;
//                 }else{
//                     if(x%arr[k]==0){
//                     final[i]=x/arr[k];
//                     ans[k]=(x/arr[k])+1;
//                     }else{
//                         ans[k]=(x/arr[k])+1;
//                     }
//                     if(ans[0]!=0){
//                         final[i]=getMin(ans,n);
//                     }
//                 } 
//             }
            
//         }
        
        
//     }
//     for(int k=0;k<t;k++){
//         cout<<final[k]<<endl;
//     }

    
//     return 0;
// }


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