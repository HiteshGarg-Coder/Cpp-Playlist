# Cpp-Playlist

class Leetcode {
    public:

    int solve(vector<int> &nums) {
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