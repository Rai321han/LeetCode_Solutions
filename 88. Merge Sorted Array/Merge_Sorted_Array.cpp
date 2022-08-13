#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//     int i=0,j=0,size = m-1;

//     if(n==0) return;
//     while(i<=size && size < m+n && j<n) {
//         if(nums1[i] >= nums2[j]) {
//             for(int x = size; x>=i; x--)
//                 nums1[x+1] = nums1[x];
//             nums1[i++] = nums2[j++];
//             size++;
//         }
//         else i++;
//     }

//     if(size < m+n-1) {
//         while(i < m+n) {
//         nums1[i++] = nums2[j++];
//         }
//     }
//     return;
// }


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i,j,k;
    i = m+n-1;
    j = n-1;
    k = m-1;

    while(k>=0 && j>=0) {
        if(nums2[j] >= nums1[k]) {
            nums1[i--] = nums2[j--];
        }
        else nums1[i--] = nums1[k--];
    }

    while(j>=0) {
        nums1[i--] = nums2[j--];
    }
}

int main() {
    vector<int> num1 = {1,2,3,0,0,0};
    vector<int> num2 = {2,5,6};
    merge(num1, 3, num2, 3);

    for(int i:num1) {
        cout<<i<<" ";
    } 
    return 0;
}