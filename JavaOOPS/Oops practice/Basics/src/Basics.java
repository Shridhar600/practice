public class Basics {
    public static void main(String[] args){
        Audi audiEtron = new Audi(400, "Audi");
        // audiEtron.brand = "Audi";
        audiEtron.speeding();
    }
}
class Audi extends Vehicle{
    public Audi(int topSpeed, String brandName) {
        super(topSpeed, brandName);
        System.out.println("This is Audi constructor.");
    }
}
class Bmw extends Vehicle{

    public Bmw(int topSpeed, String brandName) {
        super(topSpeed, brandName);
        //TODO Auto-generated constructor stub
    }
}

class Vehicle{
    String brand;
    int topSpeed;
    String color;

    public Vehicle(int topSpeed, String brandName){
        this.topSpeed = topSpeed;
        brand = brandName;
    }
    void speeding(){
        System.out.println(brand + " is running with a top speed of " + topSpeed);
    }
}