class Solution {
public:
bool toffee(int start,int V, vector<vector<int>>& adj, int vis[])
{
    queue <int> q;
    q.push(start);
    vis[start]=0;
    while(!q.empty())
    {
        int n= q.front();
        q.pop();
        for(auto it: adj[n])
        {
            if(vis[it]==-1)
            {
                vis[it]=!vis[n];
                q.push(it);
            }
            else if(vis[it]==vis[n]) return false;
        }
    }
    return true;
}
    bool isBipartite(vector<vector<int>>& adj) {
        int V=adj.size();
	int vis[V];
	     for(int i = 0;i<V;i++) vis[i] = -1; 
	    for(int i=0;i<V;i++)
	    {
	        if(vis[i]==-1)
	        {
	            if(toffee(i,V,adj,vis)==false) return false;
	        }
	    }
	    return true;
    }
};