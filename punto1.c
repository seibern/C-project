tmate
/**                                                                                    
Enunciado: Write a program that calls fork(). Before calling fork(), have              
the main process access a variable (e.g., x) and set its value to something            
(e.g., 100). What value is the variable in the child process? What happens             
to the variable when both the child and parent cha nge the value of x?                 
                                                                                       
Author:Juan Felipe Gil, Jose Manuel Sanclemente, Cristina Mejia, Melissa Fuentes                                                                     
Date:                                                                                  
*/                                                                                     
                                                                                       
// Incluir archivos de cabecera que definen los prototipos de las                      
// funciones: 'printf', 'sleep' y 'fork' 

   #include <stdio.h>                                                                 
   #include <stdlib.h>                                                                
   #include <unistd.h>                                                                
                                                                                                           
                                                                                       
int main(char *argc, char** argv) {                                                    
  int x;
  int t=fork();                                                                            
  pid_t pid;                                                                           
                                                                                       
 if(pid){
	printf("soy el padre, mi pid es: %d \n",getpid());
	x=8;
	}	                                                                                  
   else{
	printf("soy el hijo, mi pid es: %d \n",getpid());
	}
                                                                                    
  return 0;                                                                            
}  
