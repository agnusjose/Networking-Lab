#include <stdio.h>
#include <unistd.h> 
void main() {
    pid_t pid;
    pid = fork();

    if (pid < 0) 
        perror("fork failed");
     else if (pid == 0) 
        printf("Child Process with PID = %d\n", getpid());
     else 
        printf("Parent Process with PID = %d, Child PID = %d\n", getpid(), pid);
    
}

