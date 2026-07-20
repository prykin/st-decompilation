
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::CreateTextSSpr */

undefined4 * __thiscall
MTaskTy::CreateTextSSpr
          (MTaskTy *this,uint *param_1,int param_2,int param_3,uint param_4,uint param_5,
          void *param_6,int param_7,int param_8,int param_9)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_18 = param_2;
  local_c = param_5;
  local_14 = param_3;
  local_10 = param_4;
  local_8 = (undefined4 *)0x0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar3 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (((param_1 == (uint *)0x0) || ((char)*param_1 == '\0')) || (param_6 == (void *)0x0)) {
      RaiseInternalException
                (-0x34,g_overwriteContext_007ED77C,s_E____titans_Start_task_obj_cpp_007cd994,0x46c);
    }
    if (param_8 < 0) {
      param_8 = param_7 + 1;
    }
    if (param_9 < 0) {
      if (param_7 < 1) {
        param_9 = 0;
      }
      else {
        param_9 = param_7 + -1;
      }
    }
    iVar3 = FUN_00711370(param_6,param_1);
    iVar4 = FUN_007113e0(param_6,param_1);
    if ((param_2 < 1) || (param_3 < 1)) {
      local_18 = (((int)param_4 < 1) - 1 & param_4) + iVar3;
      local_14 = (((int)param_5 < 1) - 1 & param_5) + iVar4;
    }
    iVar3 = local_14;
    if ((int)param_5 < 0) {
      local_c = (local_14 - iVar4) / 2;
    }
    if ((int)local_c < 0) {
      local_c = 0;
    }
    uVar2 = local_c;
    local_8 = Library::DKW::LIB::FUN_006aac10(0x3d);
    *(undefined2 *)((int)local_8 + 0x23) = 3;
    *(undefined2 *)((int)local_8 + 0x29) = (undefined2)local_18;
    *(short *)((int)local_8 + 0x2b) = (short)iVar3;
    puVar5 = ccFntTy::CreateSurf(param_6,0,0,0,0,(int)*(short *)((int)local_8 + 0x29),
                                 (int)*(short *)((int)local_8 + 0x2b),1);
    ccFntTy::SetSurf(param_6,(int)puVar5,0,0,0,0,0);
    ccFntTy::WrTxt(param_6,param_1,local_10,uVar2,param_7,-1,-1);
    FUN_006b4b20((int *)((int)local_8 + 0x2d),(uint)puVar5,0,0);
    ccFntTy::WrTxt(param_6,param_1,local_10,uVar2,param_8,-1,-1);
    FUN_006b4b20((int *)((int)local_8 + 0x31),(uint)puVar5,0,0);
    ccFntTy::WrTxt(param_6,param_1,local_10,uVar2,param_9,-1,-1);
    FUN_006b4b20((int *)((int)local_8 + 0x35),(uint)puVar5,0,0);
    ccFntTy::EraseSufr(param_6);
    g_currentExceptionFrame = local_5c.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,0x485,0,iVar3,&DAT_007a4ccc,
                             s_MTaskTy__CreateTextSSpr_007cdc58);
  if (iVar4 == 0) {
    if (param_6 != (void *)0x0) {
      ccFntTy::EraseSufr(param_6);
    }
    FUN_00725e30((int *)&local_8);
    RaiseInternalException(iVar3,0,s_E____titans_Start_task_obj_cpp_007cd994,0x488);
    return (undefined4 *)0x0;
  }
  pcVar1 = (code *)swi(3);
  puVar5 = (undefined4 *)(*pcVar1)();
  return puVar5;
}

