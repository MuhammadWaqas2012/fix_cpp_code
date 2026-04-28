#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;

    bool flag=true;

    for(int i=n;i>=1;i--){
        for(int j=1;j<=n;j++){
            if(i*j==n && i!=1 && j!=1){
                flag=false;
            }
        }
    }

    if(flag)
        cout<<"Prime";
    else
        cout<<"Not Prime";

    return 0;
}