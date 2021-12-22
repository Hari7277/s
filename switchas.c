/*Switch case 

     take 2 double integers and an i/p from user :

 if "a" , add the integers and print "sum is .." ,

 if "s" , subtract the integers and print "diff is .." ,

 default case : print "defaut case- noaction"*/
 
 #include<stdio.h>
 int main()
 {
    double a,b,sum=0,diff=0;
    char option;
    printf("Enter the first Number: ");
    scanf("%lf",&a);
    printf("Enter the Second Number: ");
    scanf("%lf",&b);
    printf("Addition or Subtraction: ");
    scanf(" %c",&option);
    switch(option)
    {
 	    case 'a':
 	    	sum=a+b;
 		    printf("Sum is %lf",sum);
 			
			break;
			 
 		case 's':
 			
 			if(a>b)
 			  diff=a-b;
 			else
 			  diff=b-a;
 			
 			printf("Difference is %lf",diff);
			 break;
			 
 		default:
 			
 			printf("Default case-no action");
	}
	
	return 0;
 }
