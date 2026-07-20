
int __cdecl FUN_0057ba30(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  short local_6;
  
  pvVar4 = param_1;
  local_24 = 0;
  local_1c = (param_2 + -1) / 0xc9 + 1;
  if (param_1 == (void *)0x0) {
    return 0;
  }
  thunk_FUN_00416270(param_1,(undefined2 *)((int)&param_1 + 2),(int *)((int)&param_2 + 2),
                     (int *)&local_6);
  local_18 = param_2._2_2_ + 1 + local_1c;
  local_14 = param_2._2_2_ - local_1c;
  local_c = param_1._2_2_ - local_1c;
  local_10 = param_1._2_2_ + 1 + local_1c;
  iVar5 = local_6 - local_1c;
  local_1c = local_6 + 1 + local_1c;
  if (local_14 < 0) {
    local_14 = 0;
  }
  if (local_c < 0) {
    local_c = 0;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  if (SHORT_007fb242 < local_18) {
    local_18 = (int)SHORT_007fb242;
  }
  if (SHORT_007fb240 < local_10) {
    local_10 = (int)SHORT_007fb240;
  }
  if (4 < local_1c) {
    local_1c = 4;
  }
  for (; iVar3 = local_14, iVar5 < local_1c; iVar5 = iVar5 + 1) {
    for (; iVar2 = local_c, iVar3 < local_18; iVar3 = iVar3 + 1) {
      for (; iVar2 < local_10; iVar2 = iVar2 + 1) {
        sVar8 = (short)iVar2;
        if ((((-1 < sVar8) && (sVar8 < SHORT_007fb240)) && (sVar7 = (short)iVar3, -1 < sVar7)) &&
           (((sVar7 < SHORT_007fb242 && (sVar6 = (short)iVar5, -1 < sVar6)) &&
            ((sVar6 < SHORT_007fb244 &&
             (iVar1 = *(int *)(DAT_007fb248 +
                              ((int)sVar6 * (int)SHORT_007fb246 + (int)sVar7 * (int)SHORT_007fb240 +
                              (int)sVar8) * 8), iVar1 != 0)))))) {
          local_24 = local_24 + 1;
          thunk_FUN_0057b990(*(undefined4 *)((int)pvVar4 + 0x24),DAT_007e6620,iVar1,
                             (short)*(undefined4 *)((int)pvVar4 + 0x25e),
                             *(undefined2 *)((int)pvVar4 + 0x262),0xac,0x110);
        }
      }
    }
  }
  return local_24;
}

