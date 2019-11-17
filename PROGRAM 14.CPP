#include <iostream.h>
#include <conio.h>
int a[10][10], b[10][10], c[10][10], i, j, R, C;

void sum(int a[10][10], int b[10][10], int R, int C)
{
    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            c[i][j] = a[i][j] + b[i][j];
}

void differ(int a[10][10], int b[10][10], int R, int C)
{
    for (i = 0; i < R; i++) 
        for (j = 0; j < C; j++) 
            c[i][j] = a[i][j] - b[i][j];
}

void display(int r[10][10])
{
    for (i = 0; i < R; i++) 
    {
        for (j = 0; j < C; j++) 
            cout << r[i][j] << "\t";
        cout << "\n";
    }
}

void input()
{
    cout << "Enter number of rows and columns:";
    cout << "\nRows:";
    cin >> R;
    cout << "Columns:";
    cin >> C;

    cout << "\nEnter Matrix A with " << R << " rows and " << C << " columns";
    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            cin >> a[i][j];

    cout << "\nEnter Matrix B with " << R << " rows and " << C << " columns";
    for (i = 0; i < R; i++) 
        for (j = 0; j < C; j++) 
            cin >> b[i][j];
}
void main()
{
    int ch;
    clrscr();

    cout << "\n* * * * * Matrix Menu * * * *";
    cout << "\n1.Sum of Matrices";
    cout << "\n2.Difference of Matrices";
    cout << "\nEnter your choice...";
    cin >> ch;

    switch (ch) 
    {
    case 1:
        input();
        sum(a, b, R, C);
        cout << "\nPress any key to see the sum..\n";
        getch();
        clrscr();

        cout << "\nMatrix A:\n";
        display(a);
        cout << "\nMatrix B:\n";
        display(b);
        cout << "\nMatrix C=A+B:\n";
        display(c);
        break;

    case 2:
        input();
        differ(a, b, R, C);
        cout << "\nPress any key to see the difference..\n";
        getch();
        clrscr();

        cout << "\nMatrix A:\n";
        display(a);
        cout << "\nMatrix B:\n";
        display(b);
        cout << "\nMatrix C=A-B:\n";
        display(c);
        break;
        
    default:
        cout << "\nWrong choice..";
    }
    getch();
}
