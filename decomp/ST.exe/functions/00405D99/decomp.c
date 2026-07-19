
void __thiscall
thunk_FUN_0069e4d0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

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
  int aiStack_a0 [9];
  undefined2 auStack_7c [6];
  int aiStack_70 [9];
  short asStack_4c [8];
  int aiStack_3c [5];
  int iStack_28;
  int *piStack_24;
  int iStack_20;
  int iStack_1c;
  void *pvStack_18;
  int *piStack_14;
  int iStack_10;
  int iStack_c;
  int *piStack_8;
  
  piVar9 = aiStack_70;
  pvStack_18 = this;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  aiStack_3c[0] = 0;
  aiStack_3c[1] = 0;
  aiStack_3c[2] = 0;
  aiStack_3c[3] = 0;
  iStack_c = 0;
  iStack_10 = 0;
  do {
    uVar2 = Library::MSVCRT::FUN_0072e6c0();
    iVar5 = (int)uVar2 % 9 + -8 + iStack_c;
    iVar3 = FUN_006aff50(iVar5);
    iVar5 = FUN_006aff5b(iVar5);
    uVar2 = Library::MSVCRT::FUN_0072e6c0();
    iVar6 = (int)uVar2 % 0x33 + 0xb4;
    iVar3 = (iVar6 * iVar3) / 10000;
    iVar6 = (iVar6 * iVar5) / 10000;
    iVar5 = iVar3 + param_2;
    iVar7 = iVar5 / 100;
    iStack_28 = param_3 + iVar6;
    iVar1 = iStack_28 / 100;
    if ((((0 < iVar7) && (iVar7 < param_4 + -1)) && (0 < iVar1)) && (iVar1 < param_5 + -1)) {
      iVar7 = iVar1 * param_4 + iVar7;
      piStack_14 = (int *)(param_1 + 6 + iVar7 * 0xe);
      if (*piStack_14 < 0) {
        iStack_1c = thunk_FUN_00696310(pvStack_18,iVar7,param_4,aiStack_a0,(int *)0x0);
        iVar7 = 0;
        if (0 < iStack_1c) {
          piStack_8 = aiStack_a0;
          do {
            if (*(int *)(param_1 + 2 + *piStack_8 * 0xe) != 0) goto LAB_0069e69c;
            iVar7 = iVar7 + 1;
            piStack_8 = piStack_8 + 1;
          } while (iVar7 < iStack_1c);
        }
        uVar2 = Library::MSVCRT::FUN_0072e6c0();
        piVar9 = piStack_14;
        uVar2 = uVar2 & 0x80000003;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
        }
        if (0 < (int)uVar2) {
          *(undefined4 *)((int)aiStack_70 + iStack_10) = 1;
          *piVar9 = 0x3ef;
          uVar2 = Library::MSVCRT::FUN_0072e6c0();
          thunk_FUN_006a0ae0(pvStack_18,iVar5,iStack_28,0,0x3ef,uVar2 % (DAT_007d934c - 2U));
          *(short *)((int)asStack_c4 + iStack_10) = (short)iVar3;
          *(short *)((int)asStack_c4 + iStack_10 + 2) = (short)iVar6;
        }
      }
    }
LAB_0069e69c:
    iStack_10 = iStack_10 + 4;
    iStack_c = iStack_c + 0x28;
  } while (iStack_10 < 0x24);
  piStack_8 = (int *)0xa;
  iStack_c = 0;
  do {
    if ((int)piStack_8 < 1) break;
    uVar2 = Library::MSVCRT::FUN_0072e6c0();
    iVar5 = (int)uVar2 % 9;
    if (aiStack_70[iVar5] == 0) {
      iVar3 = 0;
      do {
        iVar5 = iVar5 + 1;
        if (8 < iVar5) {
          iVar5 = 0;
        }
      } while ((aiStack_70[iVar5] < 1) && (iVar3 = iVar3 + 1, iVar3 < 9));
    }
    piStack_24 = aiStack_70 + iVar5;
    if (0 < aiStack_70[iVar5]) {
      iStack_28 = (int)asStack_c4[iVar5 * 2];
      aiStack_3c[4] = (int)*(short *)((int)aiStack_a0 + iVar5 * 4 + -0x22);
      iStack_10 = 0;
      iStack_20 = iVar5 * 0x28;
      do {
        iVar5 = iStack_20;
        uVar2 = Library::MSVCRT::FUN_0072e6c0();
        iVar5 = (int)uVar2 % 0x79 + -0x3c + iVar5;
        uVar2 = Library::MSVCRT::FUN_0072e6c0();
        iVar6 = (int)uVar2 % 0x29 + 0xaa;
        iVar3 = FUN_006aff50(iVar5);
        iVar3 = (iVar6 * iVar3) / 10000 + iStack_28;
        iVar5 = FUN_006aff5b(iVar5);
        iVar6 = (iVar5 * iVar6) / 10000 + aiStack_3c[4];
        piStack_14 = (int *)((iVar3 + param_2) / 100);
        iVar5 = (iVar6 + param_3) / 100;
        if (((0 < iVar3 + param_2) && (0 < iVar6 + param_3)) &&
           ((-1 < (int)piStack_14 &&
            ((((int)piStack_14 < param_4 && (-1 < iVar5)) && (iVar5 < param_5)))))) {
          piStack_14 = (int *)(iVar5 * param_4 + (int)piStack_14);
          iVar5 = param_1 + (int)piStack_14 * 0xe;
          if ((*(int *)(iVar5 + 6) < 0) && (*(int *)(iVar5 + 2) == 0)) {
            iStack_1c = thunk_FUN_00696310(pvStack_18,(int)piStack_14,param_4,aiStack_a0,(int *)0x0)
            ;
            iVar5 = iStack_c;
            piVar9 = piStack_14;
            iVar7 = 0;
            if (iStack_1c < 1) {
LAB_0069e887:
              *(undefined4 *)((int)aiStack_3c + iStack_c) = 1;
              *(undefined4 *)(param_1 + 6 + (int)piVar9 * 0xe) = 0x3ef;
              uVar2 = Library::MSVCRT::FUN_0072e6c0();
              thunk_FUN_006a0ae0(pvStack_18,iVar3 + param_2,iVar6 + param_3,0,0x3ef,
                                 uVar2 % (DAT_007d934c - 4U) + 4);
              piVar9 = piStack_24;
              *(short *)((int)asStack_4c + iVar5) = (short)iVar3;
              *(short *)((int)asStack_4c + iVar5 + 2) = (short)iVar6;
              iStack_c = iVar5 + 4;
              *piVar9 = 0;
              break;
            }
            piVar8 = aiStack_a0;
            while ((iVar1 = param_1 + *piVar8 * 0xe, *(int *)(iVar1 + 2) == 0 ||
                   (*(int *)(iVar1 + 6) < 1))) {
              iVar7 = iVar7 + 1;
              piVar8 = piVar8 + 1;
              if (iStack_1c <= iVar7) goto LAB_0069e887;
            }
          }
        }
        iStack_10 = iStack_10 + 1;
      } while (iStack_10 < 5);
    }
    piStack_8 = (int *)((int)piStack_8 + -1);
  } while (iStack_c < 0x10);
  piStack_8 = (int *)0xa;
  iStack_c = 0;
  do {
    if ((int)piStack_8 < 1) {
      return;
    }
    uVar2 = Library::MSVCRT::FUN_0072e6c0();
    uVar2 = uVar2 & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    if (aiStack_70[uVar2] == 0) {
      iVar5 = 0;
      do {
        uVar2 = uVar2 + 1;
        if (3 < (int)uVar2) {
          uVar2 = 0;
        }
      } while ((aiStack_70[uVar2] < 1) && (iVar5 = iVar5 + 1, iVar5 < 4));
    }
    if (0 < aiStack_3c[uVar2]) {
      piStack_24 = (int *)(int)asStack_4c[uVar2 * 2];
      iStack_20 = (int)asStack_4c[uVar2 * 2 + 1];
      iStack_10 = 0;
      do {
        uVar2 = Library::MSVCRT::FUN_0072e6c0();
        uVar4 = Library::MSVCRT::FUN_0072e6c0();
        iVar3 = (int)uVar4 % 0x1f + 0x8c;
        iVar5 = FUN_006aff50((int)uVar2 % 0x169);
        iVar6 = (iVar3 * iVar5) / 10000 + (int)piStack_24;
        iVar5 = FUN_006aff5b((int)uVar2 % 0x169);
        iVar7 = (iVar5 * iVar3) / 10000 + iStack_20;
        iVar5 = (iVar6 + param_2) / 100;
        iVar3 = (param_3 + iVar7) / 100;
        if ((((0 < iVar5) && (iVar5 < param_4 + -1)) && (0 < iVar3)) && (iVar3 < param_5 + -1)) {
          piStack_14 = (int *)(iVar3 * param_4 + iVar5);
          iVar5 = param_1 + (int)piStack_14 * 0xe;
          if ((*(int *)(iVar5 + 6) < 0) && (*(int *)(iVar5 + 2) == 0)) {
            iStack_1c = thunk_FUN_00696310(pvStack_18,(int)piStack_14,param_4,aiStack_a0,(int *)0x0)
            ;
            iVar5 = iStack_c;
            piVar9 = piStack_14;
            iVar3 = 0;
            if (iStack_1c < 1) {
LAB_0069eab9:
              *(undefined4 *)((int)auStack_d0 + iStack_c) = 1;
              *(undefined4 *)(param_1 + 6 + (int)piVar9 * 0xe) = 0x3ef;
              uVar2 = Library::MSVCRT::FUN_0072e6c0();
              thunk_FUN_006a0ae0(pvStack_18,iVar6 + param_2,iVar7 + param_3,0,0x3ef,
                                 uVar2 % (DAT_007d934c - 5U) + 5);
              *(short *)((int)auStack_7c + iVar5) = (short)iVar6;
              *(short *)((int)auStack_7c + iVar5 + 2) = (short)iVar7;
              iStack_c = iVar5 + 4;
              break;
            }
            piVar8 = aiStack_a0;
            while ((iVar1 = param_1 + *piVar8 * 0xe, *(int *)(iVar1 + 2) == 0 ||
                   (*(int *)(iVar1 + 6) < 1))) {
              iVar3 = iVar3 + 1;
              piVar8 = piVar8 + 1;
              if (iStack_1c <= iVar3) goto LAB_0069eab9;
            }
          }
        }
        iStack_10 = iStack_10 + 1;
      } while (iStack_10 < 5);
    }
    piStack_8 = (int *)((int)piStack_8 + -1);
    if (0xb < iStack_c) {
      return;
    }
  } while( true );
}

