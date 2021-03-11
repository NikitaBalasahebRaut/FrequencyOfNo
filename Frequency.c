/*
    Accept N numbers from user and one number, return the frequency of that number.
 */

/*
Input :
N : 8
Array :         12     45    -56      55       45       85      45      96
Number :      45
Output :        3
 
 Input :
 N : 8
 Array :         12     45    -56      55       45       85      45      96
 Number :      55
 Output :        1
 
 Input :
 N : 8
 Array :         12     45    -56      55       45       85      45      96
 Number :      58
 Output :        0
 
 */
#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[],int iSize,int iNo)
{
  int iCnt = 0;
  int iCount = 0;
  
    if(arr == NULL)
    {
        return -1;
    }
    if(iSize <= 0)
    {
        return -1;
    }
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
	   if(arr[iCnt] == iNo)
	   {
		   iCount++;
	   }
	}

	return iCount;
}

 int main()
 {
   int iNo = 0;
   int *ptr = NULL;
   int iCnt = 0;
   int iValue = 0;
   int iRet = 0;
   
   printf("Enter The N Numbers \n");
   scanf("%d",&iNo);
   
   if(iNo == 0)
   {
	   printf("Error : Invalid Input \n");
	   return -1;
   }
   ptr = (int*) malloc (sizeof(int) * iNo);
   
   if(ptr == NULL)
   {
	   printf("Error : unable to allocate memory \n");
	   return -1;
   }
   printf("Enter the values\n");
   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
      scanf("%d",&ptr[iCnt]);
   }
   
   printf("values are \n");
   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
      printf("%d\n",ptr[iCnt]);
   }
   
   printf("Enter the no to cheack frequency\n");
   scanf("%d",&iValue);
   
   iRet = Frequency(ptr,iNo,iValue);
   
   printf("Frequency of no is : %d",iRet);
   
      free(ptr);
 return 0;
 }
 
 
 /*
 
 output
 
 Enter The N Numbers
5
Enter the values
12
10
36
14
12
values are
12
10
36
14
12
Enter the no to cheack frequency
12
Frequency of no is : 2
D:\ProgramTopicWise\LB\3ProblemsOnNNumbers\FrequencyOfNo>   myexe
Enter The N Numbers
4
Enter the values
12
01
47
96
values are
12
1
47
96
Enter the no to cheack frequency
45
Frequency of no is : 0

*/