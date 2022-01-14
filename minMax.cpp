#include <iostream>
using namespace std;
int main(){
int t,arrEle;
string input;
cin>>t;
int sum[t];
for(int i=0;i<t;i++){
    int minSum=0;
    cin>>arrEle;
    int arr[arrEle];
    for(int j=0; j<arrEle;j++){
        cin>>arr[j];
        if(j!=0){
            if(arr[j]<arr[j-1]){
                minSum=minSum+arr[j];
            }else{
                minSum=minSum+arr[j-1];
            }
        }
        
    }
    sum[i]=minSum;
}
for(int k=0;k<t;k++){
    cout<<sum[k]<<"\n";
}

return 0;

}
