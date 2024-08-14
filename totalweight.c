import java.util.Scanner;

public class TotalWeight {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
         int a = 75;
         int b = 112;

        System.out.print("Enter the number of widgets: ");
        int widgets = scanner.nextInt();
        System.out.print("Enter the number of gizmos: ");
        int gizmos = scanner.nextInt();

        int totalWeight = (widgets*a) + (gizmos*b);

        System.out.println("The total weight of all these widgets and gizmos is " + totalWeight + " grams.");
    }
}