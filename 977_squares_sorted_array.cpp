#include<bits/stdc++.h>
using namespace std;

class Leetcode {
    public:

    vector<int> sortedSquares(vector<int>& nums) {

        // // ----------------- 1st Approach -----------------
        // // Time Complexity - O(n+ nlogn)
        // // Space Complexity - O(1)
        
        // //declared the variables
        // int n = nums.size();

        // // iterated every element
        // for (int i = 0; i < n; i++)
        // {
        //     nums[i] = nums[i]*nums[i];
        // }

        // // called on inbuilt- sort function (nlogn)
        // sort(nums.begin(), nums.end());

        // return nums;



        // -------------------- 2nd Approach --------------
        // Time Complexity - O(n)
        // space compexity - O(n)

        //declare variable
        int n = nums.size();
        int start = 0, end = n-1, last_curr = n-1;
        vector<int> ans(n,0);

        //untill we reach last element
        while(start <= end) {
            // abs(nums[start]) < abs(nums[end])
            if(abs(nums[start]) < abs(nums[end])) {
                ans[last_curr] = nums[end]*nums[end];
                last_curr--;
                end--;
            } else {
                ans[last_curr] = nums[start]*nums[start];
                start++;
                last_curr--;
            }

        }

        return ans;
    }

    int solve(vector<int> &nums) {

        nums = sortedSquares(nums);

        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << " ";
        }

        cout <<endl;
        
        return sortedSquares(nums).size();
    }
};

int main () {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // input length
    int n;
    cin >> n;

    //vector
    vector<int> nums;

    // input content
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        nums.push_back(temp);
    }

    // Object creation and method calling
    Leetcode lt;
    cout << lt.solve(nums) <<endl;
}