/**                                                                                    
Enunciado: "Write another program using fork() . The child process should              
print “hello”; the parent process should print “goodbye”. You should try to            
ensure that the child process always prints first; can you do this without             
calling wait() in the parent?"                                                         
      

waitpid()
                                                                                 
Author:  Juan Felipe Gil, Jose Manuel Sanclemente, Cristina Mejia, Melissa Fuentes                                                                              
Date:                                                                                  
*/                                                                                     
                                                                                       
// Incluya los archivos de cabecera necesarios para llevar a cabo la                   
// solucion en C de acuerdo al enunciado                                               
                  

   #include <stdio.h>                                                                 
   #include <stdlib.h>                                                                
   #include <unistd.h>
   #include <sys/wait.h>	   
                                                                     
int main(int argc, char** argv) {                                                      
  pid_t pid;                                                                           
  int status;                                                                          
                                                                                       
  pid=fork();
                                           
  if (pid != 0) {

    waitpid(pid, NULL,0);
   printf("soy el padre, goodbye \n");
		
  } else {                                                                             
    printf("soy el hijo, hello \n");   
	sleep(2);                       
  }                                                                                    
}    
