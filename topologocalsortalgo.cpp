#include<bits/stdc++.h>
using namespace std;

stack<int > take;
vector <int> adj[10];
int visit[10]={0};


void topo (int v){
    visit[v]=1;
    vector <int>::iterator it;
    for(it=adj[v].begin();it!=adj[v].end();++it)
        if(!visit[*it])
            topo(*it);
   take.push(v);

}
int main()
{
    int n,n1,m;
    cin >> n;
    for(int i=0;i<n;i++){
       cin >> m >> n1;
       adj[m].push_back(n1);
    }
      for (int j=0;j<n;j++){
        if(!visit[j]){
            topo(j);
        }
      }
cout<< "topological order : \n";
while(!take.empty()){
     int g=take.top();
        take.pop();
    cout << g <<" ";

}

    return 0;
}
