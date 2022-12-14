/*
Given two integer arrays arr1 and arr2, and the integer d, return the distance value between the two arrays.
The distance value is defined as the number of elements arr1[i] such that there is not any element arr2[j] where |arr1[i]-arr2[j]| <= d.
Input: arr1 = [4,5,8], arr2 = [10,9,1,8], d = 2
Output: 2
Input: arr1 = [1,4,2,3], arr2 = [-4,-3,6,10,20,30], d = 3
Output: 2
Input: arr1 = [2,1,100,3], arr2 = [-5,-2,10,-3,7], d = 6
Output: 1
*/
#include<iostream>
#include<vector>
using namespace std;
int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
    int ans = arr1.size();
    int ans1 = arr2.size();
    sort(arr2.begin(), arr2.end());
    int count = 0;
    for (int i = 0; i < ans; i++) {
        int left = 0, right = ans1-1, x = arr1[i] - d, y = arr1[i] + d;
        while (left <= right) {
            int mid = left+ (right-left)/2;
            if (arr2[mid] < x) {
                left = mid + 1;
            }
            else if (arr2[mid] > y) {
                right = mid - 1;
            }
            else {
                count++; break;
            }
        }
    }
    return ans - count;
}
int main(){
    
}
