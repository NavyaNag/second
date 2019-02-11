using System; class MainClass {
  public static void Main (string[] args) {
    int FirstNumber, SecondNumber, Sum;
    System.Console.Write("To perform addtion of two numbers, enter the first number:");
    FirstNumber = Convert.ToInt32(Console.ReadLine());
    System.Console.Write("Enter the second number:");
    SecondNumber = Convert.ToInt32(Console.ReadLine());
    Sum = FirstNumber + SecondNumber;
    System.Console.WriteLine("The sum of " + FirstNumber + " and " + SecondNumber + " is " + Sum + ".");
  }
}
