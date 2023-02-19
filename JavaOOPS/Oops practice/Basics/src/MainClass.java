public class MainClass {
    public static void main(String[] args) {
        // System.out.println("Helloww");

        Person p1 = new Person();
        p1.name = "Honey";
        p1.age = 22;

        Person p2 = new Person();
        p2.age = 55;
        p2.name = "Shridhar";

        Person p3 = new Person(55," Pushkar");
        // System.out.println(p1.age);

        // p1.walk();
        // p2.walk(55);

        System.out.println(Person.count);

    }
}
    class Person {
        String name;
        int age;

        static int count; // counter to check number of times the constructor is called.
        // checks no. of persons created.
        public Person(){
            System.out.println("1st constructor");
        }
        // creating a constructor:
        public Person(int age, String newName) {
            this(); // calling the constructor with no arguments. 
            name = newName;
            this.age = age; // here using this keyword taaki argument me bhi same naam ka age use kr skte.
            System.out.println("constructor called.");
            count++;
        }

        void walk() {
            System.out.println(name);
        }

        void walk(int steps) {
            System.out.println(name + " has walked about " + steps + " steps.");
        }

    }
