#include <stdio.h>

#define N 37

int main() 
    {
    	int array1[37] , array2[37] ,array3[37] , array4[37] ;
    	int a , b , i , temp , pos , dir , num ;
    	int first = 230 ;
    	int second = 340 ;
    	int third = 350 ;
    	int fourth = 360 ;
    	int wheel[] = {0,32,15,19,4,21,2,25,17,34,6,27,13,36,11,30,8,23,10,5,24,16,33,1,20,14,31,9,22,18,29,7,28,12,35,3,26} ;
    	
    	for(i=0 ; i < N ; i++)
    	{
    		
    		
    		printf(" %d",wheel[i]) ;
    		
    		}
    		
    printf("\n\nLast number : ") ;
	scanf("%d\n", &b) ;
	
	for(i = 0 ;  i < N ;i++){
		
		if(wheel[i] == b ){
	
	    pos = i; } 
			
			}
    
	printf("Last number position : %d\n" , pos+1) ;
    		
    		 while(pos)
         {
    	
         
           temp = wheel[0];
            
            for(i = 0; i < N - 1; i++)
    	
            wheel[i] = wheel[i + 1];
            
            wheel[N - 1] = temp;
             
            pos--;
         	
         	
          }
          
          printf("\n") ;
    	
         for(i=0 ; i < N ; i++)
    	{ 
    	  
    	printf(" %d",wheel[i]) ;
    	
    	array1[i] = wheel[i] ;
        array2[i] = wheel[i] ;
    	array3[i] = wheel[i] ;
    	array4[i] = wheel[i] ;
    		
    	}
    	
    	  printf("\n\n") ;
    	
    	   for(i=0 ; i < N ; i++)
    	{
    		
    		printf(" %d",array1[i]) ;
    		
    	}
    	
    	
    	
    	printf("\n\nDirection : 1 =	left : 0 = right : ") ;
    		
	    scanf("%d\n",&dir) ;
    	
    	if(dir)
    	{
    		
    		while(first)
    		
    		{
    			temp = array1[0];
            
            for(i = 0; i < N - 1; i++)
    	
            array1[i] = array1[i + 1];
            
            array1[N - 1] = temp;
             
            first--;
    			
    			}
    			
    	  printf("\n") ;
    	
         for(i=0 ; i < N ; i++)
    	{
    		
    		printf(" %d",array1[i]) ;
    		
    	}
    	
           
          while(second)
    		
    	{
    		temp = array2[0];
            
            for(i = 0; i < N - 1; i++)
    	
            array2[i] = array2[i + 1];
            
            array2[N - 1] = temp;
             
            second--;
    			
    			}
    			
    	  printf("\n\n") ;
    	
         for(i=0 ; i < N ; i++)
    	{
    		
    		printf(" %d",array2[i]) ;
    		
    	} 
           
          while(third)
    		
    	{
    		temp = array3[0];
            
            for(i = 0; i < N - 1; i++)
    	
            array3[i] = array3[i + 1];
            
            array3[N - 1] = temp;
             
            third--;
    			
    			}
    			
    	  printf("\n\n") ;
    	
         for(i=0 ; i < N ; i++)
    	{
    		
    		printf(" %d",array3[i]) ;
    		
    	}   
        
    	 while(fourth)
    		
    	{
    		temp = array4[0];
            
            for(i = 0; i < N - 1; i++)
    	
            array4[i] = array4[i + 1];
            
            array4[N - 1] = temp;
             
            fourth--;
    			
    			}
    			
    	  printf("\n\n") ;
    	
         for(i=0 ; i < N ; i++)
    	{
    		
    		printf(" %d",array4[i]) ;
    		
    	} 
    	
    	printf("\n\n OUTCOME \n\n");
    	printf(" %d  %d  %d \n",array1[0],array1[1],array1[2]) ;
    	printf(" %d  %d  %d \n",array2[0],array2[1],array2[2]) ;
        printf(" %d  %d  %d \n",array3[0],array3[1],array3[2]) ;
        printf(" %d  %d  %d ",array4[0],array4[1],array4[2]) ;
    	   
    	}
    	
    	else
    	{
    		
    		while(first)
    		
    		{
    			temp = array1[N - 1];
            
            for(i = N - 1; i > 0; i--)
            
            array1[i] = array1[i - 1];
            
           

            array1[0] = temp;
             
            first--;
    			
    			}
    			
    	  printf("\n") ;
    	
         for(i=0 ; i < N ; i++)
    	{
    		
    		printf(" %d",array1[i]) ;
    		
    	}
    	
           
          while(second)
    		
    	{
    		temp = array2[N - 1];
            
            for(i = N - 1; i > 0; i--)
            
            array2[i] = array2[i - 1];
            
           

            array2[0] = temp;
             
            second--;
    			
    			}
    			
    	  printf("\n\n") ;
    	
         for(i=0 ; i < N ; i++)
    	{
    		
    		printf(" %d",array2[i]) ;
    		
    	} 
           
          while(third)
    		
    	{
    		temp = array3[N - 1];
            
            for(i = N - 1; i > 0; i--)
            
            array3[i] = array3[i - 1];
            
           

            array3[0] = temp;
           
           third--;
    			
    			}
    			
    	  printf("\n\n") ;
    	
         for(i=0 ; i < N ; i++)
    	{
    		
    		printf(" %d",array3[i]) ;
    		
    	}   
        
    	 while(fourth)
    		
    	{
    		temp = array4[N - 1];
            
            for(i = N - 1; i > 0; i--)
            
            array4[i] = array4[i - 1];
            
           

            array4[0] = temp;
             
            fourth--;
    			
    			}
    			
    	  printf("\n\n") ;
    	
         for(i=0 ; i < N ; i++)
    	{
    		
    		printf(" %d",array4[i]) ;
    		
    	} 
    	  
    	  printf("\n\n OUTCOME \n\n");
    	printf(" %d  %d  %d \n",array1[0],array1[36],array1[35]) ;
    	printf(" %d  %d  %d \n",array2[0],array2[36],array2[35]) ;
        printf(" %d  %d  %d \n",array3[0],array3[36],array3[35]) ;
        printf(" %d  %d  %d ",array4[0],array4[36],array4[35]) ;
    	}
    	}
