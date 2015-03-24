#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <list>
#include <queue>
using namespace std;


class Graph{
	int n; //no. ofvertices
	list<int> *ar; //list of vertices
public:
	Graph(int n){
		this->n = n;
		ar = new list<int>[n];
	}
	void addedge(int n, int w){
		ar[n].push_back(w);
	}

	void bfs(int s){
		
		bool *visited = new bool[n];
		for(int i =0;i<n;i++){
			visited[i]=false;
		}
		queue<int> q;

		visited[s]=true;
		q.push(s);

		while(!q.empty()){
			s = q.front();
			cout<<s<<" ";
			q.pop();
			list<int>::iterator i;
			for(i=ar[s].begin();i!=ar[s].end();i++){
				if(!visited[*i]){
					visited[*i]=true;
					q.push(*i);
				}
			}
		}
		cout<<endl;
	}
};



int main()
{
	Graph g(10);
	g.addedge(0,1);
	g.addedge(0,2);
	g.addedge(1,0);
	g.addedge(1,2);
	g.addedge(1,3);
	g.addedge(1,4);
	g.addedge(2,0);
	g.addedge(2,1);
	g.addedge(2,4);
	g.addedge(2,5);
	g.addedge(3,1);
	g.addedge(3,4);
	g.addedge(3,7);
	g.addedge(3,6);
	g.addedge(4,1);
	g.addedge(4,2);
	g.addedge(4,3);
	g.addedge(4,5);
	g.addedge(4,7);
	g.addedge(4,8);
	g.addedge(5,2);
	g.addedge(5,4);
	g.addedge(5,8);
	g.addedge(5,9);
	g.addedge(6,3);
	g.addedge(6,7);
	g.addedge(7,6);
	g.addedge(7,3);
	g.addedge(7,4);
	g.addedge(7,8);
	g.addedge(8,4);
	g.addedge(8,5);
	g.addedge(8,7);
	g.addedge(8,9);
	g.addedge(9,5);
	g.addedge(9,8);

	g.bfs(1);
}