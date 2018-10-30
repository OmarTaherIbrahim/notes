# inheritence
## difference between inheritence and composition
+ composition is a __has relation__, while inheritence is a __is relation__ i.e:
employee has a salary , a programmer is a employee.
```java
public class Employee{
    private salary s;
}
public class Programmer extends  Employee{

}
```
+ inheritence helps in __getting rid of redandance__ , and __polymorphism__.
+ easy to edit, i.e. when we edit a __method__ or a __variable__ we need to edit it _just once_ .
```java 
public class A{
    private string name;
    public void setName(string s){name=s;}
}
pubblic class b extends A{

}
```
+ _class b_ can't __access__ "name" _directly_ since "name" is __private__ but it's _inherited_ and can modified through the funnction in it's __original class__ [ _Class A_]
+ __protected methods/variables__: can be acces only through _child_ class but is unacessable by
other class like __private__ methods/variable. 
+ `extends object` is automatically inherited by java thus not needed to be written.
+ `tostring()` method is automatiacally inhereited, which it's recommended to change 
it manunally