#include <stdio.h>
#include <malloc.h>
#define MAXV 100
#define IFS 100//��������
typedef  char InfoType;
typedef struct ANode
{
	int adjvex;//�ñߵ��ڽӵ���
	struct ANode* nextarc;
	int weight;//Ȩ��
}ArcNode;
typedef struct
{
	ArcNode* firstarc;
	InfoType info;//�����������Ϣ
}VNode;
typedef struct
{
	int n, e;//�������ͱ���
	VNode adjlist[MAXV];//ͷ�ڵ�����
}AdjGraph;
void CreateAdj(AdjGraph* &G,int A[MAXV][MAXV],int n,int e);//����ͼ���ڽӱ�
void DFS(AdjGraph* G, int v);//ͼ����ȱ���
void BFS(AdjGraph* G, int v);//ͼ�Ĺ�ȱ���