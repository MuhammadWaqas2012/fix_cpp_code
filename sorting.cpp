#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int arr[5]={5,1,4,2,3};

    for(int i=0;i<100;i++){
        int a=rand()%5;
        int b=rand()%5;

        if(arr[a]<arr[b]){
            int temp=arr[a];
            arr[a]=arr[b];
            arr[b]=temp;
        }
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}