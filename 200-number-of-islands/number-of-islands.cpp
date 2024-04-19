class Solution {
public:
    void dfs(vector <vector<char>> & grid, vector <vector <int>>& v, int m, int n, int r, int c)
    {
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        v[r][c]=1;
        for(int x=0;x<4;x++)
        {
            int nr= r+dr[x];
            int nc= c+dc[x];
            if(nr>=0&&nr<m &&nc>=0&&nc<n)
            {
                if(v[nr][nc]==0 && grid[nr][nc]=='1')
                {
                    v[nr][nc]=1;
                    dfs(grid,v,m,n,nr,nc);
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int m=grid.size();
        int n= grid[0].size();
        vector <vector <int>> v(m, vector<int>(n,0));
       
        int c=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0; j<n;j++)
            {
                if(v[i][j]==0&&grid[i][j]=='1') {dfs(grid,v,m,n,i,j); c++;}
            }
        }
        return c;
    }
};