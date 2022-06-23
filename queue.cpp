#include <iostream>

using namespace std;

class queue{
    int arr[5];
    int size = 5;

    int top = -1;
    int bottom = -1;

    bool isFull(){
        return top == size-1;
    }

    bool isEmpty(){
        return top == -1;
    }
public:
    void enqueue(int num)
    {
        if(isFull()){
            cout << "Queue is Full!" << endl;
        } else {
            if(bottom == -1){
                bottom = 0;
            }
            top++;
            arr[top] = num;
        }
    }
    void dequeue()
    {
        if(isEmpty()){
            cout << "Queue is Empty!" << endl;
        } else {
            if(top == bottom){
                top = -1;
                bottom = -1;
            } else{
                bottom += 1;
            }
        }
    }
    void display()
    {
        if(bottom != -1){
            for (int i = bottom; i <= top; i++)
            {
                cout << arr[i] << endl;
            }
        }
        
    }
};

int main()
{
  int *x = new int[3];
  x[0] = 11;
  x[1] = 22;
  x[2] = 33;

  for(int i=0; i<3; i += 1){
    cout << x[i] << endl;
  } 

}