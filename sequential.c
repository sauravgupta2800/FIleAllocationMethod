// program for FILE ALLOCATION METHOD: sequential and linked
#include<stdio.h>
//include<iostream>
int main()
{
	int a[100];
	int i,check,str,len,count;
	for(i=0;i<100;i++)
	{
		a[i]=0;
	}
	// 0 ->unasigned
	// 1 ->assigned
	
	/* every time Jump will run (goto part)*/
	
	jump:
	
	printf("\nEnter the starting and length of memmory space nneded\n");
	scanf("%d%d",&str,&len);
	count=0;
	for(i = str; i < str+len ; i++)
	{
		if( a[i] == 0)
		{
			count++;
		}
		else
		{
			break;	
		}
		
		/* In sequentially if first location is found to be assigned then we dont check another locations,
		   In Linked if we will search for unallocated area in user eneterd space (len)  
		   do changes for LINKED: ( modifiy it)
		   1 . erase the else part
		   2 . apply count <= len*/
	}
	if(count == len)
	{
		printf("\n  Unallocated now you can write your data\n");
		
		/* allocated memory user write it on that area as 1(lets say user write it) 
		*/
		for(i = str; i < str+len ; i++)
		{
			a[i] = 1 ;//user data in the form of 1
		}
	}
	else
	{
		printf("\n  already allocated you can't write anything\n");
	}
	printf("/nWANT YOU CONTINUE (1 for YES / 0 for NO )\n");
	scanf("%d",&check);
	if(check==1)
	{
		goto jump;
	}
	else
	{
		return 0;
	}
	
	return 0;
	
}