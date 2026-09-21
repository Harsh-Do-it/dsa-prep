class Solution {
public:
    int findMaxAverage(vector<int>& arr, int k) {

        int i = 0;
        int sum = 0;

        
        for(int right = 0; right < k; right++) {
            sum += arr[right];
        }

        int maxSum = sum;
        int startIndex = 0;

        // Slide the window
        for(int right = k; right < arr.size(); right++) {

            sum += arr[right];
            sum -= arr[i];
            i++;

            if(sum > maxSum) {
                maxSum = sum;
                startIndex = i;
            }
        }

        return startIndex;
    }
};