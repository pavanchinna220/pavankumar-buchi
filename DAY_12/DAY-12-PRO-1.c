14. Find common elements in three sorted arrays, 3 array values are given as input to program.

int main()
{
    int ar1[] = { 1, 5, 10, 20, 40, 80 };
    int ar2[] = { 6, 7, 20, 80, 100 };
    int ar3[] = { 3, 4, 15, 20, 30, 70, 80, 120 };
    int n1 = sizeof(ar1) / sizeof(ar1[0]);
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    int n3 = sizeof(ar3) / sizeof(ar3[0]);
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3) {
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) {
            printf("%d ", ar1[i]);
            i++;
            j++;
            k++;
        }
        else if (ar1[i] < ar2[j])
            i++;
        else if (ar2[j] < ar3[k])
            j++;
        else
            k++;
    }


    printf("Common Elements are ");
    return 0;
}
