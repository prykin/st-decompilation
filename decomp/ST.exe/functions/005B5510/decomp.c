#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMObjTy::CreateSprBut
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (34), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00597120 @ 005974EB -> read as EAX on
   every CFG path | 0059C700 @ 0059C8CF -> read as EAX on every CFG path | 0059DB20 @ 0059E0EC ->
   read as EAX on every CFG path | 0059DB20 @ 0059E117 -> read as EAX on every CFG path | 0059DB20 @
   0059E143 -> read as EAX on every CFG path | 0059E7F0 @ 0059E9DF -> read as EAX on every CFG path
   | 0059EB00 @ 0059F00B -> read as EAX on every CFG path | 0059EB00 @ 0059F036 -> read as EAX on
   every CFG path | 0059EB00 @ 0059F062 -> read as EAX on every CFG path | 0059F260 @ 0059F369 ->
   read as EAX on every CFG path | 0059F260 @ 0059F395 -> read as EAX on every CFG path | 0059F260 @
   0059F3BE -> read as EAX on every CFG path | 0059F260 @ 0059F3E7 -> read as EAX on every CFG path
   | 0059F260 @ 0059F410 -> read as EAX on every CFG path | 0059F260 @ 0059F448 -> read as EAX on
   every CFG path | 005B3430 @ 005B3861 -> read as EAX on every CFG path | 005B7540 @ 005B7B78 ->
   read as EAX on every CFG path | 005C6030 @ 005C62F8 -> read as EAX on every CFG path | 005C6030 @
   005C65D0 -> read as EAX on every CFG path | 005C6030 @ 005C6616 -> read as EAX on every CFG path
   | 005C6030 @ 005C6764 -> read as EAX on every CFG path | 005C6030 @ 005C678D -> read as EAX on
   every CFG path | 005C6030 @ 005C67B6 -> read as EAX on every CFG path | 005C6030 @ 005C67DF ->
   read as EAX on every CFG path */

int __thiscall
MMObjTy::CreateSprBut
          (MMObjTy *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
          ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar2;
  int iVar3;
  int iVar4;
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
  MMObjTy *local_c;
  int local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    memset(local_1cc, 0, 0x17c); /* compiler bulk-zero initialization */
    local_1cc[0] = param_2;
    local_1cc[1] = param_1;
    local_1bc = param_5;
    local_1cc[2] = param_3;
    local_1cc[3] = param_4;
    local_1ac = local_c->field_0008;
    local_1a4 = param_7;
    local_1b8 = param_6;
    local_1a8 = 2;
    local_168 = 2;
    local_164 = param_8;
    local_16c = local_1ac;
    /* ST_CALLSITE[005B55DB]: CALL dword ptr [EAX + 0x8] */
    (*local_c->field_000C->vtable->CreateObject)
              ((SystemClassTy *)local_c->field_000C,2,&local_8,nullptr,local_1cc,0);
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar3 = ReportDebugMessage("E:\\__titans\\Start\\mmenuobj.cpp",0x47,0,iVar2,"%s",
                             "MMObjTy::CreateSprBut");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\mmenuobj.cpp",0x47);
  return 0;
}

