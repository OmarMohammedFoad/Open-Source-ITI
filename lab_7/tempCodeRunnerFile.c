#include <stdio.h>

FILE *write_ptr;
int main()
{
    int arr[5] = {2, 3, 4, 1, 2};

    int copied_arr[5];

    write_ptr = fopen("file.dat", "wb");
    if (write_ptr)
    {
        fwrite(arr, sizeof(arr), 1, write_ptr);
        fclose(write_ptr);
    }

    if (write_ptr)
    {
        fread(copied_arr, sizeof(arr), 1, write_ptr);
        fclose(write_ptr);
    }

    write_ptr = fopen("file.dat", "rb");
    fread(copied_arr, sizeof(copied_arr), 1, write_ptr);
    for (int i = 0; i < 5; i++)
    {
        printf("numbers %d\n", copied_arr[i]);
    }

    fclose(write_ptr);

    return 0;
}