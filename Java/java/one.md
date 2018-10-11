#java
#Lec 1
* white space are ignored
* ending a string on different line is syntax error
* after the equal sign must be a variable.
``` 
    //object class
    public class GradeBook{
        public void display(){
            System.out.println("Welcome to java");
        }
    }
```
```   
      public class GradeBookTest {
        public static void main(String[] args){
            GradeBook g=new GradeBook();
            g.display();
        }   
      }   
```

#Lec 2
* if a variable in a class is unintialized then it will have :
    * *NULL* string
    * *0* int ..
    * *false* bool
* we can intialize variables directly 
* there is no default parameters in java.
* java generates default constructor even if there is a parameterized constructor.
* 
