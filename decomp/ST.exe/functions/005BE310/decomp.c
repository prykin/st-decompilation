
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::DoneMReport */

void __thiscall MReportTy::DoneMReport(MReportTy *this)

{
  code *pcVar1;
  MReportTy *pMVar2;
  int iVar3;
  int iVar4;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *this_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  InternalExceptionFrame local_4c;
  MReportTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    puVar5 = (undefined4 *)&local_8->field_0x1d;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)&local_8->field_0x2d = 0x14;
    *(undefined4 *)&local_8->field_0x31 = *(undefined4 *)&local_8->field_0x8;
    FUN_006e6000(local_8,3,1,(undefined4 *)&local_8->field_0x1d);
    thunk_FUN_0055dbf0(DAT_0080759c,10,2);
    if (DAT_00802a30 != 0) {
      thunk_FUN_00544940(DAT_00802a30);
    }
    puVar5 = (undefined4 *)&pMVar2[6].field_0x4d;
    iVar3 = 3;
    do {
      if ((byte *)*puVar5 != (byte *)0x0) {
        FUN_006ae110((byte *)*puVar5);
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(HoloTy **)&pMVar2[8].field_0x5b != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pMVar2[8].field_0x5b);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&pMVar2[8].field_0x5b);
      *(undefined4 *)&pMVar2[8].field_0x5b = 0;
    }
    if (*(HoloTy **)&pMVar2[8].field_0x5f != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pMVar2[8].field_0x5f);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&pMVar2[8].field_0x5f);
      *(undefined4 *)&pMVar2[8].field_0x5f = 0;
    }
    cMf32::RecMemFree(DAT_00806780,(uint *)&pMVar2->field_0x5d);
    cMf32::RecMemFree(DAT_00806780,(uint *)&pMVar2->field_0x6f);
    if (pMVar2->field_0077 != 0) {
      FUN_006ab060(&pMVar2->field_0077);
    }
    if (pMVar2->field_007B != 0) {
      FUN_006ab060(&pMVar2->field_007B);
    }
    this_00 = (ccFntTy *)0x0;
    if (*(int *)&pMVar2->field_0x73 != 0) {
      FUN_006ab060((undefined4 *)&pMVar2->field_0x73);
      this_00 = extraout_ECX;
    }
    if (*(uint **)&pMVar2[1].field_0x4 != (uint *)0x0) {
      ccFntTy::operator(this_00,*(uint **)&pMVar2[1].field_0x4);
      *(undefined4 *)&pMVar2[1].field_0x4 = 0;
      this_00 = extraout_ECX_00;
    }
    if (*(uint **)&pMVar2[1].field_0x8 != (uint *)0x0) {
      ccFntTy::operator(this_00,*(uint **)&pMVar2[1].field_0x8);
      *(undefined4 *)&pMVar2[1].field_0x8 = 0;
      *(undefined4 *)(DAT_0081176c + 0x38) = 0;
      this_00 = extraout_ECX_01;
    }
    if (*(uint **)&pMVar2[1].field_0xc != (uint *)0x0) {
      ccFntTy::operator(this_00,*(uint **)&pMVar2[1].field_0xc);
      *(undefined4 *)&pMVar2[1].field_0xc = 0;
    }
    *(undefined4 *)(pMVar2 + 1) = 0;
    if (*(int *)&pMVar2->field_0x4d != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pMVar2->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_rpt_obj_cpp_007ccec8,0xe5,0,iVar3,&DAT_007a4ccc,
                             s_MReportTy__DoneMReport_007ccf7c);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_rpt_obj_cpp_007ccec8,0xe5);
  return;
}

