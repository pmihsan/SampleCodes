import java.util.Scanner;

public class OTPGenerator
{
	public static void main(String[] args) {
	    
	    //Creating Scanner Object
	    Scanner in = new Scanner(System.in);
	    
	   //n Digit OTP Generator
	    int n;
	    
	    //To get the value of n
	    System.out.println("Enter how many digit random OTP number you want to generate");
	    n = in.nextInt();
	  
	    
	    //Setting minimum and maximum range
	    int min = 1;
	    int max = 9;
	    
	    //Initialising sum as zero
		int sum = 0;
		
		//Running for loop n time to generate n digit OTP
		for(int i=0;i<n;i++){
		    
		    //To create a random number
		    int b  = (int)(Math.random()* (max - min + 1) + min);
		    
		    //For Generating suitable digit Random Number
		    sum = (sum * 10) + b;
		}
		
		//Printing the n digit OTP
		System.out.println("OTP GENERATOR");
		System.out.println();
		System.out.println("Generated OTP: " + sum);
	}
}
