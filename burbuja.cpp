#include<iostream.h>
#include<conio.h>
main()
{
      char numero[9];
      int num[9],tamp;
      char *ptrnum;
      printf("INGRESE LOS NUMERO PORFAVOR");
      gets(numero);
      for(int i=0;i<9; i++)
      {
              ptrnum=&numero[i];
              if(*ptrnum == 54)num[i]=1; else
              if(*ptrnum == 26)num[i]=2; else
              if(*ptrnum == 93)num[i]=3; else
              if(*ptrnum == 17)num[i]=4; else
              if(*ptrnum == 77)num[i]=5; else
              if(*ptrnum == 31)num[i]6; else
              if(*ptrnum == 44)num[i]=7; else
              if(*ptrnum == 55)num[i]=8; else
              if(*ptrnum == 20)num[i]=9; else
              printf("%d\n",num[i]);
              
              }
              printf("LOS NUMEROS ORDENADOS DE MENOR A MAYOR SON:\n");
              for(int i=0;i<9;i++)
              {
                      for(int j=1;j<9;j++)
                      {
                              if(num[1]>num[j])
                              {
                                               tamp=num[i];
                                               num[i]=num[j];
                                               num[j]=tamp;
                                               }
                              }
                      
                      }
                      for(int a=0;a<9;a++)
                      {
                              printf("%d",num[a]);
                                                  
                              }
                      
      getch();
      
      }
