
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::SendMail */

void __thiscall STPlaySystemC::SendMail(STPlaySystemC *this,void *param_1)

{
  code *pcVar1;
  STPlaySystemC *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  undefined1 *puVar4;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  STPlaySystemC *local_c;
  uint local_8;
  
  if ((*(int *)(this + 0x3d) != 0) && (*(short *)(*(int *)(this + 0x3d) + 5) != 0)) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_c;
    if (iVar2 == 0) {
      local_8 = 0;
      puVar4 = (undefined1 *)(*(int *)(local_c + 0x3d) + 7);
      if (*(short *)(*(int *)(local_c + 0x3d) + 5) != 0) {
        do {
          iVar2 = *(int *)(puVar4 + 0x13);
          iVar3 = *(int *)(puVar4 + 0xf);
          thunk_FUN_005501d0(this_00,puVar4);
          local_8 = local_8 + 1;
          puVar4 = puVar4 + iVar2 + iVar3 + 0x1b;
        } while (local_8 < *(ushort *)(*(int *)(this_00 + 0x3d) + 5));
      }
      *(undefined2 *)(*(int *)(this_00 + 0x3d) + 5) = 0;
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x819,0,iVar2,
                               &DAT_007a4ccc,s_STPlaySystemC__SendMail_007c8608);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Andrey_tplaysys_cpp_007c8430,0x81a);
  }
  return;
}

