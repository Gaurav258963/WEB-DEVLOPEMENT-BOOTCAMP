import java.util.Scanner;

public class simplecalculator {
    public static void main(String[] args)
    {
       Scanner sc =new Scanner(System.in);
       System.out.println("Enter the first Number :");

       int firstNumber = sc.nextInt();
       System.out.println("Enter the Second Number:");

       int SecondNumber = sc.nextInt();

       System.out.println("Enter the type of operaion you want to perform (=,-,*,/,%): ");
       String Operation = sc.next();
       int result = performOperation(firstNumber,SecondNumber,Operation);
       System.out.println("Your Answer is : " +result);
    //    System.out.println("Your Answer is : *result");
    //    System.out.println("Your Answer is : /result");
    //    System.out.println("Your Answer is : -result");
    //    System.out.println("Your Answer is : %result");
    //    System.out.println("Your Answer is : =result");

    }

    public static int performOperation(int firstNumber, int secondNumber, String operation) {
        int result = 0;
        if (operation.equals("+")) {
            result = firstNumber + secondNumber;
        } else if (operation.equals("-")) {
            result = firstNumber - secondNumber;

        } else if (operation.equals("*")) {
            result = firstNumber * secondNumber;
        } else if (operation.equals("%")) {
            result = firstNumber % secondNumber;
        } else if (operation.equals("/")) {
            result = firstNumber / secondNumber;
        } else {
            System.out.println("Invalid Operation");
        }
        return result;

    }

}
