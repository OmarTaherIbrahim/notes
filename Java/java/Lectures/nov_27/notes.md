## Exception




```java
public static int divide(int x, int y) {
    return x/y;
}
public static void main(String [] args) {
    Scanner s = new Scanner(System.in);
    int x = s.nextInt();
    int y = s.nextInt();
    int ans = divide(x,y);
    System.out.println(ans);
}
```
+ this might generate an execption(Error) when y = 0 
### throws
+ indecates that the __method__ might generate an `Exception` but it __can't handle it__ and will send it back [`throws`] it to the __function__ that _**called it**_.

### Try catch block
```java
try{
    //code
} catch (Exception e){

}
```
+ only **one** `catch` block is executed.
+ if the code inside `try{}` block generates an `Exception` goes to the `catch` block which is most appropriate to the `Exception`.

##### Example:

```java
public static int divide(int x, int y) throws ArithmeticException {
    return x/y;
}
public static void main(String [] args) {
    try{
        Scanner s = new Scanner(System.in);
        int x = s.nextInt();
        int y = s.nextInt();
        int ans = divide(x,y);
        System.out.println(ans);
    } catch (ArithmeticException arexp) {
        arexp.printStackTrace();
    } catch (InputMismatchException iexp) {
        iexp.printStackTrace();
    }
}
```
+ method `divide(int x, int y)` might generate a `ArithmeticException` but since we added `throws ArithmeticException` if a `ArithmeticException` will be send it to the `main()` since `main()` called the `divide()` method
```java
public static int divide(int x, int y) throws ArithmeticException {
    return x/y;
}
```