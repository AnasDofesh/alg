#include<ctime>
#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}



void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    int *L = new int[n1], *R = new int[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int l,int r)
{
	if(l>=r)
		return;

	int mid = (r+l)/2;
	mergeSort(arr,l,mid);
	mergeSort(arr,mid+1,r);
	merge(arr,l,mid,r);
}


void quickSort(int arr[], int left, int right)
{
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];
      while (i <= j)
	  {
            while (arr[i] < pivot)
				i++;
            while (arr[j] > pivot)
				j--;
            if (i <= j)
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
				i++;
				j--;
            }
      }

      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}


void fillArray(int arr[],int n) {
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
	
}

int main()
{
	int const SIZE = 100000;
	int arr[SIZE],temp[SIZE];
	int n=0;

	fillArray(temp,SIZE);

    double average_time=0;
    clock_t t;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<SIZE;j++)
            arr[j] = temp[j];

        t = clock();
        insertionSort(arr,SIZE);
        //mergeSort(arr,0,SIZE-1);
        //quickSort(arr,0,SIZE-1);
        t = clock() - t;

        double time_taken=((double)t)
                        /CLOCKS_PER_SEC;
        average_time += time_taken;
    }
    cout<<average_time/10.0<<endl;

	system("pause");
	return 0;
}
