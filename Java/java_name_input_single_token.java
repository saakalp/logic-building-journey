import java.util.Scanner;
 class java_name_input_single_token
{
    public static void main (String A [])
    {

        Scanner scanner = null;
        String sName = null;

        scanner = new Scanner (System.in);

       System.out.println("Enter your Name");
        sName = scanner.next();

       System.out.println("Welcome"+sName);
    }
}



