#include<bits/stdc++.h>
using namespace std;

class Leetcode {
    public:

    void print(vector<int> &arr) {
        
        cout << endl;

        for(auto val : arr) {
            cout << val << " ";
        }

        cout << endl;
    }

    void duplicateZeros(vector<int>& arr) {

        // declared values
        int n = arr.size();
        int i = 0, k = 0;
        vector<int> nums;

        // condition to get till the size
        while (i < n) {

            // if int value
            if(arr[i] != 0) {
                nums.push_back(arr[i]);
                i++;
                k++;

            // we encountered a zero
            } else {
                nums.push_back(0);
                nums.push_back(0);
                i++;
                k += 2;
            }

            if(k > n) {
                break;
            }
        }

        for(int i = 0; i < n; i++) {
            arr[i] = nums[i];
        }
    }

    int solve(vector<int> &nums) {

        // 1st output the given arr
        print(nums);

        // duplicating the zeros
        duplicateZeros(nums);

        // printing the output
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