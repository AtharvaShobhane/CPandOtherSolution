#include <iostream>
#include <math.h>
using namespace std;

void check(){}

int main(){
    int t;
    cin>>t;
    if(t>=1 && t<=10000){
    int arr[t][4] ;
    string ans[t];
    
    for(int j=0;j<t;j++){
        for(int i=0;i<4;i++){
        cin>>arr[j][i];
        }
        if((powl(arr[j][0],2)/powl(arr[j][2],3)) == (powl(arr[j][1],2)/powl(arr[j][3],3))){
            ans[j]="Yes\n";
        }else{ans[j]="No\n";}
    }
    for(int k=0;k<t;k++){
        cout<<ans[k];
    }

    }


    return 0;
}