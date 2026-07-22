#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::AddToChat */

void __thiscall StartSystemTy::AddToChat(StartSystemTy *this,int param_1)

{
  code *pcVar1;
  StartSystemTy *this_00;
  DArrayTy *pDVar2;
  DArrayTy *pDVar3;
  char *text;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  InternalExceptionFrame local_78;
  undefined4 local_34 [4];
  undefined4 local_24;
  undefined2 local_20;
  ushort uStack_1e;
  uint local_14;
  DArrayTy *local_10;
  StartSystemTy *local_c;
  char local_5;

  puVar6 = local_34;
  local_c = this;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  iVar5 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  if (iVar5 == 0) {
    if ((param_1 != 0) &&
       (pDVar2 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,2,1), this_00 = local_c,
       pDVar2 != (DArrayTy *)0x0)) {
      local_5 = '\0';
      local_24 = 0x26;
      local_10 = pDVar2;
      SystemClassTy::SendMessage((SystemClassTy *)local_c,2,local_c->field_0550,(int)local_34);
      local_14 = (uint)uStack_1e;
      if ((int)(DAT_0080c4fa[2] - 5) <= (int)local_14) {
        local_5 = '\x01';
      }
      wsprintfA((LPSTR)&DAT_0080f33a,"&0%s:",param_1);
      Library::DKW::TBL::FUN_006b5aa0(&pDVar2->flags,(char *)&DAT_0080f33a);
      wsprintfA((LPSTR)&DAT_0080f33a,"&2%s",param_1 + 0x40);
      Library::DKW::TBL::FUN_006b5aa0(&pDVar2->flags,(char *)&DAT_0080f33a);
      pDVar3 = (DArrayTy *)
               ccFntTy::FormSarr(this_00->field_0034,&pDVar2->flags," ,.;:!?/\\()[]{}",
                                 *(int *)(this_00->field_067E + 2),0,0xffffffff,1);
      if (pDVar3 != (DArrayTy *)0x0) {
        if (pDVar3->elementSize != 0) {
          ccFntTy::SepColorStrInSarr(this_00->field_0034,(uint *)pDVar3,(uint *)pDVar3);
        }
        iVar5 = 0;
        if (0 < (int)pDVar3->elementSize) {
          if ((int)pDVar3->elementSize < 1) {
            text = (char *)0x0;
            goto LAB_005dd982;
          }
          do {
            text = *(char **)(pDVar3->growCapacity + iVar5 * 4);
LAB_005dd982:
            Library::DKW::TBL::FUN_006b5aa0(DAT_0080c4fa,text);
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)pDVar3->elementSize);
        }
        FUN_006b5570(pDVar3);
        pDVar2 = local_10;
      }
      FUN_006b5570(pDVar2);
      local_24 = 0x28;
      local_20 = 1;
      uStack_1e = (ushort)DAT_0080c4fa[2];
      SystemClassTy::SendMessage((SystemClassTy *)this_00,2,this_00->field_0550,(int)local_34);
      local_24 = 0x22;
      local_20 = 0;
      if (local_5 == '\0') {
        uStack_1e = (short)local_14;
      }
      else if ((int)DAT_0080c4fa[2] < 6) {
        uStack_1e = 0;
      }
      else {
        uStack_1e = (short)DAT_0080c4fa[2] + -5;
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
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\startsys.cpp",0x372,0,iVar5,"%s",
                             "StartSystemTy::AddToChat");
  if (iVar4 == 0) {
    RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\startsys.cpp",0x372);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

