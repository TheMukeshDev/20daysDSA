#include <stdio.h>

void wordBuilder(int positions[], char letters[], int len)
{
    char arr[20];

    for (int i = 0; i < len; i++)
    {
        int pos = positions[i];
        arr[pos] = letters[i];
    }

    arr[len] = '\0';   

    printf("%s", arr);
}

int main()
{
    int positions[] = {1, 3, 2, 0};
    char letters[] = {'e', 't', 's', 't'};

    int len = sizeof(positions) / sizeof(positions[0]);

    wordBuilder(positions, letters, len);

    return 0;
}