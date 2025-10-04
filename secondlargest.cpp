#include <iostream>
#include <vector>
#include <climits>
using namespace std;   
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        if (n < 2) {
            return -1;
        }

        int firstmax = INT_MIN;
        int secondmax = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (arr[i] > firstmax) {
                secondmax = firstmax;
                firstmax = arr[i];
            }
            else if (arr[i] > secondmax && arr[i] != firstmax) {
                secondmax = arr[i];
            }
        }

        return (secondmax == INT_MIN) ? -1 : secondmax;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {2, 3, 6, 6, 5};   
    int result = sol.getSecondLargest(arr);
    cout << "The second largest element is: " << result << endl;

    return 0;
}
