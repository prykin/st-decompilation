
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::DoneSID */

void __thiscall SIDTy::DoneSID(SIDTy *this)

{
  byte *pbVar1;
  code *pcVar2;
  SIDTy *pSVar3;
  int errorCode;
  int iVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_48 [16];
  SIDTy *local_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar5);
  pSVar3 = local_8;
  if (errorCode == 0) {
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
    if (*(byte **)&pSVar3[0x49].field_0x3 != (byte *)0x0) {
      FUN_006b5570(*(byte **)&pSVar3[0x49].field_0x3);
    }
    pbVar1 = *(byte **)((int)&pSVar3[0x48].field_0061 + 3);
    *(undefined4 *)&pSVar3[0x49].field_0x3 = 0;
    if (pbVar1 != (byte *)0x0) {
      FUN_006b5570(pbVar1);
    }
    *(undefined4 *)((int)&pSVar3[0x48].field_0061 + 3) = 0;
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar3[0x42].field_0x56);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar3[0x44].field_0x2d);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar3[0x45].field_0x59);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar3[0x47].field_0x20);
    if (*(uint *)&pSVar3[0x48].field_0x4c != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)&pSVar3[0x48].field_0x4c);
    }
    *(undefined4 *)&pSVar3[0x48].field_0x4c = 0xffffffff;
    if (*(int *)&pSVar3[0x48].field_0x50 != 0) {
      FUN_006ab060((undefined4 *)&pSVar3[0x48].field_0x50);
    }
    if (*(int *)&pSVar3[0x48].field_0x60 != 0) {
      FUN_006ab060((undefined4 *)&pSVar3[0x48].field_0x60);
    }
    if (*(int *)&pSVar3[0x48].field_0x54 != 0) {
      FUN_006ab060((undefined4 *)&pSVar3[0x48].field_0x54);
    }
    if (*(int *)&pSVar3[0x48].field_0x58 != 0) {
      FUN_006ab060((undefined4 *)&pSVar3[0x48].field_0x58);
    }
    if (*(int *)&pSVar3->field_0x4d != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pSVar3->field_0x3d);
    }
    g_currentExceptionFrame = pIVar5;
    return;
  }
  g_currentExceptionFrame = pIVar5;
  iVar4 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x62,0,errorCode,&DAT_007a4ccc
                             ,s_SIDTy__DoneSID_007cd628);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x62);
  return;
}

