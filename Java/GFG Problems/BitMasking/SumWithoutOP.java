public class SumWithoutOP {
    public static void main(String[] args) {
        int a = 20;
        int b = 30;
        System.out.println(sum(a,b));
    }
    
    static int sum(int a , int b)
    {
        
        for(int i=1;i<=b;i++){
            a++;
        }
        return a;
    }
}
