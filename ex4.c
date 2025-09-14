//
//  ex4.c
//  os_hw2
//
//  Created by Alex Aramyan on 14/9/25.
//


#include <stdio.h>
#include <unistd.h>

void run(void) {
    int pid = fork();
    
    if (!pid)
        execl("/usr/bin/grep", "grep", "main", "./test.txt", NULL);
    
    wait(NULL);
    printf("Parent process done");
}

/**
Same thing as in ex1, but with a different command.
 
 */
