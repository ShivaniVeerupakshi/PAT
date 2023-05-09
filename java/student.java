/*import java.util.*;
public class student {
    public static int add(int a ,int b){
        return a+b;
    }
    public static int mul(int n1 ,int n2){
        return a*b;
    }
    public static void main(String[] args) {
        System.out.println(add(10,20));
        student ob=new student();
        System.out.println(ob.mul(20,20));

//to print the addition and multiplication then create an object to the second one ie multiplication
    }
}*/

/*class sample{
    int rollno=10;
    String name="Shivani";
    public void displayName(){
        System.out.println(name);
    }
}
public class student{
    public static void main(String args[]){
        sample s1=new sample();
        s1.displayName();
    }
}
*/

/*class insta{
    String username="shiv@email.com";
    private String password="12345678";
}
public class sample{
    public static void main(String args[]){
        insta s1 = new insta();
        System.out.println(s1.username);
        System.out.println(s1.password);
    }
}
//It outputs error because password is kept PRIVATE so the output will be error we cannot access private there
*/

/*class insta{
    String username="shivani";
    private String password="jkjshkffk";
    public void updatepassword(String newPassword){
        password = newPassword;
    }
    public String getPassword(){
        return password;
    }
}
public class student{
    public static void main(String args[]){
        insta s1=new insta();
        System.out.println(s1.username);
        System.out.println(s1.getPassword());
        s1.updatepassword("Shivani");
        System.out.println(s1.getPassword());


    }
}*/
/*import java.util.*;
public class student{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        try{//we use when error occurs(connects to database)
            System.out.println(a/b);
        }catch(Exception e){
            //here near catch if you know the error name like division by zero write that inly in place of Exception 
            //or else write Exception e----Catch is used to handle the exception
            System.out.println("Oops buddy,you ran out of error");
        }finally{//used to close the connection (of the database)
            System.out.println("This is finally block");
        }
        System.out.println("Program is completed");
    }
}*/


    