
void __thiscall MReportTy::DoneMReport(MReportTy *this)

{
  code *pcVar1;
  MReportTy *pMVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  MReportTy *pMVar5;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  MReportTy *pMStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pMStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  pMVar2 = pMStack_8;
  if (iVar3 == 0) {
    pMVar5 = pMStack_8 + 0x1d;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pMVar5 = 0;
      pMVar5 = pMVar5 + 4;
    }
    *(undefined4 *)(pMStack_8 + 0x2d) = 0x14;
    *(undefined4 *)(pMStack_8 + 0x31) = *(undefined4 *)(pMStack_8 + 8);
    FUN_006e6000(pMStack_8,3,1,(undefined4 *)(pMStack_8 + 0x1d));
    thunk_FUN_0055dbf0(DAT_0080759c,10,2);
    if (DAT_00802a30 != 0) {
      thunk_FUN_00544940(DAT_00802a30);
    }
    pMVar5 = pMVar2 + 0x347;
    iVar3 = 3;
    do {
      if (*(byte **)pMVar5 != (byte *)0x0) {
        FUN_006ae110(*(byte **)pMVar5);
        *(undefined4 *)pMVar5 = 0;
      }
      pMVar5 = pMVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(HoloTy **)(pMVar2 + 0x453) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pMVar2 + 0x453));
      FUN_0072e2b0(*(undefined4 **)(pMVar2 + 0x453));
      *(undefined4 *)(pMVar2 + 0x453) = 0;
    }
    if (*(HoloTy **)(pMVar2 + 0x457) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pMVar2 + 0x457));
      FUN_0072e2b0(*(undefined4 **)(pMVar2 + 0x457));
      *(undefined4 *)(pMVar2 + 0x457) = 0;
    }
    cMf32::RecMemFree(DAT_00806780,(uint *)(pMVar2 + 0x5d));
    cMf32::RecMemFree(DAT_00806780,(uint *)(pMVar2 + 0x6f));
    if (*(int *)(pMVar2 + 0x77) != 0) {
      FUN_006ab060((undefined4 *)(pMVar2 + 0x77));
    }
    if (*(int *)(pMVar2 + 0x7b) != 0) {
      FUN_006ab060((undefined4 *)(pMVar2 + 0x7b));
    }
    if (*(int *)(pMVar2 + 0x73) != 0) {
      FUN_006ab060((undefined4 *)(pMVar2 + 0x73));
    }
    if (*(uint **)(pMVar2 + 0x83) != (uint *)0x0) {
      FUN_00710560(*(uint **)(pMVar2 + 0x83));
      *(undefined4 *)(pMVar2 + 0x83) = 0;
    }
    if (*(uint **)(pMVar2 + 0x87) != (uint *)0x0) {
      FUN_00710560(*(uint **)(pMVar2 + 0x87));
      *(undefined4 *)(pMVar2 + 0x87) = 0;
      *(undefined4 *)(DAT_0081176c + 0x38) = 0;
    }
    if (*(uint **)(pMVar2 + 0x8b) != (uint *)0x0) {
      FUN_00710560(*(uint **)(pMVar2 + 0x8b));
      *(undefined4 *)(pMVar2 + 0x8b) = 0;
    }
    *(undefined4 *)(pMVar2 + 0x7f) = 0;
    if (*(int *)(pMVar2 + 0x4d) != 0) {
      FUN_006e3b50((undefined4 *)(pMVar2 + 0x3d));
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_rpt_obj_cpp_007ccec8,0xe5,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7ccec8,0xe5);
  return;
}

