#include "tudeliangzhongbianli.hpp"
void CreateAdj(AdjGraph*& G, int A[MAXV][MAXV], int n, int e)
{
	int i = 0, j = 0;
	ArcNode* p;
	G = (AdjGraph *)malloc(sizeof(AdjGraph));
	if (G)
	{
	for (i = 0; i < n; i++)
		G->adjlist[i].firstarc = NULL;
	for (i = 0; i < n; i++)
	{
		for (j = n - 1; j >= 0; j--)
		{
			if (A[i][j] != 0&&A[i][j]!=IFS)
			{
				p = (ArcNode* )malloc(sizeof(ArcNode));
				p->adjvex = j;
				p->nextarc = G->adjlist[i].firstarc;
				G->adjlist[i].firstarc = p;
				p->weight = A[i][j];
			}
		}
	}
	G->e = e;
	G->n = n;
	}
}
int visited[] = {0};//全局数组
void DFS(AdjGraph* G,int v)
{
	ArcNode* p;
	visited[v] = 1;
	printf("%d", v);
	p = G->adjlist[v].firstarc;
	while (p != NULL)
	{
		if (visited[p->adjvex] != 0)
		{
			DFS(G, p->adjvex);
		}
		p = p->nextarc;
	}
}
void BFS(AdjGraph* G, int v)
{

}