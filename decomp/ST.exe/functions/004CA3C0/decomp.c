#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bspr.cpp
   TLOBaseTy::ReloadLogoPlane */

int __thiscall TLOBaseTy::ReloadLogoPlane(TLOBaseTy *this)

{
  uint *puVar1;
  AnonPointee_TLOBaseTy_01F5 *pAVar2;
  TLOBaseTy *pTVar4;
  int iVar5;
  int iVar7;
  int iVar6;
  int iVar8;
  CHAR local_15c [256];
  InternalExceptionFrame local_5c;
  TLOBaseTy *local_18;
  int local_14;
  int local_10;
  uint local_c;
  void *local_8;

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
      /* ST_CALLSITE[004CA434]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar7 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\r');
      if (iVar7 != 0) {
        /* ST_CALLSITE[004CA441]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
        iVar7 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\r');

        local_8 = Library::DKW::LIB::MemAllocClear(iVar7 << 2);
        iVar8 = 0;
        /* ST_CALLSITE[004CA458]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
        iVar7 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\r');
        if (0 < iVar7) {
          do {

            iVar7 = thunk_FUN_004acdd0(puVar1,'\r',iVar8);
            *(int *)((int)local_8 + iVar8 * 4) = iVar7;
            iVar8 = iVar8 + 1;
            /* ST_CALLSITE[004CA476]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
            iVar7 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\r');
          } while (iVar8 < iVar7);
        }
      }
      /* ST_CALLSITE[004CA499]: CALL dword ptr [0x0085bde8] */
      wsprintfA(local_15c,"%s%1i",pTVar4->field_05F3,pTVar4->field_05C0);
      /* ST_CALLSITE[004CA4B5]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar7 = STT3DSprC::LoadSequence((STT3DSprC *)puVar1,0xd,PTR_0080678c,local_15c,CASE_1D);
      if (iVar7 != 0) {
        RaiseInternalException
                  (iVar7,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0xd3);
      }

      thunk_FUN_004abce0(puVar1,0xd,local_10,local_14,'\0');
      /* ST_CALLSITE[004CA4F0]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\r',local_c);
      iVar8 = 0;
      /* ST_CALLSITE[004CA4FB]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar7 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\r');
      if (0 < iVar7) {
        do {
          thunk_FUN_004ace00(puVar1,'\r',iVar8,*(undefined4 *)((int)local_8 + iVar8 * 4));
          iVar8 = iVar8 + 1;
          /* ST_CALLSITE[004CA51A]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
          iVar7 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\r');
        } while (iVar8 < iVar7);
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
      /* ST_CALLSITE[004CA584]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar7 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\b');
      if (iVar7 != 0) {
        /* ST_CALLSITE[004CA591]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
        iVar7 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\b');

        local_8 = Library::DKW::LIB::MemAllocClear(iVar7 << 2);
        iVar8 = 0;
        /* ST_CALLSITE[004CA5A8]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
        iVar7 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\b');
        if (0 < iVar7) {
          do {

            iVar7 = thunk_FUN_004acdd0(puVar1,'\b',iVar8);
            *(int *)((int)local_8 + iVar8 * 4) = iVar7;
            iVar8 = iVar8 + 1;
            /* ST_CALLSITE[004CA5C6]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
            iVar7 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\b');
          } while (iVar8 < iVar7);
        }
      }
      /* ST_CALLSITE[004CA5E9]: CALL dword ptr [0x0085bde8] */
      wsprintfA(local_15c,"%s_cover%1i",pTVar4->field_05F3,pTVar4->field_05C0);
      /* ST_CALLSITE[004CA605]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar7 = STT3DSprC::LoadSequence((STT3DSprC *)puVar1,8,PTR_0080678c,local_15c,CASE_1D);
      if (iVar7 != 0) {
        RaiseInternalException
                  (iVar7,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",0xea);
      }

      thunk_FUN_004abce0(puVar1,8,local_10,local_14,'\0');
      /* ST_CALLSITE[004CA640]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\b',local_c);
      iVar8 = 0;
      /* ST_CALLSITE[004CA64B]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar7 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\b');
      if (0 < iVar7) {
        do {
          thunk_FUN_004ace00(puVar1,'\b',iVar8,*(undefined4 *)((int)local_8 + iVar8 * 4));
          iVar8 = iVar8 + 1;
          /* ST_CALLSITE[004CA66A]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
          iVar7 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\b');
        } while (iVar8 < iVar7);
      }
      FreeAndNull(&local_8);
    }
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_5c.previous;

  iVar6 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_bspr.cpp",0xf6,0,iVar5,"%s",
                             "TLOBaseTy::ReloadLogoPlane error");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar5,0,"E:\\__titans\\Artem\\TLO_bspr.cpp",0xf7);
  return iVar5;
}

