import java.util.Scanner;

public class NumberProcessor {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter a number between 1 and 9: ");
        int num = scanner.nextInt();
        
        if (num < 1 || num > 9) {
            System.out.println("Invalid input. Please enter a number between 1 and 9.");
        } else {
            processNumber(num);
        }
    }

    public static void processNumber(int num) {
        if (num == 1) {
            System.out.println(num);
            return;
        }
        
        System.out.print(num + " -> ");

        if (num % 2 != 0) {
            processNumber(num * 3 + 1);
        } else {
            processNumber(num / 2);
        }
    }
}
