import java.util.Scanner;

public class SecondLastDigit {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        int secondLastDigit = -1;
        if (Math.abs(number) >= 10) {
            number = Math.abs(number); 
            secondLastDigit = (number / 10) % 10; 
        }

        System.out.println("Second last digit: " + secondLastDigit);
    }
}