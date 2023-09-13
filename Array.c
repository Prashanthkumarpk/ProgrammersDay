void printarray1(int *array, size_t size, size_t pos)
{
    if(pos < size) {printarray1(array, size, pos + 1); printf("%d%s", array[size - pos - 1], pos ? " ": "");}
}

void printarray(int *array, size_t size)
{
    printf("[");printarray1(array, size, 0);printf("]");
}

int main(void)
{
    int array[] = {1,2,3,4,5,6,7,8,9,10};

    printarray(
