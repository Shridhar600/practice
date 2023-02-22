import java.lang.invoke.MethodHandleInfo;

public class QuestionTwo {
    public static void main(String[] args){
        methodOverloading m1 =  new methodOverloading();
        m1.mul(5, 55, 1);
        
    }
}

class methodOverloading{

    int mul(int x, int y){
        return(x*y);
    }
    int mul(int x, int y, int z){
        return(x*y*z);
    }
    int mul(int x, int y, int z, int t){
        return(x*y*z*t);
    }
}


