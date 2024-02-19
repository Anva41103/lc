class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int x)
    {
        int M= matrix.size();
        int b=0,e=M-1,m=0;
        while(b<=e)
        {
            m=(b+e)/2;
                for(int j=0;j<matrix[m].size();j++)
                {
                    if(matrix[m][j]==x) return true;
                }
            if(matrix[m][0]>x) e=m-1;
            else b=m+1;
        }
	    return 0; 
    }
};