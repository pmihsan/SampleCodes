import java.util.Arrays;

public class FindDuplicates {
    public static void main(String[] args) {
        // int[] arr = {2,3,1,2,3};
        int[] arr = {0,3,1,2};
        System.out.println(Arrays.toString(duplicates(arr)));
    }
    static int[] duplicates(int[] arr){
        int[] res = new int[arr.length];
        int[] ans = new int[arr.length];
        int k = 0;
        for(int i=0;i<arr.length;i++){
            res[arr[i]]++;
        }
        for(int i=0;i<arr.length;i++){
            if(res[i] > 1){
                ans[k] = i;
                k++;
            }
        }
        if(k == 0){
            return new int[]{-1};
        }
        return ans;
    }    
}
