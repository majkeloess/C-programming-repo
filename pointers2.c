
void IncreaseNumber(int num)
{
    num++;
}

void IncreasePtr(int* num)
{
    (*num)++;
}

int main()
{
    int a;

    a=1;
    IncreaseNumber(a);
    IncreasePtr(&a);

    return 0;
}