
int __thiscall
FUN_0072ac20(void *this,byte *param_1,byte *param_2,uint *param_3,int param_4,int *param_5,
            int param_6,undefined1 param_7,int param_8,int param_9,uint param_10)

{
  int iVar1;
  int iVar2;

  if (1 < param_4) {
    iVar1 = param_4 + -1;
    param_4 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = FUN_007297e0(this,param_1,param_2,param_3,param_3 + 4,param_5,param_6,param_7,
                             param_8,param_9,param_10);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_4 = param_4 + 1;
        param_3 = param_3 + 4;
      } while (param_4 < iVar1);
    }
  }
  return 0;
}

