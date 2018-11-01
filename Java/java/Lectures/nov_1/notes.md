## Continue
+ The __Constructor__ of the __parent__ (__Super__)  must be called the first thing in the __child__(Subclass) _constructor_  if the __parent__ _constructor's_ has parameters but if we have a default or no constructor, we don't need it.
+ I.E: student has a parameterized _constructor_ `public Student(String name)` when calling Graduate Student _constructor_ we must call Student Constructor.

####Student class
```java
public class student{
private String name;
    public Student(String name){
        set(name);
    }
    public setName(String s){ name = s; }
    public getName(){ return name; }
}
```
####Graduate Student class
```java
public class GraduteStudent extends Student{
    private String programe;
    Public GraduteStudent ( String n, String p) {
        super(n);
        programe=p;
    }
    public setPrograme( String s ) { programe = s;}
    public getPrograme() { return programe; }
}
```
we called `supe(n);` in the constructor.

##Protected
+ __Protected__ is a __access specifier__ which can be accessed by _subclass_, meaning accessed by __inhertince__ by never accessed as a __composition__.
