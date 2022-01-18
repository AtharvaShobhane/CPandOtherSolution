#include <iostream>
using namespace std;
int main(){
    int t,xa,xb,Xa,Xb,totala=0,totalb=0;
    cin>>t;
    while(t--){
        cin>>xa>>xb>>Xa>>Xb;
        if(Xa%xa==0){
            totala = Xa/xa; 
        }else{
            totala =( Xa/xa )+1;
        }
        if(Xb%xb==0){
            totalb = Xb/xb; 
        }else{
            totalb =( Xb/xb )+1;
        }
        cout<<totala+totalb;
    }
    return 0;
}