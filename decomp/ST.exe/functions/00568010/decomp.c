
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00568010_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_8=8 */

void __thiscall FUN_00568010(void *this,Global_sub_00568010_param_1Enum param_1)

{
  SoundClassTy *this_00;
  int iVar1;
  undefined4 *puVar2;
  InternalExceptionFrame local_50;
  SoundClassTy *local_c;
  uint local_8;

  if (*(int *)((int)this + 0xf8b) != 0) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar1 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    this_00 = local_c;
    if (iVar1 == 0) {
      switch(param_1) {
      case CASE_1:
        iVar1 = 2;
        puVar2 = (undefined4 *)&local_c->field_0xe23;
        do {
          if ((((0x1a < iVar1) && (iVar1 < 0x1e)) || ((0x11 < iVar1 && (iVar1 < 0x15)))) &&
             (FUN_006c1f00(iVar1,&local_8,(uint *)0x0), local_8 == 1)) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_006c1ba0(iVar1);
          }
          iVar1 = iVar1 + 1;
          puVar2 = puVar2 + 3;
        } while (iVar1 < 0x20);
        g_currentExceptionFrame = local_50.previous;
        return;
      case CASE_2:
        iVar1 = 4;
        puVar2 = (undefined4 *)&local_c->field_0xe3b;
        do {
          FUN_006c1f00(iVar1,&local_8,(uint *)0x0);
          if (local_8 == 1) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_006c1ba0(iVar1);
          }
          iVar1 = iVar1 + 1;
          puVar2 = puVar2 + 3;
        } while (iVar1 < 0xb);
        g_currentExceptionFrame = local_50.previous;
        return;
      case CASE_4:
        iVar1 = 2;
        do {
          if (((((1 < iVar1) && (iVar1 < 4)) || ((0x1d < iVar1 && (iVar1 < 0x20)))) ||
              ((10 < iVar1 && (iVar1 < 0x12)))) &&
             (FUN_006c1f00(iVar1,&local_8,(uint *)0x0), local_8 == 1)) {
            *(undefined4 *)(&this_00->field_0xe0b + iVar1 * 0xc) = 0;
            *(undefined4 *)(&this_00->field_0xe0f + iVar1 * 0xc) = 0;
            *(undefined4 *)(&this_00->field_0xe13 + iVar1 * 0xc) = 0;
            FUN_006c1ba0(iVar1);
            if (iVar1 == 2) {
              SoundClassTy::PlaySound_thunk
                        (this_00,SOUND_MODE_1,(char *)0x0,0x4b7,(SoundPosition *)0x0,0);
            }
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x20);
        g_currentExceptionFrame = local_50.previous;
        return;
      case CASE_8:
        iVar1 = 0x15;
        puVar2 = (undefined4 *)&local_c->field_0xf07;
        do {
          FUN_006c1f00(iVar1,&local_8,(uint *)0x0);
          if (local_8 == 1) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_006c1ba0(iVar1);
          }
          iVar1 = iVar1 + 1;
          puVar2 = puVar2 + 3;
        } while (iVar1 < 0x1a);
      }
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
  }
  return;
}

