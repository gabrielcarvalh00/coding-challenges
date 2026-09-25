dimport static java.lang.IO.print;
import static java.lang.IO.println;
import java.util.Stack;
import java.util.Collections;
import java.util.Comparator;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;



//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
void main() {

    Stack<Integer> pilha = new Stack<>();

    StringBuilder aux = new StringBuilder();

    ArrayList<String> nomes = new ArrayList<>();

        //String s1="OUDFRMYMAW";
        //String s2="AWHYFCCMQX";

    for (int i = 0; i < s2.length(); i++) {

        if(s1.contains(String.valueOf(s2.charAt(i)))){
            int indice = s1.indexOf(s2.charAt(i));
            pilha.push(indice);
            aux.append(s2.charAt(i));

              for (int j = i+1; j < s2.length(); j++) {

                for (int k = indice+1; k < s1.length(); k++) {

                    if(s2.charAt(j)==s1.charAt(k)){
                         if(j>pilha.peek()){
                            pilha.push(j);
                            aux.append(s1.charAt(j));
                        }
                     }
                     }

                }
            nomes.add(aux.toString());
            pilha.clear();
            aux.setLength(0);


        }

    }

     if(!nomes.isEmpty()){
         String maior = Collections.max(nomes, Comparator.comparingInt(String::length));
        print(maior.length());
        print(nomes);
        return maior.length();
        System.exit(0);
     }

return 0;

print("0");

}
