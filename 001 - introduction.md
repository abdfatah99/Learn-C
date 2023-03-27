[Source](https://www.cc4e.com/lessons/python#)

# From Python to C

This is not your first programming language tutorial, you need some basic stuff
of information about programming like `[variable, loop, if-statement]` etc.

## Different between Python and C

| Python        | C             |
| ------------- | ------------- | 
| White Space is essential | WhiteSpace ignored |
| Very Object Oriented     | Not Object Oriented at all |
| Convenient Data Structure <br> &nbsp; * list <br> &nbsp; * dictionary| Fast Efficient Powerfull <br> &nbsp; * struct <br> &nbsp; * pointers |
| Auto Memory Management | Manual Memory Management |

**Explanation**  

1. White Space

```Python
# python is really care about white space,
# this because block code in python define by whitespace

def func():
    print("hello world")
# Output: hello world

def func(): 
print("hello world")
# Output: Error

```

in C, white space is not big problem

2. Object Oriented

```python
# in python, everyhing you create is an object

name = "fatah"
type(name)
# Output: <class 'str'>
```

3. Manual Memory Management

if you code in Higher level programming language, you doesn't need to manage your
memory because it is already handle by the compiler or the language.  
With C, you need to manage all of it by your hand. 

## Similiarities

* Arithmetic Operators: `+ - * / %`
* Comparison Operators: `== != < > <=` are the same
* Variable naming rules - letter/underscore + number/letters/underscores - also
  case matters
* While Loops - also `break` and `continue` in loops
* Constants similiar except for `strings` and `character` and `boolean`
* Both Have `int`/`float`, and `char`/`byte`
    * **C has no `str`, `list`, or `dict`**
    * **Python has no `struct` and `double`**
        * Python float is C `double`

## Differences

* Bolean Operators
    * `and` / `not` / `or` versus `&&` `!` `||`
* C for loops are **indeterminant** (i.e no `for ... in` ni C)
  You have to loop over the items using countable term  
  for (int i = 0; i <= 10; i++) {} **loop over 10 times**
* C has no pre-defined True or False
* `None` and `NULL` are similiar concepts but quite different
    * `None` in python is its own `Type`, It's like "**Mark Empty**"
    * `Null` is number 0, it cast to be a pointer to nothing
* `Strings` and `character` arrays are similiar concept but **very** different
* C las no `list`, or `dict`
* Python has no `struct` - float in Python is a C `double`