
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::SetCtrl */

void __thiscall MReportTy::SetCtrl(MReportTy *this,int param_1)

{
  MReportTy *pMVar1;
  code *pcVar2;
  MReportTy *pMVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar9;
  undefined4 local_470 [256];
  InternalExceptionFrame local_70;
  undefined4 local_2c [8];
  MReportTy *local_c;
  char local_5;
  
  if (this[0x66] == (MReportTy)0x1) {
    local_5 = (char)this[0x6a] + '\x01';
  }
  else {
    local_5 = DAT_0080874e;
  }
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_c = this;
  iVar4 = __setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar3 = local_c;
  if (iVar4 == 0) {
    pMVar1 = local_c + 0x5d;
    cMf32::RecMemFree(DAT_00806780,(uint *)pMVar1);
    if (local_5 == '\x01') {
      puVar5 = &DAT_007ca250;
    }
    else {
      puVar5 = &DAT_007ca248;
      if (local_5 != '\x02') {
        puVar5 = &DAT_007ca24c;
      }
    }
    wsprintfA((LPSTR)&DAT_0080f33a,s_REPORT__s__c_007ccf6c,puVar5,
              (int)(char)((-(DAT_0080c522 != 0) & 0xfbU) + 0x46));
    uVar6 = FUN_0070a9f0(DAT_00806780,(char *)&DAT_0080f33a,0,1);
    *(uint *)pMVar1 = uVar6;
    FUN_006bc360(uVar6,local_470,(int *)0x0);
    FUN_00718780((int)local_470,0,0x100,0x1a,0x10,(undefined4 *)(DAT_0081176c + 0x144));
    FUN_00718780((int)local_470,0,0x100,0x1a,0x10,(undefined4 *)(pMVar3 + 0xa3));
    FUN_00718780((int)local_470,0,0x100,0x2e,0x10,(undefined4 *)(pMVar3 + 0x1a3));
    thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)pMVar1);
    if (*(uint **)(pMVar3 + 0x83) != (uint *)0x0) {
      FUN_00710560(*(uint **)(pMVar3 + 0x83));
    }
    iVar4 = thunk_FUN_005defe0(*(uint *)pMVar1,(undefined *)0x0,DAT_00807dd9);
    *(int *)(pMVar3 + 0x83) = iVar4;
    *(undefined4 *)(iVar4 + 0x58) = 1;
    *(undefined4 *)(iVar4 + 0x5c) = 0;
    if (*(uint **)(pMVar3 + 0x87) != (uint *)0x0) {
      FUN_00710560(*(uint **)(pMVar3 + 0x87));
    }
    uVar7 = thunk_FUN_005df290(*(uint *)pMVar1,(undefined *)0x0,DAT_00807dd9);
    *(undefined4 *)(pMVar3 + 0x87) = uVar7;
    *(undefined4 *)(DAT_0081176c + 0x38) = uVar7;
    if (param_1 != 0) {
      local_2c[2] = *(undefined4 *)(pMVar3 + 8);
      puVar9 = local_2c;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      local_2c[3] = 2;
      local_2c[4] = 0x70ff;
      FUN_006e3b50(local_2c);
    }
    g_currentExceptionFrame = local_70.previous;
    return;
  }
  g_currentExceptionFrame = local_70.previous;
  iVar8 = ReportDebugMessage(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x32c,0,iVar4,&DAT_007a4ccc,
                             s_MReportTy__SetCtrl_007cd05c);
  if (iVar8 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Start_rpt_obj_cpp_007ccec8,0x32c);
  return;
}

