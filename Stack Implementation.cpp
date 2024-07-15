#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Stacks{
private:
    T *Stack;
    int n;
    int t=-1;
public:
    Stacks(){
    n=5;
    Stack= new T[n];
    }
    bool isFull(){
    return t=n-1;
    }
    bool isEmpty(){
    return t==-1;
    }

    void push(T x){
    if(isFull()){
        cout<<"Overflow\n";
    }
    else{
        Stack[++t]=x;
    }
    }
    void pop(){
    if(isEmpty()){
        cout<<"Underflow\n";
    }
    else{
        t--;
    }
    }
    void printStack(){
    for(int i=t;i>0;i--) cout<<Stack[i]<<endl;
    }
    int top(){
    return Stack[t];
    }
    int Size(){
    return t+1;
    }
};

int main()
{
    Stacks<string> *s=new Stacks<string>();
    s->push("Deba");
    s->push("shis");

    s->printStack();
  return 0;
}
