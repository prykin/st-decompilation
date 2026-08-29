#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::CreateBut
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (5), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=005C0230 @ 005C041E -> read as EAX on
   every CFG path | 005C0230 @ 005C0447 -> read as EAX on every CFG path | 005C0230 @ 005C0475 ->
   read as EAX on every CFG path | 005C0E00 @ 005C115E -> read as EAX on every CFG path | 005C0E00 @
   005C118E -> read as EAX on every CFG path */

int __thiscall
MReportTy::CreateBut
          (MReportTy *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,
          undefined4 param_8)

{
  int iVar4;
  int iVar3;
  int iVar2;
  uint *puVar3;
  uint local_1cc [4];
  uint local_1bc;
  uint local_1b8;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_16c;
  uint local_168;
  uint local_164;
  InternalExceptionFrame local_50;
  MReportTy *local_c;
  int local_8;

  puVar3 = local_1cc;
  local_c = this;
  for (iVar2 = 0x5f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;

  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar4 == 0) {
    local_1cc[0] = param_2;
    local_1cc[1] = param_1;
    local_1bc = param_5;
    local_1cc[2] = param_3;
    local_1cc[3] = param_4;
    STPiece<0,2>(local_1ac) = local_c->field_0008;
    STPiece<2,2>(local_1ac) = local_c->field_000A;
    local_1a4 = param_7;
    local_1b8 = param_6;
    local_1a8 = 2;
    local_168 = 2;
    local_164 = param_8;
    local_16c = local_1ac;
    /* ST_CALLSITE[005C0A49]: CALL dword ptr [EAX + 0x8] */
    (*local_c->field_000C->vtable->CreateObject)
              ((SystemClassTy *)local_c->field_000C,2,&local_8,nullptr,local_1cc,0);
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar3 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0x29f,0,iVar4,"%s",
                             "MReportTy::CreateBut");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\rpt_obj.cpp",0x29f);
  return 0;
}

