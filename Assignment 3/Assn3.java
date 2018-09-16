import java.io.*;
import java.util.regex.*;

public class Assn3{
    public static void main (String[] args) throws IOException {
        File file = new File(args[0]);
        BufferedReader br = new BufferedReader(new FileReader(file));

        String dec_digit = "[0-9]";
        String hex_digit = String.format("%s|[a-f]|[A-F]", dec_digit);
        String exp = "p|P";
        String suff = "(f|F|l|L)?";
        String sign = "(\\+|-)?";
        String hexa = String.format("(%s)+", hex_digit);
        String hex_floating_point = String.format("^(0x|0X)(%s|%s.%s|.%s)(%s)(%s)(%s+)(%s)$", hexa,hexa,hexa,hexa,exp,sign,dec_digit,suff);
        String st; 
        


        while ((st = br.readLine()) != null) 
            if(Pattern.matches(hex_floating_point,st))
                System.out.println("Matched: " + st);
            else
                System.out.println("Not Matched: " + st);
                //System.out.println(st); 
            
    }
}