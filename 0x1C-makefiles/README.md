# 0x1C. C - Makefiles

The ```make``` utility automatically determines which pieces of a large program need to be recompiled, and issues commands to recompile them.

It was implemented by Richard Stallman and Roland McGrath. Development since Version 3.76 has been handled by Paul D. Smith.

## Uses
You can use ```make``` with any programming language whose compiler can be run with a shell command. Indeed, make is not limited to programs. You can use it to describe any task where some files must be updated automatically from others whenever the others change.

You need a file called a *makefile* to tell ```make``` what to do. Most often, the makefile tells ```make``` how to compile and link a program.

The makefile can also tell make how to run miscellaneous commands when explicitly asked (for example, to remove certain files as a clean-up operation).
