import java.util.Arrays;

public class RotateArray{
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
        int n = arr.length;
        int d = 9;
        Rotate(arr, d, n);
        System.out.println(Arrays.toString(arr));
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
