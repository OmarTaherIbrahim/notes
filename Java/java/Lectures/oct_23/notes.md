#Array od objects
```java 
Account[] listAccount=new Account[5];
listAccount[0].method();
```
is a runtime error since listAccount[0] is not intialized

```java 
String[] list=new String[10];
System.out.println(list[0]);
```

##Execption handling
+ it is a __good practice__ to use `try catch` blocks when we don't have control on the indexs of the array.
+ i.e.:
```java
int[] a={1,4,7,6};
int [] b={2,3,4,5,6};
try{
    b[a[2]]=5;
}catch ( ArrayIndexOutOfBound e){
    e.printStackTrace();
}
```

+ `ArrayIndexOutOfBound` is an expection for array index that is out of bound and isn't in the range of the array.

##For int x : array
+ way one:
```java
public static void printArray(int [] a){
    for(int i=0;i<a.length;i++)
        System.out.println(a[i]);
}
```
+ way two(__Enhanced for__):
```java
public static void printArray(int [] a){
    for(int x:a)
        System.out.println(x);
}
```
+ way two creates another varible that is a copy, so if we use __Enhanced for__ and change that varible it wont effect the orignal elements of the array.
+ if __enhanced for__ is iterating over a object array then it would effect the orignal element.
```java
public static void printArray(object [] a){
    for(object x:a)
        x.method("hello");
}
```
##multiple parameters

```java
public static void meth(int x ,double ... a){

}
```
+ using `double ... a` will let us pass as much as we want double in the parameters

##java.util.Arrays
```java
import java.util.Arrays;
```
+ has many useful method that we can use .[Array docs](https://docs.oracle.com/javase/7/docs/api/java/util/Arrays.html)

##ArrayList
syntax:
```java
ArrayList<String> list=new ArrayList<string>;
```
+ __Array List__ is a dynamic array that has random access `list[index]` 

1. `list.add(element);`
2. `list.get(index);` is used to randomly acces the arraylist.