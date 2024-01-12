import java.util.*;
public class quiz18 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The Buttom Number: ");
        int Buttom = sc.nextInt();
        switch(Buttom){
            case 1 : System.out.println("Hello");
            break;
            case 2 : System.out.println("Namaste"); 
            break;
            case 3 : System.out.println("Bonjour");
            break;
            default : System.out.println("Invalid Number");
    sc.close();

        }


    }
}
