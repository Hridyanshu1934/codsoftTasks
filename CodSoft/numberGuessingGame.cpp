#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int a;
    int b;
    srand(time(0));
    b = rand()%100+1;
    while(b!=a){
        cout<<"Enter your guess for the generated number"<<endl;
        cin>>a;
    if(a>b){
        cout<<"Your guess is greater than the generated number"<<endl;
    }
    if(b>a){
        cout<<"Your guess is smaller than the generated number"<<endl;   
    }
    if(a==b){
        break;
    }
    }
    cout<<"You have found the number";
}