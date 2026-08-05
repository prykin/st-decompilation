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
    this = (STPlaySystemC *)Library::MSVCRT::FUN_0072e530(0xf8);
    if (this == nullptr) {
      g_playSystem_00802A38 = nullptr;
    }
    else {
      g_playSystem_00802A38 = STPlaySystemC::STPlaySystemC(this,g_appClass_00806728);
    }
    if (g_playSystem_00802A38 == nullptr) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Andrey\\tplaysys.cpp",0x7d);
    }
    g_playSystem_00802A38->field_00E0 = 0;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    g_playSystem_00802A38->InitSystem(unaff_ESI);
    g_playSystem_00802A38->vfunc_08(0x1100,0,0xa174,0,0);
    g_playSystem_00802A38->vfunc_08(0x109,0,0,0,0);
    g_playSystem_00802A38->vfunc_08(0x121,0,0,0,0);
    g_playSystem_00802A38->vfunc_08(0x143,0x1794,0,0,0);
    g_playSystem_00802A38->vfunc_08(0x145,0x17a0,0,0,0);
    g_playSystem_00802A38->vfunc_08(0x146,0x17ac,0,0,0);
    g_playSystem_00802A38->vfunc_08(0x15b,0x1780,0,0,0);
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

