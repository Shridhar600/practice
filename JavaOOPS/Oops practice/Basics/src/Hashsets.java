import java.util.HashSet;
import java.util.Iterator;
public class Hashsets {
    public static void main(String[] args) {
        HashSet<Integer> sh = new HashSet<>();

        // count Distinct elements in array
        sh.add(1);
        sh.add(2);
        sh.add(3);
        sh.add(4);
        sh.add(1);

        System.out.println(sh);

        sh.remove(3);
        System.out.println(sh);

        Iterator it = sh.iterator();

        while(it.hasNext()){
            System.out.println(it.next());
        }
    }

}
