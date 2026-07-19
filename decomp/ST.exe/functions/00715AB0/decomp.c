
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
    if ((*(int **)(local_8 + 0x48) != (int *)0x0) && (*(uint *)(local_8 + 4) != 0xffffffff)) {
      FUN_006b3bb0(*(int **)(local_8 + 0x48),*(uint *)(local_8 + 4));
    }
    if (*(int *)(pSVar2 + 0x61) == 0) {
      switch(pSVar2[0x4c]) {
      case (SpriteClassTy)0x7:
      case (SpriteClassTy)0x81:
        if (*(int *)(pSVar2 + 0x51) != 0) {
          FUN_00725e30((int *)(pSVar2 + 0x51));
        }
        break;
      case (SpriteClassTy)0x8:
        if (*(int *)(pSVar2 + 0x59) != 0) {
          FUN_00726260((undefined4 *)(pSVar2 + 0x59));
        }
        break;
      case (SpriteClassTy)0x1e:
        if (*(int *)(pSVar2 + 0x55) != 0) {
          FUN_00726bd0((int *)(pSVar2 + 0x55));
        }
      }
    }
    else {
      *(undefined4 *)(pSVar2 + 0x51) = 0;
      *(undefined4 *)(pSVar2 + 0x55) = 0;
      *(undefined4 *)(pSVar2 + 0x59) = 0;
    }
    *(undefined4 *)(pSVar2 + 0x61) = 0;
    *(undefined4 *)(pSVar2 + 4) = 0xffffffff;
    *(undefined4 *)(pSVar2 + 0x48) = 0;
    *(undefined4 *)(pSVar2 + 0x4d) = 0;
    pSVar2[0x65] = (SpriteClassTy)0x0;
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

