
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0069f160(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int local_a8;
  int local_a4;
  int local_98;
  int local_78;
  int local_74;
  int local_68;
  int local_58;
  int local_54 [10];
  uint local_2c;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d828;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff40;
  local_58 = 0;
  uVar6 = (param_3 + 1) * param_1 * param_2;
  iVar1 = param_1 * param_2;
  if (100 < param_4) {
    param_4 = 100;
  }
  ExceptionList = &local_14;
  _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
  local_8 = 0;
  Library::MSVCRT::FUN_0072da40();
  local_1c = &stack0xffffff40;
  Library::MSVCRT::FUN_0072da40();
  local_8 = 0xffffffff;
  puVar10 = (undefined4 *)&stack0xffffff40;
  local_1c = &stack0xffffff40;
  for (uVar4 = (uVar6 & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  for (uVar4 = uVar6 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar10 = 0;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  thunk_FUN_0069ada0(this,(int)&stack0xffffff40,param_3 + 1);
  puVar10 = (undefined4 *)&stack0xffffff40;
  for (uVar4 = (uVar6 & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  for (uVar6 = uVar6 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar10 = 0;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  thunk_FUN_006948e0(this,param_1);
  _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
  if (1 < param_3) {
    iVar9 = iVar1 * 2;
    local_98 = param_3 + -1;
    iVar13 = iVar1;
    do {
      if (-1 < param_2) {
        local_a4 = param_2 + 1;
        iVar8 = iVar9;
        iVar12 = iVar13;
        do {
          if (-1 < param_1) {
            local_a8 = param_1 + 1;
            iVar7 = iVar8;
            iVar11 = iVar12;
            do {
              if ((*(short *)(&stack0xffffff40 + iVar7) == 0) &&
                 (iVar2 = thunk_FUN_00696400(this,iVar11,(int)local_54), 0 < iVar2)) {
                piVar5 = local_54;
                do {
                  if (*(short *)(&stack0xffffff40 + *piVar5 * 2) != 0) {
                    *(short *)(&stack0xffffff40 + iVar7) = *(short *)(&stack0xffffff40 + iVar7) + 1;
                  }
                  piVar5 = piVar5 + 1;
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
              }
              iVar7 = iVar7 + 2;
              iVar11 = iVar11 + 1;
              local_a8 = local_a8 + -1;
            } while (local_a8 != 0);
          }
          iVar8 = iVar8 + param_1 * 2;
          iVar12 = iVar12 + param_1;
          local_a4 = local_a4 + -1;
        } while (local_a4 != 0);
      }
      iVar13 = iVar13 + iVar1;
      iVar9 = iVar9 + iVar1 * 2;
      local_98 = local_98 + -1;
    } while (local_98 != 0);
  }
  _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
  local_74 = 0;
  local_78 = 0;
  iVar9 = (*(int **)((int)this + 8))[1];
  iVar13 = **(int **)((int)this + 8);
  if (0 < param_4) {
    do {
      if (param_4 * 100 <= local_74) break;
      uVar6 = Library::MSVCRT::FUN_0072e6c0();
      uVar4 = Library::MSVCRT::FUN_0072e6c0();
      uVar4 = (int)uVar4 % param_1;
      local_2c = Library::MSVCRT::FUN_0072e6c0();
      local_2c = (int)local_2c % param_2;
      local_68 = 0;
      if (0 < param_3) {
        iVar8 = local_2c * param_1;
        uVar6 = (int)uVar6 % param_3;
        do {
          uVar14 = uVar6 + 1;
          iVar12 = uVar14 * iVar1 + iVar8 + uVar4;
          if (((*(short *)(&stack0xffffff40 + iVar12 * 2) == 0) &&
              (*(short *)(DAT_00853dd4 +
                         (uVar4 + uVar6 * iVar9 * iVar13 * 4 +
                         **(int **)((int)this + 8) * local_2c * 2) * 2) == 0)) &&
             (uVar3 = Library::MSVCRT::FUN_0072e6c0(),
             1 < (int)uVar3 % (*(short *)(&stack0xffffff40 + iVar12 * 2) + 3))) {
            thunk_FUN_0069f5c0(this,uVar4,local_2c,uVar6);
            *(undefined2 *)(&stack0xffffff40 + iVar12 * 2) = 0xffff;
            local_58 = local_58 + 1;
            local_78 = local_78 + 1;
            break;
          }
          if (param_3 <= (int)uVar14) {
            uVar14 = 0;
          }
          local_68 = local_68 + 1;
          uVar6 = uVar14;
        } while (local_68 < param_3);
      }
      local_74 = local_74 + 1;
    } while (local_78 < param_4);
  }
  _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
  ExceptionList = local_14;
  return local_58;
}

