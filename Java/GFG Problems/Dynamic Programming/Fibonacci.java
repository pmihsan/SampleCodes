public class Fibonacci{
    public static void main(String[] args) {
        int n = 999;
        System.out.println(Fibo(n));
    }
    static long Fibo(int n){
        if(n <= 0){
            return 0;
        }
        if(n <= 2){
            return 1;
        }
        long a = 0;
        long b = 1;
        long c = 0;
        for(int i = 2;i<=n;i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
        // return c % ((int)(Math.pow(10,8))+7);
    }
}