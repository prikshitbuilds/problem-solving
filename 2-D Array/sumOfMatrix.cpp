class Solution {
  public:
    int sumOfMatrix(int N, int M, vector<vector<int>> Grid) {
        // code here
        int sum =0;
        for(int i=0;i<Grid.size();i++){
            for(int j=0;j<Grid[0].size();j++){
                sum = sum + Grid[i][j];
            }
        }
        return sum;
    }
};
