class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m= grid[0].size();
        int h[n][m];
        int cf=0, cr=0;
        queue <pair <pair<int, int>,int> >q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)cf++;
                if(grid[i][j]==2)
                {
                    h[i][j]= 2;
                    q.push({{i,j},0});
                }
                else h[i][j]=0;
            }
        }
        int tm=0;
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            tm= max(t,tm);
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nr= r+dr[i];
                int nc=c+dc[i];
                if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]==1&&h[nr][nc]!=2)
                {
                    q.push({{nr,nc},t+1});
                    h[nr][nc]=2;
                }
            }
        }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(grid[i][j]==1&&h[i][j]!=2) return -1;
                }
            }
            return tm;
    }
};