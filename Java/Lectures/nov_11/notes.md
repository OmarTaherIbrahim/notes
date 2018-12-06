# Interface
+ _Rule_ if interface is `implements` in a class it should be __implemented__ []
+ In java 8 we can make an **_implementation_** inside the `interface` _methode_ which will be treated as the `default implementation` of that _method_ using the __keyword__ `default`
+ Code Example:
``` java
public interface Printable {
    default public String printName () {
        return "I am a printable Object";
    }
}
```
+ We can implement a `interface` _methods_ as `static` to use it the same as a class with `static` methods.
``` java
public interface QuickMaths {
    static public int add() {
        return 1+1;
    }
}
```
We can now use this `add()` _method_ as a `static` __method__ from anywhere I.E : `QuickMaths.add();`.
> there is no difference between a using a _interface_ with __static mehtods__ and _class_ with __static methods__ other than `interface` can't be created an object from it. 

+ Any __Function__ that is `final` you can't __change__ it's _implemention_, but it is inherited.
+ Any __Class__ that is `final` you can't __inherited__.

------
+ We always implement a `setter()` and a `getter()` unless it doesn't need one or the two of them. i.e. : `final variable doesn't need a setter function.`
