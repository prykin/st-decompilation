#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::DoneSID */

void __thiscall SIDTy::DoneSID(SIDTy *this)

{
  code *pcVar1;
  SIDTy *pSVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (errorCode == 0) {
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
    if (pSVar2->field_1CD0 != (DArrayTy *)0x0) {
      FUN_006b5570(pSVar2->field_1CD0);
    }
    pSVar2->field_1CD0 = (DArrayTy *)0x0;
    if (pSVar2->field_1CCC != (DArrayTy *)0x0) {
      FUN_006b5570(pSVar2->field_1CCC);
    }
    pSVar2->field_1CCC = (DArrayTy *)0x0;
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar2->field_1A60);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar2->field_1B01);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar2->field_1B92);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar2->field_1C23);
    if (pSVar2->field_1CB4 != 0xffffffff) {
      FUN_006b3bb0((int *)PTR_008075a8,pSVar2->field_1CB4);
    }
    pSVar2->field_1CB4 = 0xffffffff;
    if (pSVar2->field_1CB8 != (ushort *)0x0) {
      FreeAndNull(&pSVar2->field_1CB8);
    }
    if (pSVar2->field_1CC8 != (ushort *)0x0) {
      FreeAndNull(&pSVar2->field_1CC8);
    }
    if (pSVar2->field_1CBC != (ushort *)0x0) {
      FreeAndNull(&pSVar2->field_1CBC);
    }
    if (pSVar2->field_1CC0 != (ushort *)0x0) {
      FreeAndNull(&pSVar2->field_1CC0);
    }
    if (pSVar2->field_004D != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pSVar2->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Start\\sid_obj.cpp",0x62,0,errorCode,"%s"
                             ,"SIDTy::DoneSID");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\sid_obj.cpp",0x62);
  return;
}

