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

