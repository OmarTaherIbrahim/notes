# Introduction
+ GUI controls are objects that can display information on the screen or enable users to _interact_ with an app.
+ Serveral common __GUI controls__ are listed below

## Controls Table

| Control | Description |
| ------ | --- |
| __Label__ | Displays _images_ or _uneditable text_. |
| __TextBox__ | Enabls the user to _enter data via_ __the keyboard.__ It  also can be used to __display__ _editable_ or _uneditable text_ |
| __Button__ | __Triggers__ an _event_ when clicked with the _mouse_. |
| __CheckBox__ | Specifies an option that can be _selected(__checked__)_ or _unseletected(__unchecked__)_. |
| __ComboBox__ | Provides a _drop-down list_ of items from which the user can make a __Selection__ either by _clicking_ one or more items. |
| __ListBox__ | Provides a __list__ of items from which the user can make a __selection__ by _clicking_ one or more items. |
| __Panel__ | A _container_ in which  controls acan be __placed__ and __organized__. |
| __NumericUpDown__ | Enables the user to select from a _range_ of __numeric__ input values
## Windows Form
+ A __Form__ is a _graphical element_ that appears on your computer's screen; it can be a __dialog__, a __window__, or an __MDI window__ (multiple document interface)
+ A __component__ ist an instance of aclass that implements the _IComponent interface_, which defines the __behaviors__ that _components_ must _implement,_ such as how the component is _loaded._
+ A __Control__, such as _Button_ or _Label_, has a graphical respresentation at _runtime_.
+ _Figure 14.3_ displays the __Windows Forms__ controls and componetns  from the __C# Toolbox__.
+ To _Add_ a __control__ or __component__, slect it from the __ToolBox__ and _drag_ it _onto_ the __Form__.

![image not working][fig14]

+ The _active_ window is the __frontmost__ and has a _highlighted_ title bar.
+ A window becomes the _active window_ when the user _clicks_ somewhere _inside it_.
+ A _Form_ is a _contrainer_ for __controls__ and __components.__
+ When you _drag_ items from the __Toolbox__ ontro the _Form_, Visual Studio generated code that creates the object and sets its _basic properties_.
+ The IDE maintains the generated code in a seprate file using __partial classes__.
### Form properties, common methods and a common event.
#### Common Properties
these are properties that __Form__ has.
| Common Properties | Description |
| :--: | :---: |
| AcceptButton | __Default button__ that's clicked when you _press __Enter___. |
| Cancel Button | __Default button__ that's clicked when you _press __ESC___. |
| AutoScroll | _bool_ value (_false_ by defaul) that __allows__ or __disallows__ _scrollbars_ when needed. |
| FormBorderStyle | _Border style_ for the __Form__ :\| ( _Sizable_ by default)| 
| Font | Font of text displayed on the __Form__, and the __default font__ for controls added to Form. |
| Text | Text in th Form's ___Title bar___ |
### Common Methods
These are methods that can be used _on_ __Forms__.
| Common Methods | Description|
| - | -|
| Close | ___Closes___ a __Form__ and _releases all resourses_, such as the memory used for the _Form's contents_. A __closed Form__ cannot be reopened. |
| Hide | Hides a __Form__, 









[fig14]: img/fig_14_3.png
