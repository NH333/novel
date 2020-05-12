#include "../head/queue.h"

int main() {
	Queue<int> q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.dequeue();
	system("pause");
}