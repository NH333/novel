#ifndef PQ_COMPL_H
#define PQ_COMPL_H

#include "pq.h"
#include <vector>
using std::vector;
template<typename T> class PQ_ComplHeap :public PQ<T> {
protected:
    void heapify(int n);
    int up(int i);
    int down(int i);
    vector<T> data;
public:
    PQ_ComplHeap() {};
    PQ_ComplHeap(vector<T>& A, int n) {
        for (int i = 0; i < A.size(); ++i) {
            data.push_back(A[i]);
        }
        heapify(n);
    }
    void insert(T);
    T getMax();
    T delMax();
};

//#include "pq_headfile.h"

#endif // !PQ_COMPL_H
