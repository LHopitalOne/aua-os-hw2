//
//  ex2.c
//  os_hw2
//
//  Created by Alex Aramyan on 14/9/25.
//

#include <stdio.h>
#include <unistd.h>

void run(void) {
    int pid = fork();
    
    if (!pid) {
        pid = fork();
        
        if (!pid)
            execl("/usr/bin/ls", "ls", NULL);
        
        wait(NULL);
        execl("/usr/bin/date", "date", NULL);
    }
    
    wait(NULL);
    printf("Parent process done");
}

/**
Same thing done but twice as in ex1. Parent bifurcated into parent and a child, and then the child is bifurcated into child and "grandchild". "if" used to control the children and "wait" used to control parents so that none of them marches ahead of their parents/children.
 
 */
