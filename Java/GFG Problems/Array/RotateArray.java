import java.util.Arrays;

public class RotateArray{
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5, 6};
        int n = arr.length;
        int d = 4;
        // Rotate(arr, d, n);
        // RotateArr(arr,d,n);
        RotArray(arr,d,n);
        System.out.println(Arrays.toString(arr));
    }

    static void RotArray(int[] arr, int d, int n){
        int k = d % n;
        k = n - k;
        for(int i=0;i<k;i++){
            rotateArray(arr);
        }
    }

    static void rotateArray(int[] arr){
        int last = arr[0];
        for(int i=0;i<arr.length-1;i++){
            arr[i] = arr[i+1]; 
        }
        arr[arr.length-1] = last;
    }

    static void RotateArr(int[] arr, int d, int n){
        int k = d % n;
        k = n - k;
        int[] nums = new int[n];
        for(int i=0;i<n;i++){
            if(i < k){
                nums[i] = arr[n + i - k];
            }
            else{
                nums[i] = arr[i - k];
            }
        }
        for(int i=0;i<n;i++){
            arr[i] = nums[i];
        }
    }

    static void Rotate(int[] arr, int d, int n){
        int k = d % n;
        k = n - k;
        Reverse(arr, 0, arr.length-1);
        Reverse(arr, 0, k-1);
        Reverse(arr, k, arr.length-1);
    }

    static void Reverse(int[] arr, int s, int e){
        while(s < e){
            int temp = arr[s];
            arr[s] = arr[e];
            arr[e] = temp;
            s++;
            e--;
        }
    }
}
