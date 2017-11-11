#include<bits/stdc++.h>
using namespace std;

queue<int>bf;
vector<int>adj[10];
int visit[10]={0};

int main()
{
    int n,u,v,s;
    cin >> n;
    for( int i = 1 ;i <= n;i++){
        scanf("%d%d",&u,&v);
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    s=1;
    bf.push(s);
    visit[1]=1;
    while(!bf.empty()){
        u = bf.front();
        cout << u;
        bf.pop();
        int si = adj[u].size();
        for (int i=0;i<=si-1;i++){
            int v=adj[u][i];
            if(visit[v]==0) {
                    visit[v]=1;bf.push(v);
            }
        }
    }

    return 0;
}

