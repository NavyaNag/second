import java.util.*;
 class Main {
  public static void main(String[] args) {
    int FirstNumber, SecondNumber, Sum;
    Scanner s = new Scanner(System.in);
    System.out.print("To perform addition of two numbers, enter the first number:");
    FirstNumber = s.nextInt();
    System.out.print("Enter the second number:");
    SecondNumber = s.nextInt();
    Sum = FirstNumber + SecondNumber;
    System.out.println("The sum of " + FirstNumber + " and " + SecondNumber + " is " + Sum + ".");
    
  }
}
