
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    pid_t pid1, pid2, pid3;
    int status;
    //char *argp1[] = {"Q1", argv[1], NULL};Q3
    pid1 = fork();
    if(pid1 < 0){
          perror("Erreur de création du processus\n");
          exit(EXIT_FAILURE);
    }

    if(pid1 == 0){
        //execv("./Q1", argp1);
    pid_fils == 0) {
    fprintf (stdout, "Fils : PID=%d, PPID=%d\n",
    getpid( ) , getppid( ));
    }

    else{
        char *argp2[] = {"Q1", argv[2], NULL};
        pid2 = fork();
        if(pid2 < 0){
          perror("Erreur de création du second processus\n");
          pid1 = wait(&status);
          exit(EXIT_FAILURE);
        }

        if(pid2 == 0){
           //execv("./Q1", argp2);
           fprintf (stdout, "Fils : PID=%d, PPID=%d\n",
           getpid( ) , getppid( ));
        }

        else{
            char *argp3[] = {"Q1", argv[3], NULL};
            pid3 = fork();
            if(pid3 < 0){
              perror("Erreur de création du troisieme processus\n");
              pid1 = wait(&status);
              pid2 = wait(&status);
              exit(EXIT_FAILURE);
            }

            if(pid3 == 0){
              //execv("./Q1", argp3);
              pid_fils == 0) {
              fprintf (stdout, "Fils : PID=%d, PPID=%d\n",
              getpid( ) , getppid( ));
            }

            else{
                pid1 = wait(&status);
                printf("Status de l'arret du fils %d %d\n", status, pid1);
                pid2 = wait(&status);
                printf("Status de l'arret du fils %d %d\n", status, pid2);
                pid3 = wait(&status);
                printf("Status de l'arret du fils %d %d\n", status, pid3);
            }
        }

        
    } 
}
