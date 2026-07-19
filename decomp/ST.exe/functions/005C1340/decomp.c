
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::SetCtrl */

void __thiscall MReportTy::SetCtrl(MReportTy *this,int param_1)

{
  code *pcVar1;
  MReportTy *pMVar2;
  int iVar3;
  undefined1 *puVar4;
  ccFntTy *pcVar5;
  int iVar6;
  ccFntTy *this_00;
  ccFntTy *this_01;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  undefined4 local_470 [256];
  InternalExceptionFrame local_70;
  undefined4 local_2c [8];
  MReportTy *local_c;
  char local_5;
  
  if (this->field_0066 == '\x01') {
    local_5 = this->field_006A + '\x01';
  }
  else {
    local_5 = DAT_0080874e;
  }
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar2 = local_c;
  if (iVar3 == 0) {
    puVar7 = &local_c->field_005D;
    cMf32::RecMemFree(DAT_00806780,puVar7);
    if (local_5 == '\x01') {
      puVar4 = &DAT_007ca250;
    }
    else {
      puVar4 = &DAT_007ca248;
      if (local_5 != '\x02') {
        puVar4 = &DAT_007ca24c;
      }
    }
    wsprintfA((LPSTR)&DAT_0080f33a,s_REPORT__s__c_007ccf6c,puVar4,
              (int)(char)((-(DAT_0080c522 != 0) & 0xfbU) + 0x46));
    iVar3 = FUN_0070a9f0(DAT_00806780,(char *)&DAT_0080f33a,0,1);
    *puVar7 = iVar3;
    FUN_006bc360(iVar3,local_470,(int *)0x0);
    FUN_00718780((int)local_470,0,0x100,0x1a,0x10,(undefined4 *)(DAT_0081176c + 0x144));
    FUN_00718780((int)local_470,0,0x100,0x1a,0x10,(undefined4 *)&pMVar2->field_0xa3);
    FUN_00718780((int)local_470,0,0x100,0x2e,0x10,(undefined4 *)&pMVar2->field_0x1a3);
    PutDDX(0,0,'\x01',(BITMAPINFO *)*puVar7);
    if (pMVar2->field_0083 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pMVar2->field_0083);
    }
    pcVar5 = (ccFntTy *)thunk_FUN_005defe0(*puVar7,(undefined *)0x0,DAT_00807dd9);
    pMVar2->field_0083 = pcVar5;
    pcVar5->field_0058 = 1;
    pcVar5->field_005C = 0;
    if (pMVar2->field_0087 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_01,(uint *)pMVar2->field_0087);
    }
    pcVar5 = (ccFntTy *)thunk_FUN_005df290(*puVar7,(undefined *)0x0,DAT_00807dd9);
    pMVar2->field_0087 = pcVar5;
    *(ccFntTy **)(DAT_0081176c + 0x38) = pcVar5;
    if (param_1 != 0) {
      local_2c[2] = pMVar2->field_0008;
      puVar7 = local_2c;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_2c[3] = 2;
      local_2c[4] = 0x70ff;
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,local_2c);
    }
    g_currentExceptionFrame = local_70.previous;
    return;
  }
  g_currentExceptionFrame = local_70.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x32c,0,iVar3,&DAT_007a4ccc,
                             s_MReportTy__SetCtrl_007cd05c);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_rpt_obj_cpp_007ccec8,0x32c);
  return;
}

