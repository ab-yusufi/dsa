//Array Implementation
//Lecture 23.1
//All Happens in Constant Time: Push, Pop, Top, Empty

#include <iostream>
using namespace std;

#define n 100

class Stack {

    int* arr;
    int top;

    public:
        Stack(){
            arr = new int[n];
            top = -1;
        }

        void push(int x){
            if(top == n-1){
                cout << "Stack Overflow" << endl;
                return;
            }
            top++;
            arr[top] = x;
        }

        void pop(){
            if(top == -1){
                cout << "No Element To Pop" << endl;
                return;
            }
            top--;
        }

        int Top(){
            if(top == -1){
                cout << "No Element in Stack" << endl;
                return -1;
            }

            return arr[top];
        }

        bool empty(){
            return top==-1;
        }


};

int main(){
    Stack s;
    int ch;
     int x;
    while(ch != 5){
 cout << "####### MAIN MENU #######" << endl;
    cout << "1. Push" << endl;
    cout << "2. Pop"  << endl;
    cout << "3. Top" << endl;
    cout << "4. Empty" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter Your Choice: "<< endl;

    cin >> ch;
    switch(ch){
        case 1:
            cout << "Enter Number to Push: "<< endl;
            cin >> x;
            s.push(x);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            cout << "Top: " << s.Top() << endl;
            break;
        case 4:
            if(s.empty()){
                cout << "Stack is Empty" << endl;
            } else {
                cout << "Stack is Not Empty" <<endl;
            }
        
        }
    }
    return 0;
}