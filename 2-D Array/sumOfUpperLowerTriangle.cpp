

class Solution {
  public:
  

  
    // Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n) {
        // code here
       vector<int>ans;
       
       
       int upperSum =0;
       
       for(int i=0;i<n;i++){
           for(int j=n-1;j>=i;j--){
               upperSum+=matrix[i][j];
           }
       }
        
        int lowerSum =0;
        for (int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                lowerSum +=matrix[i][j];
            }
        }
        
        
        return {upperSum,lowerSum};
    }
};
