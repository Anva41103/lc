class Solution {
public:
    int numEnclaves(vector<vector<int>>& mat) {
        int n= mat.size();
        int m= mat[0].size();
        queue <pair <int,int>> q;
        int vis[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0||j==0||i==n-1||j==m-1)
                {
                    if(mat[i][j]==1)
                    {
                        q.push({i,j});
                        vis[i][j]=1;
                    } 
                }
                else vis[i][j]=0;
            }
        }
        int dr[]={0,1,0,-1};
        int dc[]={1,0,-1,0};
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0&&nr<n&&nc>=0&&nc<m&&vis[nr][nc]==0&&mat[nr][nc]==1)
                {
                    q.push({nr,nc});
                    vis[nr][nc]=1;
                }
            }
        }
        int l=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0&&mat[i][j]==1) l++;
            }
        }
        return l;
    }
};