// program for FILE ALLOCATION METHOD: INDEXED
#include<stdio.h>
//include<iostream>
int main()
{
	int a[100];
	int i,check,loc,count,size;
	for(i=0;i<100;i++)
	{
		a[i]=0;
	}
	// 0 ->unasigned
	// 1 ->assigned
	
	/* every time Jump will run (goto part)*/
	
	jump:
	
	printf("\nEnter the location on main ARRAY\n");
	scanf("%d",&loc);
	if(a[loc] == 0)
	{
		printf("\n  Unallocated now you can write your data\n");
		
		printf("\n Enter the length of data \n");
		scanf("%d",&size);
		int d[size];
		printf("\n Enter the data on files of length\n");
		for(int i=0;i<size;i++)
		{
			scanf("%d",&d[i]);
		}
		
		//Assign the 1 to a[loc] so that it should known that a array is defined over there
		a[loc] = 1;
		
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