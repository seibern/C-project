/*                                                                                     
Enunciado: "Write a program that opens a file (with the open() system call)            
and then calls fork() to create a new process. Can both the child and parent           
access the file descriptor returned by open()? What happens when they are              
writing to the file concurrently, i.e., a t the same time?"                            
    

dprintf(fd, "");
                                                                                   
Author:Juan Felipe Gil, Jose Manuel Sanclemente, Cristina Mejia, Melissa Fuentes                                                                             
Date:                                                                                  
*/                                                                                     
                                                                                       
// Incluir archivos de cabecera para las funciones que requiere para                   
// solucionar el enunciado                                                             
                           

   #include <stdio.h>                                                                 
   #include <stdlib.h>                                                                
   #include <unistd.h>
   #include <string.h>                                                                 
   #include <fcntl.h>                                                                
   #include <sys/wait.h>	   
                                                            
int main(int argc, char **argv) {
  // Usar estas variables
  int x;
  pid_t pid;
  char *filename="code-02.txt";
  int fd;

 fd=open("./melissa.txt", O_CREAT | O_WRONLY | O_TRUNC, S_IRWXU);

  x = 100;
  pid = fork();
  if (pid == 0) {
    x++;
    dprintf(fd, "soy el hijo y el valor de x es: %d \n", x);

  } else {
    x+=2;
    dprintf(fd, "soy el padre y el valor de x es: %d \n", x);
    // acompanada del valor de 'x'
  }

  close(fd);
}




