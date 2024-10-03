class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     int i = m-1, j=n-1, k=m+n-1;
     while(0<=j && 0<=i){
        if(nums2[j]<=nums1[i]) nums1[k--]=nums1[i--];
        else nums1[k--]=nums2[j--];
     }
     while(0<=j) nums1[k--]=nums2[j--];
    }
};