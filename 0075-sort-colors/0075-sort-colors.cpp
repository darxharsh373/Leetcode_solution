class Solution {
public:
    void sortColors(vector<int>& nums) {
      // one pass solution
      int lo=0;
      int mid=0;
      int hi=nums.size()-1;
      //always think of mid
      //0 to low-1>1
      while(mid<=hi){
        if(nums[mid]==2){
           int temp=nums[mid];
           nums[mid]=nums[hi];
           nums[hi]=temp;
           hi--;
            // nums [mid]=nums[hi];
            // nums[hi]=2;
        }
        else if(nums[mid]==0){
            int temp=nums[mid];
            nums[mid]=nums[lo];
            nums[lo]=temp;
            lo++;
            mid++;
        }
        else mid++;
      }
        return;
    }
};