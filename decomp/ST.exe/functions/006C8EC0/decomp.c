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

undefined4
FUN_006c8ec0(int param_1,int param_2,Global_sub_006C8EC0_param_3Enum param_3,int param_4,int param_5
            ,int param_6,int param_7,short *param_8,int param_9,int param_10)

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
  undefined4 uVar16;
  int *local_4c_mg2;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  short *psVar30;
  Global_sub_006C8EC0_param_3Enum GVar31;
  ushort *puVar32;
  Global_sub_006C8EC0_param_3Enum GVar33;
  ushort *puVar34;
  int iVar35;
  int iVar36;
  int *piVar37;
  int *piVar38;
  int *piVar39;
  ushort uVar40;
  int iVar41;
  uint uVar42;
  bool bVar43;
  bool bVar44;
  int local_54;
  int *local_4c_mg0;
  int local_48;
  int local_40;
  int *local_3c;
  undefined4 local_38;
  int local_34;
  undefined2 local_18;
  uint local_10;

  psVar15 = param_8;
  if ((((int)param_8 < 0) || (param_9 < 0)) || (param_10 < 0)) {
    uVar16 = FUN_006ab090(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(int)param_8,
                          param_9,param_10);
    return uVar16;
  }
  iVar18 = param_2 * param_3;
  local_4c_mg0 = nullptr;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_8 = &SHORT_007ed572;
  while ((((iVar19 = (int)param_8[-1] + (int)psVar15, iVar19 < 0 || (param_2 <= iVar19)) ||
          ((iVar41 = *param_8 + param_9, iVar41 < 0 ||
           (((int)param_3 <= iVar41 || (iVar20 = param_8[1] + param_10, iVar20 < 0)))))) ||
         ((param_4 <= iVar20 ||
          (*(short *)(param_1 + (iVar41 * param_2 + iVar19 + iVar20 * iVar18) * 2) != 0))))) {
    param_8 = param_8 + 4;
    local_4c_mg0 = (int *)((int)local_4c_mg0 + 1);
    if (0x7ed641 < (int)param_8) {
LAB_006c8f65:
      uVar16 = FUN_006ab090(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(int)psVar15,
                            param_9,param_10);
      return uVar16;
    }
  }
  if ((int)local_4c_mg0 < 0x1a) {
    iVar19 = -param_9;
    uVar42 = param_7 - param_10;
    iVar41 = param_3 - param_9;
    iVar20 = param_4 - param_10;
    iVar21 = param_6 - param_9;
    psVar1 = (short *)(param_1 + ((int)psVar15 + param_2 * param_9 + iVar18 * param_10) * 2);
    local_38 = 0;
    local_4c_mg0 = nullptr;
    psVar1[iVar21 * param_2 + (param_5 - (int)psVar15) + uVar42 * iVar18] = 1;
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
          (((param_10 < 1 || (psVar1[-iVar18] != 0)) &&
           ((param_4 + -1 <= param_10 || (psVar1[iVar18] != 0)))))))) {
        bVar13 = true;
      }
      else {
        bVar13 = false;
      }
    }
    local_48 = FUN_006aae60(param_5,param_6,param_7,(int)psVar15,param_9,param_7);
    local_48 = local_48 + ((uVar42 ^ (int)uVar42 >> 0x1f) - ((int)uVar42 >> 0x1f));
    local_34 = local_48 * 2 + 10;
    param_4 = (int)FUN_006b04d0(local_34 * 4);
    piVar37 = local_4c_mg0;
    if (((undefined4 *)param_4 == nullptr) ||
       (local_4c_mg2 = FUN_006bfb70(0x3e84), local_4c_mg2 == nullptr))
    goto cf_break_loop_006CE63A;
    *local_4c_mg2 = 0;
    piVar37 = local_4c_mg2 + 1;
    local_3c = local_4c_mg2 + 5;
    *piVar37 = 0;
    local_40 = 999;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_9 = -1;
    *piVar37 = *(int *)(param_4 + (local_48 + 1) * 4);
    local_18 = (undefined2)iVar21;
    *(int **)(param_4 + (local_48 + 1) * 4) = piVar37;
    *(short *)(local_4c_mg2 + 2) = (short)(param_5 - (int)psVar15);
    STField<undefined2>(local_4c_mg2,10) = local_18;
    STPiece<0,2>(param_8) = (undefined2)uVar42;
    STField<short>(local_4c_mg2,0xe) = (short)local_48;
    *(undefined2 *)(local_4c_mg2 + 3) = STPiece<0,2>(param_8);
    *(undefined2 *)(local_4c_mg2 + 4) = 1;
    bVar14 = false;
    piVar38 = nullptr;
    local_4c_mg0 = local_4c_mg2;
    goto cf_continue_loop_006C9187;
  }
  goto LAB_006c8f65;
cf_continue_loop_006C9187:
  if (local_34 <= local_48) goto cf_break_loop_006CE641;
  puVar17 = (undefined4 *)(param_4 + local_48 * 4);
  while (piVar11 = (int *)*puVar17, piVar11 == nullptr) {
    local_48 = local_48 + 1;
    puVar17 = puVar17 + 1;
    if (local_34 <= local_48) goto cf_break_loop_006CE641;
  }
  if (local_34 <= local_48) goto cf_break_loop_006CE641;
  if (local_34 <= local_48 + 10) {
    param_4 = (int)FUN_006bfb50((int *)param_4,local_34 * 4 + 400);
    piVar37 = local_4c_mg0;
    if ((int *)param_4 == nullptr) goto cf_break_loop_006CE63A;
    memset((int *)(param_4 + local_34 * 4), 0, 0x190); /* compiler bulk-zero initialization */
    local_34 = local_34 + 100;
  }
  local_54 = 0;
  *(undefined4 *)(param_4 + local_48 * 4) = 0;
  piVar37 = piVar11;
  do {
    piVar22 = piVar37;
    sVar4 = (short)piVar22[1];
    iVar36 = (int)sVar4;
    sVar5 = STField<short>(piVar22,6);
    iVar21 = (int)sVar5;
    sVar6 = (short)piVar22[2];
    iVar23 = (int)sVar6;
    psVar2 = psVar1 + iVar21 * param_2 + iVar36 + iVar23 * iVar18;
    if ((short)piVar22[3] <= *psVar2) {
      sVar7 = STField<short>(piVar22,10);
      GVar33 = (Global_sub_006C8EC0_param_3Enum)sVar7;
      iVar24 = (int)(short)piVar22[3] + GVar33;
      if (iVar24 < local_48) {
        local_48 = iVar24;
      }
      sVar8 = *psVar2;
      iVar24 = (int)sVar8;
      piVar37 = local_4c_mg0;
      for (; local_4c_mg0 = piVar37, param_9 < 0x1a; param_9 = param_9 + 1) {
        if (local_40 < 1) {
          local_4c_mg0 = FUN_006bfb70(0x3e84);
          if (local_4c_mg0 == nullptr) goto cf_break_loop_006CE63A;
          *local_4c_mg0 = (int)piVar37;
          local_3c = local_4c_mg0 + 1;
          local_40 = 1000;
        }
        *local_3c = (int)piVar38;
        local_40 = local_40 + -1;
        piVar38 = local_3c;
        piVar37 = local_4c_mg0;
        local_3c = local_3c + 4;
      }
      local_10 = 0xff;
      auto param_3_after_write = CASE_0; /* compiler stack-slot lifetime split */
      if (iVar36 < 0) {
        param_3_after_write = CASE_1;
        local_10 = 0xfe;
        if (-(int)psVar15 < iVar36) {
          local_10 = 0xee;
        }
      }
      else {
        if (-(int)psVar15 < iVar36) {
          local_10 = 0xef;
        }
        if (iVar36 < (param_2 - (int)psVar15) + -1) {
          local_10 = local_10 & 0xfffffffe;
        }
      }
      if (iVar21 < 0) {
        uVar42 = local_10 & 0xfffffffd;
        if (iVar19 < iVar21) {
          uVar42 = local_10 & 0xffffffdd;
        }
      }
      else {
        param_3_after_write = param_3_after_write | CASE_2;
        if (iVar19 < iVar21) {
          local_10 = local_10 & 0xffffffdf;
        }
        uVar42 = local_10;
        if (iVar21 < iVar41 + -1) {
          uVar42 = local_10 & 0xfffffffd;
        }
      }
      local_10 = uVar42;
      bVar44 = iVar23 < iVar20 + -1;
      if (bVar44) {
        local_10 = local_10 & 0xfffffffb;
      }
      bVar12 = -param_10 < iVar23;
      if (bVar12) {
        local_10 = local_10 & 0xffffffbf;
      }
      if (iVar23 < 1) {
        if (iVar23 == 0) {
          param_5 = GVar33 + CASE_1;
        }
        else {
          param_5 = GVar33 - CASE_1;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = GVar33 + CASE_1;
      }
      else {
        param_5 = GVar33 + CASE_1;
        param_1 = GVar33 - CASE_1;
      }
      switch(param_3_after_write) {
      case CASE_0:
        uVar42 = local_10 & 0x10;
        piVar37 = piVar38;
        if ((uVar42 == 0) && ((psVar2[-1] == 0 || (iVar24 + 3 < (int)psVar2[-1])))) {
          psVar2[-1] = (short)(iVar24 + 3);
          if (iVar36 == 0) {
            if (iVar21 == 0) {
              iVar35 = GVar33 + CASE_3;
            }
            else {
              iVar35 = GVar33 + CASE_1;
            }
          }
          else if (-iVar21 < iVar36) {
            iVar35 = GVar33 - CASE_3;
          }
          else {
            iVar35 = GVar33 - CASE_1;
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar38;
          piVar39 = (int *)(param_4 + (iVar35 + iVar24 + 3) * 4);
          *piVar38 = *piVar39;
          *piVar39 = (int)piVar38;
          *(short *)(piVar38 + 1) = sVar4 + -1;
          *(short *)(piVar38 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
          STField<short>(piVar38,6) = sVar5;
          *(short *)(piVar38 + 3) = sVar8 + 3;
        }
        uVar28 = local_10 & 1;
        piVar38 = piVar37;
        if ((uVar28 == 0) && ((psVar2[1] == 0 || (iVar24 + 3 < (int)psVar2[1])))) {
          psVar2[1] = (short)(iVar24 + 3);
          if (iVar36 < -iVar21) {
            iVar35 = GVar33 + CASE_1;
          }
          else {
            iVar35 = GVar33 + CASE_3;
          }
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + (iVar35 + iVar24 + 3) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          STField<short>(piVar37,6) = sVar5;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        uVar29 = local_10 & 0x20;
        piVar37 = piVar38;
        if (uVar29 == 0) {
          sVar7 = psVar2[-param_2];
          if ((sVar7 == 0) || (iVar24 + 3 < (int)sVar7)) {
            psVar2[-param_2] = sVar8 + 3;
            if (-iVar21 < iVar36) {
              iVar35 = GVar33 + CASE_1;
            }
            else {
              iVar35 = GVar33 + CASE_3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0xc + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            STField<short>(piVar38,6) = sVar5 + -1;
            *(short *)(piVar38 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 1) = sVar4;
            *(short *)(piVar38 + 3) = sVar8 + 3;
          }
        }
        if ((psVar2[param_2] == 0) || (piVar38 = piVar37, iVar24 + 3 < (int)psVar2[param_2])) {
          psVar2[param_2] = sVar8 + 3;
          if (-iVar36 == iVar21 || -iVar21 < iVar36) {
            iVar35 = GVar33 - CASE_1;
          }
          else {
            iVar35 = GVar33 - CASE_3;
          }
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + 0xc + (iVar35 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          STField<short>(piVar37,6) = sVar5 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 1) = sVar4;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        piVar37 = piVar38;
        if (bVar12) {
          sVar7 = psVar2[-iVar18];
          if ((sVar7 == 0) || (iVar24 + 3 < (int)sVar7)) {
            psVar2[-iVar18] = sVar8 + 3;
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0xc + (param_1 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4;
            *(short *)(piVar38 + 2) = sVar6 + -1;
            STField<short>(piVar38,10) = (short)param_1;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 3) = sVar8 + 3;
          }
        }
        piVar38 = piVar37;
        if ((bVar44) && ((psVar2[iVar18] == 0 || (iVar24 + 3 < (int)psVar2[iVar18])))) {
          psVar2[iVar18] = sVar8 + 3;
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + 0xc + (param_5 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 2) = sVar6 + 1;
          *(short *)(piVar37 + 1) = sVar4;
          STField<short>(piVar37,10) = (short)param_5;
          STField<short>(piVar37,6) = sVar5;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        if ((bVar44) && (-1 < psVar2[iVar18])) {
          piVar37 = piVar38;
          if ((uVar42 == 0) &&
             (((psVar2[iVar18 + -1] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + -1])) &&
              ((psVar2[-1] & 0xc000U) != 0xc000)))) {
            psVar2[iVar18 + -1] = sVar8 + 4;
            if (iVar36 == 0) {
              if (iVar21 == 0) {
                iVar35 = param_5 + 3;
              }
              else {
                iVar35 = param_5 + 1;
              }
            }
            else if (-iVar21 < iVar36) {
              iVar35 = param_5 + -3;
            }
            else {
              iVar35 = param_5 + -1;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
          piVar38 = piVar37;
          if (((uVar28 == 0) &&
              ((psVar2[iVar18 + 1] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + 1])))) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar2[iVar18 + 1] = sVar8 + 4;
            if (iVar36 < -iVar21) {
              iVar35 = param_5 + 1;
            }
            else {
              iVar35 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar38;
          if (uVar29 == 0) {
            sVar7 = psVar2[iVar18 - param_2];
            if (((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar2[iVar18 - param_2] = sVar8 + 4;
              if (-iVar21 < iVar36) {
                iVar35 = param_5 + 1;
              }
              else {
                iVar35 = param_5 + 3;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 1) = sVar4;
              *(short *)(piVar38 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(short *)(piVar38 + 3) = sVar8 + 4;
            }
          }
          piVar38 = piVar37;
          if (((psVar2[iVar18 + param_2] == 0) || (iVar24 + 4 < (int)psVar2[iVar18 + param_2])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar2[iVar18 + param_2] = sVar8 + 4;
            if (-iVar36 == iVar21 || -iVar21 < iVar36) {
              iVar35 = param_5 + -1;
            }
            else {
              iVar35 = param_5 + -3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 1) = sVar4;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        if ((bVar12) && (psVar30 = psVar2 + -iVar18, -1 < *psVar30)) {
          piVar37 = piVar38;
          if (((uVar42 == 0) && ((psVar30[-1] == 0 || (iVar24 + 4 < (int)psVar30[-1])))) &&
             ((psVar2[-1] & 0xc000U) != 0xc000)) {
            psVar30[-1] = sVar8 + 4;
            if (iVar36 == 0) {
              if (iVar21 == 0) {
                iVar35 = param_1 + 3;
              }
              else {
                iVar35 = param_1 + 1;
              }
            }
            else if (-iVar21 < iVar36) {
              iVar35 = param_1 + -3;
            }
            else {
              iVar35 = param_1 + -1;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
          piVar38 = piVar37;
          if ((uVar28 == 0) &&
             (((psVar30[1] == 0 || (iVar24 + 4 < (int)psVar30[1])) &&
              ((psVar2[1] & 0xc000U) != 0xc000)))) {
            psVar30[1] = sVar8 + 4;
            if (iVar36 < -iVar21) {
              iVar35 = param_1 + 1;
            }
            else {
              iVar35 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar38;
          if (uVar29 == 0) {
            sVar7 = psVar30[-param_2];
            if (((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar30[-param_2] = sVar8 + 4;
              if (-iVar21 < iVar36) {
                iVar35 = param_1 + 1;
              }
              else {
                iVar35 = param_1 + 3;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 1) = sVar4;
              *(short *)(piVar38 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(short *)(piVar38 + 3) = sVar8 + 4;
            }
          }
          piVar38 = piVar37;
          if (((psVar30[param_2] == 0) || (iVar24 + 4 < (int)psVar30[param_2])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar30[param_2] = sVar8 + 4;
            if (-iVar36 == iVar21 || -iVar21 < iVar36) {
              iVar35 = param_1 + -1;
            }
            else {
              iVar35 = param_1 + -3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 1) = sVar4;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        uVar42 = local_10 & 0x30;
        piVar37 = piVar38;
        if (uVar42 == 0) {
          psVar30 = (short *)((int)psVar2 - (param_2 * 2 + 2));
          sVar7 = *psVar30;
          if ((((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
              ((psVar2[-param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
            *psVar30 = sVar8 + 4;
            if (iVar36 == 0) {
              GVar31 = GVar33 + 4;
            }
            else if (1 - iVar21 < iVar36) {
              GVar31 = GVar33 - CASE_2;
            }
            else {
              GVar31 = GVar33;
              if (iVar36 != 1 - iVar21) {
                GVar31 = GVar33 + CASE_2;
              }
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (GVar31 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5 + -1;
            *(short *)(piVar38 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)GVar31;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
        }
        uVar28 = local_10 & 0x21;
        piVar38 = piVar37;
        if (uVar28 == 0) {
          puVar34 = (ushort *)(psVar2 + -param_2);
          if (((puVar34[1] == 0) || (iVar24 + 4 < (int)(short)puVar34[1])) &&
             (((*puVar34 & 0xc000) != 0xc000 && ((psVar2[1] & 0xc000U) != 0xc000)))) {
            puVar34[1] = sVar8 + 4;
            piVar38 = (int *)*piVar37;
            param_9 = param_9 + -1;
            piVar39 = (int *)(param_4 + 0x10 + (GVar33 + 4 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5 + -1;
            *(short *)(piVar37 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)(GVar33 + 4);
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        uVar29 = local_10 & 0x12;
        piVar37 = piVar38;
        if ((((uVar29 == 0) &&
             ((psVar2[param_2 + -1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + -1])))) &&
            ((psVar2[param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + -1] = sVar8 + 4;
          if (iVar36 == 0) {
            if (iVar21 == 0) {
              param_3_after_write = GVar33 + 4;
            }
            else {
              param_3_after_write = GVar33;
              if (iVar21 != -1) {
                param_3_after_write = GVar33 - CASE_2;
              }
            }
          }
          else {
            param_3_after_write = GVar33 + ~CASE_3;
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar38;
          piVar39 = (int *)(param_4 + 0x10 + (param_3_after_write + iVar24) * 4);
          *piVar38 = *piVar39;
          *piVar39 = (int)piVar38;
          *(short *)(piVar38 + 1) = sVar4 + -1;
          STField<short>(piVar38,6) = sVar5 + 1;
          *(short *)(piVar38 + 2) = sVar6;
          STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
          *(short *)(piVar38 + 3) = sVar8 + 4;
        }
        local_10 = local_10 & 3;
        piVar38 = piVar37;
        if (((local_10 == 0) &&
            (((psVar2[param_2 + 1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + 1])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)))) && ((psVar2[1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + 1] = sVar8 + 4;
          bVar43 = -(iVar36 + 1) == iVar21;
          if (bVar43 || -iVar21 < iVar36 + 1) {
            if (!bVar43) {
              GVar33 = GVar33 + CASE_2;
            }
          }
          else {
            GVar33 = GVar33 - CASE_2;
          }
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + 0x10 + (GVar33 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + 1;
          STField<short>(piVar37,6) = sVar5 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)GVar33;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 4;
        }
        iVar35 = iVar24 + 5;
        uVar40 = (ushort)iVar35;
        if ((bVar44) && (puVar34 = (ushort *)(psVar2 + iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          piVar37 = piVar38;
          if (uVar42 == 0) {
            puVar32 = (ushort *)((int)puVar34 - (param_2 * 2 + 2));
            uVar10 = *puVar32;
            if ((((uVar10 == 0) || (iVar35 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar32 = uVar40;
              if (iVar36 == 0) {
                iVar27 = param_5 + 4;
              }
              else if (1 - iVar21 < iVar36) {
                iVar27 = param_5 + -2;
              }
              else {
                iVar27 = param_5;
                if (iVar36 != 1 - iVar21) {
                  iVar27 = param_5 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + (iVar27 + iVar35) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4 + -1;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(ushort *)(piVar38 + 3) = uVar40;
              *(short *)(piVar38 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            }
          }
          piVar38 = piVar37;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if ((((puVar32[1] == 0) || (iVar35 < (short)puVar32[1])) &&
                (((*puVar32 & 0xc000) != 0xc000 &&
                 (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))))
               && (((psVar2[1] & 0xc000U) != 0xc000 &&
                   (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar40;
              param_9 = param_9 + -1;
              piVar38 = (int *)*piVar37;
              piVar39 = (int *)(param_4 + (param_5 + 4 + iVar35) * 4);
              *piVar37 = *piVar39;
              *piVar39 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + 1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(ushort *)(piVar37 + 3) = uVar40;
              *(short *)(piVar37 + 2) = sVar6 + 1;
              STField<short>(piVar37,10) = (short)param_5 + 4;
            }
          }
          piVar37 = piVar38;
          if (((uVar29 == 0) &&
              (((((puVar34[param_2 + -1] == 0 || (iVar35 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)))) &&
               ((psVar2[-1] & 0xc000U) != 0xc000)))) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar34[param_2 + -1] = uVar40;
            if (iVar36 == 0) {
              if (iVar21 == 0) {
                iVar27 = param_5 + 4;
              }
              else {
                iVar27 = param_5;
                if (iVar21 != -1) {
                  iVar27 = param_5 + -2;
                }
              }
            }
            else {
              iVar27 = param_5 + -4;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + (iVar27 + iVar35) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5 + 1;
            *(ushort *)(piVar38 + 3) = uVar40;
            *(short *)(piVar38 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
          }
          piVar38 = piVar37;
          if (((local_10 == 0) &&
              ((puVar34[param_2 + 1] == 0 || (iVar35 < (short)puVar34[param_2 + 1])))) &&
             ((((puVar34[param_2] & 0xc000) != 0xc000 &&
               ((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)))) && ((psVar2[param_2 + 1] & 0xc000U) != 0xc000))
             )) {
            puVar34[param_2 + 1] = uVar40;
            bVar44 = -(iVar36 + 1) == iVar21;
            if (bVar44 || -iVar21 < iVar36 + 1) {
              if (!bVar44) {
                param_5 = param_5 + 2;
              }
            }
            else {
              param_5 = param_5 + -2;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + (param_5 + iVar35) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(ushort *)(piVar37 + 3) = uVar40;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)param_5;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          }
        }
        if ((bVar12) && (puVar34 = (ushort *)(psVar2 + -iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          piVar37 = piVar38;
          if (uVar42 == 0) {
            puVar32 = (ushort *)((int)puVar34 - (param_2 * 2 + 2));
            uVar10 = *puVar32;
            if ((((uVar10 == 0) || (iVar35 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar32 = uVar40;
              if (iVar36 == 0) {
                iVar27 = param_1 + 4;
              }
              else if (1 - iVar21 < iVar36) {
                iVar27 = param_1 + -2;
              }
              else {
                iVar27 = param_1;
                if (iVar36 != 1 - iVar21) {
                  iVar27 = param_1 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + (iVar27 + iVar35) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4 + -1;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(ushort *)(piVar38 + 3) = uVar40;
              *(short *)(piVar38 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            }
          }
          piVar39 = piVar37;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if ((((puVar32[1] == 0) || (iVar35 < (short)puVar32[1])) &&
                (((*puVar32 & 0xc000) != 0xc000 &&
                 (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))))
               && (((psVar2[1] & 0xc000U) != 0xc000 &&
                   (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar40;
              param_9 = param_9 + -1;
              piVar39 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + (param_1 + 4 + iVar35) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + 1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(ushort *)(piVar37 + 3) = uVar40;
              *(short *)(piVar37 + 2) = sVar6 + -1;
              STField<short>(piVar37,10) = (short)param_1 + 4;
            }
          }
          piVar38 = piVar39;
          if ((((uVar29 == 0) &&
               ((((puVar34[param_2 + -1] == 0 || (iVar35 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000))))))
              && ((psVar2[-1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar34[param_2 + -1] = uVar40;
            if (iVar36 == 0) {
              if (iVar21 == 0) {
                iVar27 = param_1 + 4;
              }
              else {
                iVar27 = param_1;
                if (iVar21 != -1) {
                  iVar27 = param_1 + -2;
                }
              }
            }
            else {
              iVar27 = param_1 + -4;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar39;
            piVar37 = (int *)(param_4 + (iVar27 + iVar35) * 4);
            *piVar39 = *piVar37;
            *piVar37 = (int)piVar39;
            *(short *)(piVar39 + 1) = sVar4 + -1;
            STField<short>(piVar39,6) = sVar5 + 1;
            *(ushort *)(piVar39 + 3) = uVar40;
            *(short *)(piVar39 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
            STField<undefined2>(piVar39,10) = (undefined2)param_3_after_write;
          }
          if (((local_10 == 0) &&
              ((puVar34[param_2 + 1] == 0 || (iVar35 < (short)puVar34[param_2 + 1])))) &&
             (((puVar34[param_2] & 0xc000) != 0xc000 &&
              (((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + 1] & 0xc000U) != 0xc000))))
             )) {
            puVar34[param_2 + 1] = uVar40;
            iVar27 = iVar21;
            iVar35 = iVar36;
LAB_006ce561:
            bVar44 = -(iVar35 + 1) == iVar27;
            piVar37 = piVar38;
            if (bVar44 || -iVar27 < iVar35 + 1) {
              if (!bVar44) {
                param_1 = param_1 + 2;
              }
            }
            else {
              param_1 = param_1 + -2;
            }
LAB_006ce57c:
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + (param_1 + iVar24 + 5) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)param_1;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = (short)(iVar24 + 5);
          }
        }
        break;
      case CASE_1:
        uVar42 = local_10 & 0x10;
        piVar37 = piVar38;
        if ((uVar42 == 0) && ((psVar2[-1] == 0 || (iVar24 + 3 < (int)psVar2[-1])))) {
          psVar2[-1] = (short)(iVar24 + 3);
          if (iVar21 < iVar36) {
            iVar35 = GVar33 + CASE_1;
          }
          else {
            iVar35 = GVar33 + CASE_3;
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar38;
          piVar39 = (int *)(param_4 + (iVar35 + iVar24 + 3) * 4);
          *piVar38 = *piVar39;
          *piVar39 = (int)piVar38;
          *(short *)(piVar38 + 1) = sVar4 + -1;
          *(short *)(piVar38 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
          STField<short>(piVar38,6) = sVar5;
          *(short *)(piVar38 + 3) = sVar8 + 3;
        }
        if ((psVar2[1] == 0) || (piVar38 = piVar37, iVar24 + 3 < (int)psVar2[1])) {
          psVar2[1] = (short)(iVar24 + 3);
          if (iVar36 < iVar21) {
            iVar35 = GVar33 - CASE_3;
          }
          else {
            iVar35 = GVar33 - CASE_1;
          }
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + (iVar35 + iVar24 + 3) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          STField<short>(piVar37,6) = sVar5;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        uVar28 = local_10 & 0x20;
        piVar37 = piVar38;
        if (uVar28 == 0) {
          sVar9 = psVar2[-param_2];
          if ((sVar9 == 0) || (iVar24 + 3 < (int)sVar9)) {
            psVar2[-param_2] = sVar8 + 3;
            if (iVar36 < iVar21) {
              iVar35 = GVar33 + CASE_1;
            }
            else {
              iVar35 = GVar33 + CASE_3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0xc + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            STField<short>(piVar38,6) = sVar5 + -1;
            *(short *)(piVar38 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 1) = sVar4;
            *(short *)(piVar38 + 3) = sVar8 + 3;
          }
        }
        if ((psVar2[param_2] == 0) || (piVar38 = piVar37, iVar24 + 3 < (int)psVar2[param_2])) {
          psVar2[param_2] = sVar8 + 3;
          if (iVar21 < iVar36) {
            iVar35 = GVar33 - CASE_3;
          }
          else {
            iVar35 = GVar33 - CASE_1;
          }
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + 0xc + (iVar35 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          STField<short>(piVar37,6) = sVar5 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 1) = sVar4;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        piVar37 = piVar38;
        if (bVar12) {
          sVar9 = psVar2[-iVar18];
          if ((sVar9 == 0) || (iVar24 + 3 < (int)sVar9)) {
            psVar2[-iVar18] = sVar8 + 3;
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0xc + (param_1 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + -1;
            STField<short>(piVar38,10) = (short)param_1;
            *(short *)(piVar38 + 3) = sVar8 + 3;
          }
        }
        piVar38 = piVar37;
        if ((bVar44) && ((psVar2[iVar18] == 0 || (iVar24 + 3 < (int)psVar2[iVar18])))) {
          psVar2[iVar18] = sVar8 + 3;
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + 0xc + (param_5 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4;
          STField<short>(piVar37,6) = sVar5;
          *(short *)(piVar37 + 2) = sVar6 + 1;
          STField<short>(piVar37,10) = (short)param_5;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        if ((bVar44) && (-1 < psVar2[iVar18])) {
          piVar37 = piVar38;
          if ((uVar42 == 0) &&
             (((psVar2[iVar18 + -1] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + -1])) &&
              ((psVar2[-1] & 0xc000U) != 0xc000)))) {
            psVar2[iVar18 + -1] = sVar8 + 4;
            if (iVar21 < iVar36) {
              iVar35 = param_5 + 1;
            }
            else {
              iVar35 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
          piVar38 = piVar37;
          if (((psVar2[iVar18 + 1] == 0) || (iVar24 + 4 < (int)psVar2[iVar18 + 1])) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar2[iVar18 + 1] = sVar8 + 4;
            if (iVar36 < iVar21) {
              iVar35 = param_5 + -3;
            }
            else {
              iVar35 = param_5 + -1;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar38;
          if (uVar28 == 0) {
            sVar9 = psVar2[iVar18 - param_2];
            if (((sVar9 == 0) || (iVar24 + 4 < (int)sVar9)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar2[iVar18 - param_2] = sVar8 + 4;
              if (iVar36 < iVar21) {
                iVar35 = param_5 + 1;
              }
              else {
                iVar35 = param_5 + 3;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(short *)(piVar38 + 3) = sVar8 + 4;
            }
          }
          piVar38 = piVar37;
          if (((psVar2[iVar18 + param_2] == 0) || (iVar24 + 4 < (int)psVar2[iVar18 + param_2])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar2[iVar18 + param_2] = sVar8 + 4;
            if (iVar21 < iVar36) {
              iVar35 = param_5 + -3;
            }
            else {
              iVar35 = param_5 + -1;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        if ((bVar12) && (psVar30 = psVar2 + -iVar18, -1 < *psVar30)) {
          piVar37 = piVar38;
          if (((uVar42 == 0) && ((psVar30[-1] == 0 || (iVar24 + 4 < (int)psVar30[-1])))) &&
             ((psVar2[-1] & 0xc000U) != 0xc000)) {
            psVar30[-1] = sVar8 + 4;
            if (iVar21 < iVar36) {
              iVar35 = param_1 + 1;
            }
            else {
              iVar35 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
          piVar38 = piVar37;
          if (((psVar30[1] == 0) || (iVar24 + 4 < (int)psVar30[1])) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar30[1] = sVar8 + 4;
            if (iVar36 < iVar21) {
              iVar35 = param_1 + -3;
            }
            else {
              iVar35 = param_1 + -1;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar38;
          if (uVar28 == 0) {
            sVar9 = psVar30[-param_2];
            if (((sVar9 == 0) || (iVar24 + 4 < (int)sVar9)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar30[-param_2] = sVar8 + 4;
              if (iVar36 < iVar21) {
                iVar35 = param_1 + 1;
              }
              else {
                iVar35 = param_1 + 3;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(short *)(piVar38 + 3) = sVar8 + 4;
            }
          }
          piVar38 = piVar37;
          if (((psVar30[param_2] == 0) || (iVar24 + 4 < (int)psVar30[param_2])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar30[param_2] = sVar8 + 4;
            if (iVar21 < iVar36) {
              iVar35 = param_1 + -3;
            }
            else {
              iVar35 = param_1 + -1;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        uVar42 = local_10 & 0x30;
        piVar37 = piVar38;
        if (uVar42 == 0) {
          psVar30 = (short *)((int)psVar2 - (param_2 * 2 + 2));
          sVar9 = *psVar30;
          if ((((sVar9 == 0) || (iVar24 + 4 < (int)sVar9)) &&
              ((psVar2[-param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
            *psVar30 = sVar8 + 4;
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (GVar33 + 4 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5 + -1;
            *(short *)(piVar38 + 2) = sVar6;
            STField<short>(piVar38,10) = sVar7 + 4;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
        }
        uVar28 = local_10 & 0x21;
        piVar38 = piVar37;
        if (uVar28 == 0) {
          puVar34 = (ushort *)(psVar2 + -param_2);
          if (((puVar34[1] == 0) || (iVar24 + 4 < (int)(short)puVar34[1])) &&
             (((*puVar34 & 0xc000) != 0xc000 && ((psVar2[1] & 0xc000U) != 0xc000)))) {
            puVar34[1] = sVar8 + 4;
            if (iVar36 < iVar21 + -1) {
              GVar31 = GVar33 - CASE_2;
            }
            else {
              GVar31 = GVar33;
              if (iVar36 != iVar21 + -1) {
                GVar31 = GVar33 + CASE_2;
              }
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (GVar31 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5 + -1;
            *(short *)(piVar37 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)GVar31;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        local_10 = local_10 & 0x12;
        piVar37 = piVar38;
        if (((local_10 == 0) &&
            ((psVar2[param_2 + -1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + -1])))) &&
           (((psVar2[param_2] & 0xc000U) != 0xc000 && ((psVar2[-1] & 0xc000U) != 0xc000)))) {
          psVar2[param_2 + -1] = sVar8 + 4;
          if (iVar21 < iVar36 + -1) {
            GVar31 = GVar33 - CASE_2;
          }
          else {
            GVar31 = GVar33;
            if (iVar21 != iVar36 + -1) {
              GVar31 = GVar33 + CASE_2;
            }
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar38;
          piVar39 = (int *)(param_4 + 0x10 + (GVar31 + iVar24) * 4);
          *piVar38 = *piVar39;
          *piVar39 = (int)piVar38;
          *(short *)(piVar38 + 1) = sVar4 + -1;
          STField<short>(piVar38,6) = sVar5 + 1;
          *(short *)(piVar38 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)GVar31;
          STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
          *(short *)(piVar38 + 3) = sVar8 + 4;
        }
        iVar35 = param_2 * 2 + 2;
        piVar38 = piVar37;
        if ((((psVar2[param_2 + 1] == 0) || (iVar24 + 4 < (int)psVar2[param_2 + 1])) &&
            ((psVar2[param_2] & 0xc000U) != 0xc000)) && ((psVar2[1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + 1] = sVar8 + 4;
          piVar38 = (int *)*piVar37;
          param_9 = param_9 + -1;
          piVar39 = (int *)(param_4 + 0x10 + (GVar33 + ~CASE_3 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + 1;
          STField<short>(piVar37,6) = sVar5 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)(GVar33 + ~CASE_3);
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 4;
        }
        iVar27 = iVar24 + 5;
        uVar40 = (ushort)iVar27;
        if ((bVar44) && (puVar34 = (ushort *)(psVar2 + iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          piVar37 = piVar38;
          if (uVar42 == 0) {
            uVar10 = *(ushort *)((int)puVar34 - iVar35);
            if ((((uVar10 == 0) || (iVar27 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - iVar35) & 0xc000) != 0xc000)) {
              *(ushort *)((int)puVar34 - iVar35) = uVar40;
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + (param_5 + 4 + iVar27) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4 + -1;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + 1;
              STField<short>(piVar38,10) = (short)param_5 + 4;
              *(ushort *)(piVar38 + 3) = uVar40;
            }
          }
          piVar38 = piVar37;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if (((puVar32[1] == 0) || (iVar27 < (short)puVar32[1])) &&
               (((((*puVar32 & 0xc000) != 0xc000 &&
                  (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))
                 && ((psVar2[1] & 0xc000U) != 0xc000)) &&
                (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar40;
              if (iVar36 < iVar21 + -1) {
                iVar25 = param_5 + -2;
              }
              else {
                iVar25 = param_5;
                if (iVar36 != iVar21 + -1) {
                  iVar25 = param_5 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar38 = (int *)*piVar37;
              piVar39 = (int *)(param_4 + (iVar25 + iVar27) * 4);
              *piVar37 = *piVar39;
              *piVar39 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + 1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar25;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar37 + 3) = uVar40;
            }
          }
          piVar37 = piVar38;
          if (((local_10 == 0) &&
              (((((puVar34[param_2 + -1] == 0 || (iVar27 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)))) &&
               ((psVar2[-1] & 0xc000U) != 0xc000)))) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar34[param_2 + -1] = uVar40;
            if (iVar21 < iVar36 + -1) {
              iVar25 = param_5 + -2;
            }
            else {
              iVar25 = param_5;
              if (iVar21 != iVar36 + -1) {
                iVar25 = param_5 + 2;
              }
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + (iVar25 + iVar27) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5 + 1;
            *(short *)(piVar38 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar25;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar38 + 3) = uVar40;
          }
          piVar38 = piVar37;
          if ((((puVar34[param_2 + 1] == 0) || (iVar27 < (short)puVar34[param_2 + 1])) &&
              (((puVar34[param_2] & 0xc000) != 0xc000 &&
               ((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)))))) &&
             ((psVar2[param_2 + 1] & 0xc000U) != 0xc000)) {
            puVar34[param_2 + 1] = uVar40;
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + (param_5 + -4 + iVar27) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)(param_5 + -4);
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar37 + 3) = uVar40;
          }
        }
        if ((bVar12) && (puVar34 = (ushort *)(psVar2 + -iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          piVar37 = piVar38;
          if (uVar42 == 0) {
            uVar10 = *(ushort *)((int)puVar34 - iVar35);
            if ((((uVar10 == 0) || (iVar27 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - iVar35) & 0xc000) != 0xc000)) {
              *(ushort *)((int)puVar34 - iVar35) = uVar40;
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + (param_1 + 4 + iVar27) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4 + -1;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + -1;
              STField<short>(piVar38,10) = (short)param_1 + 4;
              *(ushort *)(piVar38 + 3) = uVar40;
            }
          }
          piVar39 = piVar37;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if ((((puVar32[1] == 0) || (iVar27 < (short)puVar32[1])) &&
                (((*puVar32 & 0xc000) != 0xc000 &&
                 (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))))
               && (((psVar2[1] & 0xc000U) != 0xc000 &&
                   (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar40;
              if (iVar36 < iVar21 + -1) {
                iVar35 = param_1 + -2;
              }
              else {
                iVar35 = param_1;
                if (iVar36 != iVar21 + -1) {
                  iVar35 = param_1 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar39 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + (iVar35 + iVar27) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + 1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar37 + 3) = uVar40;
            }
          }
          piVar38 = piVar39;
          if ((((local_10 == 0) &&
               ((((puVar34[param_2 + -1] == 0 || (iVar27 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000))))))
              && ((psVar2[-1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar34[param_2 + -1] = uVar40;
            if (iVar21 < iVar36 + -1) {
              iVar35 = param_1 + -2;
            }
            else {
              iVar35 = param_1;
              if (iVar21 != iVar36 + -1) {
                iVar35 = param_1 + 2;
              }
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar39;
            piVar37 = (int *)(param_4 + (iVar35 + iVar27) * 4);
            *piVar39 = *piVar37;
            *piVar37 = (int)piVar39;
            *(short *)(piVar39 + 1) = sVar4 + -1;
            STField<short>(piVar39,6) = sVar5 + 1;
            *(short *)(piVar39 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar39,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar39 + 3) = uVar40;
          }
          if ((((puVar34[param_2 + 1] == 0) || (iVar27 < (short)puVar34[param_2 + 1])) &&
              (((puVar34[param_2] & 0xc000) != 0xc000 &&
               ((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)))))) &&
             ((psVar2[param_2 + 1] & 0xc000U) != 0xc000)) {
            puVar34[param_2 + 1] = uVar40;
            param_1 = param_1 + -4;
            piVar37 = piVar38;
            goto LAB_006ce57c;
          }
        }
        break;
      case CASE_2:
        uVar42 = local_10 & 0x10;
        piVar37 = piVar38;
        if ((uVar42 == 0) && ((psVar2[-1] == 0 || (iVar24 + 3 < (int)psVar2[-1])))) {
          psVar2[-1] = (short)(iVar24 + 3);
          if (iVar36 == 0) {
            if (iVar21 == 0) {
              iVar35 = GVar33 + CASE_3;
            }
            else {
              iVar35 = GVar33 + CASE_1;
            }
          }
          else if (iVar21 < iVar36) {
            iVar35 = GVar33 - CASE_3;
          }
          else {
            iVar35 = GVar33 - CASE_1;
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar38;
          piVar39 = (int *)(param_4 + (iVar35 + iVar24 + 3) * 4);
          *piVar38 = *piVar39;
          *piVar39 = (int)piVar38;
          *(short *)(piVar38 + 1) = sVar4 + -1;
          STField<short>(piVar38,6) = sVar5;
          *(short *)(piVar38 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
          *(short *)(piVar38 + 3) = sVar8 + 3;
        }
        uVar28 = local_10 & 1;
        piVar38 = piVar37;
        if ((uVar28 == 0) && ((psVar2[1] == 0 || (iVar24 + 3 < (int)psVar2[1])))) {
          psVar2[1] = (short)(iVar24 + 3);
          if (iVar36 < iVar21) {
            iVar35 = GVar33 + CASE_1;
          }
          else {
            iVar35 = GVar33 + CASE_3;
          }
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + (iVar35 + iVar24 + 3) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + 1;
          STField<short>(piVar37,6) = sVar5;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        uVar29 = local_10 & 0x20;
        piVar37 = piVar38;
        if (uVar29 == 0) {
          sVar7 = psVar2[-param_2];
          if ((sVar7 == 0) || (iVar24 + 3 < (int)sVar7)) {
            psVar2[-param_2] = sVar8 + 3;
            if (iVar21 == 0) {
              if (iVar36 == 0) {
                iVar35 = GVar33 + CASE_3;
              }
              else {
                iVar35 = GVar33 + CASE_1;
              }
            }
            else if (iVar36 < iVar21) {
              iVar35 = GVar33 - CASE_3;
            }
            else {
              iVar35 = GVar33 - CASE_1;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0xc + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4;
            STField<short>(piVar38,6) = sVar5 + -1;
            *(short *)(piVar38 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 3;
          }
        }
        uVar26 = local_10 & 2;
        piVar38 = piVar37;
        if ((uVar26 == 0) && ((psVar2[param_2] == 0 || (iVar24 + 3 < (int)psVar2[param_2])))) {
          psVar2[param_2] = sVar8 + 3;
          if (iVar21 < iVar36) {
            iVar35 = GVar33 + CASE_1;
          }
          else {
            iVar35 = GVar33 + CASE_3;
          }
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + 0xc + (iVar35 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4;
          STField<short>(piVar37,6) = sVar5 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        piVar37 = piVar38;
        if (bVar12) {
          sVar7 = psVar2[-iVar18];
          if ((sVar7 == 0) || (iVar24 + 3 < (int)sVar7)) {
            psVar2[-iVar18] = sVar8 + 3;
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0xc + (param_1 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + -1;
            STField<short>(piVar38,10) = (short)param_1;
            *(short *)(piVar38 + 3) = sVar8 + 3;
          }
        }
        piVar38 = piVar37;
        if ((bVar44) && ((psVar2[iVar18] == 0 || (iVar24 + 3 < (int)psVar2[iVar18])))) {
          psVar2[iVar18] = sVar8 + 3;
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + 0xc + (param_5 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4;
          STField<short>(piVar37,6) = sVar5;
          *(short *)(piVar37 + 2) = sVar6 + 1;
          STField<short>(piVar37,10) = (short)param_5;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        if ((bVar44) && (-1 < psVar2[iVar18])) {
          piVar37 = piVar38;
          if ((uVar42 == 0) &&
             (((psVar2[iVar18 + -1] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + -1])) &&
              ((psVar2[-1] & 0xc000U) != 0xc000)))) {
            psVar2[iVar18 + -1] = sVar8 + 4;
            if (iVar36 == 0) {
              if (iVar21 == 0) {
                iVar35 = param_5 + 3;
              }
              else {
                iVar35 = param_5 + 1;
              }
            }
            else if (iVar21 < iVar36) {
              iVar35 = param_5 + -3;
            }
            else {
              iVar35 = param_5 + -1;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
          piVar38 = piVar37;
          if (((uVar28 == 0) &&
              ((psVar2[iVar18 + 1] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + 1])))) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar2[iVar18 + 1] = sVar8 + 4;
            if (iVar36 < iVar21) {
              iVar35 = param_5 + 1;
            }
            else {
              iVar35 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar38;
          if (uVar29 == 0) {
            sVar7 = psVar2[iVar18 - param_2];
            if (((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar2[iVar18 - param_2] = sVar8 + 4;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar35 = param_5 + 3;
                }
                else {
                  iVar35 = param_5 + 1;
                }
              }
              else if (iVar36 < iVar21) {
                iVar35 = param_5 + -3;
              }
              else {
                iVar35 = param_5 + -1;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(short *)(piVar38 + 3) = sVar8 + 4;
            }
          }
          piVar38 = piVar37;
          if ((uVar26 == 0) &&
             (((psVar2[iVar18 + param_2] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + param_2])) &&
              ((psVar2[param_2] & 0xc000U) != 0xc000)))) {
            psVar2[iVar18 + param_2] = sVar8 + 4;
            if (iVar21 < iVar36) {
              iVar35 = param_5 + 1;
            }
            else {
              iVar35 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        if ((bVar12) && (psVar30 = psVar2 + -iVar18, -1 < *psVar30)) {
          piVar37 = piVar38;
          if (((uVar42 == 0) && ((psVar30[-1] == 0 || (iVar24 + 4 < (int)psVar30[-1])))) &&
             ((psVar2[-1] & 0xc000U) != 0xc000)) {
            psVar30[-1] = sVar8 + 4;
            if (iVar36 == 0) {
              if (iVar21 == 0) {
                iVar35 = param_1 + 3;
              }
              else {
                iVar35 = param_1 + 1;
              }
            }
            else if (iVar21 < iVar36) {
              iVar35 = param_1 + -3;
            }
            else {
              iVar35 = param_1 + -1;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
          piVar38 = piVar37;
          if ((uVar28 == 0) &&
             (((psVar30[1] == 0 || (iVar24 + 4 < (int)psVar30[1])) &&
              ((psVar2[1] & 0xc000U) != 0xc000)))) {
            psVar30[1] = sVar8 + 4;
            if (iVar36 < iVar21) {
              iVar35 = param_1 + 1;
            }
            else {
              iVar35 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar38;
          if (uVar29 == 0) {
            sVar7 = psVar30[-param_2];
            if (((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar30[-param_2] = sVar8 + 4;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar35 = param_1 + 3;
                }
                else {
                  iVar35 = param_1 + 1;
                }
              }
              else if (iVar36 < iVar21) {
                iVar35 = param_1 + -3;
              }
              else {
                iVar35 = param_1 + -1;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(short *)(piVar38 + 3) = sVar8 + 4;
            }
          }
          piVar38 = piVar37;
          if (((uVar26 == 0) && ((psVar30[param_2] == 0 || (iVar24 + 4 < (int)psVar30[param_2]))))
             && ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar30[param_2] = sVar8 + 4;
            if (iVar21 < iVar36) {
              iVar35 = param_1 + 1;
            }
            else {
              iVar35 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        uVar42 = local_10 & 0x30;
        piVar37 = piVar38;
        if (uVar42 == 0) {
          psVar30 = (short *)((int)psVar2 - (param_2 * 2 + 2));
          sVar7 = *psVar30;
          if ((((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
              ((psVar2[-param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
            *psVar30 = sVar8 + 4;
            GVar31 = GVar33;
            if (iVar21 == 0) {
              if (iVar36 == 0) {
                GVar31 = GVar33 + 4;
              }
              else if (iVar36 != 1) {
                GVar31 = GVar33 - CASE_2;
              }
            }
            else if (iVar36 == 0) {
              if (iVar21 != 1) {
                GVar31 = GVar33 - CASE_2;
              }
            }
            else {
              GVar31 = GVar33 + ~CASE_3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (GVar31 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5 + -1;
            *(short *)(piVar38 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)GVar31;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
        }
        uVar28 = local_10 & 0x21;
        piVar38 = piVar37;
        if (uVar28 == 0) {
          puVar34 = (ushort *)(psVar2 + -param_2);
          if (((puVar34[1] == 0) || (iVar24 + 4 < (int)(short)puVar34[1])) &&
             (((*puVar34 & 0xc000) != 0xc000 && ((psVar2[1] & 0xc000U) != 0xc000)))) {
            puVar34[1] = sVar8 + 4;
            if (iVar21 == 0) {
              GVar31 = GVar33 + 4;
            }
            else if (iVar36 + 1 < iVar21) {
              GVar31 = GVar33 - CASE_2;
            }
            else {
              GVar31 = GVar33;
              if (iVar21 != iVar36 + 1) {
                GVar31 = GVar33 + CASE_2;
              }
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (GVar31 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5 + -1;
            *(short *)(piVar37 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)GVar31;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        uVar29 = local_10 & 0x12;
        piVar37 = piVar38;
        if (((uVar29 == 0) &&
            ((psVar2[param_2 + -1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + -1])))) &&
           (((psVar2[param_2] & 0xc000U) != 0xc000 && ((psVar2[-1] & 0xc000U) != 0xc000)))) {
          psVar2[param_2 + -1] = sVar8 + 4;
          if (iVar36 == 0) {
            GVar31 = GVar33 + 4;
          }
          else if (iVar21 + 1 < iVar36) {
            GVar31 = GVar33 - CASE_2;
          }
          else {
            GVar31 = GVar33;
            if (iVar36 != iVar21 + 1) {
              GVar31 = GVar33 + CASE_2;
            }
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar38;
          piVar39 = (int *)(param_4 + 0x10 + (GVar31 + iVar24) * 4);
          *piVar38 = *piVar39;
          *piVar39 = (int)piVar38;
          *(short *)(piVar38 + 1) = sVar4 + -1;
          STField<short>(piVar38,6) = sVar5 + 1;
          *(short *)(piVar38 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)GVar31;
          STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
          *(short *)(piVar38 + 3) = sVar8 + 4;
        }
        local_10 = local_10 & 3;
        piVar38 = piVar37;
        if (((local_10 == 0) &&
            (((psVar2[param_2 + 1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + 1])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)))) && ((psVar2[1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + 1] = sVar8 + 4;
          piVar38 = (int *)*piVar37;
          param_9 = param_9 + -1;
          piVar39 = (int *)(param_4 + 0x10 + (GVar33 + 4 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + 1;
          STField<short>(piVar37,6) = sVar5 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)(GVar33 + 4);
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 4;
        }
        iVar35 = iVar24 + 5;
        uVar40 = (ushort)iVar35;
        if ((bVar44) && (puVar34 = (ushort *)(psVar2 + iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          piVar37 = piVar38;
          if (uVar42 == 0) {
            puVar32 = (ushort *)((int)puVar34 - (param_2 * 2 + 2));
            uVar10 = *puVar32;
            if ((((uVar10 == 0) || (iVar35 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar32 = uVar40;
              iVar27 = param_5;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar27 = param_5 + 4;
                }
                else if (iVar36 != 1) {
                  iVar27 = param_5 + -2;
                }
              }
              else if (iVar36 == 0) {
                if (iVar21 != 1) {
                  iVar27 = param_5 + -2;
                }
              }
              else {
                iVar27 = param_5 + -4;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + (iVar27 + iVar35) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4 + -1;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar38 + 3) = uVar40;
            }
          }
          piVar38 = piVar37;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if (((puVar32[1] == 0) || (iVar35 < (short)puVar32[1])) &&
               (((((*puVar32 & 0xc000) != 0xc000 &&
                  (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))
                 && ((psVar2[1] & 0xc000U) != 0xc000)) &&
                (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar40;
              if (iVar21 == 0) {
                iVar27 = param_5 + 4;
              }
              else if (iVar36 + 1 < iVar21) {
                iVar27 = param_5 + -2;
              }
              else {
                iVar27 = param_5;
                if (iVar21 != iVar36 + 1) {
                  iVar27 = param_5 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar38 = (int *)*piVar37;
              piVar39 = (int *)(param_4 + (iVar27 + iVar35) * 4);
              *piVar37 = *piVar39;
              *piVar39 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + 1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar37 + 3) = uVar40;
            }
          }
          piVar37 = piVar38;
          if ((uVar29 == 0) &&
             ((((((puVar34[param_2 + -1] == 0 || (iVar35 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)))) &&
               ((psVar2[-1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)))
             ) {
            puVar34[param_2 + -1] = uVar40;
            if (iVar36 == 0) {
              iVar27 = param_5 + 4;
            }
            else if (iVar21 + 1 < iVar36) {
              iVar27 = param_5 + -2;
            }
            else {
              iVar27 = param_5;
              if (iVar36 != iVar21 + 1) {
                iVar27 = param_5 + 2;
              }
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + (iVar27 + iVar35) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5 + 1;
            *(short *)(piVar38 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar38 + 3) = uVar40;
          }
          piVar38 = piVar37;
          if ((((local_10 == 0) &&
               ((puVar34[param_2 + 1] == 0 || (iVar35 < (short)puVar34[param_2 + 1])))) &&
              (((puVar34[param_2] & 0xc000) != 0xc000 &&
               ((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)))))) &&
             ((psVar2[param_2 + 1] & 0xc000U) != 0xc000)) {
            puVar34[param_2 + 1] = uVar40;
            piVar38 = (int *)*piVar37;
            param_9 = param_9 + -1;
            piVar39 = (int *)(param_4 + (param_5 + 4 + iVar35) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)(param_5 + 4);
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar37 + 3) = uVar40;
          }
        }
        if ((bVar12) && (puVar34 = (ushort *)(psVar2 + -iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          piVar37 = piVar38;
          if (uVar42 == 0) {
            puVar32 = (ushort *)((int)puVar34 - (param_2 * 2 + 2));
            uVar10 = *puVar32;
            if ((((uVar10 == 0) || (iVar35 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar32 = uVar40;
              iVar27 = param_1;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar27 = param_1 + 4;
                }
                else if (iVar36 != 1) {
                  iVar27 = param_1 + -2;
                }
              }
              else if (iVar36 == 0) {
                if (iVar21 != 1) {
                  iVar27 = param_1 + -2;
                }
              }
              else {
                iVar27 = param_1 + -4;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + (iVar27 + iVar35) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4 + -1;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar38 + 3) = uVar40;
            }
          }
          piVar39 = piVar37;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if ((((puVar32[1] == 0) || (iVar35 < (short)puVar32[1])) &&
                ((((*puVar32 & 0xc000) != 0xc000 &&
                  (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))
                 && ((psVar2[1] & 0xc000U) != 0xc000)))) &&
               (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)) {
              puVar32[1] = uVar40;
              if (iVar21 == 0) {
                iVar27 = param_1 + 4;
              }
              else if (iVar36 + 1 < iVar21) {
                iVar27 = param_1 + -2;
              }
              else {
                iVar27 = param_1;
                if (iVar21 != iVar36 + 1) {
                  iVar27 = param_1 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar39 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + (iVar27 + iVar35) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + 1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar37 + 3) = uVar40;
            }
          }
          piVar38 = piVar39;
          if (((uVar29 == 0) &&
              ((((puVar34[param_2 + -1] == 0 || (iVar35 < (short)puVar34[param_2 + -1])) &&
                ((puVar34[param_2] & 0xc000) != 0xc000)) &&
               (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)))))) &&
             (((psVar2[-1] & 0xc000U) != 0xc000 && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)))) {
            puVar34[param_2 + -1] = uVar40;
            if (iVar36 == 0) {
              iVar27 = param_1 + 4;
            }
            else if (iVar21 + 1 < iVar36) {
              iVar27 = param_1 + -2;
            }
            else {
              iVar27 = param_1;
              if (iVar36 != iVar21 + 1) {
                iVar27 = param_1 + 2;
              }
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar39;
            piVar37 = (int *)(param_4 + (iVar27 + iVar35) * 4);
            *piVar39 = *piVar37;
            *piVar37 = (int)piVar39;
            *(short *)(piVar39 + 1) = sVar4 + -1;
            STField<short>(piVar39,6) = sVar5 + 1;
            *(short *)(piVar39 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
            STField<undefined2>(piVar39,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar39 + 3) = uVar40;
          }
          if (((local_10 == 0) &&
              ((puVar34[param_2 + 1] == 0 || (iVar35 < (short)puVar34[param_2 + 1])))) &&
             (((puVar34[param_2] & 0xc000) != 0xc000 &&
              (((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + 1] & 0xc000U) != 0xc000))))
             )) {
            puVar34[param_2 + 1] = uVar40;
            param_1 = param_1 + 4;
            piVar37 = piVar38;
            goto LAB_006ce57c;
          }
        }
        break;
      case CASE_3:
        uVar42 = local_10 & 0x10;
        piVar37 = piVar38;
        if ((uVar42 == 0) && ((psVar2[-1] == 0 || (iVar24 + 3 < (int)psVar2[-1])))) {
          psVar2[-1] = (short)(iVar24 + 3);
          if (-iVar36 < iVar21) {
            iVar35 = GVar33 + CASE_1;
          }
          else {
            iVar35 = GVar33 + CASE_3;
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar38;
          piVar39 = (int *)(param_4 + (iVar35 + iVar24 + 3) * 4);
          *piVar38 = *piVar39;
          *piVar39 = (int)piVar38;
          *(short *)(piVar38 + 1) = sVar4 + -1;
          STField<short>(piVar38,6) = sVar5;
          *(short *)(piVar38 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
          *(short *)(piVar38 + 3) = sVar8 + 3;
        }
        if ((psVar2[1] == 0) || (piVar38 = piVar37, iVar24 + 3 < (int)psVar2[1])) {
          psVar2[1] = (short)(iVar24 + 3);
          if (-iVar21 == iVar36 || -iVar36 < iVar21) {
            iVar35 = GVar33 - CASE_1;
          }
          else {
            iVar35 = GVar33 - CASE_3;
          }
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + (iVar35 + iVar24 + 3) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + 1;
          STField<short>(piVar37,6) = sVar5;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        uVar28 = local_10 & 0x20;
        piVar37 = piVar38;
        if (uVar28 == 0) {
          sVar7 = psVar2[-param_2];
          if ((sVar7 == 0) || (iVar24 + 3 < (int)sVar7)) {
            psVar2[-param_2] = sVar8 + 3;
            if (iVar21 == 0) {
              if (iVar36 == 0) {
                iVar35 = GVar33 + CASE_3;
              }
              else {
                iVar35 = GVar33 + CASE_1;
              }
            }
            else if (-iVar36 < iVar21) {
              iVar35 = GVar33 - CASE_3;
            }
            else {
              iVar35 = GVar33 - CASE_1;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0xc + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4;
            STField<short>(piVar38,6) = sVar5 + -1;
            *(short *)(piVar38 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 3;
          }
        }
        uVar29 = local_10 & 2;
        piVar38 = piVar37;
        if ((uVar29 == 0) && ((psVar2[param_2] == 0 || (iVar24 + 3 < (int)psVar2[param_2])))) {
          psVar2[param_2] = sVar8 + 3;
          if (iVar21 < -iVar36) {
            iVar35 = GVar33 + CASE_1;
          }
          else {
            iVar35 = GVar33 + CASE_3;
          }
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + 0xc + (iVar35 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4;
          STField<short>(piVar37,6) = sVar5 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        piVar37 = piVar38;
        if (bVar12) {
          sVar7 = psVar2[-iVar18];
          if ((sVar7 == 0) || (iVar24 + 3 < (int)sVar7)) {
            psVar2[-iVar18] = sVar8 + 3;
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0xc + (param_1 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + -1;
            STField<short>(piVar38,10) = (short)param_1;
            *(short *)(piVar38 + 3) = sVar8 + 3;
          }
        }
        piVar38 = piVar37;
        if ((bVar44) && ((psVar2[iVar18] == 0 || (iVar24 + 3 < (int)psVar2[iVar18])))) {
          psVar2[iVar18] = sVar8 + 3;
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + 0xc + (param_5 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4;
          STField<short>(piVar37,6) = sVar5;
          *(short *)(piVar37 + 2) = sVar6 + 1;
          STField<short>(piVar37,10) = (short)param_5;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        if ((bVar44) && (-1 < psVar2[iVar18])) {
          piVar37 = piVar38;
          if ((uVar42 == 0) &&
             (((psVar2[iVar18 + -1] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + -1])) &&
              ((psVar2[-1] & 0xc000U) != 0xc000)))) {
            psVar2[iVar18 + -1] = sVar8 + 4;
            if (-iVar36 < iVar21) {
              iVar35 = param_5 + 1;
            }
            else {
              iVar35 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
          piVar38 = piVar37;
          if (((psVar2[iVar18 + 1] == 0) || (iVar24 + 4 < (int)psVar2[iVar18 + 1])) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar2[iVar18 + 1] = sVar8 + 4;
            if (-iVar21 == iVar36 || -iVar36 < iVar21) {
              iVar35 = param_5 + -1;
            }
            else {
              iVar35 = param_5 + -3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar38;
          if (uVar28 == 0) {
            sVar7 = psVar2[iVar18 - param_2];
            if (((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar2[iVar18 - param_2] = sVar8 + 4;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar35 = param_5 + 3;
                }
                else {
                  iVar35 = param_5 + 1;
                }
              }
              else if (-iVar36 < iVar21) {
                iVar35 = param_5 + -3;
              }
              else {
                iVar35 = param_5 + -1;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(short *)(piVar38 + 3) = sVar8 + 4;
            }
          }
          piVar38 = piVar37;
          if ((uVar29 == 0) &&
             (((psVar2[iVar18 + param_2] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + param_2])) &&
              ((psVar2[param_2] & 0xc000U) != 0xc000)))) {
            psVar2[iVar18 + param_2] = sVar8 + 4;
            if (iVar21 < -iVar36) {
              iVar35 = param_5 + 1;
            }
            else {
              iVar35 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        if ((bVar12) && (psVar30 = psVar2 + -iVar18, -1 < *psVar30)) {
          piVar37 = piVar38;
          if (((uVar42 == 0) && ((psVar30[-1] == 0 || (iVar24 + 4 < (int)psVar30[-1])))) &&
             ((psVar2[-1] & 0xc000U) != 0xc000)) {
            psVar30[-1] = sVar8 + 4;
            if (-iVar36 < iVar21) {
              iVar35 = param_1 + 1;
            }
            else {
              iVar35 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
          piVar38 = piVar37;
          if (((psVar30[1] == 0) || (iVar24 + 4 < (int)psVar30[1])) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar30[1] = sVar8 + 4;
            if (-iVar21 == iVar36 || -iVar36 < iVar21) {
              iVar35 = param_1 + -1;
            }
            else {
              iVar35 = param_1 + -3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar38;
          if (uVar28 == 0) {
            sVar7 = psVar30[-param_2];
            if (((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar30[-param_2] = sVar8 + 4;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar35 = param_1 + 3;
                }
                else {
                  iVar35 = param_1 + 1;
                }
              }
              else if (-iVar36 < iVar21) {
                iVar35 = param_1 + -3;
              }
              else {
                iVar35 = param_1 + -1;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(short *)(piVar38 + 3) = sVar8 + 4;
            }
          }
          piVar38 = piVar37;
          if (((uVar29 == 0) && ((psVar30[param_2] == 0 || (iVar24 + 4 < (int)psVar30[param_2]))))
             && ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar30[param_2] = sVar8 + 4;
            if (iVar21 < -iVar36) {
              iVar35 = param_1 + 1;
            }
            else {
              iVar35 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        uVar42 = local_10 & 0x30;
        piVar37 = piVar38;
        if (uVar42 == 0) {
          psVar30 = (short *)((int)psVar2 - (param_2 * 2 + 2));
          sVar7 = *psVar30;
          if ((((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
              ((psVar2[-param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
            *psVar30 = sVar8 + 4;
            if (iVar21 == 0) {
              GVar31 = GVar33 + 4;
            }
            else if (1 - iVar36 < iVar21) {
              GVar31 = GVar33 - CASE_2;
            }
            else {
              GVar31 = GVar33;
              if (iVar21 != 1 - iVar36) {
                GVar31 = GVar33 + CASE_2;
              }
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (GVar31 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5 + -1;
            *(short *)(piVar38 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)GVar31;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
        }
        uVar28 = local_10 & 0x21;
        piVar38 = piVar37;
        if (uVar28 == 0) {
          puVar34 = (ushort *)(psVar2 + -param_2);
          if (((puVar34[1] == 0) || (iVar24 + 4 < (int)(short)puVar34[1])) &&
             (((*puVar34 & 0xc000) != 0xc000 && ((psVar2[1] & 0xc000U) != 0xc000)))) {
            puVar34[1] = sVar8 + 4;
            if (iVar21 == 0) {
              if (iVar36 == 0) {
                GVar31 = GVar33 + 4;
              }
              else {
                GVar31 = GVar33;
                if (iVar36 != -1) {
                  GVar31 = GVar33 - CASE_2;
                }
              }
            }
            else {
              GVar31 = GVar33 + ~CASE_3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (GVar31 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5 + -1;
            *(short *)(piVar37 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)GVar31;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        uVar29 = local_10 & 0x12;
        piVar37 = piVar38;
        if ((((uVar29 == 0) &&
             ((psVar2[param_2 + -1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + -1])))) &&
            ((psVar2[param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + -1] = sVar8 + 4;
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar38;
          piVar39 = (int *)(param_4 + 0x10 + (GVar33 + 4 + iVar24) * 4);
          *piVar38 = *piVar39;
          *piVar39 = (int)piVar38;
          *(short *)(piVar38 + 1) = sVar4 + -1;
          STField<short>(piVar38,6) = sVar5 + 1;
          *(short *)(piVar38 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)(GVar33 + 4);
          STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
          *(short *)(piVar38 + 3) = sVar8 + 4;
        }
        local_10 = local_10 & 3;
        piVar38 = piVar37;
        if (((local_10 == 0) &&
            (((psVar2[param_2 + 1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + 1])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)))) && ((psVar2[1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + 1] = sVar8 + 4;
          bVar43 = -(iVar21 + 1) == iVar36;
          if (bVar43 || -iVar36 < iVar21 + 1) {
            if (!bVar43) {
              GVar33 = GVar33 + CASE_2;
            }
          }
          else {
            GVar33 = GVar33 - CASE_2;
          }
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + 0x10 + (GVar33 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + 1;
          STField<short>(piVar37,6) = sVar5 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)GVar33;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 4;
        }
        iVar35 = iVar24 + 5;
        uVar40 = (ushort)iVar35;
        if ((bVar44) && (puVar34 = (ushort *)(psVar2 + iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          piVar37 = piVar38;
          if (uVar42 == 0) {
            puVar32 = (ushort *)((int)puVar34 - (param_2 * 2 + 2));
            uVar10 = *puVar32;
            if ((((uVar10 == 0) || (iVar35 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar32 = uVar40;
              if (iVar21 == 0) {
                iVar27 = param_5 + 4;
              }
              else if (1 - iVar36 < iVar21) {
                iVar27 = param_5 + -2;
              }
              else {
                iVar27 = param_5;
                if (iVar21 != 1 - iVar36) {
                  iVar27 = param_5 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + (iVar27 + iVar35) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4 + -1;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar38 + 3) = uVar40;
            }
          }
          piVar38 = piVar37;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if ((((puVar32[1] == 0) || (iVar35 < (short)puVar32[1])) &&
                (((*puVar32 & 0xc000) != 0xc000 &&
                 (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))))
               && (((psVar2[1] & 0xc000U) != 0xc000 &&
                   (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar40;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar27 = param_5 + 4;
                }
                else {
                  iVar27 = param_5;
                  if (iVar36 != -1) {
                    iVar27 = param_5 + -2;
                  }
                }
              }
              else {
                iVar27 = param_5 + -4;
              }
              param_9 = param_9 + -1;
              piVar38 = (int *)*piVar37;
              piVar39 = (int *)(param_4 + (iVar27 + iVar35) * 4);
              *piVar37 = *piVar39;
              *piVar39 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + 1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar37 + 3) = uVar40;
            }
          }
          piVar37 = piVar38;
          if (((uVar29 == 0) &&
              (((((puVar34[param_2 + -1] == 0 || (iVar35 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)))) &&
               ((psVar2[-1] & 0xc000U) != 0xc000)))) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar34[param_2 + -1] = uVar40;
            piVar37 = (int *)*piVar38;
            param_9 = param_9 + -1;
            piVar39 = (int *)(param_4 + (param_5 + 4 + iVar35) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5 + 1;
            *(short *)(piVar38 + 2) = sVar6 + 1;
            STField<short>(piVar38,10) = (short)param_5 + 4;
            *(ushort *)(piVar38 + 3) = uVar40;
          }
          piVar38 = piVar37;
          if (((local_10 == 0) &&
              ((puVar34[param_2 + 1] == 0 || (iVar35 < (short)puVar34[param_2 + 1])))) &&
             (((puVar34[param_2] & 0xc000) != 0xc000 &&
              (((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + 1] & 0xc000U) != 0xc000))))
             )) {
            puVar34[param_2 + 1] = uVar40;
            bVar44 = -(iVar21 + 1) == iVar36;
            if (bVar44 || -iVar36 < iVar21 + 1) {
              if (!bVar44) {
                param_5 = param_5 + 2;
              }
            }
            else {
              param_5 = param_5 + -2;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + (param_5 + iVar35) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)param_5;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar37 + 3) = uVar40;
          }
        }
        if ((bVar12) && (puVar34 = (ushort *)(psVar2 + -iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          piVar37 = piVar38;
          if (uVar42 == 0) {
            puVar32 = (ushort *)((int)puVar34 - (param_2 * 2 + 2));
            uVar10 = *puVar32;
            if ((((uVar10 == 0) || (iVar35 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar32 = uVar40;
              if (iVar21 == 0) {
                iVar27 = param_1 + 4;
              }
              else if (1 - iVar36 < iVar21) {
                iVar27 = param_1 + -2;
              }
              else {
                iVar27 = param_1;
                if (iVar21 != 1 - iVar36) {
                  iVar27 = param_1 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + (iVar27 + iVar35) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4 + -1;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar38 + 3) = uVar40;
            }
          }
          piVar39 = piVar37;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if ((((puVar32[1] == 0) || (iVar35 < (short)puVar32[1])) &&
                (((*puVar32 & 0xc000) != 0xc000 &&
                 (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))))
               && (((psVar2[1] & 0xc000U) != 0xc000 &&
                   (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar40;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar27 = param_1 + 4;
                }
                else {
                  iVar27 = param_1;
                  if (iVar36 != -1) {
                    iVar27 = param_1 + -2;
                  }
                }
              }
              else {
                iVar27 = param_1 + -4;
              }
              param_9 = param_9 + -1;
              piVar39 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + (iVar27 + iVar35) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + 1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar37 + 3) = uVar40;
            }
          }
          piVar38 = piVar39;
          if ((((uVar29 == 0) &&
               ((((puVar34[param_2 + -1] == 0 || (iVar35 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000))))))
              && ((psVar2[-1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar34[param_2 + -1] = uVar40;
            piVar38 = (int *)*piVar39;
            param_9 = param_9 + -1;
            piVar37 = (int *)(param_4 + (param_1 + 4 + iVar35) * 4);
            *piVar39 = *piVar37;
            *piVar37 = (int)piVar39;
            *(short *)(piVar39 + 1) = sVar4 + -1;
            STField<short>(piVar39,6) = sVar5 + 1;
            *(short *)(piVar39 + 2) = sVar6 + -1;
            STField<short>(piVar39,10) = (short)param_1 + 4;
            *(ushort *)(piVar39 + 3) = uVar40;
          }
          if (((local_10 == 0) &&
              ((puVar34[param_2 + 1] == 0 || (iVar35 < (short)puVar34[param_2 + 1])))) &&
             ((((puVar34[param_2] & 0xc000) != 0xc000 &&
               ((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)))) && ((psVar2[param_2 + 1] & 0xc000U) != 0xc000))
             )) {
            puVar34[param_2 + 1] = uVar40;
            iVar27 = iVar36;
            iVar35 = iVar21;
            goto LAB_006ce561;
          }
        }
      }
      if (0 < *psVar1) goto cf_break_loop_006CE641;
      if ((((bVar13) && (-2 < iVar36)) && ((iVar36 < 2 && ((-2 < iVar21 && (iVar21 < 2)))))) &&
         ((-2 < iVar23 && (iVar23 < 2)))) {
        bVar14 = true;
      }
    }
    local_54 = local_54 + 1;
    piVar37 = (int *)*piVar22;
  } while ((int *)*piVar22 != nullptr);
  *piVar22 = (int)piVar38;
  param_9 = param_9 + local_54;
  piVar38 = piVar11;
  if (bVar14) goto cf_break_loop_006CE641;
  goto cf_continue_loop_006C9187;
cf_break_loop_006CE63A:
  local_4c_mg0 = piVar37;
  local_38 = 0xfffffffe;
cf_break_loop_006CE641:
  if (sVar3 < 0) {
    *psVar1 = sVar3;
  }
  FUN_006a5e90((short *)param_4);
  while (local_4c_mg0 != nullptr) {
    piVar37 = (int *)*local_4c_mg0;
    FUN_006a5e90((short *)local_4c_mg0);
    local_4c_mg0 = piVar37;
  }
  return local_38;
}

