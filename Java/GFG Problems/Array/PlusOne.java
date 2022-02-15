import java.util.Arrays;

public class PlusOne {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3};
        // int[] arr = {2, 9, 9, 9};
        // int[] arr = {9, 9, 9, 9, 9}; 
        System.out.println(Arrays.toString(Plus(arr)));       
    }
    static int[] Plus(int[] arr){
        for(int i=arr.length-1;i>=0;i--){
            if(arr[i] < 9){
                arr[i]++;
                return arr;
            }
            if(arr[i] == 9){
                arr[i] = 0;
            }
        }
        int[] nums = new int[arr.length+1];
        nums[0] = 1;
        return nums;
    }
}
