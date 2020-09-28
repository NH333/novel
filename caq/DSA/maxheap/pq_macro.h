#ifndef PQ_MACRO_H
#define PQ_MACRO_H

#define InHeap(n,i) ((-1<i)&&(i<n))
#define Parent(i) ((i-1)>>1)
#define LChild(i) (1+((i)<<1))
#define RChild(i) ((i+1)<<1)

#endif // !PQ_MACRO_H

