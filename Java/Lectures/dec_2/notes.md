


```java 
public class NegativeNumberException extends IllegalArgumentException{
    private int number;
    public NegativeNumberException(int num) {
        super("cannot use :"+num);
        this.number = num;
    }
    public int getNumber() {return number;}
}
```
Here we are __creating an class__ that `extends` from  `IllegalArgumentException`, And passes a __message__ to `IllegalArgumentException` constructor[ `super("cannot use:"+num);` ]

## GUI
> javaFX is the __New__ GUI framework which replaced the __Jswing framework__

> the problem with jswing is that the interface isn't unified. but javaFX uses XML  which made the interface unified.


