#include <iostream>
#include <math.h>
using namespace std;
 int main(){
     int t;
     cin>>t;
     double ans[t],arr[t][2];
     if(t>=1 && t<=300){
         for(int i=0;i<t;i++){
             for(int j=0;j<2;j++){
                 cin>>arr[i][j];
             }
             if((arr[i][0] >=1 && arr[i][1]<=pow(10,8)) && (arr[i][1]>=0 && arr[i][1]<=pow(10,8))){
                  if(arr[i][1]<=10 && arr[i][0]<=pow(2,10)){
                      ans[i]=pow(2,arr[i][1]);
                  }else if(arr[i][1]<=10 && arr[i][0]>pow(2,10)){
                      ans[i]=1024;
                  }else if(arr[i][1]>10 && arr[i][0]>=1024){
                      ans[i]=1024*(pow(3,(arr[i][1]-10)));
                  }else if(arr[i][1]>10 && arr[i][0]<1024){
                      ans[i]=arr[i][0];
                  }
             }else{break;}
         }
     }else{}

     for(int k=0;k<t;k++){
         cout<<ans[k]<<"\n";
     }
     return 0;
 }
// #include <iostream>
// #include <math.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,d;
// 	    cin>>n>>d;
// 	    long long int ans;
// 	    if(d<=10){
// 	        ans=pow(2,d);
// 	    }
// 	    else if(d>10){
// 	        ans=pow(2,10)*pow(3,d-10);
// 	    }
	    
// 	    if(ans<=n){
// 	        cout<<ans<<endl;
	        
// 	    }
// 	    else{
// 	        cout<<n<<endl;
// 	    }
// 	}
// 	return 0;
// }