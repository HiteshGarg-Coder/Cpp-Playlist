#include<bits/stdc++.h>
using namespace std;

class Leetcode {
    public:

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        //declare variables
        int p1 = m-1, p2 = n-1, current = n+m-1;

        // untill one of them becomes completely merged
        while(p1 >= 0 && p2 >= 0) {
            //larger element
            if(nums1[p1] > nums2[p2]) {
                nums1[current--] = nums1[p1--];
            } else {
                nums1[current--] = nums2[p2--];
            }
        }

        //one of them is completely merged
        while(p1 >= 0) {
            nums1[current--] = nums1[p1--];
        } 

        while(p2 >= 0) {
            nums1[current--] = nums2[p2--];
        }
    }

    void print(vector<int> &arr) {  
        cout << endl;
        for(auto val : arr) {
            cout << val << " ";
        }
        cout << endl;
    }

    int solve(vector<int> &nums) {
        return 0;
    }

    int solve(vector<int> &nums, int n, vector<int> &nums2, int m) {
        print(nums);
        merge(nums,n, nums2, m);
        print(nums);
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


    // input length
    int k;
    cin >> k;

    // nums vector
    vector<int> nums2;

    // input content
    for (int i = 0; i < k; i++)
    {
        int temp;
        cin >> temp;
        nums2.push_back(temp);
    }

    int p,t;
    cin >> p >> t;

    // Object creation and method calling
    Leetcode lt;
    cout << lt.solve(nums, p, nums2, t) <<endl;
}