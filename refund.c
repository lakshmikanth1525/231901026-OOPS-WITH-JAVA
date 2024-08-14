import java.util.Scanner;
class refund{
    public static void main(String[] args){
        float a=0.10f;
        float b=0.25f;
    Scanner scan = new Scanner(System.in);
    float c= scan.nextFloat();
    float d= scan.nextFloat();
    float e=((a*c)+(b*d));
    System.out.println("Your total refund will be $"+e);
    }
    
}