#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetActiveCenter

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0042DB80 exact 2-byte output store from MOVSX at 0042DB77 establishes signed source
   width 2 | 0042DDF8 exact 2-byte output store from MOVSX at 0042DDEF establishes signed source
   width 2 */

undefined4 __thiscall
STAllPlayersC::GetActiveCenter
          (STAllPlayersC *this,short *param_1,undefined2 *param_2,undefined2 *param_3)

{
  DArrayTy *pDVar1;
  dword dVar2;
  int local_EAX_75;
  uint uVar4;
  STGameObjC *pSVar5;
  int local_EAX_631;
  int iVar4;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  STAllPlayersC_GetObjPtr_param_3Enum SVar10;
  int local_1c;
  uint local_18;
  byte local_14 [4];
  int local_10;
  int local_c;
  int local_8;

  uVar6 = (uint)DAT_0080874d;
  if (g_packedRecords_A62x8[uVar6].field200_0x203 == 0) {
    iVar7 = g_packedRecords_A62x8[uVar6].field96_0x163;
    if (iVar7 == 0) {
      if (param_1 != nullptr) {
        *param_1 = -1;
      }
      if (param_2 != nullptr) {
        *param_2 = 0xffff;
      }
      if (param_3 == nullptr) {
        return 0xffffffff;
      }
      *param_3 = 0xffff;
      return 0xffffffff;
    }
    if (iVar7 == 0x3c) {
      pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar6].field102_0x16d;
      iVar8 = 0;
      iVar7 = 0;
      dVar2 = pDVar1->count;
      iVar9 = 0;
      local_1c = 0;
      local_18 = 0;
      if (0 < (int)dVar2) {
        do {

          DArrayGetElement(pDVar1,local_18,local_14);
          if (STPiece<0,2>(local_14) != 0xffff) {
            local_1c = local_1c + 1;
            /* ST_CALLSITE[0042DDAC]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
            pSVar5 = GetObjPtr(g_allPlayers_007FA174,
                               g_packedRecords_A62x8[DAT_0080874d].field97_0x167,STPiece<0,2>(local_14),
                               CASE_1);
            /* ST_CALLSITE[0042DDBF]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
            STFishC::sub_004162B0
                      ((STFishC *)pSVar5,(short *)&local_8,(short *)&local_c,(short *)&local_10);
            iVar8 = iVar8 + local_8;
            iVar9 = iVar9 + local_c;
            iVar7 = iVar7 + local_10;
          }
          local_18 = local_18 + 1;
        } while ((int)local_18 < (int)dVar2);
        if (0 < local_1c) {
          if (param_1 != nullptr) {
            *param_1 = (short)((short)iVar8 / local_1c);
          }
          if (param_2 != nullptr) {
            *param_2 = (short)((short)iVar9 / local_1c);
          }
          if (param_3 == nullptr) {
            return 0;
          }
          *param_3 = (short)((short)iVar7 / local_1c);
          return 0;
        }
      }
      if (param_1 != nullptr) {
        *param_1 = -1;
      }
joined_r0x0042de37:
      if (param_2 != nullptr) {
        *param_2 = 0xffff;
      }
      if (param_3 == nullptr) {
        return 0;
      }
      *param_3 = 0xffff;
      return 0;
    }
    if (iVar7 == 0x1ae) {
      /* ST_CALLSITE[0042DCF7]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
      pSVar5 = GetObjPtr(g_allPlayers_007FA174,g_packedRecords_A62x8[uVar6].field97_0x167,
                         g_packedRecords_A62x8[uVar6].field101_0x16b,CASE_3);
      /* ST_CALLSITE[0042DD0A]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
      STFishC::sub_004162B0
                ((STFishC *)pSVar5,(short *)&local_8,(short *)&local_c,(short *)&local_10);
      if (param_1 != nullptr) {
        *param_1 = (short)local_8;
      }
      if (param_2 != nullptr) {
        *param_2 = (undefined2)local_c;
      }
      if (param_3 != nullptr) {
        *param_3 = (undefined2)local_10;
      }
      return 0;
    }

    iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x4e5,0,0,"%s",
                               "STAllPlayersC::GetActiveCenter ACT_LEFT invalid game type");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (param_1 != nullptr) {
      *param_1 = -1;
    }
    goto joined_r0x0042dcbd;
  }
  if (g_packedRecords_A62x8[uVar6].field200_0x203 == 1) {
    iVar7 = g_packedRecords_A62x8[uVar6].field149_0x1b3;
    if (0x19a < iVar7) {
      if (iVar7 == 0x1a4) {
        SVar10 = CASE_5;
LAB_0042da27:
        /* ST_CALLSITE[0042DA3C]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
        pSVar5 = GetObjPtr(g_allPlayers_007FA174,g_packedRecords_A62x8[uVar6].field150_0x1b7,
                           g_packedRecords_A62x8[uVar6].field154_0x1bb,SVar10);
        /* ST_CALLSITE[0042DA4F]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        STFishC::sub_004162B0
                  ((STFishC *)pSVar5,(short *)&local_8,(short *)&local_c,(short *)&local_10);
      }
      else {
        if (iVar7 != 0x1b8) {
LAB_0042dbdf:

          local_EAX_631 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x537,0,0,"%s",
                                  "STAllPlayersC::GetActiveCenter ACT_RIGHT invalid game type");
          if (local_EAX_631 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto joined_r0x0042dc09;
        }
        /* ST_CALLSITE[0042DC2B]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
        pSVar5 = GetObjPtr(g_allPlayers_007FA174,g_packedRecords_A62x8[uVar6].field150_0x1b7,
                           g_packedRecords_A62x8[uVar6].field154_0x1bb,CASE_6);
        /* ST_CALLSITE[0042DC3E]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        STFishC::sub_004162B0
                  ((STFishC *)pSVar5,(short *)&local_8,(short *)&local_c,(short *)&local_10);
      }
      if (param_1 != nullptr) {
        *param_1 = (short)local_8;
      }
joined_r0x0042dc56:
      if (param_2 != nullptr) {
        *param_2 = (undefined2)local_c;
      }
      if (param_3 == nullptr) {
        return 0;
      }
      *param_3 = (undefined2)local_10;
      return 0;
    }
    if (iVar7 == 0x19a) {
      pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar6].field155_0x1bd;
      iVar8 = 0;
      iVar7 = 0;
      dVar2 = pDVar1->count;
      iVar9 = 0;
      local_1c = 0;
      local_18 = 0;
      if (0 < (int)dVar2) {
        do {

          DArrayGetElement(pDVar1,local_18,local_14);
          if (STPiece<0,2>(local_14) != 0xffff) {
            local_1c = local_1c + 1;
            /* ST_CALLSITE[0042DB34]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
            pSVar5 = GetObjPtr(g_allPlayers_007FA174,
                               g_packedRecords_A62x8[DAT_0080874d].field150_0x1b7,STPiece<0,2>(local_14),
                               CASE_1);
            /* ST_CALLSITE[0042DB47]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
            STFishC::sub_004162B0
                      ((STFishC *)pSVar5,(short *)&local_8,(short *)&local_c,(short *)&local_10);
            iVar8 = iVar8 + local_8;
            iVar9 = iVar9 + local_c;
            iVar7 = iVar7 + local_10;
          }
          local_18 = local_18 + 1;
        } while ((int)local_18 < (int)dVar2);
        if (0 < local_1c) {
          if (param_1 != nullptr) {
            *param_1 = (short)((short)iVar8 / local_1c);
          }
          if (param_2 != nullptr) {
            *param_2 = (short)((short)iVar9 / local_1c);
          }
          if (param_3 == nullptr) {
            return 0;
          }
          *param_3 = (short)((short)iVar7 / local_1c);
          return 0;
        }
      }
      if (param_1 != nullptr) {
        *param_1 = -1;
      }
      goto joined_r0x0042de37;
    }
    if (iVar7 != 0) {
      if (iVar7 == 0x5a) {
        /* ST_CALLSITE[0042DA7B]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
        pSVar5 = GetObjPtr(g_allPlayers_007FA174,g_packedRecords_A62x8[uVar6].field150_0x1b7,
                           g_packedRecords_A62x8[uVar6].field154_0x1bb,CASE_4);
        /* ST_CALLSITE[0042DA8E]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        STFishC::sub_004162B0
                  ((STFishC *)pSVar5,(short *)&local_8,(short *)&local_c,(short *)&local_10);
        if (param_1 != nullptr) {
          *param_1 = (short)local_8;
        }
        goto joined_r0x0042dc56;
      }
      if (iVar7 != 0x172) goto LAB_0042dbdf;
      SVar10 = CASE_2;
      goto LAB_0042da27;
    }
  }
  else {

    local_EAX_75 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x53e,0,0,
                                      "%s","STAllPlayersC::GetActiveCenter");
    if (local_EAX_75 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
joined_r0x0042dc09:
  if (param_1 != nullptr) {
    *param_1 = -1;
  }
joined_r0x0042dcbd:
  if (param_2 != nullptr) {
    *param_2 = 0xffff;
  }
  if (param_3 == nullptr) {
    return 0xffffffff;
  }
  *param_3 = 0xffff;
  return 0xffffffff;
}

