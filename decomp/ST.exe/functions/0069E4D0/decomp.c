
void __thiscall FUN_0069e4d0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
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
  
  piVar9 = local_70;
  local_18 = this;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_3c[2] = 0;
  local_3c[3] = 0;
  local_c = 0;
  local_10 = 0;
  do {
    uVar2 = Library::MSVCRT::FUN_0072e6c0();
    iVar5 = (int)uVar2 % 9 + -8 + local_c;
    iVar3 = FUN_006aff50(iVar5);
    iVar5 = FUN_006aff5b(iVar5);
    uVar2 = Library::MSVCRT::FUN_0072e6c0();
    iVar6 = (int)uVar2 % 0x33 + 0xb4;
    iVar3 = (iVar6 * iVar3) / 10000;
    iVar6 = (iVar6 * iVar5) / 10000;
    iVar5 = iVar3 + param_2;
    iVar7 = iVar5 / 100;
    local_28 = param_3 + iVar6;
    iVar1 = local_28 / 100;
    if ((((0 < iVar7) && (iVar7 < param_4 + -1)) && (0 < iVar1)) && (iVar1 < param_5 + -1)) {
      iVar7 = iVar1 * param_4 + iVar7;
      local_14 = (int *)(param_1 + 6 + iVar7 * 0xe);
      if (*local_14 < 0) {
        local_1c = thunk_FUN_00696310(local_18,iVar7,param_4,local_a0,(int *)0x0);
        iVar7 = 0;
        if (0 < local_1c) {
          local_8 = local_a0;
          do {
            if (*(int *)(param_1 + 2 + *local_8 * 0xe) != 0) goto LAB_0069e69c;
            iVar7 = iVar7 + 1;
            local_8 = local_8 + 1;
          } while (iVar7 < local_1c);
        }
        uVar2 = Library::MSVCRT::FUN_0072e6c0();
        piVar9 = local_14;
        uVar2 = uVar2 & 0x80000003;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
        }
        if (0 < (int)uVar2) {
          *(undefined4 *)((int)local_70 + local_10) = 1;
          *piVar9 = 0x3ef;
          uVar2 = Library::MSVCRT::FUN_0072e6c0();
          thunk_FUN_006a0ae0(local_18,iVar5,local_28,0,0x3ef,uVar2 % (DAT_007d934c - 2U));
          *(short *)((int)asStack_c4 + local_10) = (short)iVar3;
          *(short *)((int)asStack_c4 + local_10 + 2) = (short)iVar6;
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
    uVar2 = Library::MSVCRT::FUN_0072e6c0();
    iVar5 = (int)uVar2 % 9;
    if (local_70[iVar5] == 0) {
      iVar3 = 0;
      do {
        iVar5 = iVar5 + 1;
        if (8 < iVar5) {
          iVar5 = 0;
        }
      } while ((local_70[iVar5] < 1) && (iVar3 = iVar3 + 1, iVar3 < 9));
    }
    local_24 = local_70 + iVar5;
    if (0 < local_70[iVar5]) {
      local_28 = (int)asStack_c4[iVar5 * 2];
      local_3c[4] = (int)*(short *)((int)local_a0 + iVar5 * 4 + -0x22);
      local_10 = 0;
      local_20 = iVar5 * 0x28;
      do {
        iVar5 = local_20;
        uVar2 = Library::MSVCRT::FUN_0072e6c0();
        iVar5 = (int)uVar2 % 0x79 + -0x3c + iVar5;
        uVar2 = Library::MSVCRT::FUN_0072e6c0();
        iVar6 = (int)uVar2 % 0x29 + 0xaa;
        iVar3 = FUN_006aff50(iVar5);
        iVar3 = (iVar6 * iVar3) / 10000 + local_28;
        iVar5 = FUN_006aff5b(iVar5);
        iVar6 = (iVar5 * iVar6) / 10000 + local_3c[4];
        local_14 = (int *)((iVar3 + param_2) / 100);
        iVar5 = (iVar6 + param_3) / 100;
        if (((0 < iVar3 + param_2) && (0 < iVar6 + param_3)) &&
           ((-1 < (int)local_14 &&
            ((((int)local_14 < param_4 && (-1 < iVar5)) && (iVar5 < param_5)))))) {
          local_14 = (int *)(iVar5 * param_4 + (int)local_14);
          iVar5 = param_1 + (int)local_14 * 0xe;
          if ((*(int *)(iVar5 + 6) < 0) && (*(int *)(iVar5 + 2) == 0)) {
            local_1c = thunk_FUN_00696310(local_18,(int)local_14,param_4,local_a0,(int *)0x0);
            iVar5 = local_c;
            piVar9 = local_14;
            iVar7 = 0;
            if (local_1c < 1) {
LAB_0069e887:
              *(undefined4 *)((int)local_3c + local_c) = 1;
              *(undefined4 *)(param_1 + 6 + (int)piVar9 * 0xe) = 0x3ef;
              uVar2 = Library::MSVCRT::FUN_0072e6c0();
              thunk_FUN_006a0ae0(local_18,iVar3 + param_2,iVar6 + param_3,0,0x3ef,
                                 uVar2 % (DAT_007d934c - 4U) + 4);
              piVar9 = local_24;
              *(short *)((int)asStack_4c + iVar5) = (short)iVar3;
              *(short *)((int)asStack_4c + iVar5 + 2) = (short)iVar6;
              local_c = iVar5 + 4;
              *piVar9 = 0;
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
    uVar2 = Library::MSVCRT::FUN_0072e6c0();
    uVar2 = uVar2 & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    if (local_70[uVar2] == 0) {
      iVar5 = 0;
      do {
        uVar2 = uVar2 + 1;
        if (3 < (int)uVar2) {
          uVar2 = 0;
        }
      } while ((local_70[uVar2] < 1) && (iVar5 = iVar5 + 1, iVar5 < 4));
    }
    if (0 < local_3c[uVar2]) {
      local_24 = (int *)(int)asStack_4c[uVar2 * 2];
      local_20 = (int)asStack_4c[uVar2 * 2 + 1];
      local_10 = 0;
      do {
        uVar2 = Library::MSVCRT::FUN_0072e6c0();
        uVar4 = Library::MSVCRT::FUN_0072e6c0();
        iVar3 = (int)uVar4 % 0x1f + 0x8c;
        iVar5 = FUN_006aff50((int)uVar2 % 0x169);
        iVar6 = (iVar3 * iVar5) / 10000 + (int)local_24;
        iVar5 = FUN_006aff5b((int)uVar2 % 0x169);
        iVar7 = (iVar5 * iVar3) / 10000 + local_20;
        iVar5 = (iVar6 + param_2) / 100;
        iVar3 = (param_3 + iVar7) / 100;
        if ((((0 < iVar5) && (iVar5 < param_4 + -1)) && (0 < iVar3)) && (iVar3 < param_5 + -1)) {
          local_14 = (int *)(iVar3 * param_4 + iVar5);
          iVar5 = param_1 + (int)local_14 * 0xe;
          if ((*(int *)(iVar5 + 6) < 0) && (*(int *)(iVar5 + 2) == 0)) {
            local_1c = thunk_FUN_00696310(local_18,(int)local_14,param_4,local_a0,(int *)0x0);
            iVar5 = local_c;
            piVar9 = local_14;
            iVar3 = 0;
            if (local_1c < 1) {
LAB_0069eab9:
              *(undefined4 *)((int)auStack_d0 + local_c) = 1;
              *(undefined4 *)(param_1 + 6 + (int)piVar9 * 0xe) = 0x3ef;
              uVar2 = Library::MSVCRT::FUN_0072e6c0();
              thunk_FUN_006a0ae0(local_18,iVar6 + param_2,iVar7 + param_3,0,0x3ef,
                                 uVar2 % (DAT_007d934c - 5U) + 5);
              *(short *)((int)auStack_7c + iVar5) = (short)iVar6;
              *(short *)((int)auStack_7c + iVar5 + 2) = (short)iVar7;
              local_c = iVar5 + 4;
              break;
            }
            piVar8 = local_a0;
            while ((iVar1 = param_1 + *piVar8 * 0xe, *(int *)(iVar1 + 2) == 0 ||
                   (*(int *)(iVar1 + 6) < 1))) {
              iVar3 = iVar3 + 1;
              piVar8 = piVar8 + 1;
              if (local_1c <= iVar3) goto LAB_0069eab9;
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

