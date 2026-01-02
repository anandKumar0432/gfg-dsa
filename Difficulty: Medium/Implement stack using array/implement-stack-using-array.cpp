class myStack {
public:
    int size;
    int arr[1000];
    int top;

    myStack(int n) {
        size = n;
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size - 1;
    }

    void push(int x) {
        if (isFull()) return;
        top++;
        arr[top] = x;
    }

    void pop() {
        if (isEmpty()) return;
        top--;
    }

    int peek() {
        if (isEmpty()) return -1;
        return arr[top];
    }
};
