
void FUN_006db310(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  Library::MSVCRT::FUN_0072da40();
  local_18 = -(param_7 >> 1);
  local_10 = -1;
  for (local_14 = 0; local_14 < param_3; local_14 = local_14 + 1) {
    for (; local_18 < 1; local_18 = local_18 + param_3) {
      local_10 = local_10 + 1;
    }
    local_18 = local_18 - param_7;
    *(int *)(&stack0xffffffd4 + local_14 * 4) = local_10;
  }
  local_c = param_4;
  local_1c = -(param_8 >> 1);
  iVar10 = param_5 - param_6;
  do {
    if (local_1c < 1) {
      do {
        iVar10 = iVar10 + param_6;
        bVar11 = SCARRY4(local_1c,param_4);
        local_1c = local_1c + param_4;
      } while (local_1c == 0 || bVar11 != local_1c < 0);
    }
    iVar4 = param_3;
    piVar9 = (int *)&stack0xffffffd4;
    if (((uint)param_1 & 3) != 0) {
      iVar6 = param_3;
      uVar7 = (uint)((byte)param_1 & 3 ^ 3);
      piVar9 = (int *)&stack0xffffffd4;
      do {
        iVar4 = *piVar9;
        piVar9 = piVar9 + 1;
        *(undefined1 *)param_1 = *(undefined1 *)(iVar10 + iVar4);
        param_1 = (undefined4 *)((int)param_1 + 1);
        iVar4 = iVar6 + -1;
        if (iVar4 == 0 || iVar6 < 1) goto LAB_006db41f;
        uVar8 = uVar7 - 1;
        bVar11 = 0 < (int)uVar7;
        iVar6 = iVar4;
        uVar7 = uVar8;
      } while (uVar8 != 0 && bVar11);
    }
    iVar5 = iVar4 + -4;
    iVar6 = iVar5;
    if (3 < iVar4) {
      do {
        piVar1 = piVar9 + 3;
        piVar2 = piVar9 + 2;
        piVar3 = piVar9 + 1;
        iVar4 = *piVar9;
        piVar9 = piVar9 + 4;
        *param_1 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar10 + *piVar1),
                                              *(undefined1 *)(iVar10 + *piVar2)),
                                     *(undefined1 *)(iVar10 + *piVar3)),
                            *(undefined1 *)(iVar10 + iVar4));
        param_1 = param_1 + 1;
        iVar5 = iVar6 + -4;
        bVar11 = 3 < iVar6;
        iVar6 = iVar5;
      } while (iVar5 != 0 && bVar11);
    }
    iVar4 = iVar5 + 4;
    if (iVar5 + 4 != 0) {
      do {
        iVar6 = *piVar9;
        piVar9 = piVar9 + 1;
        *(undefined1 *)param_1 = *(undefined1 *)(iVar10 + iVar6);
        param_1 = (undefined4 *)((int)param_1 + 1);
        iVar6 = iVar4 + -1;
        bVar11 = 0 < iVar4;
        iVar4 = iVar6;
      } while (iVar6 != 0 && bVar11);
    }
LAB_006db41f:
    param_1 = (undefined4 *)((int)param_1 + (param_2 - param_3));
    local_1c = local_1c - param_8;
    iVar4 = local_c + -1;
    bVar11 = local_c < 1;
    local_c = iVar4;
    if (iVar4 == 0 || bVar11) {
      return;
    }
  } while( true );
}

