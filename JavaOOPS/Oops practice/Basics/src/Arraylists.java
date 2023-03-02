import java.util.*;

public class Arraylists {

    public static void main(String[] args) {
        ArrayList<Integer> ls1 = new ArrayList<>();
    
        // to add elements
        ls1.add(1);
        ls1.add(2);
        ls1.add(3);
    
        System.out.println(ls1);

        // to get an element 

        int ele = ls1.get(2);
        System.out.println(ele);

        //add in between
        ls1.add(1,5);
        System.out.println(ls1);

        // replace an element;
        ls1.set(3, 100);
        System.out.println(ls1);

        // to remove element 
        ls1.remove(3);
        System.out.println(ls1);

        //find size:
        int sizeL = ls1.size();
        System.out.println(sizeL);
      

        for(int i = 0; i <ls1.size(); i++){
            System.out.print(ls1.get(i) +" ");
        }
        System.out.println("");
        //Sorting
        Collections.sort(ls1);
        System.out.println(ls1);
    }

}
