class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        const int n = nums.size(); //size of array
        vector<int> answer(n,1); // Initialize result array with 1

        // Left pass: compute prefix products
        int prefix =1;
        for(int i=0;i<n;i++){
            answer[i] = prefix;
            prefix *= nums[i]; //update prefix product
        }

        //Rigth pass: compute suffix product and Xly with prefix
        int suffix=1;
        for(int i=n-1;i>=0;i--){
            answer[i]*=suffix;
            suffix *= nums[i]; // update suffix product
        }
        return answer;
    }
};