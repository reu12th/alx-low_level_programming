# 0x18. C - Dynamic libraries

## 0. A library is not a luxury but one of the necessities of life
A dynamic library libdynamic.so containing all the functions listed below:  
```c
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```   
File: `libdynamic.so`, `main.h`

## 1. Without libraries what have we? We have no past and no future
A script that creates a dynamic library called liball.so from all the .c files that are in the current directory.   
File: `1-create_dynamic_lib.sh`

## 2. Let's call C functions from Python
A dynamic library that contains C functions that can be called from Python. See example for more detail.
```python
julien@ubuntu:~/0x18$ cat 100-tests.py
''''''''''''''''''''''''''''''''''''''''''''''''''
import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
''''''''''''''''''''''''''''''''''''''''''''''''''
julien@ubuntu:~/0x16. Doubly linked lists$ python3 100-tests.py 
66 + -76 = -10
66 - -76 = 142
66 x -76 = -5016
66 / -76 = 0
66 % -76 = 66
```   
File: `100-operations.so`

## 3. Code injection: Win the Giga Millions!

File: `101-make_me_win.sh`   

## Overview

This script strategically exploits a timing window to maximize the chances
of winning the Giga Millions jackpot. It is designed to be executed 98
seconds before Master Sysadmin Sylvain (MSS) runs the Giga Millions program.

## Features

- **Timing Exploitation:** Takes advantage of a specific time frame.
- **Directory Manipulation:** Strategically manipulates the directory to ensure a
  clean environment for execution.
- **Security Constraints:** Developed under strict constraints to remain
  undetected.

## Usage

1. Upload the script to the server.

    ```bash
    mss@gm_server$ scp 101-make_me_win.sh mss@gm_server:~/
    ```

2. Execute the script 98 seconds before running the Giga Millions program.

    ```bash
    mss@gm_server$ . ./101-make_me_win.sh
    ```

## Script Execution

- Removes itself after execution:

    ```bash
    mss@gm_server$ rm 101-make_me_win.sh
    ```

- Clears traces and displays a sanitized directory structure:

    ```bash
    mss@gm_server$ clear
    mss@gm_server$ ls -la
    . .. gm
    ```

- Displays the MD5 checksum of the Giga Millions program:

    ```bash
    mss@gm_server$ md5sum gm
    d52e6c18e0723f5b025a75dea19ef365  gm
    ```

- Runs the Giga Millions program with preselected numbers for jackpot success:

    ```bash
    mss@gm_server$ ./gm 9 8 10 24 75 9
    --> Please make me win!
    ```

## Disclaimer

This script is intended for educational purposes only. Use it responsibly
and ethically.

