import java.util.Arrays;

public class KthSmallestNumber{
    public static void main(String[] args) {
        // int[] arr = {6,1,2,8,3,7,10,5};
        int[] arr = {1,4,7,2,6};
        int k = 4;
        System.out.println(KthSmall(arr,k));
    }
    static int KthSmall(int[] arr,int k){
        Arrays.sort(arr);
        if(k <= 0){
            return -1;
        }
        else if(k == 1){
            return arr[0];
        }
        return arr[k-1];
    }
}