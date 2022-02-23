public class UniqueElement {
    public static void main(String[] args) {
        // int[] arr = {1,1,2,5,5};
        int[] arr = {2, 2, 5, 5, 20, 30, 30};
        int ans = unique(arr);
        System.out.println(ans);
    }
    static int unique(int[] arr){
        int u = 0;
        for(int i=0;i<arr.length;i++){
            u = u ^ arr[i];
        }
        return u;
    }
}
