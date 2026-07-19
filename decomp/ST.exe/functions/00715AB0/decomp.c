
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sprite.cpp
   SpriteClassTy::CloseSprite */

undefined4 __thiscall SpriteClassTy::CloseSprite(SpriteClassTy *this)

{
  code *pcVar1;
  SpriteClassTy *pSVar2;
  int errorCode;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  InternalExceptionFrame local_4c;
  SpriteClassTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_ESI,unaff_EBX);
  pSVar2 = local_8;
  if (errorCode == 0) {
    if (((int *)local_8->field_0048 != (int *)0x0) && (local_8->field_0004 != 0xffffffff)) {
      FUN_006b3bb0((int *)local_8->field_0048,local_8->field_0004);
    }
    if (pSVar2->field_0061 == 0) {
      switch(pSVar2->field_004C) {
      case 7:
      case 0x81:
        if (pSVar2->field_0051 != 0) {
          FUN_00725e30(&pSVar2->field_0051);
        }
        break;
      case 8:
        if (pSVar2->field_0059 != 0) {
          FUN_00726260(&pSVar2->field_0059);
        }
        break;
      case 0x1e:
        if (pSVar2->field_0055 != 0) {
          FUN_00726bd0(&pSVar2->field_0055);
        }
      }
    }
    else {
      pSVar2->field_0051 = 0;
      pSVar2->field_0055 = 0;
      pSVar2->field_0059 = 0;
    }
    pSVar2->field_0061 = 0;
    pSVar2->field_0004 = 0xffffffff;
    pSVar2->field_0048 = 0;
    pSVar2->field_004D = 0;
    pSVar2->field_0065 = 0;
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E__Ourlib_Sprite_cpp_007f0454,0x76,0,errorCode,&DAT_007a4ccc,
                             s_SpriteClassTy__CloseSprite_007f0488);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  RaiseInternalException(errorCode,0,s_E__Ourlib_Sprite_cpp_007f0454,0x78);
  return 0xfffffc18;
}

