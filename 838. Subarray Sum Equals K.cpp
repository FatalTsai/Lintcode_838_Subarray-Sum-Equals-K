#include <stdio.h>
#include <vector>
#include<unordered_map>
#include <bits/stdc++.h> 

using namespace std;

#if 0
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0,res=0;
        unordered_map<int,int> m;
        m[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            res+=m[sum-k];
            m[sum]+=1;
        }
        return res;
    }
};
#endif

class Solution {
public:
    /**
     * @param nums: a list of integer
     * @param k: an integer
     * @return: return an integer, denote the number of continuous subarrays whose sum equals to k
     */
    int subarraySumEqualsK(vector<int> &nums, int k) {
        // write your code here
        int n = nums.size();
        int sum = 0,res=0;
        unordered_map<int,int> hash;
        hash[0]=1;

        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
    }
};




int main(){

    Solution test;
    
    vector<int> vect{1,1,1}; 
    int k;
    printf("%d",test.subarraySumEqualsK(vect,k));

}