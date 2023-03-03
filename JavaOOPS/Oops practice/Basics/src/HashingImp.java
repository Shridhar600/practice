import java.util.*;


public class HashingImp {
    static class CustomHashMap<K,V>{ // where k and v are generic key and values i.e k an v could be anything string interger.
        private class Node{
            K key; // k type ki key hogi 
            V value;

            public Node(K key, V value){
                this.key = key;
                this.value = value;
            }
        }
        private int n; // nodes
        private int N; // no. of buckets or size of array.
        private LinkedList<Node> buckets[]; // same as int arr[]; // this is my hashmap  = array of linked lists

        public CustomHashMap(){ // hashmap ka constructor.
            this.N = 4;
            this.buckets = new LinkedList[4];
            for(int i = 0; i <4; i++){
                this.buckets[i] = new LinkedList<>();
            }
        }
        private int hashfunction(K key){

        }
        public void put( K key, V value){
            int bi = hashfunction(key);
            int di = searchInLL(key,bi); /// gives back data's index; i.e. ek bucket ke andar jo linked list hai usme ka index;
            if(di == -1){
                buckets[bi].add(new Node(key, value));
                n++;
            }else {
                Node data = buckets[bi].get(di);
                data.value = value;
            }

            double lambda = (double)n/N;
            if(lambda > 2.0){
                //re hashing krenge;
            }

        }







    }
}
