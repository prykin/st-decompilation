#include "../../pseudocode_runtime.h"


void __thiscall FUN_0069e4d0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint local_EAX_45;
  int iVar2;
  uint local_EAX_74;
  uint uVar2;
  uint local_EAX_356;
  uint uVar5;
  uint local_EAX_397;
  uint local_EAX_509;
  uint local_EAX_611;
  uint local_EAX_628;
  uint uVar4;
  uint local_EAX_985;
  uint local_EAX_1105;
  uint local_EAX_1189;
  uint uVar3;
  uint local_EAX_1261;
  uint local_EAX_1550;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined4 auStack_d0 [3];
  short asStack_c4 [18];
  int local_a0 [9];
  undefined2 auStack_7c [6];
  int local_70 [9];
  short asStack_4c [8];
  int local_3c [5];
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  void *local_18;
  int *local_14;
  int local_10;
  int local_c;
  int *local_8;

  piVar10 = local_70;
  local_18 = this;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_3c[2] = 0;
  local_3c[3] = 0;
  local_c = 0;
  local_10 = 0;
  do {
    local_EAX_45 = Library::MSVCRT::FUN_0072e6c0();
    iVar6 = (int)local_EAX_45 % 9 + -8 + local_c;
    iVar2 = FUN_006aff50(iVar6);
    local_EAX_74 = FUN_006aff5b(iVar6);
    uVar2 = Library::MSVCRT::FUN_0072e6c0();
    iVar6 = (int)uVar2 % 0x33 + 0xb4;
    iVar2 = (iVar6 * iVar2) / 10000;
    iVar9 = (int)(iVar6 * local_EAX_74) / 10000;
    iVar6 = iVar2 + param_2;
    iVar7 = iVar6 / 100;
    local_28 = param_3 + iVar9;
    iVar1 = local_28 / 100;
    if ((((0 < iVar7) && (iVar7 < param_4 + -1)) && (0 < iVar1)) && (iVar1 < param_5 + -1)) {
      iVar7 = iVar1 * param_4 + iVar7;
      local_14 = (int *)(param_1 + 6 + iVar7 * 0xe);
      if (*local_14 < 0) {
        local_1c = thunk_FUN_00696310(local_18,iVar7,param_4,local_a0,nullptr);
        iVar7 = 0;
        if (0 < local_1c) {
          local_8 = local_a0;
          do {
            if (*(int *)(param_1 + 2 + *local_8 * 0xe) != 0) goto LAB_0069e69c;
            iVar7 = iVar7 + 1;
            local_8 = local_8 + 1;
          } while (iVar7 < local_1c);
        }
        local_EAX_356 = Library::MSVCRT::FUN_0072e6c0();
        piVar10 = local_14;
        uVar5 = local_EAX_356 & 0x80000003;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
        }
        if (0 < (int)uVar5) {
          *(undefined4 *)((int)local_70 + local_10) = 1;
          *piVar10 = 0x3ef;
          local_EAX_397 = Library::MSVCRT::FUN_0072e6c0();
          thunk_FUN_006a0ae0(local_18,iVar6,local_28,0,0x3ef,local_EAX_397 % (DAT_007d934c - 2U));
          *(short *)((int)asStack_c4 + local_10) = (short)iVar2;
          *(short *)((int)asStack_c4 + local_10 + 2) = (short)iVar9;
        }
      }
    }
LAB_0069e69c:
    local_10 = local_10 + 4;
    local_c = local_c + 0x28;
  } while (local_10 < 0x24);
  local_8 = (int *)0xa;
  local_c = 0;
  do {
    if ((int)local_8 < 1) break;
    local_EAX_509 = Library::MSVCRT::FUN_0072e6c0();
    iVar6 = (int)local_EAX_509 % 9;
    if (local_70[iVar6] == 0) {
      iVar2 = 0;
      do {
        iVar6 = iVar6 + 1;
        if (8 < iVar6) {
          iVar6 = 0;
        }
      } while ((local_70[iVar6] < 1) && (iVar2 = iVar2 + 1, iVar2 < 9));
    }
    local_24 = local_70 + iVar6;
    if (0 < local_70[iVar6]) {
      local_28 = (int)asStack_c4[iVar6 * 2];
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_3c[4] = (int)*(short *)((int)local_a0 + iVar6 * 4 + -0x22);
      local_10 = 0;
      local_20 = iVar6 * 0x28;
      do {
        iVar6 = local_20;
        local_EAX_611 = Library::MSVCRT::FUN_0072e6c0();
        iVar6 = (int)local_EAX_611 % 0x79 + -0x3c + iVar6;
        local_EAX_628 = Library::MSVCRT::FUN_0072e6c0();
        iVar9 = (int)local_EAX_628 % 0x29 + 0xaa;
        iVar2 = FUN_006aff50(iVar6);
        iVar2 = (iVar9 * iVar2) / 10000 + local_28;
        uVar4 = FUN_006aff5b(iVar6);
        iVar9 = (int)(uVar4 * iVar9) / 10000 + local_3c[4];
        local_14 = (int *)((iVar2 + param_2) / 100);
        iVar6 = (iVar9 + param_3) / 100;
        if (((0 < iVar2 + param_2) && (0 < iVar9 + param_3)) &&
           ((-1 < (int)local_14 &&
            ((((int)local_14 < param_4 && (-1 < iVar6)) && (iVar6 < param_5)))))) {
          int scalar_local_14 = iVar6 * param_4 + (int)local_14; /* split integer lifetime from pointer-typed SSA storage */
          iVar6 = param_1 + scalar_local_14 * 0xe;
          if ((*(int *)(iVar6 + 6) < 0) && (*(int *)(iVar6 + 2) == 0)) {
            local_1c = thunk_FUN_00696310(local_18,scalar_local_14,param_4,local_a0,nullptr);
            iVar6 = local_c;
            int scalar_piVar10 = scalar_local_14;
            iVar7 = 0;
            if (local_1c < 1) {
LAB_0069e887:
              *(undefined4 *)((int)local_3c + local_c) = 1;
              *(undefined4 *)(param_1 + 6 + scalar_piVar10 * 0xe) = 0x3ef;
              local_EAX_985 = Library::MSVCRT::FUN_0072e6c0();
              thunk_FUN_006a0ae0(local_18,iVar2 + param_2,iVar9 + param_3,0,0x3ef,
                                 local_EAX_985 % (DAT_007d934c - 4U) + 4);
              piVar10 = local_24;
              *(short *)((int)asStack_4c + iVar6) = (short)iVar2;
              *(short *)((int)asStack_4c + iVar6 + 2) = (short)iVar9;
              local_c = iVar6 + 4;
              *piVar10 = 0;
              break;
            }
            piVar8 = local_a0;
            while ((iVar1 = param_1 + *piVar8 * 0xe, *(int *)(iVar1 + 2) == 0 ||
                   (*(int *)(iVar1 + 6) < 1))) {
              iVar7 = iVar7 + 1;
              piVar8 = piVar8 + 1;
              if (local_1c <= iVar7) goto LAB_0069e887;
            }
          }
        }
        local_10 = local_10 + 1;
      } while (local_10 < 5);
    }
    local_8 = (int *)((int)local_8 + -1);
  } while (local_c < 0x10);
  local_8 = (int *)0xa;
  local_c = 0;
  do {
    if ((int)local_8 < 1) {
      return;
    }
    local_EAX_1105 = Library::MSVCRT::FUN_0072e6c0();
    uVar5 = local_EAX_1105 & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    if (local_70[uVar5] == 0) {
      iVar6 = 0;
      do {
        uVar5 = uVar5 + 1;
        if (3 < (int)uVar5) {
          uVar5 = 0;
        }
      } while ((local_70[uVar5] < 1) && (iVar6 = iVar6 + 1, iVar6 < 4));
    }
    if (0 < local_3c[uVar5]) {
      int scalar_local_24 = (int)asStack_4c[uVar5 * 2]; /* split integer lifetime from pointer-typed SSA storage */
      local_20 = (int)asStack_4c[uVar5 * 2 + 1];
      local_10 = 0;
      do {
        local_EAX_1189 = Library::MSVCRT::FUN_0072e6c0();
        uVar3 = Library::MSVCRT::FUN_0072e6c0();
        iVar2 = (int)uVar3 % 0x1f + 0x8c;
        iVar6 = FUN_006aff50((int)local_EAX_1189 % 0x169);
        iVar9 = (iVar2 * iVar6) / 10000 + scalar_local_24;
        local_EAX_1261 = FUN_006aff5b((int)local_EAX_1189 % 0x169);
        iVar7 = (int)(local_EAX_1261 * iVar2) / 10000 + local_20;
        iVar6 = (iVar9 + param_2) / 100;
        iVar2 = (param_3 + iVar7) / 100;
        if ((((0 < iVar6) && (iVar6 < param_4 + -1)) && (0 < iVar2)) && (iVar2 < param_5 + -1)) {
          local_14 = (int *)(iVar2 * param_4 + iVar6);
          iVar6 = param_1 + (int)local_14 * 0xe;
          if ((*(int *)(iVar6 + 6) < 0) && (*(int *)(iVar6 + 2) == 0)) {
            local_1c = thunk_FUN_00696310(local_18,(int)local_14,param_4,local_a0,nullptr);
            iVar6 = local_c;
            piVar10 = local_14;
            iVar2 = 0;
            if (local_1c < 1) {
LAB_0069eab9:
              *(undefined4 *)((int)auStack_d0 + local_c) = 1;
              *(undefined4 *)(param_1 + 6 + (int)piVar10 * 0xe) = 0x3ef;
              local_EAX_1550 = Library::MSVCRT::FUN_0072e6c0();
              thunk_FUN_006a0ae0(local_18,iVar9 + param_2,iVar7 + param_3,0,0x3ef,
                                 local_EAX_1550 % (DAT_007d934c - 5U) + 5);
              *(short *)((int)auStack_7c + iVar6) = (short)iVar9;
              *(short *)((int)auStack_7c + iVar6 + 2) = (short)iVar7;
              local_c = iVar6 + 4;
              break;
            }
            piVar8 = local_a0;
            while ((iVar1 = param_1 + *piVar8 * 0xe, *(int *)(iVar1 + 2) == 0 ||
                   (*(int *)(iVar1 + 6) < 1))) {
              iVar2 = iVar2 + 1;
              piVar8 = piVar8 + 1;
              if (local_1c <= iVar2) goto LAB_0069eab9;
            }
          }
        }
        local_10 = local_10 + 1;
      } while (local_10 < 5);
    }
    local_8 = (int *)((int)local_8 + -1);
    if (0xb < local_c) {
      return;
    }
  } while( true );
}

