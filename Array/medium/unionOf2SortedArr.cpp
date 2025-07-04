class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        int n1 = a.size();
        int n2 = b.size();
        // return vector with correct order of elements
        vector<int>unionArr;
        
        
        int i=0;
        int j=0;
        while(i<n1 && j <n2){
            if(a[i]<=b[j]){
                if(unionArr.size()==0 || unionArr.back()!=a[i]){
                    unionArr.push_back(a[i]);
                }
                i++;
            }
            else{
                if(unionArr.size()==0 || unionArr.back()!=b[j])
                {
                unionArr.push_back(b[j]);
                }
                j++;
            }
        }
        
        
        
        while(i<n1){
            if(unionArr.size()==0 || unionArr.back()!=a[i]){
                    unionArr.push_back(a[i]);
                }
                i++;
        }
        
        while(j<n2){
            if(unionArr.size()==0 || unionArr.back()!=b[j])
                {
                unionArr.push_back(b[j]);
                }
                j++;
        }
        return unionArr;
    }
};
