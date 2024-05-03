class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
       int n = grid.size();
        int m = grid[0].size();
        
        if (grid[0][0] == 1 || grid[n - 1][m - 1] == 1) // Check if source or destination cell is blocked
            return -1;
        
        vector<pair<int, int>> directions = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
        
        queue<pair<int, int>> q;
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        
        q.push({0, 0});
        dist[0][0] = 1;
        
        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            
            if (x == n - 1 && y == m - 1)
                return dist[x][y];
            
            for (auto& dir : directions) {
                int nx = x + dir.first;
                int ny = y + dir.second;
                
                if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == 0 && dist[nx][ny] == INT_MAX) {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
        
        return -1;
    }
};