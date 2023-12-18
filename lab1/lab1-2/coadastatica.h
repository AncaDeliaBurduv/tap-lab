#ifndef COADASTATICA_H
#define COADASTATICA_H

class QueueAbstract{
public:
    virtual void enqueue(int)=0;
    virtual int dequeue()=0;
    virtual bool isempty()=0;
    virtual bool isfull()=0;
    virtual void print()=0;
    class Queue_Overflow{
    public:
        void printErr();
    };
    class Queue_Underflow{
    public:
        void printErr();
    };;
};

class Array_Queue:public QueueAbstract{
private:
    int* vector;
    int front;
    int end;
    int max;
public:
    Array_Queue(int max=100);
    Array_Queue(const Array_Queue&);
    ~Array_Queue();
    virtual void enqueue(int);
    virtual int dequeue();
    virtual bool isempty();
    virtual bool isfull();
    virtual void print();
};


#endif // COADASTATICA_H
