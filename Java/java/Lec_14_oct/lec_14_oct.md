# Conditional Statements
## For
```
for(statement;condition;statement){
    statement
}
```
the statements and condition all are conditional and aren't required, but leaving them empty 
__without any break statement__ will result in _infinite loop_.
> when leaving the for statement empty we are required to add the two semicolons "; ;"

##Do while
#####Syntax:
```
do{
    statements..
}while(condition);
```
the _statements_ are __excuted__ then _conditions_ are __tested__. 

##Break & Continue
#####Break:
when we use break we exit the control structure `for while dowhile`completely.
```
while(true){
    if(x==0)
        break;
    x--;
}
```
in the code above we exit the while loop when x __equals__ 0 

#####Continue:
```
continue;
```
will continue to the conditonal statement and not execute the preceding code this turn.
##Switch
##### the allowed paraments/ cases:
1. int
1. bool
1. string
1. char

#####the types that are forbidin as cases:
1. float
1. long long
1. double

### uses of switch
we use switch when we got multiple conditions on a variable, it is a tidier version of if/else 
statements.
#####Synatx:
```
switch(1%3){
    case 0:
        System.out.println("i =0");
        break;
   case 1:
        System.out.println("i=1");
        break;
    case 2:
        System.out.println("i=1");
        break; 
}
```
break is essential to break from the switch statement to stop the statements after it to execute.
##coding prefrence
+ we use `for` when we need to change the condtion by code statement
+ the precompilation will change all the ` for() while() dowhile()` to while loop.


