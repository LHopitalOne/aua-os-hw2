//
//  ex1.c
//  os_hw2
//
//  Created by Alex Aramyan on 14/9/25.
//

#include <stdio.h>
#include <unistd.h>

void run(void) {
    int pid = fork();
    
    if (!pid)
        execl("/usr/bin/ls", "ls", NULL);
    
    wait(NULL);
    printf("Parent process done");
}

/**
 Here the program is straightforward. We first create a child process, which we are going to exploit (yes we are exploiting child labor). execvp is going to replace the "current" process with what is being passed inside. So it mounts ls in this case and kills the process calling ls. that is precisely why we want to call it from the child process (we seem to not like children), so that the main, i.e. parent process stays intact. we call wait(NULL), just because "Parent process done" must be printed AFTER printing the inside of the current directory
 
 */
