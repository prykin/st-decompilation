
void * FUN_004d85e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  void *local_10;
  short local_a;
  short local_8;
  short local_6;
  
  if (DAT_007fa150 != 0) {
    *(undefined4 *)(DAT_007fa150 + 4) = 0;
    iVar1 = FUN_006b1190(DAT_007fa150,&local_10);
    while (-1 < iVar1) {
      if ((((local_10 != (void *)0x0) &&
           (thunk_FUN_004162b0(local_10,&local_6,&local_8,&local_a), local_6 == param_1)) &&
          (local_8 == param_2)) && (local_a == param_3)) {
        return local_10;
      }
      iVar1 = FUN_006b1190(DAT_007fa150,&local_10);
    }
  }
  return (void *)0x0;
}

