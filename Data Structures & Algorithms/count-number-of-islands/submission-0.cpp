class Solution {
public:
    void bfs(int m,int n, vector<vector<char>> &grid){
        queue<pair<int,int>> q;
        grid[m][n] ='0';
        q.push(make_pair(m,n));
        while(!q.empty()){
            pair<int,int> cur = q.front();
            q.pop();
            int r = cur.first;
            int c = cur.second;
            if(r+1 < grid.size() && grid[r+1][c] =='1')
            {
                q.push(make_pair(r+1,c));
                grid[r+1][c] ='0';
            }
            if(c+1 < grid[0].size() && grid[r][c+1] =='1')
            {
                q.push(make_pair(r,c+1));
                grid[r][c+1] ='0';
            }
            if(r-1 >= 0 && grid[r-1][c] =='1')
            {
                q.push(make_pair(r-1,c));
                grid[r-1][c] ='0';
            }
            if(c-1 >= 0 && grid[r][c-1] =='1')
            {
                q.push(make_pair(r,c-1));
                grid[r][c-1] ='0';
            }
        }

    }
    int numIslands(vector<vector<char>> &grid) {
        int n=grid.size();
        if (n == 0) return 0;
        int m=grid[0].size();
        int islands=0;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j] == '1'){
                    bfs(i,j,grid);
                    islands++;
                }
            }
        }
        return islands;
    }
};