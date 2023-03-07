#include <signal.h>
#include <stdio.h>
#include <unistd.h>

int a; 
void printHelloworld (int sigNum){
    printf ("Recibi la senal: %d\n", sigNum);
}

void libertad (int sig){
    printf ("Viva la libertad %d\n", sig); 
}

void despedida (int sig1){
    printf ("Termine de trabajar %d\n", sig1); 
    printf ("Nos volveremos a ver\n");  
    a=0; 
}
int main (){
    signal (12, printHelloworld); 
    signal (2, libertad); 
    signal (10, despedida);
    a=1; 
    while (a==1){
        printf ("Trabajando\n");
        sleep (1); 
    }

    return 0; 
}