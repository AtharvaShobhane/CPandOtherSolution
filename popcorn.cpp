#include <iostream>
using namespace std;
int main(){
    int t,a1,a2;
    cin>>t;
    int ele = t*3;
    int arr[ele]={};
    for(int i = 0;i<ele;i++){
        cin>>a1>>a2;
        arr[i]=a1+a2;
    }
    for(int j=0;j<ele;j+=3){
        int i;
        int max = arr[j];
        for (int k = j; k < (j+3); k++){
            if (arr[k] > max){max = arr[k];}
        }
        cout<<max<<endl;
        
    }
    return 0;
}