int cbinsearch(int *arr, int key, int left, int right, int size)
{
    int s = 0; 
    int x1 = -1; 
    while (left <= right)
    {
        s = (left + right) / 2; 
        if (arr[s] == key) x1 = s; 
        if (size == 0)
        {
            if (arr[s] > key) right = s - 1; 
            else left = s + 1; 
        }
        else 
        {
            if (arr[s] < key) left = s + 1; 
            else right = s - 1; 
        }
    }
    return x1; 
}

//int main()
//{
//    int arr[] = { 1, 3, 5, 5, 5, 6 , 7, 8, 9 };
//    int x = 5; 
//    int n = 8;
//    int z1 = cbinsearch(arr, x, 0, n -1, 0);
//    int z = cbinsearch(arr, x, 0, n -1, 1);
//    return z1 - z + 1;
//}
