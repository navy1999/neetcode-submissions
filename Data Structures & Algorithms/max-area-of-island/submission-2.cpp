class Solution {
public:

    int dfs_area(int r, int c, vector<vector<int>> &grid){
        if(r <0 || c<0 || r>=grid.size() ||c>=grid[0].size() || grid[r][c] ==0){
            return 0;
        }
        grid[r][c]=0;
       return 1 + dfs_area(r+1,c,grid) 
        + dfs_area(r-1,c,grid)
        + dfs_area(r,c+1,grid)
        + dfs_area(r,c-1,grid);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {

        int m = grid.size();
        int n=grid[0].size();
        int max_area =0;
        int island_area=0;
        for(int i =0;i< m ;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1){
                    max_area=max(max_area,dfs_area(i,j,grid));
                }
            }
        }
      
      return max_area;
    }
};
