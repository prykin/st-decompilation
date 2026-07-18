
void * thunk_FUN_004d85e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvStack_10;
  short sStack_a;
  short sStack_8;
  short sStack_6;
  
  if (DAT_007fa150 != 0) {
    *(undefined4 *)(DAT_007fa150 + 4) = 0;
    iVar1 = FUN_006b1190(DAT_007fa150,&pvStack_10);
    while (-1 < iVar1) {
      if ((((pvStack_10 != (void *)0x0) &&
           (thunk_FUN_004162b0(pvStack_10,&sStack_6,&sStack_8,&sStack_a), sStack_6 == param_1)) &&
          (sStack_8 == param_2)) && (sStack_a == param_3)) {
        return pvStack_10;
      }
      iVar1 = FUN_006b1190(DAT_007fa150,&pvStack_10);
    }
  }
  return (void *)0x0;
}

