
#include<iostream>

class Stack {
public:
    int *arr;
    int top;
    int size;

    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if (top < size - 1) {
            top++;
            arr[top] = element;
        } else {
            std::cout << "Stack overflow" << std::endl;
        }
    }

    int pop() {
        if (top >= 0) {
            return arr[top--];
        } else {
            std::cout << "Stack is empty" << std::endl;
            return -1;
        }
    }

    bool isEmpty() {
        return (top == -1);
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            std::cout << "Stack is empty" << std::endl;
            return -1;
        }
    }
};

int main() {
    Stack st(5);
    st.push(5);
    st.push(22);
    st.push(43);
    
    std::cout << st.peek() << std::endl;

    st.pop();
    st.pop();
    st.pop();
    st.pop(); // Attempting to pop from an empty stack

    std::cout << st.peek() << std::endl; // Attempting to peek an empty stack

    return 0;
}