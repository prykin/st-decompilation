
uint thunk_FUN_00496a90(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                       undefined4 *param_6)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = 0xffffffff;
  *param_6 = 0;
  uVar4 = 0;
  iVar1 = *(int *)(DAT_007fb270 + 0xc);
  iVar5 = DAT_007fb270;
  if (0 < iVar1) {
    do {
      if (uVar4 < *(uint *)(iVar5 + 0xc)) {
        piVar3 = (int *)(*(int *)(iVar5 + 8) * uVar4 + *(int *)(iVar5 + 0x1c));
      }
      else {
        piVar3 = (int *)0x0;
      }
      if ((piVar3[4] == param_5) &&
         (((uVar2 = uVar4, *piVar3 != param_1 || (piVar3[1] != param_2)) || (piVar3[2] != param_3)))
         ) {
        *param_6 = 1;
        iVar5 = DAT_007fb270;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar1);
  }
  return uVar2;
}

