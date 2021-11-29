#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    
    // declare out variables
    int max_sum, cur_sum;
    max_sum = cur_sum = 0;

    //main code
    for (int i = 0; i < nums.size(); i++)
    {

        //condition when we found a zero
        if(nums[i] == 0) {
            if ( max_sum < cur_sum) {
                max_sum = cur_sum;
            }
            cur_sum = 0;
        
        //condition when we incremented
        } else {
            cur_sum += nums[i];
            // cur_sum++;
        }
    }

    // Ending condition
    if( max_sum < cur_sum) {
        max_sum = cur_sum;
    }
    return max_sum;
}

int main () {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        nums.push_back(temp);
    }

    cout << findMaxConsecutiveOnes(nums);
    
}