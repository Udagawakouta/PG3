#include <stdio.h>

template <typename Type>
//ŠÖ”
Type Min(Type a, Type b)
{
    if (a < b)
    {
        return static_cast<Type>(a);
    }
    else
    {
        return static_cast<Type>(b);
    }

}

template<>
char Min<char>(char a, char b)
{
    return printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ\n");
}

int main()
{

    printf("%d\n", Min<int>(120, 140));

    printf("%f\n", Min<float>(150.5f, 175.5f));

    printf("%lf\n", Min<double>(116.0f, 184.0f));

    Min<char>('a', 'b');


    return 0;
}