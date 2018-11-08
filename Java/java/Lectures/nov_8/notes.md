# Abstract 
### Abstract Mehtod
+ we implement a method to be abstract because it is too __Abstract__ to have a __reliazation__, so we _force_ the method to be implemented.
### Abstract Class
+ Class that is __abstract__, can have an _abstract method_ or _non-abstract method_
+ we can use it when we want to make _sub-classes_ from a class but, we don't know __how to implement__ the _method_ later on.
+ for __exmaple__: the previous program __shapes__ has `triangle` `circle` `square` each has a __different__ implemention for area method and `shape`'s area method is __abstract__ 
undifineable, so we defined it as an `abstract` method and `shape` class as a `abstract class`.

``` java
public class Shape {
    private String  name;
    Shape () {
        name = "shape";
        printName();
    }
    public void printName () {
        System.out.println("I am " + name);
    }
}
public class Circle {
    private String Name;
    private double r;
    public Circle ( double r) {
        super();
        this.r = r;
        name = "circle";
    }
    public void printName () {
        System.out.println("I am " + name);
    }
}
```
will print 
```
I am NULL
```
the `printName();` in `Shape` will call the `printName ()` method of `circle`

# Interface
If we want to to implement __multiple behaviours__ but is different types [_not inhertied_] this is the reason we use __interface__.
##### Syntax:
```java
public interface Payable {
    public double gotPayableAmount ();
} 
```
to use this `interface` we must implement it.
```java 
public class SalaryEmp implements Payable {
    public double getPayableAmount (){
        return result;
    }
}
```
we use the _keyword_ `implements` to use the interface `Payable` 
+ we can use __interface__ like a abstract class.
```java
    ...
    Payable x = new SalaryEmp ();
    x.getPayableAmount();
```
+ `interface` is useful to __Contract__/__guide__ the class by forcing it to implement the __methods__.

#### Useful Way of using interface
If we want to Compare multiple object from example to see which is bigger :
```java
public interface Comparable {
    public int CompareTo (Comparable other);
} 
```
if we `implements` this to multiple classes we can use it to __compare the togther__