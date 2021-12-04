#include<bits/stdc++.h>
using namespace std;

class Leetcode {
    public:

    int removeElement(vector<int>& nums, int val) {
        
        // declare variables
        int i = 0, n = nums.size();

        // untill end
        while (i < n)
        {
            if(nums[i] == val) {
                nums[i] = nums[n-1];
                n--;
            } else {
                i++;
            }
        }
        return n;
    }

    void print(vector<int> &arr, int n) {
        cout << endl;
        for (int i = 0; i < n; i++)
        {
           cout <<arr[i] << " ";
        }
        cout << endl;
    }

    void print(vector<int> &arr) {  
        cout << endl;
        for(auto val : arr) {
            cout << val << " ";
        }
        cout << endl;
    }

    int solve(vector<int> &nums, int val) {
        print(nums);
        int n = removeElement(nums, val);
        print(nums, val);
        return n;
    }

    int solve(vector<int> &nums, int n, vector<int> &nums2, int m) {
        return 0;
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

    // nums vector
    vector<int> nums;

    // input content
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }


    // // input length
    // int k;
    // cin >> k;

    // // nums vector
    // vector<int> nums2;

    // // input content
    // for (int i = 0; i < k; i++)
    // {
    //     int temp;
    //     cin >> temp;
    //     nums2.push_back(temp);
    // }

    // int p,t;
    // cin >> p >> t;

    int val;
    cin >> val;

    // Object creation and method calling
    Leetcode lt;
    cout << lt.solve(nums, val);
    // cout << lt.solve(nums, p, nums2, t) <<endl;
}