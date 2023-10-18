#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data= val;
        next= nullptr;
    }
};

class stack{
    public:
    node* head;
    stack(){
        head= nullptr;
    }
    
    bool isempty(){
        if(head == nullptr){
            return true;
        }else{
            return false;
        }
    }
    
    void push(int val){
        node* newnode= new node(val);
        newnode->next= head;
        head= newnode;
    }
    int pop(){
        node* temp= head;
        if(isempty()){
            cout<<"Stack is empty"<<endl;
        }
        else{
        int val= temp->data;
        head= temp->next;
        delete temp;
            return val;
        }
    }


};

int main(){
    stack newstack;
    cout<<"Pushing elements in stack: "<<endl;
    newstack.push(1);
    newstack.push(2);
    newstack.push(3);
    newstack.push(4);
    cout<<"1,2,3 and 4 have been pushed into stack"<<endl;
    cout<<"Poping elements from stack: "<<endl;
    cout<<newstack.pop()<<" "<<newstack.pop()<<" ";
    cout<<newstack.pop()<<" "<<newstack.pop();

    return 0;
}