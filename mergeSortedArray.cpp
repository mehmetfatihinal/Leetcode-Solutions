#include <iostream>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> c;

        c.reserve(m + n);



        c.insert(c.end(), nums1.begin(), nums1.begin() + m);

        c.insert(c.end(), nums2.begin(), nums2.begin() + n);

        sort(c.begin(), c.end());

        for (int i = 0; i < m + n; i++) {

            nums1[i] = c[i];
        }
    }
};
