# JavaScript String Method

javascript handles _primitive values_ as **objects** when executing **methods** and **properties**

**String Length[property]**
The `length` property returns the length of the string and since it's a **proterty** you don't add braces[`()`]
```js
var txt = "avasdfjaskdljfasklfj";
var stringLen = txt.length;
```

## Searching inside a string
**String indexof()[Method]**
The `indexof()` method returnz the index of the **first occurence** of a specified text in a string.
```js
var str = "here or here ecam";
var pos = str.indexof("her");
```
>> first position is return in normal 0 

**String lastIndexOf()[Method]**
The `lastIndexOf()` method returns the index of the **last occurrence** of  a specified text in a string
```js
var str = "here or here ecam";
var pos = str.lastIndexOf("here");
```
would reference the last `here` 

Both `indexOf()`, and `lastIndexOf()` return -1  if the text is not found.

```js
var str = "Pleas locate where 'locate' occurs!";
var pos = str.indexOf("locate", 15); //from beginning first 15
var pos1 = str.lastIndexOf("locate",15); //from end first 15
```

**string search()[Method]**
`search()` is like `indexOf()`, but `search()` method cannot take a second start position, and `indexOf()` method can't take pke powerful search value (**regular expressions**).

## Extracting String Parts
there are 3 methods:
+ `slice(start,end)`
+ `substring(start,end)`
+ `substr(start, lenght)`

**The slice() Method**
`slice()` extracts a part of a string and returns the extracted part in a new string.
```js
var str = "Apple, Banana, Kiwi";
var res = str.slice(7, 13);
```
> return: `Banana`

+ negative numbers `-x` start from the end.
+ second parameter is optional.

**The substring() Method**
`substring()` is similar to `slice()`
the difference is that `substring()` cannot accept negative indexes.

**The substr() Method**
`substr()` is similar to `slice()`
The difference is that `substr()` specifies the **length** of the extracted part.
+ second parameter is _optional_

## Replacing String Content
The `replace()` method replaces a specified value with another value in a string
```js
str = "Please visit HisWebsite";
var newstr = str.replace("HisWebsite","MyWebsite");
```
+ `replace()` method doesn't change the string!
+ `replace()` method replaces only the **first** match
+ `replace()` method is case sensitive but we can use `/i` [**regular expression**]
```js
str = "Please visit MICROsoft!";
var n = str. replace(/microsoft/i, "myWebsite");
```
    + regular expression are written without qoutes.
+ `/g`[**global match flag**] returns all matches.

## Converting to Upper and Lower Case
**toUpperCase()**
+ A string is converted to uppercase with `toUpperCase()`
```js
var text ="Hello World!";
var text2 =text.toUpperCase();
```

**toLowerCase()**
+ A string is converted to lowercase with `toLowerCase()`
```js
var text1 = "daklfjsdlkfDFSJFKLJ";
var text2 = text1.toLowerCase();
```

## The concat() Method
`contact()` joins two or more string
```js
var txt1 = "hello";
var txt2 = "world";
var txt3 = txt1.concat(" ", txt2);
var txt4 = txt1 + " " + txt2;
```
> all string method return a new string they don't modify the original string.
**Strings** are `immutable` : **Strings** :
+ cannot be **modified** 
+ only **replaced**

## String.trim()
`trim()` removes the whitespace from both sides of the strings.

# Extracting String Characters
there 3 methos for extracting string
+ `charAt(postion)`
+ `charCoeAt(postion)`
+ `[]` Property access

## charAt() Method
the `charAt()` method returns the character at a specified index (positon)
```js
var str = "Hello world";
str.charAt(0); //return H
```

## charCodeAt() Mehtod
the `charCodeAt()` method returns the unicode of the character at a specified index in a string.
```js
var str= "Hello World";
str.charCodeAt(0); //return 72
```

## `[]` Property Access
allows property accesss `[]` on string
```js
var str = "hello world";
str[0]; //return H
```

# split()
a string can be converted to an array with `split()`
```js
var txt="a,b,c,d,e";
txt.split(","); //split on commas
txt.split(" "); //split on spaces
txt.split("|"); //split on pipe
txt.split(""); //split characters
```















