import java.util.ArrayList;
// import java.util.Arrays;

public class PlusOne {
    public static void main(String[] args) {
        // int[] arr = {1, 2, 3};
        // int[] arr = {2, 9, 9, 9};
        // int[] arr = {9, 9, 9, 9, 9};
        ArrayList<Integer> list = new ArrayList<>(); 
        list.add(9);
        list.add(9);
        list.add(9);
        list.add(9);
        System.out.println(PlusOne1(list));
        // System.out.println(Arrays.toString(Plus(arr)));       
    }
    static ArrayList<Integer> PlusOne1(ArrayList<Integer> list){
        int last = list.size();
        for(int i=last-1;i>=0;i--){
            if(list.get(i) < 9){
                list.set(i,list.get(i)+1);
                return list;
            }
            if(list.get(i) == 9){
                list.set(i,0);
            }
        }
        ArrayList<Integer> list2 = new ArrayList<>();
        list2.add(1);
        for(int i=1;i<=last;i++){
            list2.add(0);
        }
        return list2;
    }
    static int[] Plus(int[] arr){
        for(int i=arr.length-1;i>=0;i--){
            if(arr[i] < 9){
                arr[i]++;
                return arr;
            }
            if(arr[i] == 9){
                arr[i] = 0;
            }
        }
        int[] nums = new int[arr.length+1];
        nums[0] = 1;
        return nums;
    }
}
