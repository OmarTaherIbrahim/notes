## Exception
+ __Exceptions:__ are _Events_ that occur during the execution of programs that __disrupt__ the _normal flow_ of instructions. (e.g. __dividing by zero__, __array _access_ out of bound__, __wrong input type__).
+ In java exception is an __objects__ that wraps an error event that occurred within a method and conatins information about the error including its type, the state of the program when the error occurred, optional other custom information.
+ Exception objects can be __*thrown*__ and __*caught*__.
### Exception Types
![](img.png)
### Thorwable class
```java 
public class java.lang.Throwable extends Object
            implements java.io.Serializable {
    public Throwable();
    public Throwable(String msg);
    public Throwable(String msg, Throwable cause);
    public Throwable(Throwable cause);
    public String getMessage();
    public String getLocalizedMessage();
    public Throwable getCause();
    public Throwable initCause(Throwable cause);
    public String toString();
    public void printStackTrace();
    public void printStackTrace(java.io.PrintStream);
    public void printStackTrace(java.io.PrintWriter);
    public Throwable fillInStackTrace();
    public StackTraceElement[] getStackTrace();
    public void setStackTrace(StackTraceElement[] stackTrace);
}
```


### Example of code that genrate an exception
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
+ This might generate an execption(Error) when `y` equals `0` 

### throws
+ Indecates that the __method__ might generate an `Exception` but it __can't handle it__ and will send it back [`throws`] it to the __function__ that _**called it**_.
+ When an error occurs in a method that has `throws` it will exit the function, and will not continue.
```java
public static int divide(int x, int y) throws ArithmeticException {
    System.out.println(x/y);
    System.out.println( "calculating ..." );
    return x/y;
}
```
+ If `y` was equal to `0` then it wont continue  to execute `System.out.println( "calculating ..");`

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