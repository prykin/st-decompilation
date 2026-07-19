
int __thiscall
FUN_0069b530(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
            int *param_6,int *param_7)

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
  int *local_98;
  int *local_94;
  int local_90;
  int local_80;
  int local_34;
  int local_2c;
  int local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0079d7f8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_2c = 0;
  local_80 = 0;
  iVar2 = (param_4 - param_2) + 1;
  iVar9 = (param_5 - param_3) + 1;
  iVar5 = iVar9 * iVar2;
  local_8 = 0;
  iVar8 = *(int *)((int)this + 0x5847);
  ExceptionList = &local_14;
  Library::MSVCRT::FUN_0072da40();
  local_8 = 0xffffffff;
  local_34 = 0;
  if (0 < iVar8) {
    local_90 = 0;
    do {
      iVar8 = *(int *)((int)this + 0x582f);
      if (param_5 < iVar9) {
        local_94 = (int *)(&stack0xffffff5c + (iVar5 * param_5 + local_90) * 4);
        iVar7 = param_5;
        do {
          if (0 < iVar2) {
            iVar3 = ((iVar7 + param_3) * *(int *)((int)this + 0x5833) + local_34 * iVar8 + param_2)
                    * 2;
            piVar4 = local_94;
            iVar6 = iVar2;
            do {
              *piVar4 = (int)*(short *)(iVar3 + *(int *)((int)this + 0x584f));
              iVar3 = iVar3 + 2;
              piVar4 = piVar4 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          iVar7 = iVar7 + 1;
          local_94 = local_94 + iVar5;
        } while (iVar7 < iVar9);
      }
      local_34 = local_34 + 1;
      local_90 = local_90 + iVar5;
    } while (local_34 < *(int *)((int)this + 0x5847));
  }
  if (local_34 < *(int *)((int)this + 0x5847)) {
    do {
      iVar8 = local_34 * iVar5;
      local_24 = iVar8;
      for (iVar9 = param_3; iVar9 <= param_5; iVar9 = iVar9 + 1) {
        if (param_3 != iVar9) {
          iVar8 = iVar8 + iVar2;
          local_24 = iVar8;
        }
        if (param_2 <= param_4) {
          iVar6 = 0;
          local_98 = (int *)(&stack0xffffff5c + iVar8 * 4);
          iVar7 = param_2;
          do {
            iVar3 = *(int *)((int)this + 0x5833);
            if ((((iVar7 < iVar3) && (iVar7 + 1 < iVar3)) && (iVar9 < iVar3)) && (iVar9 + 1 < iVar3)
               ) {
              iVar1 = iVar6 + 1 + iVar8;
              iVar3 = iVar6 + iVar2 + iVar8;
              iVar8 = iVar6 + 1 + iVar2 + iVar8;
              if (*local_98 == 1) {
                if (((*(int *)(&stack0xffffff5c + iVar1 * 4) == 1) &&
                    (*(int *)(&stack0xffffff5c + iVar3 * 4) == 1)) &&
                   (*(int *)(&stack0xffffff5c + iVar8 * 4) == 1)) {
                  *local_98 = 4;
                  *(undefined4 *)(&stack0xffffff5c + iVar1 * 4) = 4;
                  *(undefined4 *)(&stack0xffffff5c + iVar3 * 4) = 4;
                  *(undefined4 *)(&stack0xffffff5c + iVar8 * 4) = 4;
                  local_80 = local_80 + 1;
                }
                else {
                  local_2c = local_2c + 1;
                }
              }
            }
            iVar7 = iVar7 + 1;
            local_98 = local_98 + -1;
            iVar6 = iVar6 + -1;
            iVar8 = local_24;
          } while (iVar7 <= param_4);
        }
      }
      if (local_34 == 0) {
        *param_6 = local_2c;
        *param_7 = local_80;
      }
      else {
        param_6[local_34] = local_2c - param_6[local_34 + -1];
        param_7[local_34] = local_80 - param_7[local_34 + -1];
      }
      local_34 = local_34 + 1;
    } while (local_34 < *(int *)((int)this + 0x5847));
  }
  ExceptionList = local_14;
  return local_80 + local_2c;
}

