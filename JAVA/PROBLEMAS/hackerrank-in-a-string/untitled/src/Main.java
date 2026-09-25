import static java.lang.IO.print;
import static java.lang.IO.println;
import java.util.Stack;
import java.util.Collections;
import java.util.Comparator;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

void main() {

    String pivo="hackerrank";
    StringBuilder s2 = new StringBuilder();
    int j=0;

    s2.append(s1);

    for (int i = 0; i < pivo.length(); i++) {
        j=i;
        while(pivo.length()!=s2.length() && pivo.charAt(i)!=s2.charAt(j)){
            s2.deleteCharAt(j);
            }
        }


    s2.setLength(10);
    String s1String = s2.toString();

   //println(pivo);
   //print(s1String);

   if(pivo.equals(s1String)){
       println("YES");
       print(s2);
       return "YES";
       System.exit(0);
   }

   println("NO");
   print(s2);
 return "NOT";

}
