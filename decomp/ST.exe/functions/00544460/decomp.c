
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::DelSysAcc */

void __thiscall CursorClassTy::DelSysAcc(CursorClassTy *this)

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
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 *local_14;
  CursorClassTy *local_8;
  
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  local_8 = this;
  iVar2 = __setjmp3(local_b8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    puVar4 = local_28;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_14 = *(undefined4 **)(this_00 + 8);
    local_18 = 0x14;
    FUN_006e6000(this_00,3,1,local_28);
    puVar4 = local_74;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_60 = *(undefined4 *)(this_00 + 8);
    local_5c = 2;
    local_3c = 2;
    local_74[0] = 8;
    local_18 = 0x11;
    local_74[1] = 0x8000000;
    local_58 = 0xa110;
    local_38 = 0xa111;
    local_40 = local_60;
    local_14 = local_74;
    FUN_006e6000(this_00,3,1,local_28);
    local_74[1] = 0x1000000;
    local_58 = 0xa112;
    local_38 = 0xa113;
    FUN_006e6000(this_00,3,1,local_28);
    local_74[1] = 0x40000000;
    local_58 = 0xa114;
    local_38 = 0xa115;
    FUN_006e6000(this_00,3,1,local_28);
    local_38 = 0xa133;
    iVar2 = 4;
    do {
      thunk_FUN_005440c0(this_00,iVar2,local_28,(int)local_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    local_38 = 0;
    iVar2 = 8;
    do {
      thunk_FUN_005440c0(this_00,iVar2,local_28,(int)local_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x50);
    iVar2 = 0;
    do {
      thunk_FUN_00544150(this_00,iVar2,local_28,(int)local_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 10);
    iVar2 = 0;
    do {
      thunk_FUN_00544100(this_00,iVar2,local_28,(int)local_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1e);
    g_currentExceptionFrame = local_b8.previous;
    return;
  }
  g_currentExceptionFrame = local_b8.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x15a,0,iVar2,&DAT_007a4ccc
                             ,s_CursorClassTy__DelSysAcc_007c7eac);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x15b);
  return;
}

