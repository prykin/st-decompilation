
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::DoneSID */

void __thiscall SIDTy::DoneSID(SIDTy *this)

{
  code *pcVar1;
  SIDTy *pSVar2;
  int errorCode;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  SIDTy *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
  pSVar2 = local_8;
  if (errorCode == 0) {
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
    if ((AnonShape_006B5570_4D68B99C *)pSVar2->field_1CD0 != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)pSVar2->field_1CD0);
    }
    pSVar2->field_1CD0 = (AnonPointee_SIDTy_1CD0 *)0x0;
    if ((AnonShape_006B5570_4D68B99C *)pSVar2->field_1CCC != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)pSVar2->field_1CCC);
    }
    pSVar2->field_1CCC = (AnonPointee_SIDTy_1CCC *)0x0;
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar2->field_1A60);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar2->field_1B01);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar2->field_1B92);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar2->field_1C23);
    if (pSVar2->field_1CB4 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,pSVar2->field_1CB4);
    }
    pSVar2->field_1CB4 = 0xffffffff;
    if (pSVar2->field_1CB8 != (AnonPointee_SIDTy_1CB8 *)0x0) {
      FreeAndNull(&pSVar2->field_1CB8);
    }
    if (pSVar2->field_1CC8 != (AnonPointee_SIDTy_1CC8 *)0x0) {
      FreeAndNull(&pSVar2->field_1CC8);
    }
    if (pSVar2->field_1CBC != (AnonPointee_SIDTy_1CBC *)0x0) {
      FreeAndNull(&pSVar2->field_1CBC);
    }
    if (pSVar2->field_1CC0 != (AnonPointee_SIDTy_1CC0 *)0x0) {
      FreeAndNull(&pSVar2->field_1CC0);
    }
    if (pSVar2->field_004D != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pSVar2->field_0x3d);
    }
    g_currentExceptionFrame = pIVar4;
    return;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x62,0,errorCode,&DAT_007a4ccc
                             ,s_SIDTy__DoneSID_007cd628);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x62);
  return;
}

