#include<stdio.h>

union UnMiscFlag2
{
    int Word;
    struct {
        int  IsG:1;
        int  IsA:1;
        int  Re:1;
    } Bit;
};

int main()
{
  union UnMiscFlag2  MiscFlag2;

  printf("union==>IsG=>%d,IsA=>%d,Re=>%d\n",MiscFlag2.Bit.IsG,MiscFlag2.Bit.IsA,MiscFlag2.Bit.Re);
  MiscFlag2.Bit.IsG=1;
  MiscFlag2.Bit.IsA=1;
  MiscFlag2.Bit.Re=1;
  if((MiscFlag2.Bit.IsG&&MiscFlag2.Bit.IsA)&&MiscFlag2.Bit.Re)
  {
    printf("After set  union==>IsG=>%d,IsA=>%d,Re=>%d\n",MiscFlag2.Bit.IsG,MiscFlag2.Bit.IsA,MiscFlag2.Bit.Re);
  }
  MiscFlag2.Bit.IsG=0;
  MiscFlag2.Bit.IsA=0;
  MiscFlag2.Bit.Re=0;
  printf("After set  union==>IsG=>%d,IsA=>%d,Re=>%d\n",MiscFlag2.Bit.IsG,MiscFlag2.Bit.IsA,MiscFlag2.Bit.Re);

  return 0;
}
