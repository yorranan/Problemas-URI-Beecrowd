#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <climits>

using namespace std;

typedef pair<int, int> par;

map<int, map<int, int>> graph;

void dijkstra(vector<int> &distances, int begin) {
    priority_queue<par, vector<par>, greater<par>> Q;
    Q.push({0, begin});
    distances[begin] = 0;

    while (!Q.empty()) 
    {
        int current_distance = Q.top().first;
        int current_vertex = Q.top().second;
        Q.pop();

        if (current_distance <= distances[current_vertex])
        {
            for (const auto &neighbor : graph[current_vertex]) 
            {
                int neighbor_vertex = neighbor.first;
                int weight = neighbor.second;
                int distance = current_distance + weight;

                if (distance < distances[neighbor_vertex])
                {
                    distances[neighbor_vertex] = distance;
                    Q.push({distance, neighbor_vertex});
                }
            }
        }
    }
}

int main() {
    int N, M, U, V, W;

    while (scanf("%d %d", &N, &M) == 2 && (N != 0 || M != 0))
    {
        graph.clear();

        for (int i = 0; i < M; ++i)
        {
            scanf("%d %d %d", &U, &V, &W);
            graph[U][V] = W;
        }

        int Q;
        scanf("%d", &Q);

        for (int i = 0; i < Q; ++i)
        {
            char response;
            scanf(" %c", &response);

            if (response == 'R') 
            {
                scanf("%d %d", &U, &V);
                if (graph[U].count(V))
                {
                    graph[U].erase(V);
                }
            } 
            else if (response == 'I')
            {
                scanf("%d %d %d", &U, &V, &W);
                graph[U][V] = W;
            }
            else if (response == 'P')
            {
                scanf("%d", &V);
                vector<int> distances(N + 1, INT_MAX);
                dijkstra(distances, 1);
                int distance = distances[V];
                if (distance == INT_MAX)
                {
                    distance = -1;
                }
                printf("%d\n", distance);
            }
        }
        printf("\n");
    }

    return 0;
}
