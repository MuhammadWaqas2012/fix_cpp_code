#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int sum=0,i=1;

    start:
    if(i>n) goto end;

    {
        int j=0;
        int temp=0;

        inner:
        if(j==i) goto done;
        temp++;
        j++;
        goto inner;

        done:
        sum+=temp;
    }

    i++;
    goto start;

    end:
    cout<<"Sum="<<sum;

    return 0;
}