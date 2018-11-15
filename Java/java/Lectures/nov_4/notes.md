# Class Object
is a java class that doesn't have a _parent_ each class in java extends object directly(automatically) or _inderectly_ (through a parent class)

**toString()** [returns _string_] a method of __object__ class, which is _recommended_ to __override__ this methode
Example
```java
Account a = new Account ();
System.out.println( a.toString() );
```

### Garbage collector
__Garbage collector__ destory each varible dynamically allocated.

> Inheritance is __recommened__ when we have a class that might have a different verision over time.

## Method Overriding
+ __OverRiding__ is related to inheritance, so we can't say that a mehtod is _override_ if it doesn't have a __parent__.
+ __OverLoading__ can be done with out a parent.
  
#### Type 1
```java
public class Rectangle {
    private double width=2;
    private double length=2;
    public double area () {
        return width * length;
    }
  
   
}
public class Circle extends Shape{
    double radius=1;
    public double area () {
        return 2 * Math.Pi * radius + radius;
    }
}
```
#### Type 2
```java
public class Shape{
    public double area () {
        return 0;
    }
}
public class Rectangle {
    private double width=2;
    private double length=2;
   
}
public class Circle extends Shape{
    double radius=1;
    public double area () {
        return 2 * Math.Pi * radius + radius;
    }
}
```
#### Main class
```java
public class Test {
    public static void main ( String [] args) {
        Rectangle r = new Rectangle ();
        Circle c = new Circle ();
        System.out.println (r.area() );
        System.out.println( c.area() );

    }
}
```
+ If we call __Type 1__ output will be:
``` text
4
2 * π * 1 + 1
```
+ while if the main class calls __Type 2__ :
```text
0
2 * π * 1 + 1
```
the output of `r.area()` calls the `area` function of the __parent__ since it didn't __OverRide__ that method.

## Dynamic Binding
it's when we use the __Super class__ ( _Parent class_ ) as a container to contain it's __sub-class__ and use their __shared__ methods and variables. 

here in the code below the `shape s` is set to `r` which is a object of `rectangle class` and then we set it to 
`c` which is a object of type `Circle`, note that both `Circle` and `Rectangle` are __sub-class__ of `Shape` .
```java
public class Test {
    public static void main ( String [] args) {
        Rectangle r = new Rectangle ();
        Circle c = new Circle ();
        System.out.println (r.area() );
        System.out.println( c.area() );
        Shape s = r;
        System.out.println ( s.area() ); 
        s = c; //we bind Cicle object c to s
        System.out.println ( s.area() ); s
    }
}
```
__output__:
```text
0
2 * π * 1 + 1
```
> __Overloading__ cann't be used in __polymorphism__
### Code Explaination
###### creating the objects
```java
Rectangle r = new Rectangle ();
Circle c = new Circle ();
```
we create a `Rectangle` object `r` and `Cicle` object `c` 
##### Difference between Overriden and non-overriden methods
```java
System.out.println (r.area() );
System.out.println( c.area() );
```
first `println` we call the `area()` method of `Shape` class the second `println()` we call the `area()` method of `Circle` since we override it.



## Casting Dynamicly Binded Object
```java
public class Circle extends Shape{
    double radius=1;
    public double area () {
        return 2 * Math.Pi * radius + radius;
    }
    public double area (int x) {
        return 2 * Math.Pi * radius + radius * x;
    }
}
public class Test {
    public static void main ( String [] args) {
        Rectangle r = new Rectangle ();
        Circle c = new Circle ();
        System.out.println (r.area() );
        System.out.println( c.area() );
        Shape s = r;
        System.out.println ( s.area() ); 
        s = c; //we bind Cicle object c to s
        System.out.println ( (Circle) s.area(x) ); // we cast this to Circle
    }
}
```
here we are _casting_ a __shape__ object to the __binded Circle__ object to use it's __Overloaded method__ `area(int x)`
+ so _casting_ a _overloaded mehtod_ in a __polymorphied__ object ise very useful to use it's _overloaded method_
