//correct aaya
#include <iostream>
using namespace std;
int main(){
    int a,t,n;
    cin>>t;
    a=t;    
    while(t!=0){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"1 ";
        }
        cout<<endl;
    }
    t--;
    }
    return 0;

}