# Homework 04 - Dev option

I'll be using python3 and pylint for this homework

To install pylint for python 3 in a Ubuntu 18.04 environment, pip3 needs to be installed first:

```
$ sudo apt install python3-pip
```

After that, pylint can be installed with this command:
```
$ pip3 install pylint
```

When some code has been written, the linter can be executed like this (with output to a separate file):
```
$ pylint homework4_1.py > homework4_1_report.txt
```

The report contains some opinions on the code given to it:
```
************* Module homework4_1
homework4_1.py:6:0: C0304: Final newline missing (missing-final-newline)
homework4_1.py:1:0: C0114: Missing module docstring (missing-module-docstring)
homework4_1.py:1:0: C0410: Multiple imports on one line (sys, os) (multiple-imports)
homework4_1.py:3:0: C0116: Missing function or method docstring (missing-function-docstring)
homework4_1.py:1:0: W0611: Unused import sys (unused-import)
homework4_1.py:1:0: W0611: Unused import os (unused-import)

------------------------------------
Your code has been rated at -5.00/10
```

There is another example given with different code and a different output to the report (homework4_2.py).