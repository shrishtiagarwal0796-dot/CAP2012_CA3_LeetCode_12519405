
class MyCircularQueue {
public:
    vector<int> q;
    int front, rear, size;

    MyCircularQueue(int k) {
        q.resize(k);
        front = 0;
        rear = -1;
        size = 0;
    }

    bool enQueue(int value) {
        if(size == q.size())
        {
            return false;
        }
        rear = (rear + 1) % q.size();
        q[rear] = value;
        size++;
        return true;
    }

    bool deQueue() {
        if(size == 0)
        {
            return false;
        }
        front = (front + 1) % q.size();
        size--;
        return true;
    }

    int Front() {
        if(size == 0)
        {
            return -1;
        }
        return q[front];
    }

    int Rear() {
        if(size == 0)
        {
            return -1;
        }
        return q[rear];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == q.size();
    }
};
