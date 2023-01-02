class Solution {
public:
// here nums has only 0,1,2 elements i.e 0<=nums[i]<=2
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low =0, mid =0, high = n-1;
        while(low<=high){
            if(nums[low] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[low] == 1){
                low++;
            }
            else{
                swap(nums[low], nums[high]);
                high--;
            }
        }
    }
};
