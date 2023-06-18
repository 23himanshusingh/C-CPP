class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // moore's voting algorithm
        //O(n) --time and O(1)--> space
        int candidate=0;
        int cnt=0;
        for (int num:nums){
            if (cnt==0){
                candidate=num;
            }
            if (num==candidate){
                cnt+=1;
            }
            else{
                cnt-=1;
            }
        }
        return candidate;
        
    }
};