public class ReverseBits {
    public static void main(String[] args) {
        int n = 13;
        System.out.println(reverse(n));
    }
    static int reverse(int n){
        if(n == 0){
            return 0;
        }
        int ans = 0;
        String s = Integer.toBinaryString(n);
        char[] input = s.toCharArray();
        // System.out.println(s + " " + input.length);
        for(int i=input.length-1;i>=0;i--){
            // System.out.println(ans);
            ans += (input[i] - '0') * ((int)(Math.pow(2,i)));
        }
        return ans;
    }
}
