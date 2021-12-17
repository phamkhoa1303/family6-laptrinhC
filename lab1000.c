#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void bai11();
long B11(int n,int sum);
long fac(int n);
void bai12();
int B12(int ,int);
void bai13();
int B13(int ,int);
void bai14();
int B14(int ,int);
void bai15();
int B15(int ,int);
void NhapN(int *n)
{
    do
    {
        printf("\n\nNhap so N: ");
        scanf("%d", &*n);
        if (*n <= 0)
        {
            printf("\n\nSo N khong hop le. Vui long nhap N > 0.");
        }
        
    } while (*n <= 0);
    
}

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

bool Perfect(int n)
{
    int i = 1, Sum = 0, Temp = n;
    while (i < n)
    {
        if(n % i == 0)
        {
            Sum += i;
        }
        i++;
    }
    if (Temp == Sum )
    {
        return true;
    } else
    {
        return false;
    }
}

bool Prime(int n)
{
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            return false;
        }
    i++;
    }
    return true;    
}

void Q6()
{
    int n;
    float sum;
    NhapN(&n);
    for (int i = 1; i <= n; i++)
    {
        sum += (float) 1/(i*(i + 1));
    }
    printf("\n\nSum: [%0.2f]", sum);

}

void Q7()
{
    int n;
    float sum;
    NhapN(&n);
    for (int i = 1; i <= n; i++)
    {
        sum += (float) i/(i + 1);
    }
    printf("\n\nSum: [%0.2f]", sum);

}

void Q8()
{
    int n;
    float sum;
    NhapN(&n);
    for (int i = 0; i <= n; i++)
    {
        sum += (float) (2*i + 1)/(2*i + 2);
    }
    printf("\n\nSum: [%0.2f]", sum);

}

void Q9()
{
    int n;
    NhapN(&n);
    printf("\n\n%d! = [%d]", n, factorial(n));
}

void Q10()
{
    int n, x;
    printf("\n\nNhap X: ");
    scanf("%d", &x);
    NhapN(&n);
    printf("\n\n%d^%d = [%0.0lf]", x, n, pow((double) x, (double) n));
}

void Q29()
{
    int n;
    NhapN(&n);
    for (int i = n - 1; i > 0; i--)
    {
        if (n % i == 0 && i % 2 == 1)
        {
            printf("\n\nUoc le lon nhat cua [%d] la [%d]", n, i);
            return;
        }
        
    }
    
}

void Q30()
{
    int n;
    NhapN(&n);
    if (Perfect(n)== true)
    {
        printf("\n\n[%d] la so hoan thien", n);
    } else
    {
        printf("\n\n[%d] khong la so hoan thien", n);
    }
}

void Q31()
{
    int n;
    NhapN(&n);
    if (Prime(n)== true)
    {
        printf("\n\n[%d] la so nguyen to", n);
    } else
    {
        printf("\n\n[%d] khong la so nguyen to", n);
    }
}

int main()
{
    int choice,n;
    do
    {
        printf("\n\n -------MENU----------\n\n");
        printf("\n\n01: ");
        printf("\n\n02: ");
        printf("\n\n03: ");
        printf("\n\n04: ");
        printf("\n\n05: "); 
        printf("\n\n06: S = 1/n*(n + 1)");
        printf("\n\n07: S = n/(n + 1)");
        printf("\n\n08: S = (2n + 1)/(2n + 2)");
        printf("\n\n09: S = n!");
        printf("\n\n10: S = x^n");
        printf("\n\nCau 11: Tinh S(n) = 1 + 1 x 2 + 1 x 2 x 3 + ⋯ + 1 x 2 x 3 x ... x n");
        printf("\n\nCau 12: Tinh S(n) = x + x^2 + x^3 + ⋯ + x^n");
        printf("\n\nCau 13: Tinh S(n) = x^2 + x^4 + ⋯ + x^2n");
        printf("\n\nCau 14: Tinh S(n) = x + x^3 + x^5 ... + x^2n+1");
        printf("\n\nCau 15: Tinh S(n) = 1 + 1/(1+ 2)+1/(1+2+3)+ ... + 1/(1+2+...+n)");
        printf("\n\n29: Tim uoc so le lon nhat cua so nguyen duong n.");
        printf("\n\n30: Kiem tra so nguyen duong N co phai so hoan thien hay khong.");
        printf("\n\n31: Kiem tra so nguyen duong N co phai so nguyen to hay khong.");
        printf("\n\nCau 32: Cho so nguyen duong n. Kiem tra so nguyen duong n co phai la so chinh phuong hay khong?");
        printf("\n\nCau 42: Cho so nguyen duong n. Kiem tra so nguyen duong n có phai la so chinh phuong hay khong?");
        printf("\n\nCau 43: Hay Dem so luong chu so cua so nguyen duong n");
        printf("\n\nNhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice)
    {
    case 1:
        
        break;
    
    case 2:
        
        break;

    case 3:
        
        break;

    case 4:
        
        break;

    case 5:
        
        break;
    case 11:
        bai11();
        break;
    case 12:
        bai12();
        break;
    case 13:
        bai13();
        break;
    case 14:
        bai14();
        break;
    case 15:
        bai15();
        break;
    case 32:
        
        break;
    case 42:
        
        break;
    case 43:
        
        break;

    case 6:
        Q6();
        break;

    case 7:
        Q7();
        break;

    case 8:
        Q8();
        break;

    case 9:
        Q9();
        break;

    case 10:
        Q10();
        break;




    case 29:
        Q29();
        break;

    case 30:
        Q30();
        break;

    case 31:
        Q31();
        break;

    default:
        printf("\n\nKhong co lua chon nay. Vui long nhap lai");
        break;
    }
    printf("\n\n\n\nBan co muon tiep tuc su dung chuong trinh khong?");
    printf("\n\nYes(1)/No(0)");
    printf("\n\nLua chon cua ban la: ");
    scanf("%d", &choice);
    } while (choice != 0);
    
}

void bai11(){
    int n;
    printf("\nBai11: Nhap n: ");
    scanf("%d", &n);
    printf("\n\tS= %d",B11(n,0));
}
long B11(int n,int sum){
    if (n ==0) return sum;
    sum+=fac(n);
    return B11(n-1,sum);
}
long fac(int n){
    if (n == 0) return 1;
    return n*fac(n-1);
}

void bai12(){
    int n,x;
    printf("\nBai12: Nhap n: ");
    scanf("%d", &n);
    printf("\n\tnhap x: ");
    scanf("%d", &x);
    printf("\nS = %d",B12(n,x));
}
int B12(int n,int x){
    if (n == 0) return 0;
    return pow(x,n)+B12(n-1,x);
}
void bai13(){
    int n,x;
    printf("\nBai13: Nhap n: ");
    scanf("%d", &n);
    printf("\n\tnhap x: ");
    scanf("%d", &x);
    printf("\nS = %d",B13(n,x));
}
int B13(int n,int x){
    if (n == 0) return 0;
    return pow(x,2*n)+B13(n-1,x);
}
void bai14(){
    int n,x;
    printf("\nBai14: Nhap n: ");
    scanf("%d", &n);
    printf("\n\tnhap x: ");
    scanf("%d", &x);
    printf("\nS = %d",B14(n,x));
}
int B14(int n,int x){
    if (n < 0) return 0;
    return pow(x,2*n+1)+B14(n-1,x);
}
void bai15(){
    int n,x;
    printf("\nBai15: Nhap n: ");
    scanf("%d", &n);
    printf("\n\tnhap x: ");
    scanf("%d", &x);
    printf("\nS = %d",B15(n,x));
}
int B15(int n,int x){
    if (n < 0) return 0;
    return pow(x,2*n+1)+B15(n-1,x);
}