public class Main {
    public int[] buildArraay(int[] nums){
       int n = nums.length;
        for(int i = 0; i<nums.length; i++){
            nums[i] = n*nums[nums[i]];
        }
        for(int i = 0; i<nums.length; i++){
            nums[i] = nums[nums[i]]/n;
        }
        return nums;
    }
}