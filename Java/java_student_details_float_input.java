import java.util.Scanner;
 class java_student_details_float_input
{
    public static void main (String A [])
    {

        Scanner scanner = null;
        String sName = null;
        int iAge = 0;
        float fMarks = 0.0f; 



        scanner = new Scanner (System.in);

       System.out.println("Enter your Name");
        sName = scanner.next();
       System.out.println("Enter your Age");
       iAge = scanner.nextInt();
       System.out.println("Enter your marks");
       fMarks = scanner.nextFloat();

       System.out.println("welcome"+sName);
       System.out.println("welcome"+iAge);
       System.out.println("welcome"+fMarks);
       System.out.println("Welcome"+sName);
    }
}




