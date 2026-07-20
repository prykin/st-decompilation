
int __cdecl FUN_0057ba30(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  short local_6;
  
  pvVar3 = param_1;
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
  iVar4 = local_6 - local_1c;
  local_1c = local_6 + 1 + local_1c;
  if (local_14 < 0) {
    local_14 = 0;
  }
  if (local_c < 0) {
    local_c = 0;
  }
  if (iVar4 < 0) {
    iVar4 = 0;
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
  for (; iVar2 = local_14, iVar4 < local_1c; iVar4 = iVar4 + 1) {
    for (; iVar1 = local_c, iVar2 < local_18; iVar2 = iVar2 + 1) {
      for (; iVar1 < local_10; iVar1 = iVar1 + 1) {
        sVar7 = (short)iVar1;
        if ((((-1 < sVar7) && (sVar7 < SHORT_007fb240)) && (sVar6 = (short)iVar2, -1 < sVar6)) &&
           (((sVar6 < SHORT_007fb242 && (sVar5 = (short)iVar4, -1 < sVar5)) &&
            ((sVar5 < SHORT_007fb244 &&
             (g_worldCells
              [(int)sVar5 * (int)SHORT_007fb246 + (int)sVar6 * (int)SHORT_007fb240 + (int)sVar7].
              objects[0] != (STWorldObject *)0x0)))))) {
          local_24 = local_24 + 1;
          thunk_FUN_0057b990(*(undefined4 *)((int)pvVar3 + 0x24),DAT_007e6620,
                             (int)g_worldCells
                                  [(int)sVar5 * (int)SHORT_007fb246 +
                                   (int)sVar6 * (int)SHORT_007fb240 + (int)sVar7].objects[0],
                             (short)*(undefined4 *)((int)pvVar3 + 0x25e),
                             *(undefined2 *)((int)pvVar3 + 0x262),0xac,0x110);
        }
      }
    }
  }
  return local_24;
}

