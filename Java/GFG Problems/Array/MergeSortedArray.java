import java.util.Arrays;
public class MergeSortedArray{
    public static void main(String[] args) {
        int[] arr1 = {1,3,5,7};
        int[] arr2 = {0,2,6,8,9};
        int[] res = mergeArray(arr1,arr2);
        System.out.println(Arrays.toString(res));
        // merge(arr1,arr2);
    }
    // static void swap(int a,int b){
    //     int temp = a;
    //     a = b;
    //     b = temp;
    // }
    // static void merge(int[] arr1, int[] arr2){
    //     int i = 0;
    //     int j = 0;
    //     while(i < arr1.length ){
    //         if(arr1[i] > arr2[j]){    
    //             // swap(arr1[i],arr2[j]);
    //             int temp = arr1[i];
    //             arr1[i] = arr2[j];
    //             arr2[j] = temp;
    //             i++;
    //         }
    //         else{
    //             j++;
    //         }
    //     }
    //     System.out.println(Arrays.toString(arr1));
    // }
    static int[] mergeArray(int[] arr1, int[] arr2){
        int i = 0;
        int j = 0;
        int k = 0;
        int[] mix = new int[arr1.length+arr2.length];
        while(i < arr1.length && j < arr2.length){
            if(arr1[i] < arr2[j]){
                mix[k] = arr1[i];
                i++;
            }
            else{
                mix[k] = arr2[j];
                j++;
            }
            k++;
        }
        while(i < arr1.length){
            mix[k] = arr1[i];
            i++;
            k++;
        }
        while(j < arr2.length){
            mix[k] = arr2[j];
            j++;
            k++;
        }
        return mix;
    } 
}