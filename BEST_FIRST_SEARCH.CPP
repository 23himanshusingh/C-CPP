#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;

vector<vector<pi> > graph;

void addedge(int x, int y, int cost)
{
	graph[x].push_back(make_pair(cost, y));
	graph[y].push_back(make_pair(cost, x));
}

void best_first_search(int actual_Src, int target, int n)
{
	vector<bool> visited(n, false);
	priority_queue<pi, vector<pi>, greater<pi> > pq;
	pq.push(make_pair(0, actual_Src));
	int s = actual_Src;
	visited[s] = true;
	while (!pq.empty()) {
		int x = pq.top().second;
		cout <<"--> " <<x ;
		
		pq.pop();
		if (x == target)
			break;

		for (int i = 0; i < graph[x].size(); i++) {
			if (!visited[graph[x][i].second]) {
				visited[graph[x][i].second] = true;
				pq.push(make_pair(graph[x][i].first,graph[x][i].second));
			}
		}
	}
}

int main()
{
	int v = 14;
	graph.resize(v);

	addedge(1, 2, 25);
	addedge(1, 4, 20);
	addedge(2, 3, 15);
	addedge(3, 6, 0);
	addedge(4, 5, 12);
	addedge(5, 6, 0);
	

	int source = 1;
	int target = 6;

	best_first_search(source, target, v);

	return 0;
}