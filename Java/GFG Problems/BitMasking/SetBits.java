public class SetBits {
    public static void main(String[] args) {
        int n = 10;
        // Binary of 10 = (1010)b2
        System.out.println(setBits(n));
    }

    static int setBits(int N) {
        int set = CountBits(N);
        return set;
    }

    static int CountBits(int n){
        int c = 0;
        while(n > 0){
            c++;
            n = n & (n - 1);
        }
        return c;
    } 
}
