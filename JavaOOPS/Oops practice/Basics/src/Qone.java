public class Qone {
    public static void main(String[] args){

        Parent p1 = new Parent();
        p1.pMethod();
        Child c1 = new Child();
        c1.cMethod();
        Child c2 = new Child();
        c2.pMethod();
    }
}

class Parent{

    void pMethod(){
    System.out.println("This is parent Class.");
    }
}

class Child extends Parent{
    
    void cMethod(){
    System.out.println("This is the child class");
    }
}

