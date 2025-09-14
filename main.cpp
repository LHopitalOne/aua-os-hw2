//
//  main.cpp
//  os_hw2
//
//  Created by Alex Aramyan on 14/9/25.
//

#include <iostream>
#include <unistd.h>

#define ASSIGNMENT 4

void run(void);

#if ASSIGNMENT == 0
#include "ex0.c"

#elif ASSIGNMENT == 1
#include "ex1.c"

#elif ASSIGNMENT == 2
#include "ex2.c"

#elif ASSIGNMENT == 3
#include "ex3.c"

#elif ASSIGNMENT == 4
#include "ex4.c"

#endif

int main(int argc, const char * argv[]) {
    run();
    
    std::cout << "\n" << std::endl;
    return 0;
}
