import java.math.BigInteger;
import java.util.Scanner;
public class Main
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner in = new Scanner(System.in);
     
            BigInteger num,n;
          
            while (true){
            	  n = new BigInteger("17");
                  num = in.nextBigInteger();
                  num = num.abs();
                if ( num.compareTo(BigInteger.ZERO) == 0 ) {
                	break;
                	}
            	 BigInteger a = num.mod(n);
         if(a==BigInteger.ZERO) {
        	 System.out.println(1);
        	 }
         else
         {
        	 System.out.println(0);
         }
      
            }
    }
}