
void FUN_0075fa00(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  char local_10;
  int *local_c;
  int local_8;
  
  iVar1 = *(int *)((int)param_1 + 0x1ba);
  if (param_1[0x14] == 1) {
    local_8 = 0x1fe;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
  }
  else {
    local_8 = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  uVar3 = (**(code **)(*param_1 + 8))(param_1,1,local_8 + 0x100,param_1[0x1c]);
  *(undefined4 *)(iVar1 + 0x18) = uVar3;
  iVar4 = *(int *)(iVar1 + 0x14);
  iVar10 = 0;
  if (0 < param_1[0x1c]) {
    local_c = (int *)(iVar1 + 0x20);
    do {
      iVar6 = *local_c;
      iVar4 = iVar4 / iVar6;
      if (local_8 != 0) {
        *(int *)(*(int *)(iVar1 + 0x18) + iVar10 * 4) =
             *(int *)(*(int *)(iVar1 + 0x18) + iVar10 * 4) + 0xff;
      }
      iVar7 = 0;
      puVar2 = *(undefined1 **)(*(int *)(iVar1 + 0x18) + iVar10 * 4);
      iVar6 = iVar6 + -1;
      iVar5 = FUN_0075fb30(param_1,iVar10,0,iVar6);
      iVar8 = 0;
      do {
        while (iVar5 < iVar8) {
          iVar7 = iVar7 + 1;
          iVar5 = FUN_0075fb30(param_1,iVar10,iVar7,iVar6);
        }
        local_10 = (char)iVar4;
        puVar2[iVar8] = local_10 * (char)iVar7;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x100);
      if (local_8 != 0) {
        iVar6 = 1;
        puVar9 = puVar2;
        do {
          puVar9 = puVar9 + -1;
          iVar5 = iVar6 + 1;
          *puVar9 = *puVar2;
          puVar2[iVar6 + 0xff] = puVar2[0xff];
          iVar6 = iVar5;
        } while (iVar5 < 0x100);
      }
      iVar10 = iVar10 + 1;
      local_c = local_c + 1;
    } while (iVar10 < param_1[0x1c]);
  }
  return;
}

