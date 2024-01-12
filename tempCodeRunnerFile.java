public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The First Value of a:=");
        int a = sc.nextInt();
        System.out.print("Enter The Second Value of b:=");
         int b = sc.nextInt();
         int Remainder = (a-b*(a/b));

        System.out.print("The Remainder When "+a+" is divided by "+b+" is "+Remainder);
    }
    
}