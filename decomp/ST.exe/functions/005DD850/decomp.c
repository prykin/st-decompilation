
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::AddToChat */

void __thiscall StartSystemTy::AddToChat(StartSystemTy *this,int param_1)

{
  code *pcVar1;
  StartSystemTy *this_00;
  uint *puVar2;
  uint *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  InternalExceptionFrame local_78;
  undefined4 local_34 [4];
  undefined4 local_24;
  undefined2 local_20;
  ushort uStack_1e;
  uint local_14;
  uint *local_10;
  StartSystemTy *local_c;
  char local_5;
  
  puVar7 = local_34;
  local_c = this;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  iVar6 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar6 == 0) {
    if ((param_1 != 0) &&
       (puVar2 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,2,1), this_00 = local_c,
       puVar2 != (uint *)0x0)) {
      local_5 = '\0';
      local_24 = 0x26;
      local_10 = puVar2;
      SystemClassTy::SendMessage((SystemClassTy *)local_c,2,local_c->field_0550,(int)local_34);
      local_14 = (uint)uStack_1e;
      if (*(int *)(DAT_0080c4fa + 8) + -5 <= (int)local_14) {
        local_5 = '\x01';
      }
      wsprintfA((LPSTR)&DAT_0080f33a,s__0_s__007cd8b4,param_1);
      Library::DKW::TBL::FUN_006b5aa0((int)puVar2,(char *)&DAT_0080f33a);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007cd8ac,param_1 + 0x40);
      Library::DKW::TBL::FUN_006b5aa0((int)puVar2,(char *)&DAT_0080f33a);
      puVar3 = ccFntTy::FormSarr((ccFntTy *)this_00->field_0034,(int)puVar2,
                                 (uint *)s________________007c21d8,*(int *)(this_00->field_067E + 4)
                                 ,0,0xffffffff,1);
      if (puVar3 != (uint *)0x0) {
        if (puVar3[2] != 0) {
          ccFntTy::SepColorStrInSarr((ccFntTy *)this_00->field_0034,puVar3,puVar3);
        }
        iVar6 = 0;
        if (0 < (int)puVar3[2]) {
          if ((int)puVar3[2] < 1) {
            pcVar4 = (char *)0x0;
            goto LAB_005dd982;
          }
          do {
            pcVar4 = *(char **)(puVar3[5] + iVar6 * 4);
LAB_005dd982:
            Library::DKW::TBL::FUN_006b5aa0(DAT_0080c4fa,pcVar4);
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)puVar3[2]);
        }
        FUN_006b5570((byte *)puVar3);
        puVar2 = local_10;
      }
      FUN_006b5570((byte *)puVar2);
      local_24 = 0x28;
      local_20 = 1;
      uStack_1e = *(undefined2 *)(DAT_0080c4fa + 8);
      SystemClassTy::SendMessage((SystemClassTy *)this_00,2,this_00->field_0550,(int)local_34);
      local_24 = 0x22;
      local_20 = 0;
      if (local_5 == '\0') {
        uStack_1e = (short)local_14;
      }
      else if (*(int *)(DAT_0080c4fa + 8) < 6) {
        uStack_1e = 0;
      }
      else {
        uStack_1e = (short)*(int *)(DAT_0080c4fa + 8) + -5;
      }
      SystemClassTy::SendMessage((SystemClassTy *)this_00,2,this_00->field_0550,(int)local_34);
      local_24 = 0x20;
      local_20 = 1;
      uStack_1e = 0;
      SystemClassTy::SendMessage((SystemClassTy *)this_00,2,this_00->field_0550,(int)local_34);
    }
    g_currentExceptionFrame = local_78.previous;
    return;
  }
  g_currentExceptionFrame = local_78.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0x372,0,iVar6,&DAT_007a4ccc,
                             s_StartSystemTy__AddToChat_007cd88c);
  if (iVar5 == 0) {
    RaiseInternalException(iVar6,0,s_E____titans_Start_startsys_cpp_007cd718,0x372);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

