#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,4,5,2,8,1,9};
    int max = 0;
    for(int i = 1 ;i<7;i++){
        if(arr[i]>arr[i-1]){
            max = max + (arr[i]-arr[i-1]);
        }
    }
    cout<<max<<endl;
}