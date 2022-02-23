public class BinarySearch {
    public static void main(String[] args) {
        // int[] arr = {1,2,3,4,5};
        // int target = 4;
        int[] arr = {11,22,33,44,55};
        int target = 445;
        int ans = binarySearch(arr,target);
        System.out.println(ans);
    }

    static int binarySearch(int[] arr, int K) {
        int s = 0;
        int e = arr.length - 1 ;

        while(s <= e){
            int m = s + (e - s) / 2;
            if(arr[m] == K){
                return m;
            }
            if(arr[m] < K){
                s = m + 1;
            }
            else{
                e = m - 1;
            }
        }
        return -1;
    }
}
