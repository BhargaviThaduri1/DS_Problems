class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        if(n==0 && m==0) return 0;
        double ans=0.000;
//      Considering ith element of nums1 then comparing it with the first element of nums2 if nums1>nums2 then swap them and again sort nums2 vector
        for(int i=0;i<n;i++){
            if(m>0){
            if(nums1[i]>nums2[0]){
                swap(nums1[i],nums2[0]);
                sort(nums2.begin(),nums2.end());
            }
            }
        }
//    After sorting nums1 looks like 1 2 and nums2 3 4 now merge both arrays
        for(int i=0;i<m;i++){
            nums1.push_back(nums2[i]);
        }
        float f;
        n = nums1.size();
//     If size is odd then return middle element else return nums1[n/2-1]+nums1[n/2]/2
        return n%2?nums1[n/2]: (nums1[n/2-1]+nums1[n/2])/2.0;
    }
};
