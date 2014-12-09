#CLog 

![image](https://travis-ci.org/mattmaynes/CLog.svg)

#Simple C logging to a stream or file

This is a set of logging macros that simplify logging using the `syslog` facilities. Log messages for various levels of logging can either be sent to the system log or to a standard output stream. There is also an added verbose header that allows for verbose logging taht can be configured at runtime instead of compile time like the default logging. 


##Downloading
There currently are no release versions of the code but there will be soon. For now you can download or clone this repository and use the code in the `src` folder

##Compiling
There is no actual C code to comiple for this project as everything is defined as macros in header files. There is however an attached example that can be comipled using the provided makefile by running `make`

##Usage
There a set of example code in the `example` directory called `log_exp.c`.

