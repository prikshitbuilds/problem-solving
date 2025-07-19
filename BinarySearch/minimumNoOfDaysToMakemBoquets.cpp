class Solution {
public:

bool possible(vector<int>& bloomDay,int day, int m, int k){
    int n = bloomDay.size();
    int count =0;
    int noOfBoquets=0;

    for(int i=0;i<n;i++){
        if(bloomDay[i]<=day){
            count++;
        }
        else{
            noOfBoquets+= (count/k);
            count=0;
        }
    }
    noOfBoquets+=(count/k);
    if(noOfBoquets >= m) {return true;}

    else{
        return false;
    }
}

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long total = 1ll * m * 1ll * k;
        if(total>n) return -1;

         int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans =-1;

        while(low<=high){
            int mid = ( low +high)/2;

            if(possible(bloomDay,mid,m,k)){
                ans = mid;
                high =mid-1;
            }
            else{
                low = mid +1;
            }
        }
        return ans;
    }
};
