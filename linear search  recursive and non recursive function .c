/* a)Write C program that use both recursive and non recursive functions to perform Linear 
search for a Key value in a given list. 


AIM:- A C program that use both recursive and non recursive function to perform linear search for a key value in list.

ALGORITHM:-
Step1:- start 
step2:-declare n,i,val,pos,option
step3:-take input 'n'
step 4:-declare arr[n]
step 5:-intialize i=0.
step 6:-if i<n then ,go to step 7 else goto to step 9
step 7:-read arr[i]
step 8:-i<- i+1
step 9:-take input 'val'
step 10:- display"enter 1 for non recursive function"
step 11:-display"enter 2 for recursive function"
step 12:- read option
step 13:-if option=1then goto step 14 
            else
                 if option=2
               then goto step 19
            else
                 display "enter correct option"
      then goto step 23.
        [ end of if]
step14:-setfound<-0,pos<- -1
step15:- intialize i=0
step16:- repeat step 17 while i<=n
step 17:-if arr[i]=val        
              set pos=i
             print pos 
    goto step 23
[end of if]
     set i=i+1
 step18:-if pos=-1
     print" value is not present in the array"
  [end of if]
goto step23
step19:- set pos=0
step 20:-if n>0
    goto  step21
   else
goto step 23 
[end of if]
step 21:-if arr[n-1]=val 
        assign pos<- n
 else 
set i=i+1
goto step20
[end of if]
step 22:- if pos!=0
print the position of element goto step 23.
step 23:-stop.
*/
 PROGRAM:-


#include<stdio.h>
void linear_search(int val,int n,int arr[*]);
int linear_search_re(int val, int n, int arr[*]);
void main()
{
	int val,i,n,pos,option;
	printf("enter the size of an array: ");
	scanf("%d",&n);
	int arr[n];
	printf("\n enter the elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("\n enter the value to search: ");
	scanf("%d",&val);
	printf("enter 1 for non-recursive function \n");
	printf("enter 2 for recursive function \n");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
		{
			linear_search(val,n,arr);
			break;
		}
		case 2:
		{
			pos=linear_search_re(val,n,arr);
			if(pos!=0)
			printf("\n element %d is found at position %d using recursive function", val,pos);
        else
         printf("\n element %d does not found using recursive function", val);
			break;
			}
			default:
			printf("enter correct option !");
		}
	}
		void linear_search(int val,int n, int arr[n])
		{
			int i,found=0,pos=-1;
			for(i=0;i<n;i++)
			{
				if(arr[i]==val)
				{
					found=1;
					pos=i;
					printf("\n element %d is found at position %d using non-recursive function", val,i+1);
					break;
				}
			}
			if(found==0)
			print("\n  element %d dose not found using non-recursive function", val);       
		}
		int linear_search_re(int val,int n,int arr[n])
		{
			if(n>0)
			{
				if (arr[n-1]==val)
				return n;
				else
				return linear_search_re(val,n-1,arr);
			}
			return 0;
		}
            
/*OUTPUT:-
1.enter the size of array :5
enter the element:3 9 8 6 7
enter the value to search:3
enter 1 for non recursive function
enter 2 for recursive function
2
 element 3 is found at position 1 using recursive  function
2.enter the size of array :5
enter the element:3 9 8 6 7
enter the value to search:3
enter 1 for non recursive function
enter 2 for recursive function
1 
 element 3 is found at position 1  using  non-recursive  function
3.enter the size of array :5
enter the element:3 9 8 6 7
enter the value to search:4
enter 1 for non recursive function
enter 2 for recursive function
1
 element 4 does not found using  non-recursive  function
4.enter the size of array :5
enter the element:3 9 8 6 7
enter the value to search:5
enter 1 for non recursive function
enter 2 for recursive function
2
 element 5 does  not found using recursive function  
 */
