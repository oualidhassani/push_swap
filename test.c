void sortingarray(int *arr)
{
    int i;
    i = 0;
    int tmp;
    int j = 1;
    while(arr[i])
    {
        while(arr[j])
        {
            if(arr[i] > arr[j])
            {
                printf("ana hna");
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
                j++;
        }
        i++;
    }
}

// int main ()
// {
//     int arr[] = {1, 35, 7,8 ,0};

//     int d = sortingarray(arr);
//     printf("%d", d);
// }