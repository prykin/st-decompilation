
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::AddSysAcc */

void __thiscall CursorClassTy::AddSysAcc(CursorClassTy *this)

{
  code *pcVar1;
  CursorClassTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar4;
  InternalExceptionFrame local_b8;
  undefined4 local_74 [5];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  CursorClassTy *local_28;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined4 *local_10;
  uint local_c;
  
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  local_28 = this;
  iVar2 = __setjmp3(local_b8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_28;
  if (iVar2 == 0) {
    puVar4 = local_24;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_10 = *(undefined4 **)(local_28 + 8);
    local_c = (-(uint)(DAT_0080734c != '\0') & 2) + 1;
    local_14 = 0x13;
    FUN_006e6000(local_28,3,1,local_24);
    local_14 = 0x15;
    FUN_006e6000(this_00,3,1,local_24);
    *(uint *)(this_00 + 0xc5) = local_c & 0xffff;
    *(uint *)(this_00 + 0x34) = local_c & 0xffff;
    *(uint *)(this_00 + 0xc9) = local_c >> 0x10;
    *(uint *)(this_00 + 0x38) = local_c >> 0x10;
    puVar4 = local_74;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_60 = *(undefined4 *)(this_00 + 8);
    local_10 = local_74;
    local_74[0] = 8;
    local_5c = 2;
    local_3c = 2;
    local_14 = 0x10;
    local_74[1] = 0x8000000;
    local_58 = 0xa110;
    local_38 = 0xa111;
    local_40 = local_60;
    FUN_006e6000(this_00,3,1,local_24);
    local_74[1] = 0x1000000;
    local_58 = 0xa112;
    local_38 = 0xa113;
    FUN_006e6000(this_00,3,1,local_24);
    local_74[1] = 0x40000000;
    local_58 = 0xa114;
    local_38 = 0xa115;
    FUN_006e6000(this_00,3,1,local_24);
    local_38 = 0xa133;
    iVar2 = 4;
    do {
      thunk_FUN_005440c0(this_00,iVar2,local_24,(int)local_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    local_38 = 0;
    iVar2 = 8;
    do {
      thunk_FUN_005440c0(this_00,iVar2,local_24,(int)local_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x50);
    iVar2 = 0;
    do {
      thunk_FUN_00544150(this_00,iVar2,local_24,(int)local_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 10);
    iVar2 = 0;
    do {
      thunk_FUN_00544100(this_00,iVar2,local_24,(int)local_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1e);
    g_currentExceptionFrame = local_b8.previous;
    return;
  }
  g_currentExceptionFrame = local_b8.previous;
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

