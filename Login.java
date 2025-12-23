import java.util.Scanner;

public class Login {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String correctUser = "admin";
        String correctPass = "1234";

        System.out.print("Enter username: ");
        String user = sc.nextLine();

        System.out.print("Enter password: ");
        String pass = sc.nextLine();

        if (user.equals(correctUser) && pass.equals(correctPass)) {
            System.out.println("Login Successful");
        } else {
            System.out.println("Access Denied");
        }

        sc.close();
    }
}
