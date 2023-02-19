 public class MainClass {
    public static void main(String[] args) {
        // System.out.println("Helloww");

        // Person p1 = new Person();
        // p1.name = "Honey";
        // p1.age = 22;

        // Person p2 = new Person();
        // p2.age = 55;
        // p2.name = "Shridhar";

        Person p3 = new Person(46," Pushkar");
        
        Developer d1 = new Developer(55, "vedant");
        d1.walk(); // inheriting this from parent class(Person)
        // System.out.println(p1.age);
        // System.out.println(p2.name);
        // System.out.println(p1.name);
        // System.out.println(p3.age);
        // p1.walk();
        // p2.walk(55);
        // p3.walk();
        // System.out.println(Person.count);

        
    }
}
    class Person {
        String name;
        int age;

        static int count; // counter to check number of times the constructor is called.
        // checks no. of persons created.
        public Person(){
            // age = newAge;
            System.out.println("1st constructor");
        }

        // public Person(String name){
        //     this.name = name;
        //     System.out.println("3rd constructor");
        // }

        // creating a constructor:
        public Person(int age, String newName) {
            // this(); // calling the default constructor. this way won't work.
            name = newName;
            this.age = age; // here using this keyword taaki argument me bhi same naam ka age use kr skte.
            System.out.println(" 2nd constructor.");
            // count++;
        }

        void walk() {
            System.out.println(name + " is walking.");
        }

        void walk(int steps) {
            System.out.println(name + " has walked about " + steps + " steps.");
        }
    }

class Developer extends Person{
    public Developer(int age, String newName){
        super(age, newName);
    }
}



