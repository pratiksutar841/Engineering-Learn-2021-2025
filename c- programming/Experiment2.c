/*Design,Develop and Implement a menu driven Program in c for following Array Operation
   1] Inserting an Elemets at a given valid position[pos]
   2] Deleting an Elemets at a given valid position[pos]
   3] Display of Array Elements 
   4] Exit
   support the program with function for each of the above operations */
   
#include<stdio.h>
void main() 
    { 
     char STR[100],PAT[100],REP[100],ans[100]; 
     int i,j,c,m,k,flag=0; 
     printf("\nEnter the MAIN string: \n");
     gets(STR); 
     printf("\nEnter a PATTERN string: \n"); 
     gets(PAT); 
     printf("\nEnter a REPLACE string: \n"); 
     gets(REP); 
     i = m = c = j = 0; 
       while ( STR[c] != '\0') 
             { 
             // Checking for Match
             if (STR[m] == PAT[i]) 
               { 
                 i++; 
                 m++; 
                 if ( PAT[i] == '\0') 
                    { 
                       //copy replace string in ans string 
                        for(k=0; REP[k] != '\0';k++,j++) 
                            { 
                             ans[j] = REP[k]; 
                             flag=1; 
                            } 
                             i=0; 
                             c=m; 
                     } 
               } 
            else //mismatch
               { 
               ans[j] = STR[c]; 
               j++; 
               c++; 
               m = c; 
               i=0; 
               } 
              } 
  if(flag==0) 
     { 
     printf("Pattern doesn't found!!!");
     } 
  else
     { 
      ans[j] = '\0'; 
      printf("\nThe RESULTANT string is:%s\n" ,ans); 
     } 
 } 