
void __thiscall CursorClassTy::AddSysAcc(CursorClassTy *this)

{
  code *pcVar1;
  CursorClassTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar4;
  InternalExceptionFrame IStack_b8;
  undefined4 auStack_74 [5];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  CursorClassTy *pCStack_28;
  undefined4 auStack_24 [4];
  undefined4 uStack_14;
  undefined4 *puStack_10;
  uint uStack_c;
  
  IStack_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_b8;
  pCStack_28 = this;
  iVar2 = Library::MSVCRT::__setjmp3(IStack_b8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pCStack_28;
  if (iVar2 == 0) {
    puVar4 = auStack_24;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puStack_10 = *(undefined4 **)(pCStack_28 + 8);
    uStack_c = (-(uint)(DAT_0080734c != '\0') & 2) + 1;
    uStack_14 = 0x13;
    FUN_006e6000(pCStack_28,3,1,auStack_24);
    uStack_14 = 0x15;
    FUN_006e6000(this_00,3,1,auStack_24);
    *(uint *)(this_00 + 0xc5) = uStack_c & 0xffff;
    *(uint *)(this_00 + 0x34) = uStack_c & 0xffff;
    *(uint *)(this_00 + 0xc9) = uStack_c >> 0x10;
    *(uint *)(this_00 + 0x38) = uStack_c >> 0x10;
    puVar4 = auStack_74;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    uStack_60 = *(undefined4 *)(this_00 + 8);
    puStack_10 = auStack_74;
    auStack_74[0] = 8;
    uStack_5c = 2;
    uStack_3c = 2;
    uStack_14 = 0x10;
    auStack_74[1] = 0x8000000;
    uStack_58 = 0xa110;
    uStack_38 = 0xa111;
    uStack_40 = uStack_60;
    FUN_006e6000(this_00,3,1,auStack_24);
    auStack_74[1] = 0x1000000;
    uStack_58 = 0xa112;
    uStack_38 = 0xa113;
    FUN_006e6000(this_00,3,1,auStack_24);
    auStack_74[1] = 0x40000000;
    uStack_58 = 0xa114;
    uStack_38 = 0xa115;
    FUN_006e6000(this_00,3,1,auStack_24);
    uStack_38 = 0xa133;
    iVar2 = 4;
    do {
      thunk_FUN_005440c0(this_00,iVar2,auStack_24,(int)auStack_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    uStack_38 = 0;
    iVar2 = 8;
    do {
      thunk_FUN_005440c0(this_00,iVar2,auStack_24,(int)auStack_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x50);
    iVar2 = 0;
    do {
      thunk_FUN_00544150(this_00,iVar2,auStack_24,(int)auStack_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 10);
    iVar2 = 0;
    do {
      thunk_FUN_00544100(this_00,iVar2,auStack_24,(int)auStack_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1e);
    g_currentExceptionFrame = IStack_b8.previous;
    return;
  }
  g_currentExceptionFrame = IStack_b8.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x127,0,iVar2,&DAT_007a4ccc
                             ,s_CursorClassTy__AddSysAcc_007c7e8c);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x128);
  return;
}

