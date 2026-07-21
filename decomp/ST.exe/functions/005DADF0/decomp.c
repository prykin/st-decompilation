#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::InitChat */

void __thiscall StartSystemTy::InitChat(StartSystemTy *this)

{
  ushort *puVar1;
  code *pcVar2;
  int errorCode;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (DAT_0080c4fa != (DArrayTy *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)DAT_0080c4fa);
    }
    DAT_0080c4fa = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,100,0x14);
    puVar1 = local_8->field_067E;
    if (puVar1 != (ushort *)0x0) {
      uVar6 = *(uint *)(puVar1 + 10);
      if (uVar6 == 0) {
        uVar6 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar1 + 4);
      }
      puVar3 = (undefined4 *)FUN_006b4fa0((int)puVar1);
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = 0xffffffff;
        puVar3 = puVar3 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar3 = 0xff;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\startsys.cpp",0xda,0,errorCode,
                             "%s","StartSystemTy::InitChat");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\startsys.cpp",0xdb);
  return;
}

