class Solution
{
public:
    void func(int i,int sum,vector<int> &arr,int N,vector<int> &ans){
        //base condition
        if (i==N){
            ans.push_back(sum);
            return;
        }
        //pick the element
        func(i+1,sum+arr[i],arr,N,ans);
        //not pick the element
        func(i+1,sum,arr,N,ans);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        func(0,0,arr,N,ans);
        return ans;
    }
    
    
};
//subsets 
// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
class Solution {
public:
    void findSubsets(int i,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans){
        if (i==nums.size()){
            ans.push_back(ds);
            return;
        }
        //pick
        ds.push_back(nums[i]);
        findSubsets(i+1,nums,ds,ans);
        //not pick
        ds.pop_back();
        findSubsets(i+1,nums,ds,ans);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <int> ds;
        vector <vector<int>> ans;
        findSubsets(0,nums,ds,ans);
        return ans;
    }
};