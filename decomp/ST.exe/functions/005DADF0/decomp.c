#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::InitChat */

void __thiscall StartSystemTy::InitChat(StartSystemTy *this)

{
  AnonPointee_StartSystemTy_067E *pAVar1;
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
    if (DAT_0080c4fa != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570(DAT_0080c4fa);
    }
    DAT_0080c4fa = (AnonShape_006B5570_4D68B99C *)
                   Library::DKW::TBL::FUN_006b54f0((uint *)0x0,100,0x14);
    pAVar1 = local_8->field_067E;
    if (pAVar1 != (AnonPointee_StartSystemTy_067E *)0x0) {
      uVar6 = pAVar1->field_0014;
      if (uVar6 == 0) {
        uVar6 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                pAVar1->field_0008;
      }
      puVar3 = (undefined4 *)FUN_006b4fa0((int)pAVar1);
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
  iVar4 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0xda,0,errorCode,
                             &DAT_007a4ccc,s_StartSystemTy__InitChat_007cd75c);
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_startsys_cpp_007cd718,0xdb);
  return;
}

