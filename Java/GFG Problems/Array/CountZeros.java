public class CountZeros {
    public static void main(String[] args) {
        // int[] arr = {1,1,1,0,0,0};
        int[] arr = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
        int ans = Count(arr);
        System.out.println(ans);
    }
    static int Count(int[] arr){
        int c = 0;
        for(int i=arr.length-1;i>=0;i--){
            if(arr[i] == 0){
                c++;
            }
            else{
                break;
            }
        }
        return c;
    }
}
