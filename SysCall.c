#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

       void main()
       {
              FILE *fp;
              FILE *fc;
              char str[256];

              fp = fopen("source.txt","r");

              if(fp == NULL)
              {
                     printf("Terdapat Masalah Pada File\n");
                     exit(0);
              }
              
              fgets(str,256,fp);
              
              fc = fopen("copy.txt","w");
                    
              fputs(str,fc);
              
              
              printf("File Berhasil Disalin\n");

              fclose(fp);
              fclose(fc);
       }
