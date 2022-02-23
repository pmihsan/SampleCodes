import java.util.Arrays;

public class MissingNumber{
    public static void main(String[] args) {
        int[] arr = {6,1,2,8,3,4,7,10,5};
        // int[] arr = {1,2,3,5};
        // int[] arr = {1,4,5,2,6};
        // int[] arr = {1,4,5,2,3,6,7,8,9};
        int ans = findMissing2(arr);
        System.out.println(ans);
    }
    static int findMissing2(int[] arr){
        int i = 0;
        while(i < arr.length){
            int correctInd = arr[i] - 1;
            if(correctInd > arr.length - 1){
                i++;
                continue;
            }
            if(arr[i] != arr[correctInd]){
                int temp = arr[i];
                arr[i] = arr[correctInd];
                arr[correctInd] = temp;
            }
            else{
                i++;
            }
        }
        System.out.println(Arrays.toString(arr));
        for(int j=0;j<arr.length;j++){
            if(arr[j] != j + 1){
                return j + 1;
            }
        }
        return arr.length + 1;
    }
    static int findMissing(int[] arr){
        bubbleSort(arr);
        for(int i=0;i<arr.length;i++){
            if(arr[i] != i+1){
                return i+1;
            }
        }
        return arr.length+1;
    }
    static void bubbleSort(int[] arr){
        for(int i=arr.length-1;i>0;i--){
            for(int j=0;j<i;j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
            
        }
    }
}