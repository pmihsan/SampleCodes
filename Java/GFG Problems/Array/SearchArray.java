public class SearchArray {
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,6};
        int target = 6;
        // int[] arr = {11,22,33,44,55};
        // int target = 445;
        int ans = linearSearch(arr,target);
        System.out.println(ans);
    }
    static int linearSearch(int[] arr, int x){
        for(int i=0;i<arr.length;i++){
            if(arr[i] == x){
                return i;
            }
        }
        return -1;
    }
}
