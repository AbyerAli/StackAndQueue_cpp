#include <iostream>

using namespace std;

class stack{
    int top;
    int arr[5];
    bool isEmpty(){
        return top == -1;
    }
    bool isFull(){
        return top == 4;
    }

public:
    stack(){
        top = -1;
    }
    void push(int num){
        if(isFull()){
            cout << "Stack overflow" << endl;
        } else {
            top += 1;
            arr[top] = num;
            cout << "Top Val: " << this->top << ", arr[top]: " << arr[top] << endl;
        }
    }
    void pop(){
        if(isEmpty()){
            cout << "Nothing to Pop!" << endl;
        } else {
            top -= 1;
        }
    }
    void display(){
        if(!isEmpty())
        {
            for (int i = 0; i <= top; i++)
            {
                cout << arr[i] << endl;
            }
        }
    }
};