int max(int a, int b, int c)
{
    int max = a;
    max = max < b? b : max;
    max = max < c? c : max;
    return max;
}