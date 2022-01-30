#include <stdio.h>  
int main(){  
   FILE *fp;  
  
   fp = fopen("myfile.txt","w+");  
   fputs("This is javatpoint", fp);  
    
   fseek( fp, 7, SEEK_SET );  
   fputs("coolest", fp);  
   fclose(fp);  
}  

