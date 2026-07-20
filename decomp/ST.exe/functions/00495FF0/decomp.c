
undefined4 FUN_00495ff0(short param_1,short param_2,short param_3,uint param_4,int param_5)

{
  int iVar1;
  
  if ((((-1 < param_1) && (param_1 < SHORT_007fb240)) && (-1 < param_2)) &&
     (((param_2 < SHORT_007fb242 && (-1 < param_3)) && (param_3 < SHORT_007fb244)))) {
    iVar1 = (param_4 & 0xff) +
            ((int)SHORT_007fb240 * (int)param_2 + (int)SHORT_007fb246 * (int)param_3 + (int)param_1)
            * 2;
    if (*(int *)(DAT_007fb248 + iVar1 * 4) != param_5) {
      return 0xffffffff;
    }
    *(undefined4 *)(DAT_007fb248 + iVar1 * 4) = 0;
    *(undefined2 *)(param_5 + 0x5b) = 0xffff;
    *(undefined2 *)(param_5 + 0x5d) = 0xffff;
    *(undefined2 *)(param_5 + 0x5f) = 0xffff;
  }
  return 0;
}

