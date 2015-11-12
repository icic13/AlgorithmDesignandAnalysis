#include <queue>
#include <iostream>
#include<cstdio>
#include <list>
#include <vector>
using namespace std;
list<int> *adj;
void Graph(int node)
{
    adj = new list<int>[node];

}

void addEdge(int v,int w)
{

    adj[v].push_back(w);


}

void DFSUtil(int v,bool visited[])
{
    //Marks the current node as visited and print it
    visited[v] = true;
    cout<<v <<" ";

    //Rucursion for all the vertices adjacent to the vertex

    list<int>::iterator i;
    for(i =adj[v].begin(); i!=adj[v].end(); ++i) {
        if(!visited[*i])
            DFSUtil(*i,visited);

    }


}
//DFS traversal of the vertices reacheabel from v
void DFS(int source,int node)
{

    bool *visited = new bool[node];
    for(int i = 0; i<node; i++) {


        visited[i] = false;
    }
    DFSUtil(source,visited);
}

int main()
{
    int node,edge;
    scanf("%d%d",&node,&edge);
    int u,v;
    Graph(edge);

    for(int i =0; i<edge; i++) {
        scanf("%d%d",&u,&v);
        addEdge(u,v);


    }
    printf("Enter source: \n");
    int source;
    scanf("%d",&source);
    DFS(source,node);




}

/*
9 17
1 2
1 6
1 3
2 3
2 7
3 6
4 3
5 8
5 4
5 3
6 4
7 5
7 3
8 9
8 4
9 5
9 7
*/
//Result of traversal starting from 2
/*Enter source:
2
2 3 6 4 7 5 8 9
*/

