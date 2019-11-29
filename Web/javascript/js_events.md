# Javascript Events

## Events
HTML events can be something the browser does, or the user does.

**examples:**
+ webpage has finished loading
+ input field was changed
+ button was clicke 

**example of html event syntax**
```html
<element event='some Javascript'>
```

**example:onclick**
the following example is two different was of changing the `innerHTML`[_html inside a tag_] when a button is clicked; which is triggered by clicking on it using `onclick()`

```html
<button id='demo' onclick='document.getElementById("demo").innerHTML = Date()'>
The time is?
</button>
<!-- using this-->
<button onclick="this.innerHTML = Date()">The time is?</button>

```

### Common HTML Events
<table>
    <tr>
        <th>Event</th>
        <th>Description</th>
    </tr>
    <tr>
        <td>onchange</td>
        <td>HTML element has been changed</td>
    </tr>
     <tr>
        <td>onclick</td>
        <td>The use clicks an HTML element</td>
    </tr>   
    <tr>
        <td>onmouseover</td>
        <td>The user moves the mouse over an HTML element</td>
    </tr>
    <tr>
        <td>onmouseout</td>
        <td>TThe user moves the mouse away from an HTML element</td>
    </tr>
    <tr>
        <td>onkeydown</td>
        <td>The user pushes a keyboard key</td>
    </tr>
    <tr>
        <td>onload</td>
        <td>the browser has finished loading the page</td>
    </tr>
        
</table>

<a href="https://www.w3schools.com/jsref/dom_obj_event.asp">DOM object events</a>

## What can JavaScript Do?
Event handlers can be used to :
+ handle 
+ verfiy
+ user input
+ user action
+ browser action


#### Ways to hangle events with js
+ `HTML event attributes` can execute JS code directly.
+ `HTML event attributes` can call JS function.
+ assign you own event hangler function to `HTML elements`
+ prevent events from being **sent** or **handled** 

-------------------
<h1 style='text-align:center'>End</h1>


