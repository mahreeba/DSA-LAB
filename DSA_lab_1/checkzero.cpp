#include<iostream>
using namespace std;

int main(){
    int num;
    int *ptnum = &num;
    cout<<"Enter a number and don't tell it to anyone."<<endl;
    cin>>num;

    if(*ptnum == 0){
        cout<<"The number you entered is zero"<<endl;
    }else{
        cout<<"The number you entered in not zero"<<endl;
    }

    getchar();
    return 0;
}