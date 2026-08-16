#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0069f160(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5_mg0;
  uint uVar6;
  uint uVar4;
  uint local_EAX_583;
  uint uVar10_mg2;
  uint uVar5;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint auStack_d0 [2];
  uint auStack_c8 [2];
  int local_a8;
  int local_a4;
  int local_98;
  int local_78;
  int local_74;
  int local_68;
  int local_58;
  int local_54 [10];
  int local_2c;
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
  uVar9 = (param_3 + 1) * param_1 * param_2;
  iVar4 = param_1 * param_2;
  if (100 < param_4) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = 100;
  }
  auStack_c8[1] = 0x69f1c0;
  ExceptionList = &local_14;
  _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
  uVar7 = uVar9 * 2;
  auStack_c8[1] = 0x69f1d6;
  iVar1 = -(uVar7 + 3 & 0xfffffffc);
  iVar3 = iVar1 + -0xc0;
  *(undefined4 *)((int)auStack_c8 + iVar1 + 4) = 0x69f1ec;
  iVar2 = -(uVar7 + 3 & 0xfffffffc);
  local_1c = &stack0xffffff40 + iVar2 + iVar1;
  local_8 = 0xffffffff;
  puVar14 = (undefined4 *)(&stack0xffffff40 + iVar1);
  for (uVar5 = (uVar9 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar14 = 0;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  *(int *)((int)auStack_c8 + iVar2 + iVar1 + 4) = param_3 + 1;
  *(undefined1 **)((int)auStack_c8 + iVar2 + iVar1 + -0xc0 + 0xc0) = &stack0xffffff40 + iVar1;
  *(undefined4 *)((int)auStack_d0 + iVar2 + iVar1 + 4) = 0x69f21d;
  CGenerate::sub_0069ADA0
            (this,*(int *)((int)auStack_c8 + iVar2 + iVar1 + -0xc0 + 0xc0),
             *(int *)((int)auStack_c8 + iVar2 + iVar1 + 4));
  puVar14 = (undefined4 *)(&stack0xffffff40 + iVar2 + iVar3 + 0xc0);
  for (uVar9 = (uVar9 & 0x7fffffff) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar14 = 0;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  *(int *)((int)auStack_c8 + iVar2 + iVar1 + -0xc0 + 0xc4) = param_1;
  *(undefined4 *)((int)auStack_c8 + iVar2 + iVar1) = 0x69f241;
  CGenerate::sub_006948E0(this,*(int *)((int)auStack_c8 + iVar2 + iVar1 + -0xc0 + 0xc4));
  *(undefined4 *)((int)auStack_c8 + iVar2 + iVar1 + 4) = 0x69f246;
  _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
  if (1 < param_3) {
    iVar12 = iVar4 * 2;
    local_98 = param_3 + -1;
    iVar17 = iVar4;
    do {
      if (-1 < param_2) {
        local_a4 = param_2 + 1;
        iVar11 = iVar12;
        iVar16 = iVar17;
        do {
          if (-1 < param_1) {
            local_a8 = param_1 + 1;
            iVar10 = iVar11;
            iVar15 = iVar16;
            do {
              if (*(short *)(&stack0xffffff40 + iVar10 + iVar1) == 0) {
                *(int **)((int)auStack_c8 + iVar2 + iVar1 + 4) = local_54;
                *(int *)((int)auStack_c8 + iVar2 + iVar1 + -0xc0 + 0xc0) = iVar15;
                *(undefined4 *)((int)auStack_d0 + iVar2 + iVar1 + 4) = 0x69f2b9;
                iVar5_mg0 = CGenerate::sub_00696400
                                      (this,*(int *)((int)auStack_c8 + iVar2 + iVar1 + -0xc0 + 0xc0)
                                       ,*(int *)((int)auStack_c8 + iVar2 + iVar1 + 4));
                if (0 < iVar5_mg0) {
                  piVar8 = local_54;
                  do {
                    if (*(short *)(&stack0xffffff40 + *piVar8 * 2 + iVar1) != 0) {
                      *(short *)(&stack0xffffff40 + iVar10 + iVar2 + iVar3 + 0xc0) =
                           *(short *)(&stack0xffffff40 + iVar10 + iVar2 + iVar3 + 0xc0) + 1;
                    }
                    piVar8 = piVar8 + 1;
                    iVar5_mg0 = iVar5_mg0 + -1;
                  } while (iVar5_mg0 != 0);
                }
              }
              iVar10 = iVar10 + 2;
              iVar15 = iVar15 + 1;
              local_a8 = local_a8 + -1;
            } while (local_a8 != 0);
          }
          iVar11 = iVar11 + param_1 * 2;
          iVar16 = iVar16 + param_1;
          local_a4 = local_a4 + -1;
        } while (local_a4 != 0);
      }
      iVar17 = iVar17 + iVar4;
      iVar12 = iVar12 + iVar4 * 2;
      local_98 = local_98 + -1;
    } while (local_98 != 0);
  }
  *(undefined4 *)((int)auStack_c8 + iVar2 + iVar1 + 4) = 0x69f342;
  _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
  local_74 = 0;
  local_78 = 0;
  iVar12 = (STField<int *>(this,8))[1];
  iVar17 = *STField<int *>(this,8);
  if (0 < param_4) {
    do {
      if (param_4 * 100 <= local_74) break;
      *(undefined4 *)((int)auStack_c8 + iVar2 + iVar1 + 4) = 0x69f397;
      uVar6 = Library::MSVCRT::FUN_0072e6c0();
      *(undefined4 *)((int)auStack_c8 + iVar2 + iVar1 + 4) = 0x69f3a2;
      uVar4 = Library::MSVCRT::FUN_0072e6c0();
      iVar11 = (int)uVar4 % param_1;
      *(undefined4 *)((int)auStack_c8 + iVar2 + iVar1 + 4) = 0x69f3ac;
      local_EAX_583 = Library::MSVCRT::FUN_0072e6c0();
      local_2c = (int)local_EAX_583 % param_2;
      local_68 = 0;
      if (0 < param_3) {
        iVar10 = local_2c * param_1;
        iVar16 = (int)uVar6 % param_3;
        do {
          iVar15 = iVar16 + 1;
          iVar13 = iVar15 * iVar4 + iVar10 + iVar11;
          if ((*(short *)(&stack0xffffff40 + iVar13 * 2 + iVar1) == 0) &&
             (PTR_00853dd4
              [iVar11 + iVar16 * iVar12 * iVar17 * 4 + *STField<int *>(this,8) * local_2c * 2] ==
              0)) {
            *(undefined4 *)((int)auStack_c8 + iVar2 + iVar1 + 4) = 0x69f424;
            uVar10_mg2 = Library::MSVCRT::FUN_0072e6c0();
            if (1 < (int)uVar10_mg2 %
                    (*(short *)(&stack0xffffff40 + iVar13 * 2 + iVar2 + iVar3 + 0xc0) + 3)) {
              *(int *)((int)auStack_c8 + iVar2 + iVar1 + 4) = iVar16;
              *(int *)((int)auStack_c8 + iVar2 + iVar1) = local_2c;
              *(int *)((int)auStack_d0 + iVar2 + iVar1 + -0xc0 + 0xc4) = iVar11;
              *(undefined4 *)((int)auStack_d0 + iVar2 + iVar1) = 0x69f463;
              thunk_FUN_0069f5c0(this,*(uint *)((int)auStack_d0 + iVar2 + iVar1 + -0xc0 + 0xc4),
                                 *(uint *)((int)auStack_c8 + iVar2 + iVar1),
                                 *(uint *)((int)auStack_c8 + iVar2 + iVar1 + 4));
              *(undefined2 *)(&stack0xffffff40 + iVar13 * 2 + iVar1) = 0xffff;
              local_58 = local_58 + 1;
              local_78 = local_78 + 1;
              break;
            }
          }
          if (param_3 <= iVar15) {
            iVar15 = 0;
          }
          local_68 = local_68 + 1;
          iVar16 = iVar15;
        } while (local_68 < param_3);
      }
      local_74 = local_74 + 1;
    } while (local_78 < param_4);
  }
  *(undefined4 *)((int)auStack_c8 + iVar2 + iVar1 + 4) = 0x69f486;
  _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
  ExceptionList = local_14;
  return local_58;
}

