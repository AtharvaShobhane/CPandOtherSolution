#include <iostream>
using namespace std;
int main(){
    int t,d[3],s[3];
    int j=0;
    cin>>t;
    string ans[t];
    
    for(int k=0;k<t;k++){
        cin>>d[0]>>d[1]>>d[2];
        cin>>s[0]>>s[1]>>s[2];
        if((d[0]+d[1]+d[2])==(s[0]+s[1]+s[2])){
            if(d[0]>s[0]){ans[j]="Dragon";}
            else if(d[0]<s[0]){ans[j]="Sloth";}
            else if(d[0]==s[0]){
                if(d[1]>s[1]){ans[j]="Dragon";}
                else if(d[1]<s[1]){ans[j]="Sloth";}
                else if(d[1]==d[1]){
                    if(d[2]>s[2]){ans[j]="Dragon";}
                    else if(d[2]<s[2]){ans[j]="Sloth";}
                    else if(d[2]==d[2]){ans[j] ="Tie";}
                }
            }
        }else{
            if((d[0]+d[1]+d[2])>(s[0]+s[1]+s[2])){
                ans[j] = "Dragon";
            }else{ans[j]="Sloth";}
        }
        j++;
    }
    for(int i=0;i<t;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}