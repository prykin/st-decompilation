
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::CreateCtrls */

void __thiscall WaitTy::CreateCtrls(WaitTy *this)

{
  int *piVar1;
  code *pcVar2;
  WaitTy *pWVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  undefined4 local_8d8 [6];
  undefined4 local_8c0;
  undefined4 local_8bc;
  undefined4 local_8b8;
  int local_88c;
  undefined4 local_888;
  undefined4 local_884;
  int local_84c;
  undefined4 local_848;
  undefined4 local_844;
  undefined4 local_74;
  InternalExceptionFrame local_4c;
  WaitTy *local_8;
  
  puVar6 = local_8d8;
  local_8 = this;
  for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar5 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pWVar3 = local_8;
  if (iVar5 == 0) {
    if (*(int *)(local_8 + 0x1a64) == 0) {
      StartSystemTy::CreateBinDesc(DAT_0081176c);
      StartSystemTy::CreateChatView(DAT_0081176c);
      puVar6 = local_8d8;
      for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      local_8d8[0] = 1;
      local_8d8[1] = 9;
      local_8d8[2] = *(undefined4 *)(DAT_0081176c + 0x34);
      local_8d8[3] = 0xcb;
      local_8d8[4] = 0x23f;
      local_8d8[5] = *(undefined4 *)(*(int *)(DAT_0081176c + 0x682) + 4);
      local_8c0 = *(undefined4 *)(*(int *)(DAT_0081176c + 0x682) + 8);
      local_8bc = 0x104;
      local_8b8 = *(undefined4 *)(DAT_0081176c + 0x686);
      piVar1 = *(int **)(pWVar3 + 0xc);
      local_74 = 0x100;
      local_88c = piVar1[5];
      local_888 = 0;
      local_884 = 0xc0a0;
      local_84c = piVar1[5];
      local_848 = 0;
      local_844 = 0xc0a2;
      (**(code **)(*piVar1 + 8))(6,DAT_0081176c + 0x54c,0,local_8d8,0);
      FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x303,0,iVar5,&DAT_007a4ccc,
                             s_WaitTy__CreateCtrls_007cde24);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar5,0,s_E____titans_Start_wait_obj_cpp_007cdd5c,0x303);
  return;
}

