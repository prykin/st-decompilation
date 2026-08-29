#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_006C8EC0_param_3Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3
   [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:3: parameter=/int
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0x14, direct_reads=4, scalar_operations=3, signed_comparisons=2, unsigned_bounds=0,
   pointer_dereferences=0, slot_reused=true; sites=006C8F72 incoming load: MOV EDX,dword ptr [EBP +
   0x14] | 006C8FC7 incoming load: MOV ECX,dword ptr [EBP + 0x14] | 006C8FCA scalar operation: SUB
   ECX,EDX | 006C8FD2 scalar operation: DEC ECX | 006C90B1 incoming load: MOV ESI,dword ptr [EBP +
   0x14] | 006C90B7 scalar operation: DEC ESI | 006C910C first slot write: MOV dword ptr [EBP +
   0x14],EAX | 006C933E derived scalar comparison: CMP ECX,dword ptr [EBP + -0x70]; JGE */

int FUN_006c8ec0(int param_1,int param_2,Global_sub_006C8EC0_param_3Enum param_3,int param_4,
                int param_5,int param_6,int param_7,short *param_8,int param_9,int param_10)

{
  short *psVar1;
  short *psVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  ushort uVar10;
  int *piVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  short *psVar15;
  int *local_4c_mg2;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  short *psVar29;
  Global_sub_006C8EC0_param_3Enum GVar30;
  ushort *puVar31;
  Global_sub_006C8EC0_param_3Enum GVar32;
  ushort *puVar33;
  int iVar34;
  int iVar35;
  int *piVar36;
  int *piVar37;
  int *piVar38;
  ushort uVar39;
  int iVar40;
  uint uVar41;
  bool bVar42;
  bool bVar43;
  int local_54;
  int *local_4c_mg0;
  int local_48;
  int local_40;
  int *local_3c;
  uint local_38;
  int local_34;
  ushort local_18;
  uint local_10;

  psVar15 = param_8;
  if ((((int)param_8 < 0) || (param_9 < 0)) || (param_10 < 0)) {

    iVar17 = FUN_006ab090(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(int)param_8,
                          param_9,param_10);
    return iVar17;
  }
  iVar17 = param_2 * param_3;
  local_4c_mg0 = nullptr;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_8 = &SHORT_007ed572;
  while ((((iVar18 = (int)param_8[-1] + (int)psVar15, iVar18 < 0 || (param_2 <= iVar18)) ||
          ((iVar40 = *param_8 + param_9, iVar40 < 0 ||
           (((int)param_3 <= iVar40 || (iVar19 = param_8[1] + param_10, iVar19 < 0)))))) ||
         ((param_4 <= iVar19 ||
          (*(short *)(param_1 + (iVar40 * param_2 + iVar18 + iVar19 * iVar17) * 2) != 0))))) {
    param_8 = param_8 + 4;
    local_4c_mg0 = (int *)((int)local_4c_mg0 + 1);
    if (0x7ed641 < (int)param_8) {
LAB_006c8f65:

      iVar17 = FUN_006ab090(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(int)psVar15,
                            param_9,param_10);
      return iVar17;
    }
  }
  if ((int)local_4c_mg0 < 0x1a) {
    iVar18 = -param_9;
    uVar41 = param_7 - param_10;
    iVar40 = param_3 - param_9;
    iVar19 = param_4 - param_10;
    iVar20 = param_6 - param_9;
    psVar1 = (short *)(param_1 + ((int)psVar15 + param_2 * param_9 + iVar17 * param_10) * 2);
    local_38 = 0;
    local_4c_mg0 = nullptr;
    psVar1[iVar20 * param_2 + (param_5 - (int)psVar15) + uVar41 * iVar17] = 1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((((short *)param_5 == psVar15) && (param_6 == param_9)) && (param_7 == param_10)) {
      return 0;
    }
    sVar3 = *psVar1;
    bVar13 = false;
    if (sVar3 != 0) {
      *psVar1 = 0;
      if (((((int)psVar15 < 1) || (psVar1[-1] != 0)) &&
          (((param_2 + -1 <= (int)psVar15 || (psVar1[1] != 0)) &&
           ((param_9 < 1 || (psVar1[-param_2] != 0)))))) &&
         ((((int)(param_3 - CASE_1) <= param_9 || (psVar1[param_2] != 0)) &&
          (((param_10 < 1 || (psVar1[-iVar17] != 0)) &&
           ((param_4 + -1 <= param_10 || (psVar1[iVar17] != 0)))))))) {
        bVar13 = true;
      }
      else {
        bVar13 = false;
      }
    }

    local_48 = FUN_006aae60(param_5,param_6,param_7,(int)psVar15,param_9,param_7);
    local_48 = local_48 + ((uVar41 ^ (int)uVar41 >> 0x1f) - ((int)uVar41 >> 0x1f));
    local_34 = local_48 * 2 + 10;

    param_4 = (int)FUN_006b04d0(local_34 * 4);
    piVar36 = local_4c_mg0;
    if (((undefined4 *)param_4 == nullptr) ||
       (local_4c_mg2 = FUN_006bfb70(0x3e84), local_4c_mg2 == nullptr))
    goto cf_break_loop_006CE63A;
    *local_4c_mg2 = 0;
    piVar36 = local_4c_mg2 + 1;
    local_3c = local_4c_mg2 + 5;
    *piVar36 = 0;
    local_40 = 999;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_9 = -1;
    *piVar36 = *(int *)(param_4 + (local_48 + 1) * 4);
    local_18 = (undefined2)iVar20;
    *(int **)(param_4 + (local_48 + 1) * 4) = piVar36;
    *(short *)(local_4c_mg2 + 2) = (short)(param_5 - (int)psVar15);
    STField<undefined2>(local_4c_mg2,10) = local_18;
    STPiece<0,2>(param_8) = (undefined2)uVar41;
    STField<short>(local_4c_mg2,0xe) = (short)local_48;
    *(undefined2 *)(local_4c_mg2 + 3) = STPiece<0,2>(param_8);
    *(undefined2 *)(local_4c_mg2 + 4) = 1;
    bVar14 = false;
    piVar37 = nullptr;
    local_4c_mg0 = local_4c_mg2;
    goto cf_continue_loop_006C9187;
  }
  goto LAB_006c8f65;
cf_continue_loop_006C9187:
  if (local_34 <= local_48) goto cf_break_loop_006CE641;
  puVar16 = (undefined4 *)(param_4 + local_48 * 4);
  while (piVar11 = (int *)*puVar16, piVar11 == nullptr) {
    local_48 = local_48 + 1;
    puVar16 = puVar16 + 1;
    if (local_34 <= local_48) goto cf_break_loop_006CE641;
  }
  if (local_34 <= local_48) goto cf_break_loop_006CE641;
  if (local_34 <= local_48 + 10) {
    param_4 = (int)FUN_006bfb50((int *)param_4,local_34 * 4 + 400);
    piVar36 = local_4c_mg0;
    if ((int *)param_4 == nullptr) goto cf_break_loop_006CE63A;
    memset((int *)(param_4 + local_34 * 4), 0, 0x190); /* compiler bulk-zero initialization */
    local_34 = local_34 + 100;
  }
  local_54 = 0;
  *(undefined4 *)(param_4 + local_48 * 4) = 0;
  piVar36 = piVar11;
  do {
    piVar21 = piVar36;
    sVar4 = (short)piVar21[1];
    iVar35 = (int)sVar4;
    sVar5 = STField<short>(piVar21,6);
    iVar20 = (int)sVar5;
    sVar6 = (short)piVar21[2];
    iVar22 = (int)sVar6;
    psVar2 = psVar1 + iVar20 * param_2 + iVar35 + iVar22 * iVar17;
    if ((short)piVar21[3] <= *psVar2) {
      sVar7 = STField<short>(piVar21,10);
      GVar32 = (Global_sub_006C8EC0_param_3Enum)sVar7;
      iVar23 = (short)piVar21[3] + GVar32;
      if (iVar23 < local_48) {
        local_48 = iVar23;
      }
      sVar8 = *psVar2;
      iVar23 = (int)sVar8;
      piVar36 = local_4c_mg0;
      for (; local_4c_mg0 = piVar36, param_9 < 0x1a; param_9 = param_9 + 1) {
        if (local_40 < 1) {
          local_4c_mg0 = FUN_006bfb70(0x3e84);
          if (local_4c_mg0 == nullptr) goto cf_break_loop_006CE63A;
          *local_4c_mg0 = (int)piVar36;
          local_3c = local_4c_mg0 + 1;
          local_40 = 1000;
        }
        *local_3c = (int)piVar37;
        local_40 = local_40 + -1;
        piVar37 = local_3c;
        piVar36 = local_4c_mg0;
        local_3c = local_3c + 4;
      }
      local_10 = 0xff;
      auto param_3_after_write = CASE_0; /* compiler stack-slot lifetime split */
      if (iVar35 < 0) {
        param_3_after_write = CASE_1;
        local_10 = 0xfe;
        if (-(int)psVar15 < iVar35) {
          local_10 = 0xee;
        }
      }
      else {
        if (-(int)psVar15 < iVar35) {
          local_10 = 0xef;
        }
        if (iVar35 < (param_2 - (int)psVar15) + -1) {
          local_10 = local_10 & 0xfffffffe;
        }
      }
      if (iVar20 < 0) {
        uVar41 = local_10 & 0xfffffffd;
        if (iVar18 < iVar20) {
          uVar41 = local_10 & 0xffffffdd;
        }
      }
      else {
        param_3_after_write = param_3_after_write | CASE_2;
        if (iVar18 < iVar20) {
          local_10 = local_10 & 0xffffffdf;
        }
        uVar41 = local_10;
        if (iVar20 < iVar40 + -1) {
          uVar41 = local_10 & 0xfffffffd;
        }
      }
      local_10 = uVar41;
      bVar43 = iVar22 < iVar19 + -1;
      if (bVar43) {
        local_10 = local_10 & 0xfffffffb;
      }
      bVar12 = -param_10 < iVar22;
      if (bVar12) {
        local_10 = local_10 & 0xffffffbf;
      }
      if (iVar22 < 1) {
        if (iVar22 == 0) {
          param_5 = GVar32 + CASE_1;
        }
        else {
          param_5 = GVar32 - CASE_1;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = GVar32 + CASE_1;
      }
      else {
        param_5 = GVar32 + CASE_1;
        param_1 = GVar32 - CASE_1;
      }
      switch(param_3_after_write) {
      case CASE_0:
        uVar41 = local_10 & 0x10;
        piVar36 = piVar37;
        if ((uVar41 == 0) && ((psVar2[-1] == 0 || (iVar23 + 3 < (int)psVar2[-1])))) {
          psVar2[-1] = (short)(iVar23 + 3);
          if (iVar35 == 0) {
            if (iVar20 == 0) {
              iVar34 = GVar32 + CASE_3;
            }
            else {
              iVar34 = GVar32 + CASE_1;
            }
          }
          else if (-iVar20 < iVar35) {
            iVar34 = GVar32 - CASE_3;
          }
          else {
            iVar34 = GVar32 - CASE_1;
          }
          param_9 = param_9 + -1;
          piVar36 = (int *)*piVar37;
          piVar38 = (int *)(param_4 + (iVar34 + iVar23 + 3) * 4);
          *piVar37 = *piVar38;
          *piVar38 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + -1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          STField<short>(piVar37,6) = sVar5;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        uVar27 = local_10 & 1;
        piVar37 = piVar36;
        if ((uVar27 == 0) && ((psVar2[1] == 0 || (iVar23 + 3 < (int)psVar2[1])))) {
          psVar2[1] = (short)(iVar23 + 3);
          if (iVar35 < -iVar20) {
            iVar34 = GVar32 + CASE_1;
          }
          else {
            iVar34 = GVar32 + CASE_3;
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar36;
          piVar38 = (int *)(param_4 + (iVar34 + iVar23 + 3) * 4);
          *piVar36 = *piVar38;
          *piVar38 = (int)piVar36;
          *(short *)(piVar36 + 1) = sVar4 + 1;
          *(short *)(piVar36 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
          STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
          STField<short>(piVar36,6) = sVar5;
          *(short *)(piVar36 + 3) = sVar8 + 3;
        }
        uVar28 = local_10 & 0x20;
        piVar36 = piVar37;
        if (uVar28 == 0) {
          sVar7 = psVar2[-param_2];
          if ((sVar7 == 0) || (iVar23 + 3 < (int)sVar7)) {
            psVar2[-param_2] = sVar8 + 3;
            if (-iVar20 < iVar35) {
              iVar34 = GVar32 + CASE_1;
            }
            else {
              iVar34 = GVar32 + CASE_3;
            }
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + 0xc + (iVar34 + iVar23) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            STField<short>(piVar37,6) = sVar5 + -1;
            *(short *)(piVar37 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 1) = sVar4;
            *(short *)(piVar37 + 3) = sVar8 + 3;
          }
        }
        if ((psVar2[param_2] == 0) || (piVar37 = piVar36, iVar23 + 3 < (int)psVar2[param_2])) {
          psVar2[param_2] = sVar8 + 3;
          if (-iVar35 == iVar20 || -iVar20 < iVar35) {
            iVar34 = GVar32 - CASE_1;
          }
          else {
            iVar34 = GVar32 - CASE_3;
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar36;
          piVar38 = (int *)(param_4 + 0xc + (iVar34 + iVar23) * 4);
          *piVar36 = *piVar38;
          *piVar38 = (int)piVar36;
          STField<short>(piVar36,6) = sVar5 + 1;
          *(short *)(piVar36 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
          STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
          *(short *)(piVar36 + 1) = sVar4;
          *(short *)(piVar36 + 3) = sVar8 + 3;
        }
        piVar36 = piVar37;
        if (bVar12) {
          sVar7 = psVar2[-iVar17];
          if ((sVar7 == 0) || (iVar23 + 3 < (int)sVar7)) {
            psVar2[-iVar17] = sVar8 + 3;
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + 0xc + (param_1 + iVar23) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STField<short>(piVar37,10) = (short)param_1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 3) = sVar8 + 3;
          }
        }
        piVar37 = piVar36;
        if ((bVar43) && ((psVar2[iVar17] == 0 || (iVar23 + 3 < (int)psVar2[iVar17])))) {
          psVar2[iVar17] = sVar8 + 3;
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar36;
          piVar38 = (int *)(param_4 + 0xc + (param_5 + iVar23) * 4);
          *piVar36 = *piVar38;
          *piVar38 = (int)piVar36;
          *(short *)(piVar36 + 2) = sVar6 + 1;
          *(short *)(piVar36 + 1) = sVar4;
          STField<short>(piVar36,10) = (short)param_5;
          STField<short>(piVar36,6) = sVar5;
          *(short *)(piVar36 + 3) = sVar8 + 3;
        }
        if ((bVar43) && (-1 < psVar2[iVar17])) {
          piVar36 = piVar37;
          if ((uVar41 == 0) &&
             (((psVar2[iVar17 + -1] == 0 || (iVar23 + 4 < (int)psVar2[iVar17 + -1])) &&
              ((psVar2[-1] & 0xc000U) != 0xc000)))) {
            psVar2[iVar17 + -1] = sVar8 + 4;
            if (iVar35 == 0) {
              if (iVar20 == 0) {
                iVar34 = param_5 + 3;
              }
              else {
                iVar34 = param_5 + 1;
              }
            }
            else if (-iVar20 < iVar35) {
              iVar34 = param_5 + -3;
            }
            else {
              iVar34 = param_5 + -1;
            }
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + -1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar36;
          if (((uVar27 == 0) &&
              ((psVar2[iVar17 + 1] == 0 || (iVar23 + 4 < (int)psVar2[iVar17 + 1])))) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar2[iVar17 + 1] = sVar8 + 4;
            if (iVar35 < -iVar20) {
              iVar34 = param_5 + 1;
            }
            else {
              iVar34 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4 + 1;
            STField<short>(piVar36,6) = sVar5;
            *(short *)(piVar36 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = sVar8 + 4;
          }
          piVar36 = piVar37;
          if (uVar28 == 0) {
            sVar7 = psVar2[iVar17 - param_2];
            if (((sVar7 == 0) || (iVar23 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar2[iVar17 - param_2] = sVar8 + 4;
              if (-iVar20 < iVar35) {
                iVar34 = param_5 + 1;
              }
              else {
                iVar34 = param_5 + 3;
              }
              param_9 = param_9 + -1;
              piVar36 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 1) = sVar4;
              *(short *)(piVar37 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(short *)(piVar37 + 3) = sVar8 + 4;
            }
          }
          piVar37 = piVar36;
          if (((psVar2[iVar17 + param_2] == 0) || (iVar23 + 4 < (int)psVar2[iVar17 + param_2])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar2[iVar17 + param_2] = sVar8 + 4;
            if (-iVar35 == iVar20 || -iVar20 < iVar35) {
              iVar34 = param_5 + -1;
            }
            else {
              iVar34 = param_5 + -3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            STField<short>(piVar36,6) = sVar5 + 1;
            *(short *)(piVar36 + 1) = sVar4;
            *(short *)(piVar36 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = sVar8 + 4;
          }
        }
        if ((bVar12) && (psVar29 = psVar2 + -iVar17, -1 < *psVar29)) {
          piVar36 = piVar37;
          if (((uVar41 == 0) && ((psVar29[-1] == 0 || (iVar23 + 4 < (int)psVar29[-1])))) &&
             ((psVar2[-1] & 0xc000U) != 0xc000)) {
            psVar29[-1] = sVar8 + 4;
            if (iVar35 == 0) {
              if (iVar20 == 0) {
                iVar34 = param_1 + 3;
              }
              else {
                iVar34 = param_1 + 1;
              }
            }
            else if (-iVar20 < iVar35) {
              iVar34 = param_1 + -3;
            }
            else {
              iVar34 = param_1 + -1;
            }
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + -1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar36;
          if ((uVar27 == 0) &&
             (((psVar29[1] == 0 || (iVar23 + 4 < (int)psVar29[1])) &&
              ((psVar2[1] & 0xc000U) != 0xc000)))) {
            psVar29[1] = sVar8 + 4;
            if (iVar35 < -iVar20) {
              iVar34 = param_1 + 1;
            }
            else {
              iVar34 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4 + 1;
            STField<short>(piVar36,6) = sVar5;
            *(short *)(piVar36 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = sVar8 + 4;
          }
          piVar36 = piVar37;
          if (uVar28 == 0) {
            sVar7 = psVar29[-param_2];
            if (((sVar7 == 0) || (iVar23 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar29[-param_2] = sVar8 + 4;
              if (-iVar20 < iVar35) {
                iVar34 = param_1 + 1;
              }
              else {
                iVar34 = param_1 + 3;
              }
              param_9 = param_9 + -1;
              piVar36 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 1) = sVar4;
              *(short *)(piVar37 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(short *)(piVar37 + 3) = sVar8 + 4;
            }
          }
          piVar37 = piVar36;
          if (((psVar29[param_2] == 0) || (iVar23 + 4 < (int)psVar29[param_2])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar29[param_2] = sVar8 + 4;
            if (-iVar35 == iVar20 || -iVar20 < iVar35) {
              iVar34 = param_1 + -1;
            }
            else {
              iVar34 = param_1 + -3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            STField<short>(piVar36,6) = sVar5 + 1;
            *(short *)(piVar36 + 1) = sVar4;
            *(short *)(piVar36 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = sVar8 + 4;
          }
        }
        uVar41 = local_10 & 0x30;
        piVar36 = piVar37;
        if (uVar41 == 0) {
          psVar29 = (short *)((int)psVar2 - (param_2 * 2 + 2));
          sVar7 = *psVar29;
          if ((((sVar7 == 0) || (iVar23 + 4 < (int)sVar7)) &&
              ((psVar2[-param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
            *psVar29 = sVar8 + 4;
            if (iVar35 == 0) {
              GVar30 = GVar32 + 4;
            }
            else if (1 - iVar20 < iVar35) {
              GVar30 = GVar32 - CASE_2;
            }
            else {
              GVar30 = GVar32;
              if (iVar35 != 1 - iVar20) {
                GVar30 = GVar32 + CASE_2;
              }
            }
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + 0x10 + (GVar30 + iVar23) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + -1;
            STField<short>(piVar37,6) = sVar5 + -1;
            *(short *)(piVar37 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)GVar30;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        uVar27 = local_10 & 0x21;
        piVar37 = piVar36;
        if (uVar27 == 0) {
          puVar33 = (ushort *)(psVar2 + -param_2);
          if (((puVar33[1] == 0) || (iVar23 + 4 < (short)puVar33[1])) &&
             (((*puVar33 & 0xc000) != 0xc000 && ((psVar2[1] & 0xc000U) != 0xc000)))) {
            puVar33[1] = sVar8 + 4;
            piVar37 = (int *)*piVar36;
            param_9 = param_9 + -1;
            piVar38 = (int *)(param_4 + 0x10 + (GVar32 + 4 + iVar23) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4 + 1;
            STField<short>(piVar36,6) = sVar5 + -1;
            *(short *)(piVar36 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)(GVar32 + 4);
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = sVar8 + 4;
          }
        }
        uVar28 = local_10 & 0x12;
        piVar36 = piVar37;
        if ((((uVar28 == 0) &&
             ((psVar2[param_2 + -1] == 0 || (iVar23 + 4 < (int)psVar2[param_2 + -1])))) &&
            ((psVar2[param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + -1] = sVar8 + 4;
          if (iVar35 == 0) {
            if (iVar20 == 0) {
              param_3_after_write = GVar32 + 4;
            }
            else {
              param_3_after_write = GVar32;
              if (iVar20 != -1) {
                param_3_after_write = GVar32 - CASE_2;
              }
            }
          }
          else {
            param_3_after_write = GVar32 + ~CASE_3;
          }
          param_9 = param_9 + -1;
          piVar36 = (int *)*piVar37;
          piVar38 = (int *)(param_4 + 0x10 + (param_3_after_write + iVar23) * 4);
          *piVar37 = *piVar38;
          *piVar38 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + -1;
          STField<short>(piVar37,6) = sVar5 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 4;
        }
        local_10 = local_10 & 3;
        piVar37 = piVar36;
        if (((local_10 == 0) &&
            (((psVar2[param_2 + 1] == 0 || (iVar23 + 4 < (int)psVar2[param_2 + 1])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)))) && ((psVar2[1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + 1] = sVar8 + 4;
          bVar42 = -(iVar35 + 1) == iVar20;
          if (bVar42 || -iVar20 < iVar35 + 1) {
            if (!bVar42) {
              GVar32 = GVar32 + CASE_2;
            }
          }
          else {
            GVar32 = GVar32 - CASE_2;
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar36;
          piVar38 = (int *)(param_4 + 0x10 + (GVar32 + iVar23) * 4);
          *piVar36 = *piVar38;
          *piVar38 = (int)piVar36;
          *(short *)(piVar36 + 1) = sVar4 + 1;
          STField<short>(piVar36,6) = sVar5 + 1;
          *(short *)(piVar36 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)GVar32;
          STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
          *(short *)(piVar36 + 3) = sVar8 + 4;
        }
        iVar34 = iVar23 + 5;
        uVar39 = (ushort)iVar34;
        if ((bVar43) && (puVar33 = (ushort *)(psVar2 + iVar17), (*puVar33 & 0xc000) != 0xc000)) {
          piVar36 = piVar37;
          if (uVar41 == 0) {
            puVar31 = (ushort *)((int)puVar33 - (param_2 * 2 + 2));
            uVar10 = *puVar31;
            if ((((uVar10 == 0) || (iVar34 < (short)uVar10)) &&
                (((puVar33[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar33[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar31 = uVar39;
              if (iVar35 == 0) {
                iVar26 = param_5 + 4;
              }
              else if (1 - iVar20 < iVar35) {
                iVar26 = param_5 + -2;
              }
              else {
                iVar26 = param_5;
                if (iVar35 != 1 - iVar20) {
                  iVar26 = param_5 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar36 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + (iVar26 + iVar34) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + -1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(ushort *)(piVar37 + 3) = uVar39;
              *(short *)(piVar37 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar26;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            }
          }
          piVar37 = piVar36;
          if (uVar27 == 0) {
            puVar31 = puVar33 + -param_2;
            if ((((puVar31[1] == 0) || (iVar34 < (short)puVar31[1])) &&
                (((*puVar31 & 0xc000) != 0xc000 &&
                 (((puVar33[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))))
               && (((psVar2[1] & 0xc000U) != 0xc000 &&
                   (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar31[1] = uVar39;
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar36;
              piVar38 = (int *)(param_4 + (param_5 + 4 + iVar34) * 4);
              *piVar36 = *piVar38;
              *piVar38 = (int)piVar36;
              *(short *)(piVar36 + 1) = sVar4 + 1;
              STField<short>(piVar36,6) = sVar5 + -1;
              *(ushort *)(piVar36 + 3) = uVar39;
              *(short *)(piVar36 + 2) = sVar6 + 1;
              STField<short>(piVar36,10) = (short)param_5 + 4;
            }
          }
          piVar36 = piVar37;
          if (((uVar28 == 0) &&
              (((((puVar33[param_2 + -1] == 0 || (iVar34 < (short)puVar33[param_2 + -1])) &&
                 ((puVar33[param_2] & 0xc000) != 0xc000)) &&
                (((puVar33[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)))) &&
               ((psVar2[-1] & 0xc000U) != 0xc000)))) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar33[param_2 + -1] = uVar39;
            if (iVar35 == 0) {
              if (iVar20 == 0) {
                iVar26 = param_5 + 4;
              }
              else {
                iVar26 = param_5;
                if (iVar20 != -1) {
                  iVar26 = param_5 + -2;
                }
              }
            }
            else {
              iVar26 = param_5 + -4;
            }
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + (iVar26 + iVar34) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + -1;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(ushort *)(piVar37 + 3) = uVar39;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar26;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          }
          piVar37 = piVar36;
          if (((local_10 == 0) &&
              ((puVar33[param_2 + 1] == 0 || (iVar34 < (short)puVar33[param_2 + 1])))) &&
             ((((puVar33[param_2] & 0xc000) != 0xc000 &&
               ((((puVar33[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)))) && ((psVar2[param_2 + 1] & 0xc000U) != 0xc000))
             )) {
            puVar33[param_2 + 1] = uVar39;
            bVar43 = -(iVar35 + 1) == iVar20;
            if (bVar43 || -iVar20 < iVar35 + 1) {
              if (!bVar43) {
                param_5 = param_5 + 2;
              }
            }
            else {
              param_5 = param_5 + -2;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + (param_5 + iVar34) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4 + 1;
            STField<short>(piVar36,6) = sVar5 + 1;
            *(ushort *)(piVar36 + 3) = uVar39;
            *(short *)(piVar36 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)param_5;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
          }
        }
        if ((bVar12) && (puVar33 = (ushort *)(psVar2 + -iVar17), (*puVar33 & 0xc000) != 0xc000)) {
          piVar36 = piVar37;
          if (uVar41 == 0) {
            puVar31 = (ushort *)((int)puVar33 - (param_2 * 2 + 2));
            uVar10 = *puVar31;
            if ((((uVar10 == 0) || (iVar34 < (short)uVar10)) &&
                (((puVar33[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar33[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar31 = uVar39;
              if (iVar35 == 0) {
                iVar26 = param_1 + 4;
              }
              else if (1 - iVar20 < iVar35) {
                iVar26 = param_1 + -2;
              }
              else {
                iVar26 = param_1;
                if (iVar35 != 1 - iVar20) {
                  iVar26 = param_1 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar36 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + (iVar26 + iVar34) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + -1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(ushort *)(piVar37 + 3) = uVar39;
              *(short *)(piVar37 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar26;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            }
          }
          piVar38 = piVar36;
          if (uVar27 == 0) {
            puVar31 = puVar33 + -param_2;
            if ((((puVar31[1] == 0) || (iVar34 < (short)puVar31[1])) &&
                (((*puVar31 & 0xc000) != 0xc000 &&
                 (((puVar33[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))))
               && (((psVar2[1] & 0xc000U) != 0xc000 &&
                   (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar31[1] = uVar39;
              param_9 = param_9 + -1;
              piVar38 = (int *)*piVar36;
              piVar37 = (int *)(param_4 + (param_1 + 4 + iVar34) * 4);
              *piVar36 = *piVar37;
              *piVar37 = (int)piVar36;
              *(short *)(piVar36 + 1) = sVar4 + 1;
              STField<short>(piVar36,6) = sVar5 + -1;
              *(ushort *)(piVar36 + 3) = uVar39;
              *(short *)(piVar36 + 2) = sVar6 + -1;
              STField<short>(piVar36,10) = (short)param_1 + 4;
            }
          }
          piVar37 = piVar38;
          if ((((uVar28 == 0) &&
               ((((puVar33[param_2 + -1] == 0 || (iVar34 < (short)puVar33[param_2 + -1])) &&
                 ((puVar33[param_2] & 0xc000) != 0xc000)) &&
                (((puVar33[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000))))))
              && ((psVar2[-1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar33[param_2 + -1] = uVar39;
            if (iVar35 == 0) {
              if (iVar20 == 0) {
                iVar26 = param_1 + 4;
              }
              else {
                iVar26 = param_1;
                if (iVar20 != -1) {
                  iVar26 = param_1 + -2;
                }
              }
            }
            else {
              iVar26 = param_1 + -4;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar36 = (int *)(param_4 + (iVar26 + iVar34) * 4);
            *piVar38 = *piVar36;
            *piVar36 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5 + 1;
            *(ushort *)(piVar38 + 3) = uVar39;
            *(short *)(piVar38 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar26;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
          }
          if (((local_10 == 0) &&
              ((puVar33[param_2 + 1] == 0 || (iVar34 < (short)puVar33[param_2 + 1])))) &&
             (((puVar33[param_2] & 0xc000) != 0xc000 &&
              (((((puVar33[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + 1] & 0xc000U) != 0xc000))))
             )) {
            puVar33[param_2 + 1] = uVar39;
            iVar26 = iVar20;
            iVar34 = iVar35;
LAB_006ce561:
            bVar43 = -(iVar34 + 1) == iVar26;
            piVar36 = piVar37;
            if (bVar43 || -iVar26 < iVar34 + 1) {
              if (!bVar43) {
                param_1 = param_1 + 2;
              }
            }
            else {
              param_1 = param_1 + -2;
            }
LAB_006ce57c:
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + (param_1 + iVar23 + 5) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)param_1;
            STField<short>(piVar36,6) = sVar5 + 1;
            *(short *)(piVar36 + 2) = sVar6 + -1;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = (short)(iVar23 + 5);
          }
        }
        break;
      case CASE_1:
        uVar41 = local_10 & 0x10;
        piVar36 = piVar37;
        if ((uVar41 == 0) && ((psVar2[-1] == 0 || (iVar23 + 3 < (int)psVar2[-1])))) {
          psVar2[-1] = (short)(iVar23 + 3);
          if (iVar20 < iVar35) {
            iVar34 = GVar32 + CASE_1;
          }
          else {
            iVar34 = GVar32 + CASE_3;
          }
          param_9 = param_9 + -1;
          piVar36 = (int *)*piVar37;
          piVar38 = (int *)(param_4 + (iVar34 + iVar23 + 3) * 4);
          *piVar37 = *piVar38;
          *piVar38 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + -1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          STField<short>(piVar37,6) = sVar5;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        if ((psVar2[1] == 0) || (piVar37 = piVar36, iVar23 + 3 < (int)psVar2[1])) {
          psVar2[1] = (short)(iVar23 + 3);
          if (iVar35 < iVar20) {
            iVar34 = GVar32 - CASE_3;
          }
          else {
            iVar34 = GVar32 - CASE_1;
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar36;
          piVar38 = (int *)(param_4 + (iVar34 + iVar23 + 3) * 4);
          *piVar36 = *piVar38;
          *piVar38 = (int)piVar36;
          *(short *)(piVar36 + 1) = sVar4 + 1;
          *(short *)(piVar36 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
          STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
          STField<short>(piVar36,6) = sVar5;
          *(short *)(piVar36 + 3) = sVar8 + 3;
        }
        uVar27 = local_10 & 0x20;
        piVar36 = piVar37;
        if (uVar27 == 0) {
          sVar9 = psVar2[-param_2];
          if ((sVar9 == 0) || (iVar23 + 3 < (int)sVar9)) {
            psVar2[-param_2] = sVar8 + 3;
            if (iVar35 < iVar20) {
              iVar34 = GVar32 + CASE_1;
            }
            else {
              iVar34 = GVar32 + CASE_3;
            }
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + 0xc + (iVar34 + iVar23) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            STField<short>(piVar37,6) = sVar5 + -1;
            *(short *)(piVar37 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 1) = sVar4;
            *(short *)(piVar37 + 3) = sVar8 + 3;
          }
        }
        if ((psVar2[param_2] == 0) || (piVar37 = piVar36, iVar23 + 3 < (int)psVar2[param_2])) {
          psVar2[param_2] = sVar8 + 3;
          if (iVar20 < iVar35) {
            iVar34 = GVar32 - CASE_3;
          }
          else {
            iVar34 = GVar32 - CASE_1;
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar36;
          piVar38 = (int *)(param_4 + 0xc + (iVar34 + iVar23) * 4);
          *piVar36 = *piVar38;
          *piVar38 = (int)piVar36;
          STField<short>(piVar36,6) = sVar5 + 1;
          *(short *)(piVar36 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
          STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
          *(short *)(piVar36 + 1) = sVar4;
          *(short *)(piVar36 + 3) = sVar8 + 3;
        }
        piVar36 = piVar37;
        if (bVar12) {
          sVar9 = psVar2[-iVar17];
          if ((sVar9 == 0) || (iVar23 + 3 < (int)sVar9)) {
            psVar2[-iVar17] = sVar8 + 3;
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + 0xc + (param_1 + iVar23) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STField<short>(piVar37,10) = (short)param_1;
            *(short *)(piVar37 + 3) = sVar8 + 3;
          }
        }
        piVar37 = piVar36;
        if ((bVar43) && ((psVar2[iVar17] == 0 || (iVar23 + 3 < (int)psVar2[iVar17])))) {
          psVar2[iVar17] = sVar8 + 3;
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar36;
          piVar38 = (int *)(param_4 + 0xc + (param_5 + iVar23) * 4);
          *piVar36 = *piVar38;
          *piVar38 = (int)piVar36;
          *(short *)(piVar36 + 1) = sVar4;
          STField<short>(piVar36,6) = sVar5;
          *(short *)(piVar36 + 2) = sVar6 + 1;
          STField<short>(piVar36,10) = (short)param_5;
          *(short *)(piVar36 + 3) = sVar8 + 3;
        }
        if ((bVar43) && (-1 < psVar2[iVar17])) {
          piVar36 = piVar37;
          if ((uVar41 == 0) &&
             (((psVar2[iVar17 + -1] == 0 || (iVar23 + 4 < (int)psVar2[iVar17 + -1])) &&
              ((psVar2[-1] & 0xc000U) != 0xc000)))) {
            psVar2[iVar17 + -1] = sVar8 + 4;
            if (iVar20 < iVar35) {
              iVar34 = param_5 + 1;
            }
            else {
              iVar34 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + -1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar36;
          if (((psVar2[iVar17 + 1] == 0) || (iVar23 + 4 < (int)psVar2[iVar17 + 1])) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar2[iVar17 + 1] = sVar8 + 4;
            if (iVar35 < iVar20) {
              iVar34 = param_5 + -3;
            }
            else {
              iVar34 = param_5 + -1;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4 + 1;
            STField<short>(piVar36,6) = sVar5;
            *(short *)(piVar36 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = sVar8 + 4;
          }
          piVar36 = piVar37;
          if (uVar27 == 0) {
            sVar9 = psVar2[iVar17 - param_2];
            if (((sVar9 == 0) || (iVar23 + 4 < (int)sVar9)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar2[iVar17 - param_2] = sVar8 + 4;
              if (iVar35 < iVar20) {
                iVar34 = param_5 + 1;
              }
              else {
                iVar34 = param_5 + 3;
              }
              param_9 = param_9 + -1;
              piVar36 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(short *)(piVar37 + 3) = sVar8 + 4;
            }
          }
          piVar37 = piVar36;
          if (((psVar2[iVar17 + param_2] == 0) || (iVar23 + 4 < (int)psVar2[iVar17 + param_2])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar2[iVar17 + param_2] = sVar8 + 4;
            if (iVar20 < iVar35) {
              iVar34 = param_5 + -3;
            }
            else {
              iVar34 = param_5 + -1;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4;
            STField<short>(piVar36,6) = sVar5 + 1;
            *(short *)(piVar36 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = sVar8 + 4;
          }
        }
        if ((bVar12) && (psVar29 = psVar2 + -iVar17, -1 < *psVar29)) {
          piVar36 = piVar37;
          if (((uVar41 == 0) && ((psVar29[-1] == 0 || (iVar23 + 4 < (int)psVar29[-1])))) &&
             ((psVar2[-1] & 0xc000U) != 0xc000)) {
            psVar29[-1] = sVar8 + 4;
            if (iVar20 < iVar35) {
              iVar34 = param_1 + 1;
            }
            else {
              iVar34 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + -1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar36;
          if (((psVar29[1] == 0) || (iVar23 + 4 < (int)psVar29[1])) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar29[1] = sVar8 + 4;
            if (iVar35 < iVar20) {
              iVar34 = param_1 + -3;
            }
            else {
              iVar34 = param_1 + -1;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4 + 1;
            STField<short>(piVar36,6) = sVar5;
            *(short *)(piVar36 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = sVar8 + 4;
          }
          piVar36 = piVar37;
          if (uVar27 == 0) {
            sVar9 = psVar29[-param_2];
            if (((sVar9 == 0) || (iVar23 + 4 < (int)sVar9)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar29[-param_2] = sVar8 + 4;
              if (iVar35 < iVar20) {
                iVar34 = param_1 + 1;
              }
              else {
                iVar34 = param_1 + 3;
              }
              param_9 = param_9 + -1;
              piVar36 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(short *)(piVar37 + 3) = sVar8 + 4;
            }
          }
          piVar37 = piVar36;
          if (((psVar29[param_2] == 0) || (iVar23 + 4 < (int)psVar29[param_2])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar29[param_2] = sVar8 + 4;
            if (iVar20 < iVar35) {
              iVar34 = param_1 + -3;
            }
            else {
              iVar34 = param_1 + -1;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4;
            STField<short>(piVar36,6) = sVar5 + 1;
            *(short *)(piVar36 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = sVar8 + 4;
          }
        }
        uVar41 = local_10 & 0x30;
        piVar36 = piVar37;
        if (uVar41 == 0) {
          psVar29 = (short *)((int)psVar2 - (param_2 * 2 + 2));
          sVar9 = *psVar29;
          if ((((sVar9 == 0) || (iVar23 + 4 < (int)sVar9)) &&
              ((psVar2[-param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
            *psVar29 = sVar8 + 4;
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + 0x10 + (GVar32 + 4 + iVar23) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + -1;
            STField<short>(piVar37,6) = sVar5 + -1;
            *(short *)(piVar37 + 2) = sVar6;
            STField<short>(piVar37,10) = sVar7 + 4;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        uVar27 = local_10 & 0x21;
        piVar37 = piVar36;
        if (uVar27 == 0) {
          puVar33 = (ushort *)(psVar2 + -param_2);
          if (((puVar33[1] == 0) || (iVar23 + 4 < (short)puVar33[1])) &&
             (((*puVar33 & 0xc000) != 0xc000 && ((psVar2[1] & 0xc000U) != 0xc000)))) {
            puVar33[1] = sVar8 + 4;
            if (iVar35 < iVar20 + -1) {
              GVar30 = GVar32 - CASE_2;
            }
            else {
              GVar30 = GVar32;
              if (iVar35 != iVar20 + -1) {
                GVar30 = GVar32 + CASE_2;
              }
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + 0x10 + (GVar30 + iVar23) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4 + 1;
            STField<short>(piVar36,6) = sVar5 + -1;
            *(short *)(piVar36 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)GVar30;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = sVar8 + 4;
          }
        }
        local_10 = local_10 & 0x12;
        piVar36 = piVar37;
        if (((local_10 == 0) &&
            ((psVar2[param_2 + -1] == 0 || (iVar23 + 4 < (int)psVar2[param_2 + -1])))) &&
           (((psVar2[param_2] & 0xc000U) != 0xc000 && ((psVar2[-1] & 0xc000U) != 0xc000)))) {
          psVar2[param_2 + -1] = sVar8 + 4;
          if (iVar20 < iVar35 + -1) {
            GVar30 = GVar32 - CASE_2;
          }
          else {
            GVar30 = GVar32;
            if (iVar20 != iVar35 + -1) {
              GVar30 = GVar32 + CASE_2;
            }
          }
          param_9 = param_9 + -1;
          piVar36 = (int *)*piVar37;
          piVar38 = (int *)(param_4 + 0x10 + (GVar30 + iVar23) * 4);
          *piVar37 = *piVar38;
          *piVar38 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + -1;
          STField<short>(piVar37,6) = sVar5 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)GVar30;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 4;
        }
        iVar34 = param_2 * 2 + 2;
        piVar37 = piVar36;
        if ((((psVar2[param_2 + 1] == 0) || (iVar23 + 4 < (int)psVar2[param_2 + 1])) &&
            ((psVar2[param_2] & 0xc000U) != 0xc000)) && ((psVar2[1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + 1] = sVar8 + 4;
          piVar37 = (int *)*piVar36;
          param_9 = param_9 + -1;
          piVar38 = (int *)(param_4 + 0x10 + (GVar32 + ~CASE_3 + iVar23) * 4);
          *piVar36 = *piVar38;
          *piVar38 = (int)piVar36;
          *(short *)(piVar36 + 1) = sVar4 + 1;
          STField<short>(piVar36,6) = sVar5 + 1;
          *(short *)(piVar36 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)(GVar32 + ~CASE_3);
          STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
          *(short *)(piVar36 + 3) = sVar8 + 4;
        }
        iVar26 = iVar23 + 5;
        uVar39 = (ushort)iVar26;
        if ((bVar43) && (puVar33 = (ushort *)(psVar2 + iVar17), (*puVar33 & 0xc000) != 0xc000)) {
          piVar36 = piVar37;
          if (uVar41 == 0) {
            uVar10 = *(ushort *)((int)puVar33 - iVar34);
            if ((((uVar10 == 0) || (iVar26 < (short)uVar10)) &&
                (((puVar33[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar33[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - iVar34) & 0xc000) != 0xc000)) {
              *(ushort *)((int)puVar33 - iVar34) = uVar39;
              param_9 = param_9 + -1;
              piVar36 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + (param_5 + 4 + iVar26) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + -1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + 1;
              STField<short>(piVar37,10) = (short)param_5 + 4;
              *(ushort *)(piVar37 + 3) = uVar39;
            }
          }
          piVar37 = piVar36;
          if (uVar27 == 0) {
            puVar31 = puVar33 + -param_2;
            if (((puVar31[1] == 0) || (iVar26 < (short)puVar31[1])) &&
               (((((*puVar31 & 0xc000) != 0xc000 &&
                  (((puVar33[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))
                 && ((psVar2[1] & 0xc000U) != 0xc000)) &&
                (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar31[1] = uVar39;
              if (iVar35 < iVar20 + -1) {
                iVar24 = param_5 + -2;
              }
              else {
                iVar24 = param_5;
                if (iVar35 != iVar20 + -1) {
                  iVar24 = param_5 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar36;
              piVar38 = (int *)(param_4 + (iVar24 + iVar26) * 4);
              *piVar36 = *piVar38;
              *piVar38 = (int)piVar36;
              *(short *)(piVar36 + 1) = sVar4 + 1;
              STField<short>(piVar36,6) = sVar5 + -1;
              *(short *)(piVar36 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar24;
              STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar36 + 3) = uVar39;
            }
          }
          piVar36 = piVar37;
          if (((local_10 == 0) &&
              (((((puVar33[param_2 + -1] == 0 || (iVar26 < (short)puVar33[param_2 + -1])) &&
                 ((puVar33[param_2] & 0xc000) != 0xc000)) &&
                (((puVar33[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)))) &&
               ((psVar2[-1] & 0xc000U) != 0xc000)))) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar33[param_2 + -1] = uVar39;
            if (iVar20 < iVar35 + -1) {
              iVar24 = param_5 + -2;
            }
            else {
              iVar24 = param_5;
              if (iVar20 != iVar35 + -1) {
                iVar24 = param_5 + 2;
              }
            }
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + (iVar24 + iVar26) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + -1;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar24;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar37 + 3) = uVar39;
          }
          piVar37 = piVar36;
          if ((((puVar33[param_2 + 1] == 0) || (iVar26 < (short)puVar33[param_2 + 1])) &&
              (((puVar33[param_2] & 0xc000) != 0xc000 &&
               ((((puVar33[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)))))) &&
             ((psVar2[param_2 + 1] & 0xc000U) != 0xc000)) {
            puVar33[param_2 + 1] = uVar39;
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + (param_5 + -4 + iVar26) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4 + 1;
            STField<short>(piVar36,6) = sVar5 + 1;
            *(short *)(piVar36 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)(param_5 + -4);
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar36 + 3) = uVar39;
          }
        }
        if ((bVar12) && (puVar33 = (ushort *)(psVar2 + -iVar17), (*puVar33 & 0xc000) != 0xc000)) {
          piVar36 = piVar37;
          if (uVar41 == 0) {
            uVar10 = *(ushort *)((int)puVar33 - iVar34);
            if ((((uVar10 == 0) || (iVar26 < (short)uVar10)) &&
                (((puVar33[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar33[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - iVar34) & 0xc000) != 0xc000)) {
              *(ushort *)((int)puVar33 - iVar34) = uVar39;
              param_9 = param_9 + -1;
              piVar36 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + (param_1 + 4 + iVar26) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + -1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + -1;
              STField<short>(piVar37,10) = (short)param_1 + 4;
              *(ushort *)(piVar37 + 3) = uVar39;
            }
          }
          piVar38 = piVar36;
          if (uVar27 == 0) {
            puVar31 = puVar33 + -param_2;
            if ((((puVar31[1] == 0) || (iVar26 < (short)puVar31[1])) &&
                (((*puVar31 & 0xc000) != 0xc000 &&
                 (((puVar33[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))))
               && (((psVar2[1] & 0xc000U) != 0xc000 &&
                   (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar31[1] = uVar39;
              if (iVar35 < iVar20 + -1) {
                iVar34 = param_1 + -2;
              }
              else {
                iVar34 = param_1;
                if (iVar35 != iVar20 + -1) {
                  iVar34 = param_1 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar38 = (int *)*piVar36;
              piVar37 = (int *)(param_4 + (iVar34 + iVar26) * 4);
              *piVar36 = *piVar37;
              *piVar37 = (int)piVar36;
              *(short *)(piVar36 + 1) = sVar4 + 1;
              STField<short>(piVar36,6) = sVar5 + -1;
              *(short *)(piVar36 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
              STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar36 + 3) = uVar39;
            }
          }
          piVar37 = piVar38;
          if ((((local_10 == 0) &&
               ((((puVar33[param_2 + -1] == 0 || (iVar26 < (short)puVar33[param_2 + -1])) &&
                 ((puVar33[param_2] & 0xc000) != 0xc000)) &&
                (((puVar33[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000))))))
              && ((psVar2[-1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar33[param_2 + -1] = uVar39;
            if (iVar20 < iVar35 + -1) {
              iVar34 = param_1 + -2;
            }
            else {
              iVar34 = param_1;
              if (iVar20 != iVar35 + -1) {
                iVar34 = param_1 + 2;
              }
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar36 = (int *)(param_4 + (iVar34 + iVar26) * 4);
            *piVar38 = *piVar36;
            *piVar36 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5 + 1;
            *(short *)(piVar38 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar38 + 3) = uVar39;
          }
          if ((((puVar33[param_2 + 1] == 0) || (iVar26 < (short)puVar33[param_2 + 1])) &&
              (((puVar33[param_2] & 0xc000) != 0xc000 &&
               ((((puVar33[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)))))) &&
             ((psVar2[param_2 + 1] & 0xc000U) != 0xc000)) {
            puVar33[param_2 + 1] = uVar39;
            param_1 = param_1 + -4;
            piVar36 = piVar37;
            goto LAB_006ce57c;
          }
        }
        break;
      case CASE_2:
        uVar41 = local_10 & 0x10;
        piVar36 = piVar37;
        if ((uVar41 == 0) && ((psVar2[-1] == 0 || (iVar23 + 3 < (int)psVar2[-1])))) {
          psVar2[-1] = (short)(iVar23 + 3);
          if (iVar35 == 0) {
            if (iVar20 == 0) {
              iVar34 = GVar32 + CASE_3;
            }
            else {
              iVar34 = GVar32 + CASE_1;
            }
          }
          else if (iVar20 < iVar35) {
            iVar34 = GVar32 - CASE_3;
          }
          else {
            iVar34 = GVar32 - CASE_1;
          }
          param_9 = param_9 + -1;
          piVar36 = (int *)*piVar37;
          piVar38 = (int *)(param_4 + (iVar34 + iVar23 + 3) * 4);
          *piVar37 = *piVar38;
          *piVar38 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + -1;
          STField<short>(piVar37,6) = sVar5;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        uVar27 = local_10 & 1;
        piVar37 = piVar36;
        if ((uVar27 == 0) && ((psVar2[1] == 0 || (iVar23 + 3 < (int)psVar2[1])))) {
          psVar2[1] = (short)(iVar23 + 3);
          if (iVar35 < iVar20) {
            iVar34 = GVar32 + CASE_1;
          }
          else {
            iVar34 = GVar32 + CASE_3;
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar36;
          piVar38 = (int *)(param_4 + (iVar34 + iVar23 + 3) * 4);
          *piVar36 = *piVar38;
          *piVar38 = (int)piVar36;
          *(short *)(piVar36 + 1) = sVar4 + 1;
          STField<short>(piVar36,6) = sVar5;
          *(short *)(piVar36 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
          STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
          *(short *)(piVar36 + 3) = sVar8 + 3;
        }
        uVar28 = local_10 & 0x20;
        piVar36 = piVar37;
        if (uVar28 == 0) {
          sVar7 = psVar2[-param_2];
          if ((sVar7 == 0) || (iVar23 + 3 < (int)sVar7)) {
            psVar2[-param_2] = sVar8 + 3;
            if (iVar20 == 0) {
              if (iVar35 == 0) {
                iVar34 = GVar32 + CASE_3;
              }
              else {
                iVar34 = GVar32 + CASE_1;
              }
            }
            else if (iVar35 < iVar20) {
              iVar34 = GVar32 - CASE_3;
            }
            else {
              iVar34 = GVar32 - CASE_1;
            }
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + 0xc + (iVar34 + iVar23) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4;
            STField<short>(piVar37,6) = sVar5 + -1;
            *(short *)(piVar37 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 3;
          }
        }
        uVar25 = local_10 & 2;
        piVar37 = piVar36;
        if ((uVar25 == 0) && ((psVar2[param_2] == 0 || (iVar23 + 3 < (int)psVar2[param_2])))) {
          psVar2[param_2] = sVar8 + 3;
          if (iVar20 < iVar35) {
            iVar34 = GVar32 + CASE_1;
          }
          else {
            iVar34 = GVar32 + CASE_3;
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar36;
          piVar38 = (int *)(param_4 + 0xc + (iVar34 + iVar23) * 4);
          *piVar36 = *piVar38;
          *piVar38 = (int)piVar36;
          *(short *)(piVar36 + 1) = sVar4;
          STField<short>(piVar36,6) = sVar5 + 1;
          *(short *)(piVar36 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
          STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
          *(short *)(piVar36 + 3) = sVar8 + 3;
        }
        piVar36 = piVar37;
        if (bVar12) {
          sVar7 = psVar2[-iVar17];
          if ((sVar7 == 0) || (iVar23 + 3 < (int)sVar7)) {
            psVar2[-iVar17] = sVar8 + 3;
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + 0xc + (param_1 + iVar23) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STField<short>(piVar37,10) = (short)param_1;
            *(short *)(piVar37 + 3) = sVar8 + 3;
          }
        }
        piVar37 = piVar36;
        if ((bVar43) && ((psVar2[iVar17] == 0 || (iVar23 + 3 < (int)psVar2[iVar17])))) {
          psVar2[iVar17] = sVar8 + 3;
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar36;
          piVar38 = (int *)(param_4 + 0xc + (param_5 + iVar23) * 4);
          *piVar36 = *piVar38;
          *piVar38 = (int)piVar36;
          *(short *)(piVar36 + 1) = sVar4;
          STField<short>(piVar36,6) = sVar5;
          *(short *)(piVar36 + 2) = sVar6 + 1;
          STField<short>(piVar36,10) = (short)param_5;
          *(short *)(piVar36 + 3) = sVar8 + 3;
        }
        if ((bVar43) && (-1 < psVar2[iVar17])) {
          piVar36 = piVar37;
          if ((uVar41 == 0) &&
             (((psVar2[iVar17 + -1] == 0 || (iVar23 + 4 < (int)psVar2[iVar17 + -1])) &&
              ((psVar2[-1] & 0xc000U) != 0xc000)))) {
            psVar2[iVar17 + -1] = sVar8 + 4;
            if (iVar35 == 0) {
              if (iVar20 == 0) {
                iVar34 = param_5 + 3;
              }
              else {
                iVar34 = param_5 + 1;
              }
            }
            else if (iVar20 < iVar35) {
              iVar34 = param_5 + -3;
            }
            else {
              iVar34 = param_5 + -1;
            }
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + -1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar36;
          if (((uVar27 == 0) &&
              ((psVar2[iVar17 + 1] == 0 || (iVar23 + 4 < (int)psVar2[iVar17 + 1])))) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar2[iVar17 + 1] = sVar8 + 4;
            if (iVar35 < iVar20) {
              iVar34 = param_5 + 1;
            }
            else {
              iVar34 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4 + 1;
            STField<short>(piVar36,6) = sVar5;
            *(short *)(piVar36 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = sVar8 + 4;
          }
          piVar36 = piVar37;
          if (uVar28 == 0) {
            sVar7 = psVar2[iVar17 - param_2];
            if (((sVar7 == 0) || (iVar23 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar2[iVar17 - param_2] = sVar8 + 4;
              if (iVar20 == 0) {
                if (iVar35 == 0) {
                  iVar34 = param_5 + 3;
                }
                else {
                  iVar34 = param_5 + 1;
                }
              }
              else if (iVar35 < iVar20) {
                iVar34 = param_5 + -3;
              }
              else {
                iVar34 = param_5 + -1;
              }
              param_9 = param_9 + -1;
              piVar36 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(short *)(piVar37 + 3) = sVar8 + 4;
            }
          }
          piVar37 = piVar36;
          if ((uVar25 == 0) &&
             (((psVar2[iVar17 + param_2] == 0 || (iVar23 + 4 < (int)psVar2[iVar17 + param_2])) &&
              ((psVar2[param_2] & 0xc000U) != 0xc000)))) {
            psVar2[iVar17 + param_2] = sVar8 + 4;
            if (iVar20 < iVar35) {
              iVar34 = param_5 + 1;
            }
            else {
              iVar34 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4;
            STField<short>(piVar36,6) = sVar5 + 1;
            *(short *)(piVar36 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = sVar8 + 4;
          }
        }
        if ((bVar12) && (psVar29 = psVar2 + -iVar17, -1 < *psVar29)) {
          piVar36 = piVar37;
          if (((uVar41 == 0) && ((psVar29[-1] == 0 || (iVar23 + 4 < (int)psVar29[-1])))) &&
             ((psVar2[-1] & 0xc000U) != 0xc000)) {
            psVar29[-1] = sVar8 + 4;
            if (iVar35 == 0) {
              if (iVar20 == 0) {
                iVar34 = param_1 + 3;
              }
              else {
                iVar34 = param_1 + 1;
              }
            }
            else if (iVar20 < iVar35) {
              iVar34 = param_1 + -3;
            }
            else {
              iVar34 = param_1 + -1;
            }
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + -1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar36;
          if ((uVar27 == 0) &&
             (((psVar29[1] == 0 || (iVar23 + 4 < (int)psVar29[1])) &&
              ((psVar2[1] & 0xc000U) != 0xc000)))) {
            psVar29[1] = sVar8 + 4;
            if (iVar35 < iVar20) {
              iVar34 = param_1 + 1;
            }
            else {
              iVar34 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4 + 1;
            STField<short>(piVar36,6) = sVar5;
            *(short *)(piVar36 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = sVar8 + 4;
          }
          piVar36 = piVar37;
          if (uVar28 == 0) {
            sVar7 = psVar29[-param_2];
            if (((sVar7 == 0) || (iVar23 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar29[-param_2] = sVar8 + 4;
              if (iVar20 == 0) {
                if (iVar35 == 0) {
                  iVar34 = param_1 + 3;
                }
                else {
                  iVar34 = param_1 + 1;
                }
              }
              else if (iVar35 < iVar20) {
                iVar34 = param_1 + -3;
              }
              else {
                iVar34 = param_1 + -1;
              }
              param_9 = param_9 + -1;
              piVar36 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(short *)(piVar37 + 3) = sVar8 + 4;
            }
          }
          piVar37 = piVar36;
          if (((uVar25 == 0) && ((psVar29[param_2] == 0 || (iVar23 + 4 < (int)psVar29[param_2]))))
             && ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar29[param_2] = sVar8 + 4;
            if (iVar20 < iVar35) {
              iVar34 = param_1 + 1;
            }
            else {
              iVar34 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4;
            STField<short>(piVar36,6) = sVar5 + 1;
            *(short *)(piVar36 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = sVar8 + 4;
          }
        }
        uVar41 = local_10 & 0x30;
        piVar36 = piVar37;
        if (uVar41 == 0) {
          psVar29 = (short *)((int)psVar2 - (param_2 * 2 + 2));
          sVar7 = *psVar29;
          if ((((sVar7 == 0) || (iVar23 + 4 < (int)sVar7)) &&
              ((psVar2[-param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
            *psVar29 = sVar8 + 4;
            GVar30 = GVar32;
            if (iVar20 == 0) {
              if (iVar35 == 0) {
                GVar30 = GVar32 + 4;
              }
              else if (iVar35 != 1) {
                GVar30 = GVar32 - CASE_2;
              }
            }
            else if (iVar35 == 0) {
              if (iVar20 != 1) {
                GVar30 = GVar32 - CASE_2;
              }
            }
            else {
              GVar30 = GVar32 + ~CASE_3;
            }
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + 0x10 + (GVar30 + iVar23) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + -1;
            STField<short>(piVar37,6) = sVar5 + -1;
            *(short *)(piVar37 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)GVar30;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        uVar27 = local_10 & 0x21;
        piVar37 = piVar36;
        if (uVar27 == 0) {
          puVar33 = (ushort *)(psVar2 + -param_2);
          if (((puVar33[1] == 0) || (iVar23 + 4 < (short)puVar33[1])) &&
             (((*puVar33 & 0xc000) != 0xc000 && ((psVar2[1] & 0xc000U) != 0xc000)))) {
            puVar33[1] = sVar8 + 4;
            if (iVar20 == 0) {
              GVar30 = GVar32 + 4;
            }
            else if (iVar35 + 1 < iVar20) {
              GVar30 = GVar32 - CASE_2;
            }
            else {
              GVar30 = GVar32;
              if (iVar20 != iVar35 + 1) {
                GVar30 = GVar32 + CASE_2;
              }
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + 0x10 + (GVar30 + iVar23) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4 + 1;
            STField<short>(piVar36,6) = sVar5 + -1;
            *(short *)(piVar36 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)GVar30;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = sVar8 + 4;
          }
        }
        uVar28 = local_10 & 0x12;
        piVar36 = piVar37;
        if (((uVar28 == 0) &&
            ((psVar2[param_2 + -1] == 0 || (iVar23 + 4 < (int)psVar2[param_2 + -1])))) &&
           (((psVar2[param_2] & 0xc000U) != 0xc000 && ((psVar2[-1] & 0xc000U) != 0xc000)))) {
          psVar2[param_2 + -1] = sVar8 + 4;
          if (iVar35 == 0) {
            GVar30 = GVar32 + 4;
          }
          else if (iVar20 + 1 < iVar35) {
            GVar30 = GVar32 - CASE_2;
          }
          else {
            GVar30 = GVar32;
            if (iVar35 != iVar20 + 1) {
              GVar30 = GVar32 + CASE_2;
            }
          }
          param_9 = param_9 + -1;
          piVar36 = (int *)*piVar37;
          piVar38 = (int *)(param_4 + 0x10 + (GVar30 + iVar23) * 4);
          *piVar37 = *piVar38;
          *piVar38 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + -1;
          STField<short>(piVar37,6) = sVar5 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)GVar30;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 4;
        }
        local_10 = local_10 & 3;
        piVar37 = piVar36;
        if (((local_10 == 0) &&
            (((psVar2[param_2 + 1] == 0 || (iVar23 + 4 < (int)psVar2[param_2 + 1])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)))) && ((psVar2[1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + 1] = sVar8 + 4;
          piVar37 = (int *)*piVar36;
          param_9 = param_9 + -1;
          piVar38 = (int *)(param_4 + 0x10 + (GVar32 + 4 + iVar23) * 4);
          *piVar36 = *piVar38;
          *piVar38 = (int)piVar36;
          *(short *)(piVar36 + 1) = sVar4 + 1;
          STField<short>(piVar36,6) = sVar5 + 1;
          *(short *)(piVar36 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)(GVar32 + 4);
          STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
          *(short *)(piVar36 + 3) = sVar8 + 4;
        }
        iVar34 = iVar23 + 5;
        uVar39 = (ushort)iVar34;
        if ((bVar43) && (puVar33 = (ushort *)(psVar2 + iVar17), (*puVar33 & 0xc000) != 0xc000)) {
          piVar36 = piVar37;
          if (uVar41 == 0) {
            puVar31 = (ushort *)((int)puVar33 - (param_2 * 2 + 2));
            uVar10 = *puVar31;
            if ((((uVar10 == 0) || (iVar34 < (short)uVar10)) &&
                (((puVar33[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar33[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar31 = uVar39;
              iVar26 = param_5;
              if (iVar20 == 0) {
                if (iVar35 == 0) {
                  iVar26 = param_5 + 4;
                }
                else if (iVar35 != 1) {
                  iVar26 = param_5 + -2;
                }
              }
              else if (iVar35 == 0) {
                if (iVar20 != 1) {
                  iVar26 = param_5 + -2;
                }
              }
              else {
                iVar26 = param_5 + -4;
              }
              param_9 = param_9 + -1;
              piVar36 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + (iVar26 + iVar34) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + -1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar26;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar37 + 3) = uVar39;
            }
          }
          piVar37 = piVar36;
          if (uVar27 == 0) {
            puVar31 = puVar33 + -param_2;
            if (((puVar31[1] == 0) || (iVar34 < (short)puVar31[1])) &&
               (((((*puVar31 & 0xc000) != 0xc000 &&
                  (((puVar33[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))
                 && ((psVar2[1] & 0xc000U) != 0xc000)) &&
                (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar31[1] = uVar39;
              if (iVar20 == 0) {
                iVar26 = param_5 + 4;
              }
              else if (iVar35 + 1 < iVar20) {
                iVar26 = param_5 + -2;
              }
              else {
                iVar26 = param_5;
                if (iVar20 != iVar35 + 1) {
                  iVar26 = param_5 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar36;
              piVar38 = (int *)(param_4 + (iVar26 + iVar34) * 4);
              *piVar36 = *piVar38;
              *piVar38 = (int)piVar36;
              *(short *)(piVar36 + 1) = sVar4 + 1;
              STField<short>(piVar36,6) = sVar5 + -1;
              *(short *)(piVar36 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar26;
              STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar36 + 3) = uVar39;
            }
          }
          piVar36 = piVar37;
          if ((uVar28 == 0) &&
             ((((((puVar33[param_2 + -1] == 0 || (iVar34 < (short)puVar33[param_2 + -1])) &&
                 ((puVar33[param_2] & 0xc000) != 0xc000)) &&
                (((puVar33[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)))) &&
               ((psVar2[-1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)))
             ) {
            puVar33[param_2 + -1] = uVar39;
            if (iVar35 == 0) {
              iVar26 = param_5 + 4;
            }
            else if (iVar20 + 1 < iVar35) {
              iVar26 = param_5 + -2;
            }
            else {
              iVar26 = param_5;
              if (iVar35 != iVar20 + 1) {
                iVar26 = param_5 + 2;
              }
            }
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + (iVar26 + iVar34) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + -1;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar26;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar37 + 3) = uVar39;
          }
          piVar37 = piVar36;
          if ((((local_10 == 0) &&
               ((puVar33[param_2 + 1] == 0 || (iVar34 < (short)puVar33[param_2 + 1])))) &&
              (((puVar33[param_2] & 0xc000) != 0xc000 &&
               ((((puVar33[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)))))) &&
             ((psVar2[param_2 + 1] & 0xc000U) != 0xc000)) {
            puVar33[param_2 + 1] = uVar39;
            piVar37 = (int *)*piVar36;
            param_9 = param_9 + -1;
            piVar38 = (int *)(param_4 + (param_5 + 4 + iVar34) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4 + 1;
            STField<short>(piVar36,6) = sVar5 + 1;
            *(short *)(piVar36 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)(param_5 + 4);
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar36 + 3) = uVar39;
          }
        }
        if ((bVar12) && (puVar33 = (ushort *)(psVar2 + -iVar17), (*puVar33 & 0xc000) != 0xc000)) {
          piVar36 = piVar37;
          if (uVar41 == 0) {
            puVar31 = (ushort *)((int)puVar33 - (param_2 * 2 + 2));
            uVar10 = *puVar31;
            if ((((uVar10 == 0) || (iVar34 < (short)uVar10)) &&
                (((puVar33[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar33[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar31 = uVar39;
              iVar26 = param_1;
              if (iVar20 == 0) {
                if (iVar35 == 0) {
                  iVar26 = param_1 + 4;
                }
                else if (iVar35 != 1) {
                  iVar26 = param_1 + -2;
                }
              }
              else if (iVar35 == 0) {
                if (iVar20 != 1) {
                  iVar26 = param_1 + -2;
                }
              }
              else {
                iVar26 = param_1 + -4;
              }
              param_9 = param_9 + -1;
              piVar36 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + (iVar26 + iVar34) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + -1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar26;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar37 + 3) = uVar39;
            }
          }
          piVar38 = piVar36;
          if (uVar27 == 0) {
            puVar31 = puVar33 + -param_2;
            if ((((puVar31[1] == 0) || (iVar34 < (short)puVar31[1])) &&
                ((((*puVar31 & 0xc000) != 0xc000 &&
                  (((puVar33[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))
                 && ((psVar2[1] & 0xc000U) != 0xc000)))) &&
               (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)) {
              puVar31[1] = uVar39;
              if (iVar20 == 0) {
                iVar26 = param_1 + 4;
              }
              else if (iVar35 + 1 < iVar20) {
                iVar26 = param_1 + -2;
              }
              else {
                iVar26 = param_1;
                if (iVar20 != iVar35 + 1) {
                  iVar26 = param_1 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar38 = (int *)*piVar36;
              piVar37 = (int *)(param_4 + (iVar26 + iVar34) * 4);
              *piVar36 = *piVar37;
              *piVar37 = (int)piVar36;
              *(short *)(piVar36 + 1) = sVar4 + 1;
              STField<short>(piVar36,6) = sVar5 + -1;
              *(short *)(piVar36 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar26;
              STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar36 + 3) = uVar39;
            }
          }
          piVar37 = piVar38;
          if (((uVar28 == 0) &&
              ((((puVar33[param_2 + -1] == 0 || (iVar34 < (short)puVar33[param_2 + -1])) &&
                ((puVar33[param_2] & 0xc000) != 0xc000)) &&
               (((puVar33[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)))))) &&
             (((psVar2[-1] & 0xc000U) != 0xc000 && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)))) {
            puVar33[param_2 + -1] = uVar39;
            if (iVar35 == 0) {
              iVar26 = param_1 + 4;
            }
            else if (iVar20 + 1 < iVar35) {
              iVar26 = param_1 + -2;
            }
            else {
              iVar26 = param_1;
              if (iVar35 != iVar20 + 1) {
                iVar26 = param_1 + 2;
              }
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar36 = (int *)(param_4 + (iVar26 + iVar34) * 4);
            *piVar38 = *piVar36;
            *piVar36 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5 + 1;
            *(short *)(piVar38 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar26;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar38 + 3) = uVar39;
          }
          if (((local_10 == 0) &&
              ((puVar33[param_2 + 1] == 0 || (iVar34 < (short)puVar33[param_2 + 1])))) &&
             (((puVar33[param_2] & 0xc000) != 0xc000 &&
              (((((puVar33[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + 1] & 0xc000U) != 0xc000))))
             )) {
            puVar33[param_2 + 1] = uVar39;
            param_1 = param_1 + 4;
            piVar36 = piVar37;
            goto LAB_006ce57c;
          }
        }
        break;
      case CASE_3:
        uVar41 = local_10 & 0x10;
        piVar36 = piVar37;
        if ((uVar41 == 0) && ((psVar2[-1] == 0 || (iVar23 + 3 < (int)psVar2[-1])))) {
          psVar2[-1] = (short)(iVar23 + 3);
          if (-iVar35 < iVar20) {
            iVar34 = GVar32 + CASE_1;
          }
          else {
            iVar34 = GVar32 + CASE_3;
          }
          param_9 = param_9 + -1;
          piVar36 = (int *)*piVar37;
          piVar38 = (int *)(param_4 + (iVar34 + iVar23 + 3) * 4);
          *piVar37 = *piVar38;
          *piVar38 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + -1;
          STField<short>(piVar37,6) = sVar5;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        if ((psVar2[1] == 0) || (piVar37 = piVar36, iVar23 + 3 < (int)psVar2[1])) {
          psVar2[1] = (short)(iVar23 + 3);
          if (-iVar20 == iVar35 || -iVar35 < iVar20) {
            iVar34 = GVar32 - CASE_1;
          }
          else {
            iVar34 = GVar32 - CASE_3;
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar36;
          piVar38 = (int *)(param_4 + (iVar34 + iVar23 + 3) * 4);
          *piVar36 = *piVar38;
          *piVar38 = (int)piVar36;
          *(short *)(piVar36 + 1) = sVar4 + 1;
          STField<short>(piVar36,6) = sVar5;
          *(short *)(piVar36 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
          STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
          *(short *)(piVar36 + 3) = sVar8 + 3;
        }
        uVar27 = local_10 & 0x20;
        piVar36 = piVar37;
        if (uVar27 == 0) {
          sVar7 = psVar2[-param_2];
          if ((sVar7 == 0) || (iVar23 + 3 < (int)sVar7)) {
            psVar2[-param_2] = sVar8 + 3;
            if (iVar20 == 0) {
              if (iVar35 == 0) {
                iVar34 = GVar32 + CASE_3;
              }
              else {
                iVar34 = GVar32 + CASE_1;
              }
            }
            else if (-iVar35 < iVar20) {
              iVar34 = GVar32 - CASE_3;
            }
            else {
              iVar34 = GVar32 - CASE_1;
            }
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + 0xc + (iVar34 + iVar23) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4;
            STField<short>(piVar37,6) = sVar5 + -1;
            *(short *)(piVar37 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 3;
          }
        }
        uVar28 = local_10 & 2;
        piVar37 = piVar36;
        if ((uVar28 == 0) && ((psVar2[param_2] == 0 || (iVar23 + 3 < (int)psVar2[param_2])))) {
          psVar2[param_2] = sVar8 + 3;
          if (iVar20 < -iVar35) {
            iVar34 = GVar32 + CASE_1;
          }
          else {
            iVar34 = GVar32 + CASE_3;
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar36;
          piVar38 = (int *)(param_4 + 0xc + (iVar34 + iVar23) * 4);
          *piVar36 = *piVar38;
          *piVar38 = (int)piVar36;
          *(short *)(piVar36 + 1) = sVar4;
          STField<short>(piVar36,6) = sVar5 + 1;
          *(short *)(piVar36 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
          STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
          *(short *)(piVar36 + 3) = sVar8 + 3;
        }
        piVar36 = piVar37;
        if (bVar12) {
          sVar7 = psVar2[-iVar17];
          if ((sVar7 == 0) || (iVar23 + 3 < (int)sVar7)) {
            psVar2[-iVar17] = sVar8 + 3;
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + 0xc + (param_1 + iVar23) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STField<short>(piVar37,10) = (short)param_1;
            *(short *)(piVar37 + 3) = sVar8 + 3;
          }
        }
        piVar37 = piVar36;
        if ((bVar43) && ((psVar2[iVar17] == 0 || (iVar23 + 3 < (int)psVar2[iVar17])))) {
          psVar2[iVar17] = sVar8 + 3;
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar36;
          piVar38 = (int *)(param_4 + 0xc + (param_5 + iVar23) * 4);
          *piVar36 = *piVar38;
          *piVar38 = (int)piVar36;
          *(short *)(piVar36 + 1) = sVar4;
          STField<short>(piVar36,6) = sVar5;
          *(short *)(piVar36 + 2) = sVar6 + 1;
          STField<short>(piVar36,10) = (short)param_5;
          *(short *)(piVar36 + 3) = sVar8 + 3;
        }
        if ((bVar43) && (-1 < psVar2[iVar17])) {
          piVar36 = piVar37;
          if ((uVar41 == 0) &&
             (((psVar2[iVar17 + -1] == 0 || (iVar23 + 4 < (int)psVar2[iVar17 + -1])) &&
              ((psVar2[-1] & 0xc000U) != 0xc000)))) {
            psVar2[iVar17 + -1] = sVar8 + 4;
            if (-iVar35 < iVar20) {
              iVar34 = param_5 + 1;
            }
            else {
              iVar34 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + -1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar36;
          if (((psVar2[iVar17 + 1] == 0) || (iVar23 + 4 < (int)psVar2[iVar17 + 1])) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar2[iVar17 + 1] = sVar8 + 4;
            if (-iVar20 == iVar35 || -iVar35 < iVar20) {
              iVar34 = param_5 + -1;
            }
            else {
              iVar34 = param_5 + -3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4 + 1;
            STField<short>(piVar36,6) = sVar5;
            *(short *)(piVar36 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = sVar8 + 4;
          }
          piVar36 = piVar37;
          if (uVar27 == 0) {
            sVar7 = psVar2[iVar17 - param_2];
            if (((sVar7 == 0) || (iVar23 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar2[iVar17 - param_2] = sVar8 + 4;
              if (iVar20 == 0) {
                if (iVar35 == 0) {
                  iVar34 = param_5 + 3;
                }
                else {
                  iVar34 = param_5 + 1;
                }
              }
              else if (-iVar35 < iVar20) {
                iVar34 = param_5 + -3;
              }
              else {
                iVar34 = param_5 + -1;
              }
              param_9 = param_9 + -1;
              piVar36 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(short *)(piVar37 + 3) = sVar8 + 4;
            }
          }
          piVar37 = piVar36;
          if ((uVar28 == 0) &&
             (((psVar2[iVar17 + param_2] == 0 || (iVar23 + 4 < (int)psVar2[iVar17 + param_2])) &&
              ((psVar2[param_2] & 0xc000U) != 0xc000)))) {
            psVar2[iVar17 + param_2] = sVar8 + 4;
            if (iVar20 < -iVar35) {
              iVar34 = param_5 + 1;
            }
            else {
              iVar34 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4;
            STField<short>(piVar36,6) = sVar5 + 1;
            *(short *)(piVar36 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = sVar8 + 4;
          }
        }
        if ((bVar12) && (psVar29 = psVar2 + -iVar17, -1 < *psVar29)) {
          piVar36 = piVar37;
          if (((uVar41 == 0) && ((psVar29[-1] == 0 || (iVar23 + 4 < (int)psVar29[-1])))) &&
             ((psVar2[-1] & 0xc000U) != 0xc000)) {
            psVar29[-1] = sVar8 + 4;
            if (-iVar35 < iVar20) {
              iVar34 = param_1 + 1;
            }
            else {
              iVar34 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + -1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar36;
          if (((psVar29[1] == 0) || (iVar23 + 4 < (int)psVar29[1])) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar29[1] = sVar8 + 4;
            if (-iVar20 == iVar35 || -iVar35 < iVar20) {
              iVar34 = param_1 + -1;
            }
            else {
              iVar34 = param_1 + -3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4 + 1;
            STField<short>(piVar36,6) = sVar5;
            *(short *)(piVar36 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = sVar8 + 4;
          }
          piVar36 = piVar37;
          if (uVar27 == 0) {
            sVar7 = psVar29[-param_2];
            if (((sVar7 == 0) || (iVar23 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar29[-param_2] = sVar8 + 4;
              if (iVar20 == 0) {
                if (iVar35 == 0) {
                  iVar34 = param_1 + 3;
                }
                else {
                  iVar34 = param_1 + 1;
                }
              }
              else if (-iVar35 < iVar20) {
                iVar34 = param_1 + -3;
              }
              else {
                iVar34 = param_1 + -1;
              }
              param_9 = param_9 + -1;
              piVar36 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(short *)(piVar37 + 3) = sVar8 + 4;
            }
          }
          piVar37 = piVar36;
          if (((uVar28 == 0) && ((psVar29[param_2] == 0 || (iVar23 + 4 < (int)psVar29[param_2]))))
             && ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar29[param_2] = sVar8 + 4;
            if (iVar20 < -iVar35) {
              iVar34 = param_1 + 1;
            }
            else {
              iVar34 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + 0x10 + (iVar34 + iVar23) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4;
            STField<short>(piVar36,6) = sVar5 + 1;
            *(short *)(piVar36 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar34;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = sVar8 + 4;
          }
        }
        uVar41 = local_10 & 0x30;
        piVar36 = piVar37;
        if (uVar41 == 0) {
          psVar29 = (short *)((int)psVar2 - (param_2 * 2 + 2));
          sVar7 = *psVar29;
          if ((((sVar7 == 0) || (iVar23 + 4 < (int)sVar7)) &&
              ((psVar2[-param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
            *psVar29 = sVar8 + 4;
            if (iVar20 == 0) {
              GVar30 = GVar32 + 4;
            }
            else if (1 - iVar35 < iVar20) {
              GVar30 = GVar32 - CASE_2;
            }
            else {
              GVar30 = GVar32;
              if (iVar20 != 1 - iVar35) {
                GVar30 = GVar32 + CASE_2;
              }
            }
            param_9 = param_9 + -1;
            piVar36 = (int *)*piVar37;
            piVar38 = (int *)(param_4 + 0x10 + (GVar30 + iVar23) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + -1;
            STField<short>(piVar37,6) = sVar5 + -1;
            *(short *)(piVar37 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)GVar30;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        uVar27 = local_10 & 0x21;
        piVar37 = piVar36;
        if (uVar27 == 0) {
          puVar33 = (ushort *)(psVar2 + -param_2);
          if (((puVar33[1] == 0) || (iVar23 + 4 < (short)puVar33[1])) &&
             (((*puVar33 & 0xc000) != 0xc000 && ((psVar2[1] & 0xc000U) != 0xc000)))) {
            puVar33[1] = sVar8 + 4;
            if (iVar20 == 0) {
              if (iVar35 == 0) {
                GVar30 = GVar32 + 4;
              }
              else {
                GVar30 = GVar32;
                if (iVar35 != -1) {
                  GVar30 = GVar32 - CASE_2;
                }
              }
            }
            else {
              GVar30 = GVar32 + ~CASE_3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + 0x10 + (GVar30 + iVar23) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4 + 1;
            STField<short>(piVar36,6) = sVar5 + -1;
            *(short *)(piVar36 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)GVar30;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(short *)(piVar36 + 3) = sVar8 + 4;
          }
        }
        uVar28 = local_10 & 0x12;
        piVar36 = piVar37;
        if ((((uVar28 == 0) &&
             ((psVar2[param_2 + -1] == 0 || (iVar23 + 4 < (int)psVar2[param_2 + -1])))) &&
            ((psVar2[param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + -1] = sVar8 + 4;
          param_9 = param_9 + -1;
          piVar36 = (int *)*piVar37;
          piVar38 = (int *)(param_4 + 0x10 + (GVar32 + 4 + iVar23) * 4);
          *piVar37 = *piVar38;
          *piVar38 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + -1;
          STField<short>(piVar37,6) = sVar5 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)(GVar32 + 4);
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 4;
        }
        local_10 = local_10 & 3;
        piVar37 = piVar36;
        if (((local_10 == 0) &&
            (((psVar2[param_2 + 1] == 0 || (iVar23 + 4 < (int)psVar2[param_2 + 1])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)))) && ((psVar2[1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + 1] = sVar8 + 4;
          bVar42 = -(iVar20 + 1) == iVar35;
          if (bVar42 || -iVar35 < iVar20 + 1) {
            if (!bVar42) {
              GVar32 = GVar32 + CASE_2;
            }
          }
          else {
            GVar32 = GVar32 - CASE_2;
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar36;
          piVar38 = (int *)(param_4 + 0x10 + (GVar32 + iVar23) * 4);
          *piVar36 = *piVar38;
          *piVar38 = (int)piVar36;
          *(short *)(piVar36 + 1) = sVar4 + 1;
          STField<short>(piVar36,6) = sVar5 + 1;
          *(short *)(piVar36 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)GVar32;
          STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
          *(short *)(piVar36 + 3) = sVar8 + 4;
        }
        iVar34 = iVar23 + 5;
        uVar39 = (ushort)iVar34;
        if ((bVar43) && (puVar33 = (ushort *)(psVar2 + iVar17), (*puVar33 & 0xc000) != 0xc000)) {
          piVar36 = piVar37;
          if (uVar41 == 0) {
            puVar31 = (ushort *)((int)puVar33 - (param_2 * 2 + 2));
            uVar10 = *puVar31;
            if ((((uVar10 == 0) || (iVar34 < (short)uVar10)) &&
                (((puVar33[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar33[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar31 = uVar39;
              if (iVar20 == 0) {
                iVar26 = param_5 + 4;
              }
              else if (1 - iVar35 < iVar20) {
                iVar26 = param_5 + -2;
              }
              else {
                iVar26 = param_5;
                if (iVar20 != 1 - iVar35) {
                  iVar26 = param_5 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar36 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + (iVar26 + iVar34) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + -1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar26;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar37 + 3) = uVar39;
            }
          }
          piVar37 = piVar36;
          if (uVar27 == 0) {
            puVar31 = puVar33 + -param_2;
            if ((((puVar31[1] == 0) || (iVar34 < (short)puVar31[1])) &&
                (((*puVar31 & 0xc000) != 0xc000 &&
                 (((puVar33[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))))
               && (((psVar2[1] & 0xc000U) != 0xc000 &&
                   (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar31[1] = uVar39;
              if (iVar20 == 0) {
                if (iVar35 == 0) {
                  iVar26 = param_5 + 4;
                }
                else {
                  iVar26 = param_5;
                  if (iVar35 != -1) {
                    iVar26 = param_5 + -2;
                  }
                }
              }
              else {
                iVar26 = param_5 + -4;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar36;
              piVar38 = (int *)(param_4 + (iVar26 + iVar34) * 4);
              *piVar36 = *piVar38;
              *piVar38 = (int)piVar36;
              *(short *)(piVar36 + 1) = sVar4 + 1;
              STField<short>(piVar36,6) = sVar5 + -1;
              *(short *)(piVar36 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar26;
              STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar36 + 3) = uVar39;
            }
          }
          piVar36 = piVar37;
          if (((uVar28 == 0) &&
              (((((puVar33[param_2 + -1] == 0 || (iVar34 < (short)puVar33[param_2 + -1])) &&
                 ((puVar33[param_2] & 0xc000) != 0xc000)) &&
                (((puVar33[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)))) &&
               ((psVar2[-1] & 0xc000U) != 0xc000)))) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar33[param_2 + -1] = uVar39;
            piVar36 = (int *)*piVar37;
            param_9 = param_9 + -1;
            piVar38 = (int *)(param_4 + (param_5 + 4 + iVar34) * 4);
            *piVar37 = *piVar38;
            *piVar38 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + -1;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STField<short>(piVar37,10) = (short)param_5 + 4;
            *(ushort *)(piVar37 + 3) = uVar39;
          }
          piVar37 = piVar36;
          if (((local_10 == 0) &&
              ((puVar33[param_2 + 1] == 0 || (iVar34 < (short)puVar33[param_2 + 1])))) &&
             (((puVar33[param_2] & 0xc000) != 0xc000 &&
              (((((puVar33[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + 1] & 0xc000U) != 0xc000))))
             )) {
            puVar33[param_2 + 1] = uVar39;
            bVar43 = -(iVar20 + 1) == iVar35;
            if (bVar43 || -iVar35 < iVar20 + 1) {
              if (!bVar43) {
                param_5 = param_5 + 2;
              }
            }
            else {
              param_5 = param_5 + -2;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar36;
            piVar38 = (int *)(param_4 + (param_5 + iVar34) * 4);
            *piVar36 = *piVar38;
            *piVar38 = (int)piVar36;
            *(short *)(piVar36 + 1) = sVar4 + 1;
            STField<short>(piVar36,6) = sVar5 + 1;
            *(short *)(piVar36 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)param_5;
            STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar36 + 3) = uVar39;
          }
        }
        if ((bVar12) && (puVar33 = (ushort *)(psVar2 + -iVar17), (*puVar33 & 0xc000) != 0xc000)) {
          piVar36 = piVar37;
          if (uVar41 == 0) {
            puVar31 = (ushort *)((int)puVar33 - (param_2 * 2 + 2));
            uVar10 = *puVar31;
            if ((((uVar10 == 0) || (iVar34 < (short)uVar10)) &&
                (((puVar33[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar33[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar31 = uVar39;
              if (iVar20 == 0) {
                iVar26 = param_1 + 4;
              }
              else if (1 - iVar35 < iVar20) {
                iVar26 = param_1 + -2;
              }
              else {
                iVar26 = param_1;
                if (iVar20 != 1 - iVar35) {
                  iVar26 = param_1 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar36 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + (iVar26 + iVar34) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + -1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar26;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar37 + 3) = uVar39;
            }
          }
          piVar38 = piVar36;
          if (uVar27 == 0) {
            puVar31 = puVar33 + -param_2;
            if ((((puVar31[1] == 0) || (iVar34 < (short)puVar31[1])) &&
                (((*puVar31 & 0xc000) != 0xc000 &&
                 (((puVar33[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))))
               && (((psVar2[1] & 0xc000U) != 0xc000 &&
                   (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar31[1] = uVar39;
              if (iVar20 == 0) {
                if (iVar35 == 0) {
                  iVar26 = param_1 + 4;
                }
                else {
                  iVar26 = param_1;
                  if (iVar35 != -1) {
                    iVar26 = param_1 + -2;
                  }
                }
              }
              else {
                iVar26 = param_1 + -4;
              }
              param_9 = param_9 + -1;
              piVar38 = (int *)*piVar36;
              piVar37 = (int *)(param_4 + (iVar26 + iVar34) * 4);
              *piVar36 = *piVar37;
              *piVar37 = (int)piVar36;
              *(short *)(piVar36 + 1) = sVar4 + 1;
              STField<short>(piVar36,6) = sVar5 + -1;
              *(short *)(piVar36 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar26;
              STField<undefined2>(piVar36,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar36 + 3) = uVar39;
            }
          }
          piVar37 = piVar38;
          if ((((uVar28 == 0) &&
               ((((puVar33[param_2 + -1] == 0 || (iVar34 < (short)puVar33[param_2 + -1])) &&
                 ((puVar33[param_2] & 0xc000) != 0xc000)) &&
                (((puVar33[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000))))))
              && ((psVar2[-1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar33[param_2 + -1] = uVar39;
            piVar37 = (int *)*piVar38;
            param_9 = param_9 + -1;
            piVar36 = (int *)(param_4 + (param_1 + 4 + iVar34) * 4);
            *piVar38 = *piVar36;
            *piVar36 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5 + 1;
            *(short *)(piVar38 + 2) = sVar6 + -1;
            STField<short>(piVar38,10) = (short)param_1 + 4;
            *(ushort *)(piVar38 + 3) = uVar39;
          }
          if (((local_10 == 0) &&
              ((puVar33[param_2 + 1] == 0 || (iVar34 < (short)puVar33[param_2 + 1])))) &&
             ((((puVar33[param_2] & 0xc000) != 0xc000 &&
               ((((puVar33[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)))) && ((psVar2[param_2 + 1] & 0xc000U) != 0xc000))
             )) {
            puVar33[param_2 + 1] = uVar39;
            iVar26 = iVar35;
            iVar34 = iVar20;
            goto LAB_006ce561;
          }
        }
      }
      if (0 < *psVar1) goto cf_break_loop_006CE641;
      if ((((bVar13) && (-2 < iVar35)) && ((iVar35 < 2 && ((-2 < iVar20 && (iVar20 < 2)))))) &&
         ((-2 < iVar22 && (iVar22 < 2)))) {
        bVar14 = true;
      }
    }
    local_54 = local_54 + 1;
    piVar36 = (int *)*piVar21;
  } while ((int *)*piVar21 != nullptr);
  *piVar21 = (int)piVar37;
  param_9 = param_9 + local_54;
  piVar37 = piVar11;
  if (bVar14) goto cf_break_loop_006CE641;
  goto cf_continue_loop_006C9187;
cf_break_loop_006CE63A:
  local_4c_mg0 = piVar36;
  local_38 = 0xfffffffe;
cf_break_loop_006CE641:
  if (sVar3 < 0) {
    *psVar1 = sVar3;
  }
  FUN_006a5e90((short *)param_4);
  while (local_4c_mg0 != nullptr) {
    piVar36 = (int *)*local_4c_mg0;
    FUN_006a5e90((short *)local_4c_mg0);
    local_4c_mg0 = piVar36;
  }
  return local_38;
}

