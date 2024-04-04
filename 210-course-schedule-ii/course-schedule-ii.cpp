class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        vector <int> adj[n];
	    for(auto it: prerequisites)
	    {
	        adj[it[0]].push_back(it[1]);
	    }
	    int inc[n];
        for(int i=0;i<n;i++) inc[i]=0;
	    for(int i=0;i<n;i++)
	    {
	        for(auto it: adj[i])
	        {
	            inc[it]++;
	        }
	    }
	    queue <int> q;
	    for(int i=0;i<n;i++)
	    {
	        if(inc[i]==0) q.push(i);
	    }
	    int h=0;
	    vector <int> topo;
	    while(!q.empty())
	    {
	        int j= q.front();
	        h++;
	        topo.push_back(j);
	        q.pop();
	        for(auto it: adj[j])
	        {
	            inc[it]--;
	            if(inc[it]==0) q.push(it);
	        }
	    }
        if(h!=n) return {};
        reverse(topo.begin(),topo.end());
	    return topo;
    }
};