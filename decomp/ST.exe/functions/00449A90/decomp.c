
uint FUN_00449a90(undefined4 param_1,short param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_18;
  int local_14;
  int local_c;
  int local_8;
  
  iVar4 = *(int *)((int)&DAT_007f5816 + (char)param_1 * 0xa62);
  if (((iVar4 != 0) && (local_c = *(int *)(iVar4 + 0xc), local_c != 0)) &&
     (uVar2 = 0, local_8 = iVar4, 0 < local_c)) {
    do {
      FUN_006acc70(iVar4,uVar2,&local_18);
      if (((local_14 != 0) && (iVar1 = *(int *)(local_14 + 0xc), iVar1 != 0)) &&
         (uVar3 = 0, iVar4 = local_8, 0 < iVar1)) {
        do {
          FUN_006acc70(local_14,uVar3,(undefined4 *)((int)&param_1 + 2));
          if (param_1._2_2_ == param_2) {
            return uVar2;
          }
          uVar3 = uVar3 + 1;
          iVar4 = local_8;
        } while ((int)uVar3 < iVar1);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < local_c);
  }
  return 0xffffffff;
}

