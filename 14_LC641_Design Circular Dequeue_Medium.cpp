
class MyCircularDeque {
public:
    vector<int> q;
    int front, rear, size;
    MyCircularDeque(int k) {
        q.resize(k);
        front = 0;
        rear = -1;
        size = 0;
    }
    bool insertFront(int value) {
        if(size == q.size())
            return false;
        if(size == 0)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            front = (front - 1 + q.size()) % q.size();
        }
        q[front] = value;
        size++;
        return true;
    }
    bool insertLast(int value) {
        if(size == q.size())
            return false;
        rear = (rear + 1) % q.size();
        q[rear] = value;
        size++;
        return true;
    }
    bool deleteFront() {
        if(size == 0)
            return false;
        front = (front + 1) % q.size();
        size--;
        return true;
    }
    bool deleteLast() {
        if(size == 0)
            return false;
        rear = (rear - 1 + q.size()) % q.size();
        size--;
        return true;
    }
    int getFront() {
        if(size == 0)
            return -1;
        return q[front];
    }
    int getRear() {
        if(size == 0)
            return -1;
        return q[rear];
    }
    bool isEmpty() {
        return size == 0;
    }
    bool isFull() {
        return size == q.size();
    }
};
