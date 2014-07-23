#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char **argv) 
{
 								
                
                 char a[20],b[20],t;
	int i,j,k,l,m,n,x=1,v=0,w=1,cons=0,p=1;
  int z=1;
	                  
	             
          while(p==1){        
                    
                     printf("Enter the string");
	             scanf("%s",a);
	             fflush(stdin);
                     printf("\n Enter your choice");
	            
                     
                     printf("1->vowels,consonants,words,blanks");
                      printf("2->reverse");
	             printf("0->exit");
	             z=scanf("%d",&x);
                         if(z==0)
                         exit(1);
          fflush(stdin);
	switch(x)
 {                 
                              
	case 1:
	for(i=0;a[i]!='\0';i++)
{
	t=a[i];
	switch(t)
{
	case 'a':
	v++;
	break;
	case 'e':
	v++;
break;
	case 'i':
	v++;
	break;
	case 'o':
	v++;
break;
	case 'u':
	v++;
	break;
	case 'A':
	v++;
	case 'E':
	v++;
	break;
	case 'I':
	v++;
	break;
	case 'O':
	v++;
	break;
	case 'U':
	v++;
	break;
      case ' ':
              w++;
           break;
	default : cons++;
	break;
}
}
	printf("vowels=%d words=%d consonants=%d \n",v,w,cons);
	break;
	case 2: for(i=0;a[i]!='\0';i++);
	k=i-1;
	for(j=0;j<=i-1;j++)
{
	b[j]=a[k];
	k--;
}
	b[j]='\0';
	puts(b);
	break;




                       
                                 case 0:exit(1);

                                 default:printf("wrong input \n");
          break;
}
                           printf("\n Do you want to continue");
       printf("\n Press 1 if yes and 0 to break");
       
      z=scanf("%d",&p);
          fflush(stdin);
          if(z==0)
               exit(1);
                    }

 return 0;
}


