import java.util.Scanner;

public class Sum{
     public static void main(String[] args){
         Scanner scanner= new Scanner(System.in);
         System.out.println("Enter the number:");
          int m = scanner.nextInt();
           System.out.println("Enter the number:");
           int n = scanner.nextInt();
           int l1 =m%10;
           int l2 =(n%10);
           int a=  Math.abs(l1+l2);
           System.out.println("Sum of the Last number is "+(a));
     }
     
}