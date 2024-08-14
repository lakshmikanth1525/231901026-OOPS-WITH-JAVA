import java.util.Scanner;

public class lastdigit {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        int lastDigit = Math.abs(number % 10); 
        System.out.println("Last digit: " + lastDigit);
    }
}