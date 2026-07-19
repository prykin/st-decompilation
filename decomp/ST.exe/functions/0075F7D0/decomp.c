
void FUN_0075f7d0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int local_18;
  int *local_10;
  int local_c;
  int local_8;
  
  iVar1 = *(int *)((int)param_1 + 0x1ba);
  local_10 = (int *)(iVar1 + 0x20);
  iVar3 = Library::DKW::JPG::FUN_0075f8e0((int)param_1,local_10);
  piVar4 = (int *)(**(code **)(*param_1 + 8))(param_1,1,iVar3,param_1[0x1c]);
  local_c = 0;
  iVar5 = iVar3;
  piVar11 = piVar4;
  if (0 < param_1[0x1c]) {
    do {
      iVar2 = *local_10;
      iVar6 = iVar5 / iVar2;
      local_18 = 0;
      if (0 < iVar2) {
        local_8 = 0;
        do {
          iVar7 = FUN_0075f9d0(param_1,local_c,local_18,iVar2 + -1);
          for (iVar9 = local_8; iVar9 < iVar3; iVar9 = iVar9 + iVar5) {
            iVar8 = 0;
            if (0 < iVar6) {
              do {
                iVar10 = *piVar11 + iVar8;
                iVar8 = iVar8 + 1;
                *(char *)(iVar10 + iVar9) = (char)iVar7;
              } while (iVar8 < iVar6);
            }
          }
          local_18 = local_18 + 1;
          local_8 = local_8 + iVar6;
        } while (local_18 < iVar2);
      }
      local_10 = local_10 + 1;
      local_c = local_c + 1;
      iVar5 = iVar6;
      piVar11 = piVar11 + 1;
    } while (local_c < param_1[0x1c]);
    *(int **)(iVar1 + 0x10) = piVar4;
    *(int *)(iVar1 + 0x14) = iVar3;
    return;
  }
  *(int *)(iVar1 + 0x14) = iVar3;
  *(int **)(iVar1 + 0x10) = piVar4;
  return;
}

