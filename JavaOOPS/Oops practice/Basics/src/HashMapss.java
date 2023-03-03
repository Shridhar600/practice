import java.util.*;

public class HashMapss {

    public static void main(String[] args) {
        HashMap<String, Integer> maps = new HashMap<>();
    
        //insertion
    
        maps.put("India", 120);
        maps.put("china", 120);
        maps.put("America", 120);
        maps.put("Nepal", 120);

        System.out.println(maps);

        // To update 
        maps.put("Nepal", 500);

        System.out.println(maps.get("china"));

        //Searching 
        if(maps.containsKey("Nepal")){
            System.out.println("Exists");
        }
        //Iteration of collections:

        // int arr[] = {12, 5, 656, 55, 99};

        // for(int val : arr){
        //     System.out.print(val+" ");
        // }

        for(Map.Entry<String, Integer> it : maps.entrySet()){
            System.out.println(it.getKey());
            System.out.println(it.getValue());
        }
        
    }
}
