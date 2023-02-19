public class abstraction {
    public static void main(String[] args) {
     Audi a1 = new Audi();
     a1.start();   
    }
}

class Audi extends car{

    @Override
    void start() {
        // TODO Auto-generated method stub
        System.out.println("Audi is Starting.");
        
    }

}

class BMW extends car{

    @Override
    void start() {
        // TODO Auto-generated method stub
        
    }

}
abstract class car{

    int price;

    abstract void start();
}
