class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int k = m + n;
        int a[k];

        int i = 0;
        int j = 0;

        for(int p = 0; p < k; p++) {

            if(i < m && j < n) {

                if(nums1[i] < nums2[j]) {
                    a[p] = nums1[i];
                    i++;
                }
                else {
                    a[p] = nums2[j];
                    j++;
                }
            }
            else if(i < m) {
                a[p] = nums1[i];
                i++;
            }
            else {
                a[p] = nums2[j];
                j++;
            }
        }

        for(int i = 0; i < k; i++) {
            nums1[i] = a[i];
        }
    }
};