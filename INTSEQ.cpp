#include <iostream>
using namespace std;
#include <math.h>

int main() {
    int t,s;
    cin>>t;
    while(t--){
        int cnt=0;
        cin>>s;
        if(s%2==0){
            while(s%2==0){
            cnt++;
            s=s/2;
        }
        }else{
            cnt=0;
        }
        
        cout<<cnt<<endl;
        
    }
    
	return 0;
}
