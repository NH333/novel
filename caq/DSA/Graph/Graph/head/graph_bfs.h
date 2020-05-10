#ifndef BFS_H
#define BFS_H

#include "GraphMatrix.h"
template<typename Tv,typename Te>
void Graph<Tv, Te>::bfs(int s) {
	reset(); int clock = 0; int v = s;
	do
		if (UNDISCOVERED == status(v))
		{
			BFS(v, clock);
		}
	while (s != (v = (++v%n)));
}

template<typename Tv, typename Te>
void Graph<Tv, Te>::BFS(int v, int& clock) {
	Queue<int> Q;
	status(v) = DISCOVERED; Q.enqueue(v);
	while (Q.size() != 0) {
		int v = Q.dequeue(); dTime(v) = ++clock;
		for (int u = firstNbr(v); -1 < u; u = nextNbr(v)) {
			if (status(u) == UNDISCOVERED) {
				status(u) = DISCOVERED;
				Q.enqueue(u);
				type(v, u) = TREE; parent(u) = v;
			}
			else
			{
				type(v, u) = CROSS;
			}
		}
		status(v) = VISITED;
	}
}

#endif // !BFS_H

