//
//  ex0.c
//  os_hw2
//
//  Created by Alex Aramyan on 14/9/25.
//

#include <stdio.h>
#include <unistd.h>

void run(void) {
    fork();
    fork();
    fork();
    printf("Hello");
}

/**
Here in this run() function, the function fork() is called three time, resulfing in 8 processes in total.
Why 8? Because each time fork() is called the current process is split into 2 processes (parent + child).
Thus, calling it 3 times, results in 2^3=8 processes. As a result we are getting such an output:
 --------------
 Hello

 Hello

 Hello

 Hello

 Hello

 Hello

 Hello

 Hello
 
 --------------
 */
