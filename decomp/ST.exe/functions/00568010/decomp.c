
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00568010_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_8=8 */

void __thiscall FUN_00568010(void *this,Global_sub_00568010_param_1Enum param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  SoundClassTy *pSVar2;
  InternalExceptionFrame local_50;
  SoundClassTy *local_c;
  uint local_8;
  
  if (*(int *)((int)this + 0xf8b) != 0) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar1 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pSVar2 = local_c;
    if (iVar1 == 0) {
      switch(param_1) {
      case CASE_1:
        iVar1 = 2;
        pSVar2 = local_c + 0xe23;
        do {
          if ((((0x1a < iVar1) && (iVar1 < 0x1e)) || ((0x11 < iVar1 && (iVar1 < 0x15)))) &&
             (FUN_006c1f00(iVar1,&local_8,(uint *)0x0), local_8 == 1)) {
            *(undefined4 *)pSVar2 = 0;
            *(undefined4 *)(pSVar2 + 4) = 0;
            *(undefined4 *)(pSVar2 + 8) = 0;
            FUN_006c1ba0(iVar1);
          }
          iVar1 = iVar1 + 1;
          pSVar2 = pSVar2 + 0xc;
        } while (iVar1 < 0x20);
        g_currentExceptionFrame = local_50.previous;
        return;
      case CASE_2:
        iVar1 = 4;
        pSVar2 = local_c + 0xe3b;
        do {
          FUN_006c1f00(iVar1,&local_8,(uint *)0x0);
          if (local_8 == 1) {
            *(undefined4 *)pSVar2 = 0;
            *(undefined4 *)(pSVar2 + 4) = 0;
            *(undefined4 *)(pSVar2 + 8) = 0;
            FUN_006c1ba0(iVar1);
          }
          iVar1 = iVar1 + 1;
          pSVar2 = pSVar2 + 0xc;
        } while (iVar1 < 0xb);
        g_currentExceptionFrame = local_50.previous;
        return;
      case CASE_4:
        iVar1 = 2;
        do {
          if (((((1 < iVar1) && (iVar1 < 4)) || ((0x1d < iVar1 && (iVar1 < 0x20)))) ||
              ((10 < iVar1 && (iVar1 < 0x12)))) &&
             (FUN_006c1f00(iVar1,&local_8,(uint *)0x0), local_8 == 1)) {
            *(undefined4 *)(pSVar2 + iVar1 * 0xc + 0xe0b) = 0;
            *(undefined4 *)(pSVar2 + iVar1 * 0xc + 0xe0f) = 0;
            *(undefined4 *)(pSVar2 + iVar1 * 0xc + 0xe13) = 0;
            FUN_006c1ba0(iVar1);
            if (iVar1 == 2) {
              SoundClassTy::PlaySound_thunk
                        (pSVar2,SOUND_MODE_1,(char *)0x0,0x4b7,(SoundPosition *)0x0,0);
            }
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x20);
        g_currentExceptionFrame = local_50.previous;
        return;
      case CASE_8:
        iVar1 = 0x15;
        pSVar2 = local_c + 0xf07;
        do {
          FUN_006c1f00(iVar1,&local_8,(uint *)0x0);
          if (local_8 == 1) {
            *(undefined4 *)pSVar2 = 0;
            *(undefined4 *)(pSVar2 + 4) = 0;
            *(undefined4 *)(pSVar2 + 8) = 0;
            FUN_006c1ba0(iVar1);
          }
          iVar1 = iVar1 + 1;
          pSVar2 = pSVar2 + 0xc;
        } while (iVar1 < 0x1a);
      }
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
  }
  return;
}

