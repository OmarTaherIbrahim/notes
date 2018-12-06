# Polymorphism
> using the previous class

```java
public class ShapeTest {
    public static void main (String [] args) {
        Rectangle rec = new Rectangle (3, 4);
        Circle cir = new Circle (1);
        Shapes [] s;
        s = new Shape[ 2 ];
        s [0] = rec;
        s [1] = cir;
    }
}
```

## Abstract 
`abstract` keyword forces the child, to implements the function.
+ if we have __one function__ that is `abstract` then we must make the __class__ `abstract. 
+ when a __class__ is an `abstract` class then we __can't create__ an _object_ of that class, while making an __array__ of that class is ok.
##### Syntax
```java
public abstract class Shape {
    public abstract double area();
}
```
This will force any __Sub-class__ to implement the `area()` function.