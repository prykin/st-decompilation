
undefined4 __thiscall
thunk_FUN_00697af0(void *this,int param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iVar1 = *(int *)(param_1 + 0x15);
  iStack_14 = 0;
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0xc);
    uVar7 = 0;
    param_1 = 0;
    iStack_c = 0;
    iStack_10 = 0;
    iStack_8 = 0;
    if (0 < (int)uVar2) {
      do {
        iVar5 = 0;
        if (uVar7 < uVar2) {
          iVar5 = *(int *)(iVar1 + 8) * uVar7 + *(int *)(iVar1 + 0x1c);
        }
        if (*(char *)(iVar5 + 1) == '\0') {
          iVar6 = *(int *)(iVar5 + 2) / *(int *)((int)this + 0x5833);
          iVar5 = *(int *)(iVar5 + 2) % *(int *)((int)this + 0x5833);
          iStack_14 = iStack_14 + 1;
          iVar3 = iVar5;
          iVar4 = iVar6;
          if (uVar7 != 0) {
            if (iVar5 < param_1) {
              param_1 = iVar5;
            }
            if (iVar6 < iStack_c) {
              iStack_c = iVar6;
            }
            if (iStack_10 < iVar5) {
              iStack_10 = iVar5;
            }
            iVar5 = param_1;
            iVar3 = iStack_10;
            iVar4 = iStack_c;
            if (iVar6 <= iStack_8) goto LAB_00697b99;
          }
          iStack_c = iVar4;
          iStack_10 = iVar3;
          param_1 = iVar5;
          iStack_8 = iVar6;
        }
LAB_00697b99:
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar2);
      if ((iStack_14 != 0) &&
         (iStack_14 == ((iStack_8 - iStack_c) + 1) * ((iStack_10 - param_1) + 1))) {
        *param_2 = param_1;
        *param_3 = iStack_c;
        *param_4 = iStack_10;
        *param_5 = iStack_8;
        return 1;
      }
    }
  }
  return 0;
}

