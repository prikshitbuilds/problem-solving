class Solution {
public:
    long long power(int base, int exp) {
        long long result = 1;
        while (exp > 0) {
            if (exp % 2 == 1) {
                result *= base;
            }
            base *= base;
            exp /= 2;
            if (result > 1e18) break; // prevent overflow
        }
        return result;
    }

    int nthRoot(int n, int m) {
        int low = 1, high = m;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long midPower = power(mid, n);

            if (midPower == m) return mid;
            else if (midPower < m) low = mid + 1;
            else high = mid - 1;
        }

        // If no exact root found, return -1 or floor of root
        return -1;
    }
};
