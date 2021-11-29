#include<bits/stdc++.h>
using namespace std;

class Leetcode {
    public:

    // count the digits
    int countDigits(int num) {
        int ans = 0;

        // untill the digit become 0
        while(num) {
            num /= 10;
            ans++;
        }
        return ans;
    }

    int findNumbers(vector<int>& nums) {
    
        // declare variable 
        int count = 0;

        // iterating vector
        for (int i = 0; i < nums.size(); i++)
        {
            //taking no of digits
            int digits = countDigits(nums[i]);

            //checking whether digits are even
            if(digits %2 == 0) {
                count++;
            }
        }

        return count;        
    }

    int solve(vector<int> &nums) {
        return findNumbers(nums);
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