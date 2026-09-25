import java.awt.desktop.SystemSleepEvent;

import static java.lang.IO.print;
import static java.lang.IO.println;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
void main() {

    String palavra="abc";
    Set<Character> set = new HashSet<>();
    int cont=0;
    int verifica=0;
    int aux=0;

    //extraindo amostra de cada cractere present
    for (char c : palavra.toCharArray()) {
        set.add(c);
    }

    String unicos = set.stream()
            .map(String::valueOf)
            .collect(Collectors.joining());

    for (int i = 0; i < unicos.length(); i++) {
        cont=0;
        verifica=0;
        for (int j = 0; j < palavra.length(); j++) {
            if(unicos.charAt(i)==palavra.charAt(j)){
                cont++;
            }
        }
        if(cont % 2 !=0){
            verifica++;
        }
        if(verifica==1){
            aux++;
            if(aux>1){
                println("nao pode ser palidnroma");
                //return "NO"
                System.exit(0);
            }
        }

    }

print("pode ser palindroma");
    //return "YES";
}
