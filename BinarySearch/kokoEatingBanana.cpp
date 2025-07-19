class Solution {
public:

    int findMax(vector<int>& piles){
        int maxi = 0;
        for (int i = 0; i < piles.size(); i++) {
            if (piles[i] > maxi) {
                maxi = piles[i];
            }
        }
        return maxi;
    }

    long long calculateTotalHours(vector<int>& piles, int mid) {
        long long totalHours = 0;
        for (int i = 0; i < piles.size(); i++) {
            totalHours += ceil((double)piles[i] / mid);
        }
        return totalHours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findMax(piles);
        int ans = INT_MAX;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long totalH = calculateTotalHours(piles, mid);

            if (totalH <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
