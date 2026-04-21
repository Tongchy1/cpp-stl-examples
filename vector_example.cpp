#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {5, 2, 9, 1};
    nums.push_back(7);

    for(int n : nums) {
        cout << n << " ";
    }
}
