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
| Hide | Hides a __Form__, but does _not_ destroy the __Form__ or release its _resources_. |
| Show | __Displays__ a _hidden_ Form.

+ _Events_ are __triggered__ by __user interaction__ like (mouse click) or a __Control Functionalaty__ ( like Form Load).
+ _Form most common even_ is __Load__ : Occurs before a Form is displays to the user.

## Event Handling
+ GUIs are __event driven__
+ When the user interacts with a GUI component, the event drives the program to perform a task.
+ A method that performs a task in response to an _event_ is called an __Event Handler__
#### Button Click example
``` cs
using System;
using System.Windows.Forms;

namespace SimpleEventExample {
    public partial class SimpleEventExampleForm : Form  {
        public SimpleEventExampleForm () {
            InitializeComponent();
        }
        private void clickButton_Click (object sender, EventArgs e) {
            MessageBox.Show( "Button was clicked." );

        }
    }
}
```

The code above will give you the following output

![invalid][fig14.5]
 
+ To create the app's _event handler_, double click the __Button__ on the _Form_.
+ The following empty _event handler_ is declared:
``` cs
private void clickButton_click(object sender, EvenetArgs e) {

}
```
+ By convention, the IDE names the event-handler method as objectName_evenNmae (e.g., clickButton_Click)
#### Event Handler Parameters
+ Each _event hadler_ receives _two parameters_ when it's  called:
    + **_The first_** : __object__ reference (typically named sender) is a __Reference__ to the object that __generated__ the _event_.
    + ___The second___ : is a __reference__ to an __EventArgs__ _object_ (or an object of an _EventArgs __derived__ class_) which contains __additional information__ about he event.
### Auto-generated GUI code
+ Visual studio places the quto-generated code in the __*Designer.cs*__ of the _Form_.
+ Open this file by expanding the node in the __Solution Explorer__ window for the file you're currently working in (simpleEventExampleForm.cs) and double clicking the file name theat ends with *__Designer.cs__*.
+ Since this code is created and mainteained by VS, you generally don't need to look at it.
  
![fig14.6 !working][fig14.6]

![fig14.7 !working][fig14.7]

+ The `partial` modifer allows the Form's class to be _Split_ among _multiple files_.
+ fig 14.7 declares the clickButton that we created in Design mode. It's declared as an __instance variable__ of _class_ `SimpleEventExampleForm`.
+ The __property values__ corresponds to the values set in the __*Properties*__ window for each control.
+ Method `IntializeComponent()` is called when the Form is __Created__.

![tip][tip14.1]
### Delegates and the Event-Handling Mechanism
+ __Event handlers__ are _connected_ to a __control's events__ via special objects called __delegates.__
+ A __delegate type__ declaration speifies the signature of a method, in event handling, the signature specifies the __return type__ and __arguments__ for an __event handler__.
+ A __delegate__ of type _EventHandler_ can hold references to methods that return void and receive two parameters (one of type `object` and one of they `EventArgs`:
``` cs
public delegate void EventHandler(object sender, EventArgs e);
```
##### Indicating the Method that a Delegate should call
+ A Button calss its EventHandler delegate in response to a click.
+ The delegate's _job_ is to __*invoke*__ the appropriate method.
+ This code is added by VS when you double click the Button control in Design mode:
```cs
new System.EventHandler(this.clickButton_Click);
```
+ Adding more delegates to an event is called __multicast delegates__.
### Another way to Create Event Handlers
+ Using the Properties Windwo to create Event Handlers
+ Controls can gereate many different events.
+ Clicking the Events icon [][thunderbolt] in the __Properties__ window, dsiplays all the events for the slected control.
<!---  image Refrences       !--->
[fig14]: img/14/fig_3.png
[fig14.5]:img/14/fig_5.png
[fig14.6]:img/14/fig_6.png
[fig14.7]:img/14/fig_7.png
[tip14.1]:img/14/tip_1.png
[fig14.8]:img/14/fig_8.png
[thunderbolt]:img/14/thunderbolt.png