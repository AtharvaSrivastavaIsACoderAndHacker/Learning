#include<iostream>
#include<queue>

using namespace std;

template<typename T>
void printQueue(queue<T> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

template<typename T>
void printPriorityQueue(priority_queue<T> q) {
    while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}

template<typename T>
void printMinHeap(priority_queue<T, vector<T>, greater<T>> q) {
    while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}


int main(int argc, char const *argv[]){
    
    // STACK follows FILO or LIFO !
    // Imagine a queue of people, FIFO and LILO ! You come first you exit first !
    // Random Access - Not supported by QUEUES, due to non-contiguous memory.
    // A Queue is an adapter, not a sequence container — it lacks initializer list support.
    
    queue<int> q;
    q.push(1); // emplace is also available
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    printQueue(q);

    cout<<q.front()<<" and "<<q.back()<<endl;

    q.pop(); // pop() is case of a queue, removes first element because FIFO !
    printQueue(q);

    q.front()+=10; // adds 10 to the front element !
    printQueue(q);


    // =================================================================================================================================


    // Priority Queue --> largest value (int, char, float etc...) stays on top, in order !
    // Priority Queue Is A Tree Data Structure !
    // push() and pop() are O(log n) ----- top() is O(1)  !

    priority_queue<int> pq; // MaxHeap
    pq.push(1); // emplace is also available
    pq.push(2);
    pq.push(8);
    pq.push(5);
    pq.push(43); // emplace() is also there
    printPriorityQueue(pq);
    
    pq.pop(); // priorityQueue's pop(), removes the top() value in order - the highest value !
    printPriorityQueue(pq);


    // ===============================================================================================================================


    // Minimum Priority Queue - MinHeap --> priorities minimum value !
    priority_queue<int, vector<int>, greater<int>> pqqq;
    pqqq.push(1);
    pqqq.push(2);
    pqqq.push(8);
    pqqq.push(5);
    pqqq.push(43);
    printMinHeap(pqqq);

    return 0;
}