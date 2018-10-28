#Static 
- methods can be static and class can be __static__
 
##Math
Math is a standard java lib that uses static methods.
- `Math.pow(2,3);`
- `Mathabs();`
> Math.pow returns a floating point.
---
```java
import java.util.*; //for scanner
public class MaxFinder{
    public static void main ( string[] args){
        Scanner input= new Scanner(System.in);
        double d1=input.nextDouble();
        double d2=input.nextDouble();
        double d3=input.nextDouble();
        double result= maximum(n1,n2,n3);
        System.out.println("the nas is " + result);
    }

    public static double maximum(double n1,double n2,double n3){
        return Math.max(n1,Math.max(n2,n3));
    }
}
```
---
- __Static Methods__ can't _call_ __unstatic__ methods value objects,..etc
- because _static Methods_ are __initialized__ before any other object or methods.

- note: that primatives in java are __Always__ _called by vaule_  and __Never__
are _called by refrence_
---

```java 
public class NestedCall{
    public static void main(string[] args){
        int n1=0;
        firstM(n1);
    }
    public static void firstM(int a){
        secondM(a);
    }
    public static void secondM(int b){
        thirdM(b);
    }
    public static void thirdM(int d){
        return;
    }
}
```
- this is called __call stack__ .
