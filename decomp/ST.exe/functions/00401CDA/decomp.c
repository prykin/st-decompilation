
void __thiscall thunk_FUN_00568940(void *this,undefined1 param_1)

{
  void *this_00;
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  void *pvStack_8;
  
  if (*(int *)((int)this + 0xf8b) != 0) {
    IStack_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_4c;
    pvStack_8 = this;
    iVar1 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = pvStack_8;
    if (iVar1 == 0) {
      switch(param_1) {
      case 1:
      case 8:
        iVar1 = 2;
        do {
          thunk_FUN_00568bc0(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 4);
        g_currentExceptionFrame = IStack_4c.previous;
        return;
      case 2:
        iVar1 = 4;
        do {
          thunk_FUN_00568bc0(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0xb);
        g_currentExceptionFrame = IStack_4c.previous;
        return;
      case 3:
        iVar1 = 0xb;
        do {
          thunk_FUN_00568bc0(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x12);
        g_currentExceptionFrame = IStack_4c.previous;
        return;
      case 4:
        iVar1 = 0x12;
        do {
          thunk_FUN_00568bc0(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x15);
        g_currentExceptionFrame = IStack_4c.previous;
        return;
      case 5:
        iVar1 = 0x15;
        do {
          thunk_FUN_00568bc0(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x1a);
        g_currentExceptionFrame = IStack_4c.previous;
        return;
      case 6:
        iVar1 = 0x1b;
        do {
          thunk_FUN_00568bc0(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x1e);
        g_currentExceptionFrame = IStack_4c.previous;
        return;
      case 7:
        iVar1 = 0x1e;
        do {
          thunk_FUN_00568bc0(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x20);
        g_currentExceptionFrame = IStack_4c.previous;
        return;
      case 0xb:
        iVar1 = 0;
        do {
          thunk_FUN_00568bc0(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 2);
        *(undefined4 *)((int)this_00 + 0xe03) = 0xffffffff;
        *(undefined4 *)((int)this_00 + 0xe07) = 0xffffffff;
        g_currentExceptionFrame = IStack_4c.previous;
        return;
      case 0xc:
        thunk_FUN_00568bc0(pvStack_8,0x1a);
      }
      g_currentExceptionFrame = IStack_4c.previous;
      return;
    }
    g_currentExceptionFrame = IStack_4c.previous;
  }
  return;
}

