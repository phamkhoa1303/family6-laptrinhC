// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// #define SIZE 100

// void Continues(int *z)
// {
//     printf("\nBan co muon tiep tuc? (yes(1)/no(0):");
//     scanf("%d", &*z);
//     if (*z == 0)
//     {
//         printf("\nbyebye\n\n");
//     }
// }

// void Q1()
// {
// }

// void Q2()
// {
// }

// void Q3()
// {
// }

// //   start khoa cau 4 va cau 11
// char *delete_space(char *str, char *ketqua);
// void Q4();
// void Q11();
// //        end khoa

// void Q5()
// {
// }

// int *position (char *str[], char *c)
// {
// 	int i;
// 	int po = 0;
// 	for (i=0; i< strlen(str) - 1 ; i++)
// 	{
// 		if (str[i] == c)
// 		{
// 			po	= i+1;
// 			break;
// 		}
// 	}
// 	return po;
// }

// int Q6(char str[],char c)
// {
// 	printf("Input a string and check whether a character appears or not.\n");
// 	printf("If yes, return the first position.\n");


// 	printf("Moi nhap mot chuoi co chieu dai nho hon %d: ", SIZE);
// 	fgets(str, SIZE, stdin);


// 	printf("Moi nhap ki tu ban muon tim: ");
// 	scanf("%c", &c);

// 	if (position(str,c) == 0)
// 	{
// 		printf("Ki tu %c khong xuat hien trong chuoi %s\n", c, str);
// 	} else
// 	{
// 		printf("Ki tu %c xuat hien tai vi tri thu %d trong chuoi %s \n", c, position(str,c), str);
// 	}


// 	return 0;
// }




// void Q7()
// {
// }

// void Q8()
// {
// }

// void Q9()
// {
// }

// void Q10()
// {
// }

// int main()
// {
//     int z;

//     do
//     {
//         printf("\n\t\t\t\t\t\t Phuong phap lap trinh_N16T01_HK1_2122_501042 \n");
//         printf("\n\t\t\t\t\t BAI TAP NHOM 6 LAB5 \n");
//         printf("\nChuong trinh gom cac bai tap sau: ");
//         printf("\n0. Ket thuc");
//         printf("\n1: Tinh 5 bieu thuc");
//         printf("\n2: Tim phan tu lon nhat trong mang");
//         printf("\n3: Tim phan tu be nhat trong mang");
//         printf("\n4: Chinh lai chuoi viet hoa chu dau va xoa khoang trang thua");
//         printf("\n5: Tinh tong cac phan tu am trong mang");
//         printf("\n6: Tinh tong cac phan tu chan trong mang");
//         printf("\n7: Dao nguoc mang ma khong su dung mang khac");
//         printf("\n8: Xoa phan tu o vi tri x");
//         printf("\n9: Dem tong so phan tu trung lap trong mot mang");
//         printf("\n10: Xoa tat ca cac phan tu trung lap khoi mot mang");
//         printf("\n11: Nhap chuoi, vi tri xoa ki tu va so luong ki tu can xoa.");
//         printf("\n\t\tMoi ban cac so tren (Vui long chon dung neu khong se bi loi chuong trinh): \t");
//         scanf("%d", &z);

//         switch (z)
//         {
//         case 0:
//             printf("\n\n\t\t\tKET THUC\n\n");
//             break;

//         case 1:
//             Q1();
//             break;

//         case 2:

//             Q2();
//             break;

//         case 3:

//             Q3();
//             break;

//         case 4:

//             Q4();
//             break;

//         case 5:

//             Q5();
//             break;

//         case 6:
//             Q6(str,c);
//             break;

//         case 7:

//             Q7();
//             break;

//         case 8:

//             Q8();
//             break;

//         case 9:

//             Q9();
//             break;

//         case 10:

//             Q10();
//             break;

//         case 11:

//             Q11();
//             break;
//         default:
//             printf("\n\n\t\t\t vui long chon lai.\n\n");
//         }

//         Continues(&z);

//     } while (z != 0);

//     return 0;
// }

// void Q4()
// {
//     fflush(stdin);
//     char x[SIZE], x1[SIZE];
//     printf("\nBai 4: nhap chuoi can xu li:");
//     fgets(x, SIZE, stdin);
//     printf("mang vua nhap la:%s\n", x);
//     int dai = strlen(delete_space(x, x1));
//     printf("mang sau khi chinh sua:%s\n", delete_space(x, x1));
//     fflush(stdin);
// }
// char *delete_space(char *str, char *ketqua)
// {
//     int pos = 0;
//     const int len = strlen(str);
//     if (str[0] != ' ')
//     {
//         ketqua[pos++] = str[0] - 32;
//     }
//     for (int i = 1; i < len; i++)
//     {
//         char c = str[i];
//         if (c == ' ' && str[i + 1] == ' ')
//         {
//             continue;
//         }
//         if (str[i - 1] == ' ' && c != ' ' && i < len - 1)
//             ketqua[pos++] = c - 32;
//         else
//         {
//             char a = tolower(c);
//             ketqua[pos++] = a;
//         }
//     }
//     return ketqua;
// }
// void Q11()
// {
//     fflush(stdin);
//     char x[SIZE], x1[SIZE];
//     printf("\nBai 4: nhap chuoi can xu li:");
//     fgets(x, SIZE, stdin);
//     printf("mang vua nhap la:%s\n", x);
//     int dai = strlen(x);
//     int n, vt;
//     printf("\nNhap vi tri can xoa: ");
//     scanf("%d", &vt);
//     printf("\nnhap so luong can xoa: ");
//     scanf("%d", &n);
//     for (int j = 1; j <= n; j++)
//     {
//         for (int i = vt; i < dai - 2; i++)
//         {
//             x[i] = x[i + 1];
//         }
//         dai--;
//     }
//     char stringphu[SIZE];
//     for (int i = 0; i <dai-1;i++){
//         stringphu[i] = x[i];
//     }
//     printf("mang sao khi xoa la:%s\n", stringphu);

// }