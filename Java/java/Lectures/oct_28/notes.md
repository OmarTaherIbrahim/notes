## Constructors
```java 
Time t1=new Time(1);
Time t2= new Time(t1);//copy constsructor is a copy of t1
Time t3=t1; // is a refrence of t1
```

### String 
```java
String s1=new String("ali");
String s2="ali";
if(s1==s2){
    s2="ok";   
}else{
    s2="not";
}
```
+ `s2` will equal `"not"` since s1 refrences a different object than s2.
+ to work around this we can use `String.equal(strin2);`
```java
String s1=new String("ali");
String s2="ali";
if(s1.equal(s2){
    s2="ok";   
}else{
    s2="not";
}
```
+ this compares the value of the two objects
```java
String s1="Ali";
String s2="Ali";
if(s1==s2){
    s="ok";
}else{
    s="not";
}
```
+ here `s2` will equal `ok`.
+ __only when we use `new` keyword two strings will refrence two different objects__

## static
+ static method can call both static and non-static method/varibles
+ a static method can be called from a object or from the class.
```java
public class r{
    public static int x=0;
    public static int get(){
        return x;
    }
}
```
```java
public class a{
    public static void main(String[] args){
        r tmp= new r();
        System.out.println(tmp.get() +","+r.get());
    }
}
```


## package access 
+ it isn't recommended since, it is a againist OOP principles.
+ you can access any variable or method in the same package trough package access.
## final
+ used to set a variable as constant
```java
final int NNUMBER=10;
```
+ programming  rule, we write the name of the final variable __all capatail letters__ , __seperated__ with _underscores_.