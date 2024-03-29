#include <iostream>
#include <vector>
using namespace std;
double findMedianSortedArrays(const vector<int>& nums1, const vector<int>& nums2) {
    int m = nums1.size();
    int n = nums2.size();
    if (m > n) {
        return findMedianSortedArrays(nums2, nums1);
    }
    int low = 0, high = m;
    while (low <= high) {
        int partitionX = (low + high) / 2;
        int partitionY = (m + n + 1) / 2 - partitionX;
        int maxX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
        int minX = (partitionX == m) ? INT_MAX : nums1[partitionX];
        int maxY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
        int minY = (partitionY == n) ? INT_MAX : nums2[partitionY];
        if (maxX <= minY && maxY <= minX) {
            if ((m + n) % 2 == 0) {
                return (double)(max(maxX, maxY) + min(minX, minY)) / 2;
            } else {
                return max(maxX, maxY);
            }
        } else if (maxX > minY) {
            high = partitionX - 1;
        } else {
            low = partitionX + 1;
        }
    } 
    cerr << "Error: Input arrays are not sorted!" << endl;
    return 0.0;
}
int main() {
    int nums1 = (1,3);
    int nums2 = (2);
    double median = int (nums1/nums2);
	cout << "Median: " << median << endl;
    return 0;
}

