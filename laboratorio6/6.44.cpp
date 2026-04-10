int misterio(int a, int b)
{
    if (1 == b)
        return a;
    else
        return a + misterio(a, b - 1);
}
