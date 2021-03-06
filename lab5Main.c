#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

//Guu câu 1 -> 3

int getLength(const char*);

int getLength(const char* str)
{
	if(str[0] == '\0') return 0;
	int length = 0;
	while(str[length] != '\0')
	{
		length = length + 1;
	}
	return length - 1;
}

void nhapchuoi(char chuoi[SIZE])
{
    do
    {
        printf("\n\nNhap : ");

        gets(chuoi);
    }

    while ( !(strlen(chuoi) > 0 && strlen(chuoi) < SIZE));

}

void xoaXuongDong(char x[])
{
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}

void strreverse(char chuoi[])
{

    int i = 0;
    int length ;
    for(length = 0; chuoi[length] != '\0'; length++)
    {

    }
        while(i < length)
        {
            length--;

            char temp = chuoi[i];

            chuoi[i] = chuoi[length];

            chuoi[length] = temp;

            ++i;

        }
        printf("\n\nCau 2 : Chuoi ky tu khi viet nguoc la %s",chuoi);
}


void Continues(int *z)
{
    printf("\nBan co muon tiep tuc? (yes(1)/no(0):");
    scanf("%d", &*z);
    if (*z == 0)
    {
        printf("\nbyebye\n\n");
    }
}

void Q1();

void Q2();

void Q3();

//   start khoa cau 4 va cau 11
char *delete_space(char *str, char *ketqua);
void Q4();
void Q11();
//        end khoa

void Q5();

////Phượng
int char_position(char str[], char c)
{
	int i;
	int pos = 0;
	for (i=0; i< strlen(str); i++)
	{
		if (str[i] == c)
		{
			pos	= i+1;
			break;
		}
	}
	return pos;
}

void Q6()
{
    char str[SIZE];
    char c;
    printf("Moi nhap mot chuoi co chieu dai nho hon %d: ", SIZE);
    fflush(stdin);
    fgets(str, SIZE, stdin);

    printf("Moi nhap ki tu ban muon tim: ");
	scanf("%c", &c);

    if (char_position(str,c) == 0)
	{
		printf("Ki tu %c khong xuat hien trong chuoi %s\n", c, str);
	} else
	{
		printf("Ki tu %c xuat hien tai vi tri thu %d trong chuoi %s \n", c, char_position(str,c), str);
	}
}

void Q7()
{
    char str[SIZE];
    char c;
    printf("Moi nhap mot chuoi co chieu dai nho hon %d: ", SIZE);
    fflush(stdin);
    fgets(str, SIZE, stdin);

    printf("Moi nhap ki tu ban muon tim: ");
	scanf("%c", &c);

    int len = strlen(str);
    int check = 0;
    for(int i = 0; i < len; i++)
    {
        if (str[i]==c)
        {
            check = 1;
            printf("\nKi tu xuat hien o cac vi tri %d",i+1);
        }
    }
    if (check == 0)printf("Khong co ton tai ki tu");
}
//end

//Quốc câu 8 và câu 9
void Q8();
void Q9();

void Q10();

int main()
{
    int z;



    do
    {
        printf("\n\t\t\t\t\t\t Phuong phap lap trinh_N16T01_HK1_2122_501042 \n");
        printf("\n\t\t\t\t\t BAI TAP NHOM 6 LAB5 \n");
        printf("\nChuong trinh gom cac bai tap sau: ");
        printf("\n0. Ket thuc");
        printf("\n1: Input a string and return the string's length");
        printf("\n2: Input a string and print it in reverse other");
        printf("\n3: Input a string represent a full name ,split and print the first name and the last name");
        printf("\n4: Input a string and normalize it");
        printf("\n5: Input two string s1 and s2, concatenating s2 to s1.");
        printf("\n6: Input a string and check whether a character appears or not .If yes ,return  the first position");
        printf("\n7: Input a string and check whether a character appears or not .If yes ,return  all appearing  positions");
        printf("\n8: Input a string and check whether a word appear or not. If yes, return the fist position");
        printf("\n9: Input two string s1 and s2, return the first position where s2 appears in s1. ");
        printf("\n10: Input two string s1, s2 and position. Then insert s2 to s1 from this position.");
        printf("\n11: Input a string and two integer numbers,named nand position.Then delete n char from position of input string.");
        printf("\n\t\tMoi ban cac so tren (Vui long chon dung neu khong se bi loi chuong trinh): \t");
        scanf("%d", &z);

        switch (z)
        {
        case 0:
            printf("\n\n\t\t\tKET THUC\n\n");
            break;

        case 1:
            Q1();
            break;

        case 2:

            Q2();
            break;

        case 3:

            Q3();
            break;

        case 4:

            Q4();
            break;

        case 5:

            Q5();
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

        case 11:

            Q11();
            break;
        default:
            printf("\n\n\t\t\t vui long chon lai.\n\n");
        }

        Continues(&z);

    } while (z != 0);

    return 0;
}
void Q1()
{
    fflush(stdin);
   char chuoi[SIZE];



   printf("\n\nNhap vao chuoi ky tu can dem: ");

   printf("\n\nNhap : ");

   fgets(chuoi, SIZE, stdin);

   printf("\n\nSo ky tu trong chuoi la : %d\n", getLength(chuoi));
}
void Q2()
{
    fflush(stdin);

    char chuoi[SIZE];

    printf("\n\nNhap vao chuoi ki tu muon dao nguoc !!");

    nhapchuoi(chuoi);

    strreverse(chuoi);
}
void Q3()
{
    fflush(stdin);
    char str[SIZE];

    char y[SIZE];

    char x[SIZE];

    printf("\n\nNhap vao ho va ho dem cua ban !!");

    nhapchuoi(str);

    printf("\n\nNhap vao ten cua ban !!");

    nhapchuoi(y);


    strcpy(x , str);

    printf("Ho va Ten day du cua ban la : %s\n", strcat(x ,y ));
}
void Q4()
{
    fflush(stdin);
    char x[SIZE], x1[SIZE];
    printf("\nBai 4: nhap chuoi can xu li:");
    fgets(x, SIZE, stdin);
    printf("mang vua nhap la:%s\n", x);
    int dai = strlen(delete_space(x, x1));
    printf("mang sau khi chinh sua:%s\n", delete_space(x, x1));
    fflush(stdin);
}
char *delete_space(char *str, char *ketqua)
{
    int pos = 0;
    const int len = strlen(str);
    if (str[0] != ' ' && str[0]<64)
    {
        ketqua[pos++] = str[0] - 32;
    } else if (str[0] != ' ')
    {
        ketqua[pos++] = str[0];
    }
    
    for (int i = 1; i < len; i++)
    {
        char c = str[i];
        if (c == ' ' && str[i - 1] == ' ')
        {
            continue;
        } else
        if (str[i - 1] == ' ' && c != ' ' && i < len - 2 && c>63)
            ketqua[pos++] = c;
     else if (str[i - 1] == ' ' && c != ' ' && i < len - 2 && c<63){
         ketqua[pos++] = c-  32;
        } else
        {
            char a = tolower(c);
            ketqua[pos++] = a;
        }
    }
    return ketqua;
}

void Q5()
{
	fflush(stdin);
	char str1[SIZE], str2[SIZE], str3[SIZE];

	printf("Enter the first string: ");
	fgets(str1, SIZE, stdin);
	printf("Enter the second string: ");
	fgets(str2, SIZE, stdin);

	int l1 = getLength(str1), l2 = getLength(str2);

	int i, j = 0;
	for (i = 0; i < l1 + l2; i ++)
		if(i < l1)
			str3[i] = str1[i];
		else
		{
			str3[i] = str2[j];
			j ++;
		}

	for (i = 0; i < l1 + l2; i ++)
		printf("%c", str3[i]);
}

void Q8()
{
    fflush(stdin);
    char str[SIZE];
    char c[SIZE];
    int n,i;
    printf("\n\nNhap chuoi cua ban: ");
    fgets(str, SIZE, stdin);

    n =  getLength(str);

    printf("\n\nNhap chu cai ban muon tim ");
    fgets(c,SIZE,stdin);

    i = 0;
    while (i < n)
    {
        if(c[0]==str[i])
        {
            printf("\n\nKi tu %c xuat hien lan dau tien tai vi tri %d",c[0],i);
            return ;
        }

        i++;
    }
    printf("\n\nKi tu khong xuat hien trong chuoi.");
    
    return ;
}

void Q9()
{
    fflush(stdin);
    char chuoi[50];
	char chuoi_con[50];
	
	printf("Nhap vao chuoi: ");
	fgets(chuoi, sizeof(chuoi), stdin);
	xoaXuongDong(chuoi);
	
	printf("Nhap vao chuoi can tim: ");
	fgets(chuoi_con, sizeof(chuoi_con), stdin);
	xoaXuongDong(chuoi_con);
	
	char *kq = strstr(chuoi, chuoi_con);
	if(kq!=NULL){
		printf("Tim thay chuoi con!");
		printf("\n");
		printf("%s", kq);
	}else{
		printf("Khong tim thay chuoi con!");
	}
}


void Q10()
{
	fflush(stdin);
	char str1[SIZE], str2[SIZE], str3[SIZE], pos;

	printf("Enter the first string: ");
	fgets(str1, SIZE, stdin);
	printf("Enter the second string: ");
	fgets(str2, SIZE, stdin);

	printf("Enter the insert position: ");
	scanf("%d", &pos);

	int l1 = getLength(str1), l2 = getLength(str2), i, j = 0;

	for (i = 0; i < l1 + l2; i ++)
		if (i < pos)
			str3[i] = str1[i];
		else if (i < pos + l2)
		{
			str3[i] = str2[j];
			j ++;
		}
		else
		{
			str3[i] = str1[pos];
			pos ++;
		}

	for (i = 0; i < l1 + l2; i ++)
		printf("%c", str3[i]);
}

void Q11()
{
    fflush(stdin);
    char x[SIZE], x1[SIZE];
    printf("\nBai 4: nhap chuoi can xu li:");
    fgets(x, SIZE, stdin);
    printf("mang vua nhap la:%s\n", x);
    int dai = strlen(x);
    int n, vt;
    printf("\nNhap vi tri can xoa: ");
    scanf("%d", &vt);
    printf("\nnhap so luong can xoa: ");
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        for (int i = vt; i < dai - 2; i++)
        {
            x[i] = x[i + 1];
        }
        dai--;
    }
    char stringphu[SIZE];
    for (int i = 0; i <dai-1;i++){
        stringphu[i] = x[i];
    }
    printf("mang sao khi xoa la:%s\n", stringphu);

}
