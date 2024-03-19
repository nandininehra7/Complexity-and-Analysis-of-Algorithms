#include<bits/stdc++.h>
using namespace std;
#define INF INT_MAX

vector<vector<int>> Adj_matrix(int n, int m)
{
    // nxm matrix:
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter element " << "(" << i + 1 << "," << j + 1 << ") : ";
            cin >> arr[i][j];
        }
    }
    return arr;
}

void multistage_graph(vector<vector<int>> graph, int vertices) {
    int fcost[vertices];
    int distance[vertices];
    int path[vertices];

    for (int i = 0; i < vertices; i++) {
        fcost[i] = 0;
        distance[i] = INF;
    }
    fcost[vertices - 1] = 0;

    // Calculating fcost[] array
    for (int i = vertices - 2; i >= 0; i--) {
        int min_cost = INF;
        int min_index = -1;

        for (int j = i + 1; j < vertices; j++) {
            if (graph[i][j] != INF && graph[i][j] + fcost[j] < min_cost) {
                min_cost = graph[i][j] + fcost[j];
                min_index = j;
            }
        }
        fcost[i] = min_cost;
        path[i] = min_index;
    }
    cout << "Minimum Cost: " << fcost[0] << endl;
    for(int k=0 ; k<(sizeof(path)/4) ; k++)
    {
        cout<<path[k]<<" ";
    }
    cout << endl;
}

int main()
{
    int v;
    cout << "Enter the number of vertices:";
    cin >> v;
    vector<vector<int>> arr1 = Adj_matrix(v, v);
    multistage_graph(arr1,3);
    
    return 0;
}