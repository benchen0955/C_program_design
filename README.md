
# C_program_design
陳德來
C程式設計入門與演算法

OOP Ecapsulation inheritance polymorphism
封裝Ecapsulation 將資料隱藏(data hiding),透過方法來操作物件 封裝資料及方法
繼承inheritance 新類別接收一個己存在類別的資料與方法,可新增或修改繼承方法(override覆載) 被繼承為父類別base class 繼承為子類別derived class
                單一繼承(可多個子類別 兄弟類別),多重繼承(多個父類)
多形polymorphism 同名異式 在繼承後,新增或修改基礎類別的資料型態及方法

C/C++教學範本 洪錦魁
extern用法
ch7_9.c
#include<stdio.h>
#include<stdlib.h>
int f(int i);
int v;
int main()
{
    int i=2;
    v=3;
    printf("i=%d, v=%d, f()=%d\n",i,v,f(i));
    return 0;
}
ch79.c
int f(int i)
{
    extern int v;
    return (v+i+1);
}

//gcc ch7_9.c ch79.c -o ch7_9.a


union 可使用不同的資料型態使用相同的記憶位置
union utype 
{
  int i;
  char ch;  
}data;
4byte 32 bit
1byte 1byte 1byte 1byte
|     |     |     | ch |

struct stype 
{
  int i;
  char ch;
}data;
4byte 32 bit
1byte 1byte 1byte 1byte 1byte
|     |     |     |    | ch |

emum computer
{
  basic,assembly,cobol=100,ada
}language;
basic,assembly,cobol=100,ada分別為0,1,100,101
}

isalnum() 判斷是否為字母或數字(不含空格)
isalpha() 判斷是否為字母或數字(含空格)
isascii() 判斷是否為ASCII字元(0~127)
iscntrl() 判斷是否為控制字元
isdigit() 判斷是否為數字字元
isgraph() 判斷是為可顯示字元(33~126)
islower() 判斷是否為小寫英文字元
isprint() 判斷是否為可列印字元
ispunct() 判斷是否為特別符號
isspace() 判斷是否為blank newline horizontal or vertical tab
isupper() 判斷是否為大寫字元
isxdigit() 判斷是否為16進位數字字元
tolower() 英文字母大寫改小寫
toupper() 英文字母小寫改大寫

ch12_6.c
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    for (i=0;i<256;i++)
      if (isgraph(i) !=0)
        printf("%4d %c\t",i,i);
    system("pause");
    return 0;
}

char *gcvt(double value, int digits, char *buffer);
value 欲轉換浮點數
digits 轉換有效位數
*buffer 儲存字串處
