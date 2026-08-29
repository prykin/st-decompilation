#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:1: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=8,
   pointer_dereferences=12, scalar_uses=0; sites=0069E5DA dereference: CMP dword ptr [EAX],0x0 |
   0069E61C dereference: CMP dword ptr [ECX + EAX*0x2 + 0x2],0x0 | 0069E815 dereference: MOV
   ESI,dword ptr [EAX + 0x6] | 0069E81C dereference: MOV ESI,dword ptr [EAX + 0x2] | 0069E858
   dereference: MOV ESI,dword ptr [ECX + 0x2] | 0069E85F dereference: MOV ESI,dword ptr [ECX + 0x6]
   | 0069E8A1 dereference: MOV dword ptr [EAX + EDX*0x2 + 0x6],0x3ef | 0069EA4A dereference: MOV
   ECX,dword ptr [EAX + 0x6] | 0069EA51 dereference: MOV ECX,dword ptr [EAX + 0x2] | 0069EA8D
   dereference: MOV EDI,dword ptr [ECX + 0x2] | 0069EA94 dereference: MOV EDI,dword ptr [ECX + 0x6]
   | 0069EAD6 dereference: MOV dword ptr [EAX + EDX*0x2 + 0x6],0x3ef */

void __thiscall
FUN_0069e4d0(void *this,RecoveredRecordView_0069E4D0_513816DF *param_1,int param_2,int param_3,
            int param_4,int param_5)

{
  int iVar1;
  uint local_EAX_45;
  uint uVar5_mg0;
  uint local_EAX_74;
  uint uVar2;
  uint local_EAX_356;
  uint uVar5;
  uint local_EAX_397;
  uint local_EAX_509;
  int iVar6;
  uint local_EAX_611;
  uint local_EAX_628;
  uint uVar5_mg2;
  uint uVar4;
  uint local_EAX_985;
  uint local_EAX_1105;
  uint local_EAX_1189;
  uint uVar3;
  uint uVar5_mg4;
  uint local_EAX_1261;
  uint local_EAX_1550;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
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

  piVar11 = local_70;
  local_18 = this;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_3c[2] = 0;
  local_3c[3] = 0;
  local_c = 0;
  local_10 = 0;
  do {

    local_EAX_45 = Library::MSVCRT::FUN_0072e6c0();
    iVar7 = (int)local_EAX_45 % 9 + -8 + local_c;

    uVar5_mg0 = FUN_006aff50(iVar7);

    local_EAX_74 = FUN_006aff5b(iVar7);

    uVar2 = Library::MSVCRT::FUN_0072e6c0();
    iVar7 = (int)uVar2 % 0x33 + 0xb4;
    iVar6 = (int)(iVar7 * uVar5_mg0) / 10000;
    iVar10 = (int)(iVar7 * local_EAX_74) / 10000;
    iVar7 = iVar6 + param_2;
    iVar8 = iVar7 / 100;
    local_28 = param_3 + iVar10;
    iVar1 = local_28 / 100;
    if ((((0 < iVar8) && (iVar8 < param_4 + -1)) && (0 < iVar1)) && (iVar1 < param_5 + -1)) {
      iVar8 = iVar1 * param_4 + iVar8;
      local_14 = &param_1[iVar8].field_0006;
      if (*local_14 < 0) {

        local_1c = thunk_FUN_00696310(local_18,iVar8,param_4,local_a0,nullptr);
        iVar8 = 0;
        if (0 < local_1c) {
          local_8 = local_a0;
          do {
            if (param_1[*local_8].field_0002 != 0) goto LAB_0069e69c;
            iVar8 = iVar8 + 1;
            local_8 = local_8 + 1;
          } while (iVar8 < local_1c);
        }

        local_EAX_356 = Library::MSVCRT::FUN_0072e6c0();
        piVar11 = local_14;
        uVar5 = local_EAX_356 & 0x80000003;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
        }
        if (0 < (int)uVar5) {
          *(undefined4 *)((int)local_70 + local_10) = 1;
          *piVar11 = 0x3ef;

          local_EAX_397 = Library::MSVCRT::FUN_0072e6c0();
          thunk_FUN_006a0ae0(local_18,iVar7,local_28,0,0x3ef,local_EAX_397 % (DAT_007d934c - 2U));
          *(short *)((int)asStack_c4 + local_10) = (short)iVar6;
          *(short *)((int)asStack_c4 + local_10 + 2) = (short)iVar10;
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
    iVar7 = (int)local_EAX_509 % 9;
    if (local_70[iVar7] == 0) {
      iVar6 = 0;
      do {
        iVar7 = iVar7 + 1;
        if (8 < iVar7) {
          iVar7 = 0;
        }
      } while ((local_70[iVar7] < 1) && (iVar6 = iVar6 + 1, iVar6 < 9));
    }
    local_24 = local_70 + iVar7;
    if (0 < local_70[iVar7]) {
      local_28 = (int)asStack_c4[iVar7 * 2];
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_3c[4] = (int)*(short *)((int)local_a0 + iVar7 * 4 + -0x22);
      local_10 = 0;
      local_20 = iVar7 * 0x28;
      do {
        iVar7 = local_20;

        local_EAX_611 = Library::MSVCRT::FUN_0072e6c0();
        iVar7 = (int)local_EAX_611 % 0x79 + -0x3c + iVar7;

        local_EAX_628 = Library::MSVCRT::FUN_0072e6c0();
        iVar10 = (int)local_EAX_628 % 0x29 + 0xaa;

        uVar5_mg2 = FUN_006aff50(iVar7);
        iVar6 = (int)(iVar10 * uVar5_mg2) / 10000 + local_28;

        uVar4 = FUN_006aff5b(iVar7);
        iVar10 = (int)(uVar4 * iVar10) / 10000 + local_3c[4];
        local_14 = (int *)((iVar6 + param_2) / 100);
        iVar7 = (iVar10 + param_3) / 100;
        if ((((0 < iVar6 + param_2) && (0 < iVar10 + param_3)) &&
            ((-1 < (int)local_14 &&
             ((((int)local_14 < param_4 && (-1 < iVar7)) && (iVar7 < param_5)))))) &&
           ((local_14 = (int *)(iVar7 * param_4 + (int)local_14),
            param_1[(int)local_14].field_0006 < 0 && (param_1[(int)local_14].field_0002 == 0)))) {

          local_1c = thunk_FUN_00696310(local_18,(int)local_14,param_4,local_a0,nullptr);
          iVar7 = local_c;
          piVar11 = local_14;
          iVar8 = 0;
          if (local_1c < 1) {
LAB_0069e887:
            *(undefined4 *)((int)local_3c + local_c) = 1;
            param_1[(int)piVar11].field_0006 = 0x3ef;

            local_EAX_985 = Library::MSVCRT::FUN_0072e6c0();
            thunk_FUN_006a0ae0(local_18,iVar6 + param_2,iVar10 + param_3,0,0x3ef,
                               local_EAX_985 % (DAT_007d934c - 4U) + 4);
            piVar11 = local_24;
            *(short *)((int)asStack_4c + iVar7) = (short)iVar6;
            *(short *)((int)asStack_4c + iVar7 + 2) = (short)iVar10;
            local_c = iVar7 + 4;
            *piVar11 = 0;
            break;
          }
          piVar9 = local_a0;
          while ((param_1[*piVar9].field_0002 == 0 || (param_1[*piVar9].field_0006 < 1))) {
            iVar8 = iVar8 + 1;
            piVar9 = piVar9 + 1;
            if (local_1c <= iVar8) goto LAB_0069e887;
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
      iVar7 = 0;
      do {
        uVar5 = uVar5 + 1;
        if (3 < (int)uVar5) {
          uVar5 = 0;
        }
      } while ((local_70[uVar5] < 1) && (iVar7 = iVar7 + 1, iVar7 < 4));
    }
    if (0 < local_3c[uVar5]) {
      int scalar_local_24 = (int)asStack_4c[uVar5 * 2]; /* split integer lifetime from pointer-typed SSA storage */
      local_20 = (int)asStack_4c[uVar5 * 2 + 1];
      local_10 = 0;
      do {

        local_EAX_1189 = Library::MSVCRT::FUN_0072e6c0();

        uVar3 = Library::MSVCRT::FUN_0072e6c0();
        iVar7 = (int)uVar3 % 0x1f + 0x8c;

        uVar5_mg4 = FUN_006aff50((int)local_EAX_1189 % 0x169);
        iVar10 = (int)(iVar7 * uVar5_mg4) / 10000 + scalar_local_24;

        local_EAX_1261 = FUN_006aff5b((int)local_EAX_1189 % 0x169);
        iVar8 = (int)(local_EAX_1261 * iVar7) / 10000 + local_20;
        iVar7 = (iVar10 + param_2) / 100;
        iVar6 = (param_3 + iVar8) / 100;
        if ((((0 < iVar7) && (iVar7 < param_4 + -1)) && (0 < iVar6)) &&
           (((iVar6 < param_5 + -1 &&
             (local_14 = (int *)(iVar6 * param_4 + iVar7), param_1[(int)local_14].field_0006 < 0))
            && (param_1[(int)local_14].field_0002 == 0)))) {

          local_1c = thunk_FUN_00696310(local_18,(int)local_14,param_4,local_a0,nullptr);
          iVar7 = local_c;
          piVar11 = local_14;
          iVar6 = 0;
          if (local_1c < 1) {
LAB_0069eab9:
            *(undefined4 *)((int)auStack_d0 + local_c) = 1;
            param_1[(int)piVar11].field_0006 = 0x3ef;

            local_EAX_1550 = Library::MSVCRT::FUN_0072e6c0();
            thunk_FUN_006a0ae0(local_18,iVar10 + param_2,iVar8 + param_3,0,0x3ef,
                               local_EAX_1550 % (DAT_007d934c - 5U) + 5);
            *(short *)((int)auStack_7c + iVar7) = (short)iVar10;
            *(short *)((int)auStack_7c + iVar7 + 2) = (short)iVar8;
            local_c = iVar7 + 4;
            break;
          }
          piVar9 = local_a0;
          while ((param_1[*piVar9].field_0002 == 0 || (param_1[*piVar9].field_0006 < 1))) {
            iVar6 = iVar6 + 1;
            piVar9 = piVar9 + 1;
            if (local_1c <= iVar6) goto LAB_0069eab9;
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

