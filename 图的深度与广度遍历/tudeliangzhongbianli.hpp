#include <stdio.h>
#include <malloc.h>
#define MAXV 100
#define IFS 100//算作无穷
typedef  char InfoType;
typedef struct ANode
{
	int adjvex;//该边的邻接点编号
	struct ANode* nextarc;
	int weight;//权重
}ArcNode;
typedef struct
{
	ArcNode* firstarc;
	InfoType info;//顶点的其他信息
}VNode;
typedef struct
{
	int n, e;//顶点数和边数
	VNode adjlist[MAXV];//头节点数组
}AdjGraph;
void CreateAdj(AdjGraph* &G,int A[MAXV][MAXV],int n,int e);//创建图的邻接表
void DFS(AdjGraph* G, int v);//图的深度遍历
void BFS(AdjGraph* G, int v);//图的广度遍历