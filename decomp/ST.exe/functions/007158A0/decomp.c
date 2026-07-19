
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sprite.cpp
   SpriteClassTy::InitSprite */

undefined4 __thiscall
SpriteClassTy::InitSprite
          (SpriteClassTy *this,int *param_1,uint param_2,char param_3,undefined4 *param_4,
          int param_5,int param_6)

{
  code *pcVar1;
  SpriteClassTy *pSVar2;
  int errorCode;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  SpriteClassTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_8;
  if (errorCode == 0) {
    switch(param_3) {
    case '\a':
    case '\x1e':
      FUN_006b21e0((uint)param_1,&local_8->field_0004,param_2,0,(int *)0x0,0x8000000,0xffffffff,
                   0xffffffff,0);
      break;
    case '\b':
      Library::DKW::DDX::FUN_006b2220
                (param_1,&local_8->field_0004,param_2,0,(undefined4 *)0x0,(int *)0x0,0xffffffff,
                 0xffffffff);
      break;
    case -0x80:
      local_8->field_002C = 0;
      local_8->field_0030 = 0;
      local_8->field_0034 = 0;
      local_8->field_0038 = 0;
      local_8->field_003C = 0;
      local_8->field_0024 = 1;
      local_8->field_0028 = 1;
      if (param_4 != (undefined4 *)0x0) {
        local_8->field_0024 = *param_4;
        local_8->field_0028 = param_4[1];
      }
      FUN_006b2330((uint)param_1,&local_8->field_0004,param_2,0x752e10,local_8->field_0024,
                   local_8->field_0028,(uint)&local_8->field_002C);
      break;
    case -0x7f:
      FUN_0072aca0(param_1,&local_8->field_0004,param_5,param_6,(int)param_4);
    }
    pSVar2->field_004C = param_3;
    pSVar2->field_0048 = param_1;
    pSVar2->field_005D = -(uint)(param_3 != -0x7f) & param_2;
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E__Ourlib_Sprite_cpp_007f0454,0x50,0,errorCode,&DAT_007a4ccc,
                             s_SpriteClassTy__InitSprite_007f046c);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  RaiseInternalException(errorCode,0,s_E__Ourlib_Sprite_cpp_007f0454,0x52);
  return 0xfffffc18;
}

