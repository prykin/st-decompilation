#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::ShowCurFase
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (10), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0041F3B0 @ 0041F468 -> killed on
   every CFG path | 0041F3B0 @ 0041F515 -> killed on every CFG path | 0041F3B0 @ 0041F543 -> killed
   on every CFG path | 0041F3B0 @ 0041F59B -> unknown: terminal before explicit accumulator kill |
   00480600 @ 0048076B -> read as EAX on every CFG path | 00480600 @ 00480782 -> read as EAX on
   every CFG path | 00480600 @ 00480873 -> read as EAX on every CFG path | 00480600 @ 0048088A ->
   read as EAX on every CFG path | 00480600 @ 00480F86 -> read as EAX on every CFG path | 00480600 @
   00480F9D -> read as EAX on every CFG path | 00579350 @ 0057968E -> killed on every CFG path |
   00579350 @ 005796AD -> killed on every CFG path | 0057CD70 @ 0057D289 -> killed on every CFG path
   | 005825C0 @ 00582FAC -> killed on every CFG path | 005825C0 @ 00582FB5 -> killed on every CFG
   path | 0058A9E0 @ 0058AE2A -> killed on every CFG path | 0058BD90 @ 0058C399 -> killed on every
   CFG path | 0058E570 @ 0058E9E3 -> killed on every CFG path | 005EF5F0 @ 005EF679 -> unknown:
   terminal before explicit accumulator kill | 005F9E40 @ 005F9E69 -> killed on every CFG path |
   005FA0B0 @ 005FA141 -> unknown: terminal before explicit accumulator kill | 00600750 @ 00600B81
   -> killed on every CFG path | 00600750 @ 00600C55 -> killed on every CFG path | 00600750 @
   00600C68 -> killed on every CFG path */

int __thiscall STT3DSprC::ShowCurFase(STT3DSprC *this,char param_1)

{
  STT3DSprC *pSVar2;
  int local_EAX_35;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  STT3DSprC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  local_EAX_35 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (local_EAX_35 == 0) {
    if (local_8->field_0018 == 0xffffffff) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0xba);
    }
    if ((param_1 < '\0') || (pSVar2->field_0014 + -1 < (int)param_1)) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0xbb);
    }
    iVar4 = param_1 * 0x24;
    if (*(int *)(&pSVar2->field_0020->field_0x0 + iVar4) == 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0xbc);
    }
    ST3DSMAPContext::sub_006EA270
              (pSVar2->field_003C,pSVar2->field_0018,(int)param_1,
               *(uint *)(&pSVar2->field_0020->field_0x18 + iVar4));
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\Tspr3d.cpp",0xbf,0,local_EAX_35,
                             "%s","STT3DSprC::ShowCurFase");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return -1;
}

