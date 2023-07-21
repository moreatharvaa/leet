#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{    long long ans = INT_MIN;

     long long temp = 0;




   for(int i=0;i<n;i++){
       temp+=arr[i];
       ans = max(temp, ans);
       if (temp < 0) {
         temp = 0;
       }
   }
   return ans<0?0:ans;
}
