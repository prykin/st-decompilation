#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\tplaysys.cpp
   Diagnostic line evidence: 125 | 176 | 177 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void CreatePlaySystem(void)

{
  int errorCode;
  STPlaySystemC *this;
  int iVar2;
  byte bVar3;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_ESI;
  InternalExceptionFrame local_50;
  uint *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;

  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (errorCode == 0) {
    /* ST_CALLSITE[0054C776]: CALL 0x0072e530; direct=0072E530 Library::MSVCRT::FUN_0072e530; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STPlaySystemC; signature=__cdecl;pointer:/STPlaySystemC;/uint */
    this = Library::MSVCRT::FUN_0072e530(0xf8);
    if (this == nullptr) {
      g_playSystem_00802A38 = nullptr;
    }
    else {
      /* ST_CALLSITE[0054C78B]: CALL 0x00401ffa; direct=00401FFA STPlaySystemC::STPlaySystemC */
      g_playSystem_00802A38 = STPlaySystemC::STPlaySystemC(this,g_app_00806728);
    }
    if (g_playSystem_00802A38 == nullptr) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Andrey\\tplaysys.cpp",0x7d);
    }
    g_playSystem_00802A38->field_00E0 = 0;
    /* ST_CALLSITE[0054C7C9]: CALL dword ptr [EAX] */
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    g_playSystem_00802A38->InitSystem(unaff_ESI);
    /* ST_CALLSITE[0054C7E3]: CALL dword ptr [EDX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STPlaySystemC;/int;pointer:/undefined4;pointer:/int;/undefined2;/int */
    g_playSystem_00802A38->vfunc_8(0x1100,nullptr,(int *)&g_allPlayers_007FA174,0,0);
    /* ST_CALLSITE[0054C7FB]: CALL dword ptr [EAX + 0x8] */
    g_playSystem_00802A38->vfunc_8(0x109,nullptr,nullptr,0,0);
    /* ST_CALLSITE[0054C813]: CALL dword ptr [EDX + 0x8] */
    g_playSystem_00802A38->vfunc_8(0x121,nullptr,nullptr,0,0);
    /* ST_CALLSITE[0054C82E]: CALL dword ptr [EAX + 0x8] */
    g_playSystem_00802A38->vfunc_8(0x143,(undefined4 *)&DAT_00811794,nullptr,0,0);
    /* ST_CALLSITE[0054C849]: CALL dword ptr [EDX + 0x8] */
    g_playSystem_00802A38->vfunc_8(0x145,(undefined4 *)&DAT_008117a0,nullptr,0,0);
    /* ST_CALLSITE[0054C864]: CALL dword ptr [EAX + 0x8] */
    g_playSystem_00802A38->vfunc_8(0x146,(undefined4 *)&DAT_008117ac,nullptr,0,0);
    /* ST_CALLSITE[0054C87F]: CALL dword ptr [EDX + 0x8] */
    g_playSystem_00802A38->vfunc_8(0x15b,(undefined4 *)&DAT_00811780,nullptr,0,0);

    thunk_FUN_0058d6f0();
    if (DAT_0080879c == 0) {
      bVar3 = 0;
      local_8 = local_8 & 0xffffff00;
      do {
        thunk_FUN_00435850((char)local_8,1,nullptr);
        bVar3 = bVar3 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
      } while (bVar3 < 8);
    }
    /* ST_CALLSITE[0054C8B2]: CALL 0x004051c8; direct=004051C8 CreateAi */
    CreateAi();
    if (g_cMf32_00806754 != nullptr) {
      local_c = &local_8;
      local_8 = 0x32;
      cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_LAST_NAME_0079ae2c,(int *)&local_c,0);
      if (g_playSystem_00802A38->field_0020 < local_8) {
        g_playSystem_00802A38->field_0020 = local_8;
      }
    }

    AppClassTy::AddChildSystem
              ((AppClassTy *)&DAT_00807620,(SystemClassTy *)g_parentSystem_0081163C,
               (SystemClassTy *)g_playSystem_00802A38,0);
    g_playSystem_00802A38->field_00E0 = 1;
    if (DAT_008067a0 != '\0') {
      DAT_00802a99 = 1;
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar2 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0xb0,0,errorCode,
                             "%s","CreatePlaySystem");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0xb1);
  return;
}

