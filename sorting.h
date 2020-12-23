void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b =temp;
}
void bubble_sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
				swap(&a[j],&a[j+1]);
		}
	}
}

void selection_sort(int a[],int n)
{
	int pos,min;
	for(int i=0;i<n;i++)
	{
		min = a[i];
		pos = i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>min)
			{
				min = a[j];
				pos = j;
			}
		}
		if(pos!=i)
		{
			a[pos] = a[i];
			a[i] = min;
		}
	}
}