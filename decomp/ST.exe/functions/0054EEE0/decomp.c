#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::SetCtrlCmd

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0054EDF0 -> 0054EEE0 @ 0054EE87

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0054EDF0 -> 0054EEE0 @ 0054EE42; FUN_0054edf0 parameter param_2 | 0054EDF0 -> 0054EEE0
   @ 0054EE87; FUN_0054edf0 parameter param_2 */

void __thiscall
STPlaySystemC::SetCtrlCmd
          (STPlaySystemC *this,undefined1 param_1,uint param_2,char param_3,uint *param_4,
          uint param_5,undefined4 *param_6,uint param_7)

{
  int iVar1;
  bool bVar3;
  int iVar3;
  void *pvVar4;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  byte *puVar8;
  InternalExceptionFrame local_54;
  int local_10;
  uint local_c;
  STPlaySystemC *local_8;

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
  local_8 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  uVar6 = local_c;
  if (iVar3 == 0) {
    iVar1 = local_c + param_7;
    local_10 = iVar1;
    /* ST_CALLSITE[0054EFA3]: CALL 0x006aac10; direct=006AAC10 Library::DKW::LIB::MemAllocClear; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
    pvVar4 = Library::DKW::LIB::MemAllocClear(iVar1 + 0x1b);
    STField<uint>(pvVar4,4) = local_8->field_00E4;
    STField<undefined1>(pvVar4,8) = param_1;
    STField<char>(pvVar4,9) = (char)g_cursorClass_00802A30->field_04AE;
    STField<uint>(pvVar4,10) = param_2;
    STField<char>(pvVar4,0xe) = param_3;
    STField<uint>(pvVar4,0xf) = uVar6;
    STField<uint>(pvVar4,0x13) = param_7;
    local_c = iVar1;
    if (param_4 != nullptr) {
      uVar5 = uVar6 >> 2;
      STField<uint *>(pvVar4,0x17) = (uint *)((int)pvVar4 + 0x1b);
      puVar7 = (uint *)((int)pvVar4 + 0x1b);
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *param_4;
        param_4 = param_4 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar6 = uVar6 & 3; local_c = local_10, uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)puVar7 = (char)*param_4;
        param_4 = (uint *)((int)param_4 + 1);
        puVar7 = (uint *)((int)puVar7 + 1);
      }
    }
    if ((param_6 != nullptr) && (param_7 != 0)) {
      puVar8 = (byte *)(STField<int>(pvVar4,0x17) + STField<int>(pvVar4,0xf));
      memmove(puVar8, param_6, param_7); /* compiler REP MOVS byte copy */
    }
    if (DAT_0080877e == '\0') {
      bVar3 = true;
      if ((param_3 != '\x05') && (param_3 != '2')) {
        bVar3 = false;
      }
      if (bVar3) {
        FUN_006b9910(&local_8->field_0039,(int)pvVar4);
        /* ST_CALLSITE[0054F058]: CALL 0x00405420; direct=00405420 PlaySystemTy::SendClientMail */
        PlaySystemTy::SendClientMail((PlaySystemTy *)local_8);
        g_currentExceptionFrame = local_54.previous;
        return;
      }
    }
    FUN_006b9910(&local_8->field_0039,(int)pvVar4);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;

  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0x55b,0,iVar3,"%s",
                             "STPlaySystemC::SetCtrlCmd");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0x55d);
  return;
}

