import java.util.Scanner; // importing Scanner class to get input from the user

public class DataTypes{
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in); // Creating the Scanner Object

        System.out.println("Enter a String");
        String s = in.nextLine();   // Getting a string from the user

        System.out.println("Enter an integer");
        int n = in.nextInt();      // Getting an integer from the user

        char c = s.charAt(0);      // Assigning the character at index 0 of the string
        
        System.out.println("Enter a double value");
        double d = in.nextDouble(); // Getting a double from the user

        System.out.println("Enter a float value");
        float f = in.nextFloat();   // Getting a float from the user

        boolean b = true;

        in.close();   // Closing the Scanner class Object

        // Print the values of each datatypes
        System.out.println("\nPrinting the Data");
        System.out.println("Integer: " + n);
        System.out.println("String: " + s);
        System.out.println("Character: " + c);
        System.out.println("Double: " + d);
        System.out.println("Float: " + f);
        System.out.println("Boolean: " + b);
    }
}