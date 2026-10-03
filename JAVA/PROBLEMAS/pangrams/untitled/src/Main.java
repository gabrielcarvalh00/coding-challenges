import static java.lang.IO.println;

void main() {


    ArrayList<Character> pivo = new ArrayList<>();
    String word="We promptly judged antique ivory buckles for the next prize";
    word=s;
    word=word.toLowerCase();

    for (char c = 'a'; c <= 'z'; c++) {
        pivo.add(c);
    }

    for (int i = 0; i <pivo.size(); i++) {
        if(word.indexOf(pivo.get(i))==-1){

                println("nao existe");
                return "pangram";
                System.exit(0);
        }
    }
    return "not pangram";
    println("exite");
}
