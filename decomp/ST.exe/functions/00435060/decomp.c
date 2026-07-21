#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SelfCheckObjControl */

void __thiscall STAllPlayersC::SelfCheckObjControl(STAllPlayersC *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  STGameObjC *pSVar5;
  int iVar6;
  undefined2 uVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_06;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_07;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_11;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EDI;
  uint uVar8;
  int iVar9;
  uint local_c;
  int local_8;

  if (DAT_0080874d != 0xff) {
    local_8 = 4;
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    iVar1 = (uint)DAT_0080874d * 0xa62 + 0x7f4f83;
    do {
      iVar6 = *(int *)(local_8 * 0x10 + iVar1);
      iVar4 = local_8 * 0x10 + iVar1;
      if (iVar6 != 0) {
        if (iVar6 == 0x3c) {
          if (*(int *)(iVar4 + 10) != 0) {
            iVar6 = *(int *)(*(int *)(iVar4 + 10) + 0xc);
            uVar8 = 0;
            if (0 < iVar6) {
              do {
                DArrayGetElement(*(DArrayTy **)(iVar4 + 10),uVar8,&local_c);
                pSVar5 = GetObjPtr(this,*(char *)(iVar4 + 4),local_c,CASE_1);
                if (pSVar5 != (STGameObjC *)0x0) {
                  if (local_8 == 0) {
                    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                    STGameObjC::SetSelfCheckFlag(pSVar5,unaff_EDI);
                  }
                  else {
                    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                    STGameObjC::ResetSelfCheckFlag(pSVar5,(int)unaff_EDI);
                  }
                }
                uVar8 = uVar8 + 1;
              } while ((int)uVar8 < iVar6);
            }
          }
        }
        else if (iVar6 == 0x1ae) {
          pSVar5 = GetObjPtr(this,-1,(uint)*(ushort *)(iVar4 + 8),CASE_3);
          if (pSVar5 != (STGameObjC *)0x0) {
            if (local_8 == 0) {
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              STGameObjC::SetSelfCheckFlag(pSVar5,unaff_EDI);
            }
            else {
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              STGameObjC::ResetSelfCheckFlag(pSVar5,(int)unaff_EDI);
            }
          }
        }
        else {
          iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x10bb,0,0,
                                     "%s","STAllPlayersC::SelfCheckObjControl ACT_LEFT invalid game type");
          if (iVar4 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
        }
      }
      local_8 = local_8 + -1;
    } while (-1 < local_8);
    local_8 = 4;
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    iVar1 = (uint)DAT_0080874d * 0xa62 + 0x7f4fd3;
    iVar4 = iVar1;
    do {
      iVar9 = local_8;
      iVar6 = local_8 * 0x10 + iVar1;
      iVar2 = *(int *)(local_8 * 0x10 + iVar1);
      uVar7 = (undefined2)((uint)iVar4 >> 0x10);
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          if (*(int *)(iVar6 + 10) != 0) {
            iVar2 = *(int *)(*(int *)(iVar6 + 10) + 0xc);
            uVar8 = 0;
            if (0 < iVar2) {
              do {
                DArrayGetElement(*(DArrayTy **)(iVar6 + 10),uVar8,&local_c);
                pSVar5 = GetObjPtr(this,*(char *)(iVar6 + 4),local_c,CASE_1);
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                iVar4 = extraout_EDX_03;
                if (pSVar5 != (STGameObjC *)0x0) {
                  if (local_8 == 0) {
                    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                    STGameObjC::SetSelfCheckFlag(pSVar5,unaff_EDI);
                    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                    iVar4 = extraout_EDX_04;
                  }
                  else {
                    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                    STGameObjC::ResetSelfCheckFlag(pSVar5,(int)unaff_EDI);
                    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                    iVar4 = extraout_EDX_05;
                  }
                }
                uVar8 = uVar8 + 1;
                iVar9 = local_8;
              } while ((int)uVar8 < iVar2);
            }
          }
        }
        else if (iVar2 != 0) {
          if (iVar2 == 0x5a) {
            pSVar5 = GetObjPtr(this,-1,(uint)*(ushort *)(iVar6 + 8),CASE_4);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            iVar4 = extraout_EDX_01;
            if (pSVar5 != (STGameObjC *)0x0) {
              if (iVar9 != 0) goto LAB_004352f5;
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              STGameObjC::SetSelfCheckFlag(pSVar5,unaff_EDI);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              iVar4 = extraout_EDX_02;
            }
          }
          else {
            if (iVar2 != 0x172) goto LAB_00435287;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            pSVar5 = GetObjPtr(this,-1,CONCAT22(uVar7,*(undefined2 *)(iVar6 + 8)),CASE_2);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            iVar4 = extraout_EDX;
            if (pSVar5 != (STGameObjC *)0x0) {
              if (iVar9 != 0) goto LAB_004352f5;
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              STGameObjC::SetSelfCheckFlag(pSVar5,unaff_EDI);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              iVar4 = extraout_EDX_00;
            }
          }
        }
      }
      else if (iVar2 == 0x1a4) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar5 = GetObjPtr(this,-1,CONCAT22(uVar7,*(undefined2 *)(iVar6 + 8)),CASE_5);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar4 = extraout_EDX_09;
        if (pSVar5 != (STGameObjC *)0x0) {
          if (iVar9 == 0) {
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            STGameObjC::SetSelfCheckFlag(pSVar5,unaff_EDI);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            iVar4 = extraout_EDX_10;
          }
          else {
/* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
LAB_004352f5:
            STGameObjC::ResetSelfCheckFlag(pSVar5,(int)unaff_EDI);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            iVar4 = extraout_EDX_11;
          }
        }
      }
      else if (iVar2 == 0x1b8) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar5 = GetObjPtr(this,-1,CONCAT22((short)((uint)iVar1 >> 0x10),*(undefined2 *)(iVar6 + 8))
                           ,CASE_6);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar4 = extraout_EDX_07;
        if (pSVar5 != (STGameObjC *)0x0) {
          if (iVar9 != 0) goto LAB_004352f5;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          STGameObjC::SetSelfCheckFlag(pSVar5,unaff_EDI);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar4 = extraout_EDX_08;
        }
      }
      else {
LAB_00435287:
        iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x10ec,0,0,"%s"
                                   ,"STAllPlayersC::SelfCheckObjControl ACT_RIGHT invalid game type");
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar4 = extraout_EDX_06;
        if (iVar6 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
      local_8 = iVar9 + -1;
    } while (-1 < local_8);
  }
  return;
}

