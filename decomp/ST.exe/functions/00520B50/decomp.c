#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::PaintInfocObj
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=00520B9B MOV EAX,dword ptr [EBP + 0xc];
   first-use mask | 00520BBB MOV ECX,dword ptr [EBP + 0xc]; first-use mask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return */

void __thiscall
InfocPanelTy::PaintInfocObj
          (InfocPanelTy *this,ushort param_1,ushort param_2,int param_3,int param_4)

{
  InfocPanelTy *pIVar2;
  byte bVar3;
  int errorCode;
  int iVar4;
  InternalExceptionFrame local_4c;
  InfocPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pIVar2 = local_8;
  if (errorCode == 0) {
    if ((local_8->field_03D4 == -1) && (param_1 == 0xffff)) {
      /* ST_CALLSITE[00520BB0]: CALL dword ptr [0x0085bde8] */
      wsprintfA(&local_8->field_018D,"----/%d",param_2);
    }
    else {
      /* ST_CALLSITE[00520BD7]: CALL dword ptr [0x0085bde8] */
      wsprintfA(&local_8->field_018D,"%d/%d",param_1,param_2);
    }
    if (DAT_0080874e == '\x03') {
      bVar3 = 0x73;
    }
    else {
      bVar3 = (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a;
    }
    FUN_006b4170((RecoveredSourceFamily_dibcopy *)pIVar2->field_0068,0,param_3,param_4,0x2d,0xc,
                 bVar3);

    ccFntTy::SetSurf(pIVar2->field_0189,pIVar2->field_0068,0,param_3,param_4,0x2d,0xc);

    ccFntTy::WrStr(pIVar2->field_0189,&pIVar2->field_018D,-1,-1,(DAT_0080874e != '\x03') - 1 & 5);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\infocen.cpp",0xa9,0,errorCode,
                             "%s","InfocPanelTy::PaintInfocObj");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\infocen.cpp",0xa9);
  return;
}

