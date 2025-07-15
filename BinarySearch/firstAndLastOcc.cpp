class Solution {
public:

   int firstOcc(vector<int>& nums, int target){
    int low =0;
    int n = nums.size();
    int high = n-1;
    int ans =-1;
    while(low<=high){
        int mid =(low + high)/2;
        if(nums[mid]== target){
            ans = mid;
            high =mid-1;
        }
        else if(nums[mid]>target){
            high = mid-1;
        }
        else{
            low = mid +1;
        }
    }
    return ans;
   }




int secOcc(vector<int>& nums, int target){
    int low =0;
    int n = nums.size();
    int high = n-1;
    int ans =-1;
    while(low<=high){
        int mid =(low + high)/2;
        if(nums[mid]== target){
            ans = mid;
            low=mid+1;
        }
        else if(nums[mid]>target){
            high = mid-1;
        }
        else{
            low = mid +1;
        }
    }
    return ans;
   }


    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOcc(nums,target);
        int sec = secOcc(nums,target);
        return {first,sec};
    }
};
