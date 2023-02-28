#include <stdio.h>
#include <unistd.h>

int main (){
    // Este codigo solo ejecuta el padre 
    printf ("Solo padre\n"); 
    //

    int pid = fork (); // En el proceso padre regresa el id del hijo. En el hijo es igual a cero

     if (pid==0){
        execl ("/workspace/TC1004B/practica1/helloworld","helloworld", NULL); 
        printf("Esta linea no debe correr\n");

     } else {
        printf("Soy el proceso padre y mi hijo es %d \n", pid);
     }

    //printf ("Que pasa ahora \n");
    //fork (); 
    //printf ("Cuantos somos\n"); 
    return 0; 
}