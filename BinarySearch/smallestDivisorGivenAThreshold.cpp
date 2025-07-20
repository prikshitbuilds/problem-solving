class Solution {
public:

int maxi(vector<int>& nums){
    int maxi = nums[0];
    for(int i=0;i<nums.size();i++){
        if(nums[i]>maxi) {
            maxi = nums[i];
        }
    }
    return maxi;
}


int noOfD(vector<int>& nums, int mid){
    int n = nums.size();
    int sum =0;
    for(int i=0;i<n;i++){
        sum += ceil((double) nums[i]/ (double) mid);
    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low =1;
        int high = maxi(nums);
        int ans =n;
        while(low<=high){
            int mid = ( low + high)/2;
            if(noOfD(nums,mid)<= threshold){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid +1;
            }
        }
        return ans;
    }
};
