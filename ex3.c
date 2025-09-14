//
//  ex3.c
//  os_hw2
//
//  Created by Alex Aramyan on 14/9/25.
//


#include <stdio.h>
#include <unistd.h>

void run(void) {
    int pid = fork();
    
    if (!pid)
        execl("/usr/bin/echo", "echo", "Hello from the child process", NULL);
    
    wait(NULL);
    printf("Parent process done");
}

/**
Same thing done in ex1.
 
 */
