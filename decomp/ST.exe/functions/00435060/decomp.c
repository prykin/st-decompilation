#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SelfCheckObjControl */

void __thiscall STAllPlayersC::SelfCheckObjControl(STAllPlayersC *this)

{
  int iVar1;
  int iVar2;
  int iVar4;
  STGameObjC *pSVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_c [4];
  int local_8;

  if (DAT_0080874d != 0xff) {
    local_8 = 4;
    iVar1 = STRecordByteAddress(g_packedRecords_A62x8, (uint)DAT_0080874d, 0x163);
    do {
      iVar2 = *(int *)(local_8 * 0x10 + iVar1);
      iVar4 = local_8 * 0x10 + iVar1;
      if (iVar2 != 0) {
        if (iVar2 == 0x3c) {
          if (*(int *)(iVar4 + 10) != 0) {
            iVar2 = *(int *)(*(int *)(iVar4 + 10) + 0xc);
            uVar6 = 0;
            if (0 < iVar2) {
              do {
                DArrayGetElement(*(DArrayTy **)(iVar4 + 10),uVar6,local_c);
                pSVar5 = GetObjPtr(this,*(char *)(iVar4 + 4),STPiece<0,2>(local_c),CASE_1);
                if (pSVar5 != nullptr) {
                  if (local_8 == 0) {
                    STGameObjC::SetSelfCheckFlag(pSVar5);
                  }
                  else {
                    STGameObjC::ResetSelfCheckFlag(pSVar5);
                  }
                }
                uVar6 = uVar6 + 1;
              } while ((int)uVar6 < iVar2);
            }
          }
        }
        else if (iVar2 == 0x1ae) {
          pSVar5 = GetObjPtr(this,-1,*(ushort *)(iVar4 + 8),CASE_3);
          if (pSVar5 != nullptr) {
            if (local_8 == 0) {
              STGameObjC::SetSelfCheckFlag(pSVar5);
            }
            else {
              STGameObjC::ResetSelfCheckFlag(pSVar5);
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
    iVar1 = STRecordByteAddress(g_packedRecords_A62x8, (uint)DAT_0080874d, 0x1B3);
    do {
      iVar7 = local_8;
      iVar4 = local_8 * 0x10 + iVar1;
      iVar2 = *(int *)(local_8 * 0x10 + iVar1);
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          if (*(int *)(iVar4 + 10) != 0) {
            iVar2 = *(int *)(*(int *)(iVar4 + 10) + 0xc);
            uVar6 = 0;
            if (0 < iVar2) {
              do {
                DArrayGetElement(*(DArrayTy **)(iVar4 + 10),uVar6,local_c);
                pSVar5 = GetObjPtr(this,*(char *)(iVar4 + 4),STPiece<0,2>(local_c),CASE_1);
                if (pSVar5 != nullptr) {
                  if (local_8 == 0) {
                    STGameObjC::SetSelfCheckFlag(pSVar5);
                  }
                  else {
                    STGameObjC::ResetSelfCheckFlag(pSVar5);
                  }
                }
                uVar6 = uVar6 + 1;
                iVar7 = local_8;
              } while ((int)uVar6 < iVar2);
            }
          }
        }
        else if (iVar2 != 0) {
          if (iVar2 == 0x5a) {
            pSVar5 = GetObjPtr(this,-1,*(ushort *)(iVar4 + 8),CASE_4);
            if (pSVar5 != nullptr) {
              if (iVar7 != 0) goto LAB_004352f5;
              STGameObjC::SetSelfCheckFlag(pSVar5);
            }
          }
          else {
            if (iVar2 != 0x172) goto LAB_00435287;
            pSVar5 = GetObjPtr(this,-1,*(ushort *)(iVar4 + 8),CASE_2);
            if (pSVar5 != nullptr) {
              if (iVar7 != 0) goto LAB_004352f5;
              STGameObjC::SetSelfCheckFlag(pSVar5);
            }
          }
        }
      }
      else if (iVar2 == 0x1a4) {
        pSVar5 = GetObjPtr(this,-1,*(ushort *)(iVar4 + 8),CASE_5);
        if (pSVar5 != nullptr) {
          if (iVar7 == 0) {
            STGameObjC::SetSelfCheckFlag(pSVar5);
          }
          else {
LAB_004352f5:
            STGameObjC::ResetSelfCheckFlag(pSVar5);
          }
        }
      }
      else if (iVar2 == 0x1b8) {
        pSVar5 = GetObjPtr(this,-1,*(ushort *)(iVar4 + 8),CASE_6);
        if (pSVar5 != nullptr) {
          if (iVar7 != 0) goto LAB_004352f5;
          STGameObjC::SetSelfCheckFlag(pSVar5);
        }
      }
      else {
LAB_00435287:
        iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x10ec,0,0,"%s"
                                   ,"STAllPlayersC::SelfCheckObjControl ACT_RIGHT invalid game type");
        if (iVar4 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
      local_8 = iVar7 + -1;
    } while (-1 < local_8);
  }
  return;
}

