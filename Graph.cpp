#include <iostream>
#include <vector>

// 图的邻接表表示
/**
 * 使用 using 关键字定义了一个类型别名 Graph，
 * 它实际上是一个二维 std::vector。
 * 外层向量的每个元素对应图中的一个顶点，
 * 内层向量存储与该顶点相邻的顶点编号
 */
using Graph = std::vector<std::vector<int>>;

// 添加边
void addEdge(Graph &graph, int u, int v) // u、v表示两个顶点
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}

// 打印图（邻接表）
void printGraph(const Graph &graph)
{
    for (int i = 0; i < graph.size(); i++)
    {
        std::cout << "顶点" << i << "：";
        for (int j = 0; j < graph[i].size(); j++)
        {
            std::cout << graph[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int V = 5;
    Graph graph(V); // 初始化5个顶点

    // 添加边
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    // 打印图
    printGraph(graph);

    return 0;
}
