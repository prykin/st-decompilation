#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::SetCtrlCmd

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0054EDF0 -> 0054EEE0 @ 0054EE87 */

void __thiscall
STPlaySystemC::SetCtrlCmd
          (STPlaySystemC *this,undefined1 param_1,uint param_2,char param_3,undefined4 *param_4,
          uint param_5,undefined4 *param_6,uint param_7)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  undefined4 *puVar8;
  InternalExceptionFrame local_54;
  int local_10;
  uint local_c;
  PlaySystemTy *local_8;

  if ((int)param_5 < 0) {
    param_5 = 0;
    switch(param_3) {
    case '\x05':
    case '\x14':
    case '\x19':
      param_5 = 0xc;
      break;
    case '\b':
    case '\t':
    case '\x15':
    case '\"':
    case '(':
    case ')':
    case '*':
      param_5 = 1;
      break;
    case '\x16':
      param_5 = 0x18;
      break;
    case '\x17':
      param_5 = 0x21;
      break;
    case '\x18':
      param_5 = 0x12;
      break;
    case '\x1a':
      param_5 = 0xd;
      break;
    case '\x1e':
      param_5 = 0xb;
      break;
    case '\x1f':
      param_5 = 7;
      break;
    case ' ':
      param_5 = 9;
      break;
    case '!':
      param_5 = 5;
      break;
    case '#':
      param_5 = 0x10;
      break;
    case '\'':
      param_5 = 2;
    }
  }
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = param_5;
  local_8 = (PlaySystemTy *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  uVar7 = local_c;
  if (iVar3 == 0) {
    iVar3 = local_c + param_7;
    local_10 = iVar3;
    puVar4 = Library::DKW::LIB::FUN_006aac10(iVar3 + 0x1b);
    puVar4[1] = *(undefined4 *)&local_8[2].field_0x36;
    *(undefined1 *)(puVar4 + 2) = param_1;
    *(char *)((int)puVar4 + 9) = (char)PTR_00802a30->field_04AE;
    *(uint *)((int)puVar4 + 10) = param_2;
    *(char *)((int)puVar4 + 0xe) = param_3;
    *(uint *)((int)puVar4 + 0xf) = uVar7;
    *(uint *)((int)puVar4 + 0x13) = param_7;
    local_c = iVar3;
    if (param_4 != (undefined4 *)0x0) {
      uVar6 = uVar7 >> 2;
      *(undefined4 **)((int)puVar4 + 0x17) = (undefined4 *)((int)puVar4 + 0x1b);
      puVar8 = (undefined4 *)((int)puVar4 + 0x1b);
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *param_4;
        param_4 = param_4 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar7 = uVar7 & 3; local_c = local_10, uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)param_4;
        param_4 = (undefined4 *)((int)param_4 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    }
    if ((param_6 != (undefined4 *)0x0) && (param_7 != 0)) {
      puVar8 = (undefined4 *)(*(int *)((int)puVar4 + 0x17) + *(int *)((int)puVar4 + 0xf));
      for (uVar7 = param_7 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar8 = *param_6;
        param_6 = param_6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar7 = param_7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)param_6;
        param_6 = (undefined4 *)((int)param_6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    }
    if (DAT_0080877e == '\0') {
      bVar2 = true;
      if ((param_3 != '\x05') && (param_3 != '2')) {
        bVar2 = false;
      }
      if (bVar2) {
        FUN_006b9910(&local_8->field_0039,(int)puVar4);
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PlaySystemTy::SendClientMail(local_8,unaff_EDI);
        g_currentExceptionFrame = local_54.previous;
        return;
      }
    }
    FUN_006b9910(&local_8->field_0039,(int)puVar4);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0x55b,0,iVar3,"%s",
                             "STPlaySystemC::SetCtrlCmd");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0x55d);
  return;
}

