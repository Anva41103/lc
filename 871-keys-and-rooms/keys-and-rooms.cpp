class Solution {
public:
    void dfs(vector <int> &vis, int n, vector<vector<int>>& rooms )
    {
        vis[n]=1;
        for(auto it:rooms[n])
        {
            if(it==n) continue;
            if(vis[it]==0) dfs(vis,it,rooms);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int s=rooms.size();
        vector <int> vis(s,0);
        dfs(vis,0,rooms);
        for(int i=0;i<s;i++) if(!vis[i]) return false;
         return true;
    }
   
};