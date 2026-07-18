
int * FUN_00751f30(undefined4 param_1,uint param_2)

{
  int *piVar1;
  DWORD DVar2;
  
  piVar1 = FUN_006aac10(0x3e);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  *(undefined4 *)((int)piVar1 + 0x26) = param_1;
  *(code **)((int)piVar1 + 0x36) = FUN_00751f90;
  DVar2 = FUN_006c7700(piVar1,param_2);
  if (DVar2 != 0) {
    FUN_006c7980(piVar1);
    FUN_006a5e40(DVar2,DAT_007ed77c,0x7f2b60,0x38);
    return (int *)0x0;
  }
  return piVar1;
}

