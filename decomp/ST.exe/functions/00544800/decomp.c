
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::DelOpticAcc */

void __thiscall CursorClassTy::DelOpticAcc(CursorClassTy *this)

{
  code *pcVar1;
  CursorClassTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  undefined4 *puVar4;
  void *unaff_EDI;
  InternalExceptionFrame local_b8;
  undefined4 local_74 [5];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 *local_14;
  CursorClassTy *local_8;
  
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  local_8 = this;
  iVar2 = __setjmp3(local_b8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar4 = local_28;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puVar4 = local_74;
    for (iVar2 = 0x13; this_00 = local_8, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_14 = local_74;
    local_74[0] = 8;
    local_5c = 2;
    local_60 = *(undefined4 *)(local_8 + 8);
    local_18 = 0x11;
    puVar4 = &DAT_00808136;
    do {
      local_74[1] = puVar4[-0x50];
      local_58 = *puVar4;
      FUN_006e6000(this_00,3,1,local_28);
      puVar4 = puVar4 + 1;
    } while ((int)puVar4 < 0x808146);
    g_currentExceptionFrame = local_b8.previous;
    return;
  }
  g_currentExceptionFrame = local_b8.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_to_cursor_cpp_007c7d60,399,0,iVar2,&DAT_007a4ccc,
                             s_CursorClassTy__DelOpticAcc_007c7eec);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_to_cursor_cpp_007c7d60,400);
  return;
}

