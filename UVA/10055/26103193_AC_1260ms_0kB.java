import java.math.BigInteger;
import java.util.Scanner;
public class Main
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner in = new Scanner(System.in);
        while (in.hasNext()) {
            BigInteger num,n;
            num = in.nextBigInteger();
            n =  in.nextBigInteger();
            BigInteger a = n.subtract(num);
            a = a.abs();
      
            System.out.println(a);
           
        }
    }
}