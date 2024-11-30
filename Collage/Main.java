import java.util.Arrays;
import java.util.regex.*;

public class Main {
    public static void main(String[] args) {
        // Test input
        String codeLine = "int 1a = a + 1b * 10;";
        System.out.println("Code Line: " + codeLine);
        
        String[] tokens = codeLine.split("\\s+|=|\\+|\\*|;");
        System.out.println(Arrays.toString(tokens));
        for (String token : tokens) {
            if (token.isEmpty()) continue;
            if (isValidVariableName(token)) {
                System.out.println("\"" + token + "\" is valid.");
            } else {
                System.out.println("\"" + token + "\" is not valid. Reason: " + getReason(token));
            }
        }
    }

   
    public static boolean isValidVariableName(String token) {
        return token.matches("[a-zA-Z_][a-zA-Z0-9_]*");
    }


    public static String getReason(String token) {
        if (token.matches("\\d.*")) {
            return "Variable name cannot start with a digit.";
        } else if (!token.matches("[a-zA-Z_][a-zA-Z0-9_]*") && !token.matches("\\d+")) {
            return "Contains invalid characters.";
        } else {
            return "Undeclared or unknown variable.";
        }
    }
}
