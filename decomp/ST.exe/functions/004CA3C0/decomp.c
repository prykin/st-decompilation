#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bspr.cpp
   TLOBaseTy::ReloadLogoPlane */

int __thiscall TLOBaseTy::ReloadLogoPlane(TLOBaseTy *this)

{
  undefined4 *puVar1;
  AnonPointee_TLOBaseTy_01F5 *pAVar2;
  code *pcVar3;
  TLOBaseTy *pTVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  CHAR local_15c [256];
  InternalExceptionFrame local_5c;
  TLOBaseTy *local_18;
  int local_14;
  int local_10;
  uint local_c;
  undefined4 *local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  pTVar4 = local_18;
  if (iVar5 == 0) {
    if (local_18->field_05F3 != 0) {
      pAVar2 = local_18->field_01F5;
      puVar1 = &local_18->field_01D5;
      local_10 = pAVar2->field_01E4;
      local_14 = pAVar2->field_01E8;
      local_c = pAVar2->field_01EC;
      iVar5 = thunk_FUN_004acd30(puVar1,'\r');
      if (iVar5 != 0) {
        iVar5 = thunk_FUN_004acd30(puVar1,'\r');
        local_8 = Library::DKW::LIB::FUN_006aac10(iVar5 << 2);
        iVar7 = 0;
        iVar5 = thunk_FUN_004acd30(puVar1,'\r');
        if (0 < iVar5) {
          do {
            uVar6 = thunk_FUN_004acdd0(puVar1,'\r',iVar7);
            local_8[iVar7] = uVar6;
            iVar7 = iVar7 + 1;
            iVar5 = thunk_FUN_004acd30(puVar1,'\r');
          } while (iVar7 < iVar5);
        }
      }
      wsprintfA(local_15c,s__s_1i_007ac908,pTVar4->field_05F3,pTVar4->field_05C0);
      iVar5 = STT3DSprC::LoadSequence((STT3DSprC *)puVar1,0xd,DAT_0080678c,local_15c,0x1d);
      if (iVar5 != 0) {
        RaiseInternalException
                  (iVar5,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0xd3)
        ;
      }
      thunk_FUN_004abce0(puVar1,0xd,local_10,local_14,'\0');
      STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\r',local_c);
      iVar7 = 0;
      iVar5 = thunk_FUN_004acd30(puVar1,'\r');
      if (0 < iVar5) {
        do {
          thunk_FUN_004ace00(puVar1,'\r',iVar7,local_8[iVar7]);
          iVar7 = iVar7 + 1;
          iVar5 = thunk_FUN_004acd30(puVar1,'\r');
        } while (iVar7 < iVar5);
      }
      FreeAndNull(&local_8);
    }
    if (((*(int *)(&DAT_00791a10 + pTVar4->field_0235 * 4) != 0) && (pTVar4->field_05AC != CASE_40))
       && (pTVar4->field_05AC != CASE_49)) {
      pAVar2 = pTVar4->field_01F5;
      puVar1 = &pTVar4->field_01D5;
      local_10 = pAVar2->field_0130;
      local_14 = pAVar2->field_0134;
      local_c = pAVar2->field_0138;
      iVar5 = thunk_FUN_004acd30(puVar1,'\b');
      if (iVar5 != 0) {
        iVar5 = thunk_FUN_004acd30(puVar1,'\b');
        local_8 = Library::DKW::LIB::FUN_006aac10(iVar5 << 2);
        iVar7 = 0;
        iVar5 = thunk_FUN_004acd30(puVar1,'\b');
        if (0 < iVar5) {
          do {
            uVar6 = thunk_FUN_004acdd0(puVar1,'\b',iVar7);
            local_8[iVar7] = uVar6;
            iVar7 = iVar7 + 1;
            iVar5 = thunk_FUN_004acd30(puVar1,'\b');
          } while (iVar7 < iVar5);
        }
      }
      wsprintfA(local_15c,s__s_cover_1i_007ac8ec,pTVar4->field_05F3,pTVar4->field_05C0);
      iVar5 = STT3DSprC::LoadSequence((STT3DSprC *)puVar1,8,DAT_0080678c,local_15c,0x1d);
      if (iVar5 != 0) {
        RaiseInternalException
                  (iVar5,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0xea)
        ;
      }
      thunk_FUN_004abce0(puVar1,8,local_10,local_14,'\0');
      STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\b',local_c);
      iVar7 = 0;
      iVar5 = thunk_FUN_004acd30(puVar1,'\b');
      if (0 < iVar5) {
        do {
          thunk_FUN_004ace00(puVar1,'\b',iVar7,local_8[iVar7]);
          iVar7 = iVar7 + 1;
          iVar5 = thunk_FUN_004acd30(puVar1,'\b');
        } while (iVar7 < iVar5);
      }
      FreeAndNull(&local_8);
    }
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0xf6,0,iVar5,&DAT_007a4ccc,
                             s_TLOBaseTy__ReloadLogoPlane_error_007ad4f8);
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar5,0,s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0xf7);
  return iVar5;
}

