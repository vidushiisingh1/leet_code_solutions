#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> num_map; // To store the value and its index
    vector<int> ans;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];

        // Check if the complement (target - current element) exists in the map
        if (num_map.find(complement) != num_map.end()) {
            // If it exists, we found the solution
            ans.push_back(num_map[complement]);
            ans.push_back(i);
            return ans;
        }

        // If it doesn't exist, add the current element and its index to the map
        num_map[nums[i]] = i;
    }

    // In case no solution is found, return an empty vector (though the problem guarantees a solution)
    return ans;
}

int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << "Enter the target value: ";
    cin >> target;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }

    return 0;
}
