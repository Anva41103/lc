class Solution {
public:
void dfsr(int sr, int sc,vector<vector<int>>& image,vector<vector<int>>& ans, int nc, int ic, int n, int m, int dc[], int dr[])
{
    ans[sr][sc]=nc;
    for(int i=0;i<4;i++)
    {
            int r= sr+dr[i];
            int c= sc+dc[i];
            if(r>=0&&r<n&&c>=0&&c<m&&image[r][c]==ic&&ans[r][c]!=nc)
            {
                dfsr(r,c,image, ans, nc,ic, n,m,dc,dr);
            }
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
         int n= image.size();
        int m= image[0].size();
        vector <vector <int>> ans=image;
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        dfsr(sr,sc,image, ans, newcolor,image[sr][sc],n,m,dc,dr);
        return ans;
    }
};