
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00568940_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_B=11;CASE_C=12 */

void __thiscall FUN_00568940(void *this,Global_sub_00568940_param_1Enum param_1)

{
  void *this_00;
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  void *local_8;
  
  if (*(int *)((int)this + 0xf8b) != 0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_8;
    if (iVar1 == 0) {
      switch(param_1) {
      case CASE_1:
      case CASE_8:
        iVar1 = 2;
        do {
          thunk_FUN_00568bc0(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 4);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_2:
        iVar1 = 4;
        do {
          thunk_FUN_00568bc0(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0xb);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_3:
        iVar1 = 0xb;
        do {
          thunk_FUN_00568bc0(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x12);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_4:
        iVar1 = 0x12;
        do {
          thunk_FUN_00568bc0(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x15);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_5:
        iVar1 = 0x15;
        do {
          thunk_FUN_00568bc0(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x1a);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_6:
        iVar1 = 0x1b;
        do {
          thunk_FUN_00568bc0(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x1e);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_7:
        iVar1 = 0x1e;
        do {
          thunk_FUN_00568bc0(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x20);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_B:
        iVar1 = 0;
        do {
          thunk_FUN_00568bc0(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 2);
        *(undefined4 *)((int)this_00 + 0xe03) = 0xffffffff;
        *(undefined4 *)((int)this_00 + 0xe07) = 0xffffffff;
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_C:
        thunk_FUN_00568bc0(local_8,0x1a);
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
  }
  return;
}

