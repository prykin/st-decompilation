
void __thiscall MReportTy::SetCtrl(MReportTy *this)

{
  MReportTy *pMVar1;
  code *pcVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  undefined4 uVar7;
  int iVar8;
  cMf32 *extraout_ECX;
  cMf32 *this_00;
  MReportTy *this_01;
  undefined4 unaff_ESI;
  int *piVar9;
  void *unaff_EDI;
  MReportTy *pMVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 **ppuStack_98;
  undefined4 auStack_94 [16];
  undefined4 **ppuStack_54;
  undefined4 auStack_50 [16];
  undefined4 *puStack_10;
  MReportTy *pMStack_c;
  undefined4 *puStack_8;
  
  ppuStack_54 = DAT_00858df8;
  DAT_00858df8 = &ppuStack_54;
  pMStack_c = this;
  iVar4 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  this_01 = pMStack_c;
  if (iVar4 == 0) {
    if (*(uint *)(pMStack_c + 0x8f) != 0) {
      FUN_006e56b0(*(void **)(pMStack_c + 0xc),*(uint *)(pMStack_c + 0x8f));
      *(undefined4 *)(this_01 + 0x8f) = 0;
      FUN_006b5f80(DAT_008075a8,0x262,0x226,0x91,0x28);
      thunk_FUN_00540620(0x262,0x226,0x262,0x226,0x91,(byte *)0x28,'\x01',
                         *(BITMAPINFO **)(this_01 + 0x5d));
    }
    if (*(uint *)(this_01 + 0x9b) != 0) {
      FUN_006e56b0(*(void **)(this_01 + 0xc),*(uint *)(this_01 + 0x9b));
      *(undefined4 *)(this_01 + 0x9b) = 0;
      FUN_006b5f80(DAT_008075a8,0x1e,0x1ea,300,0x1e);
      thunk_FUN_00540620(0x1e,0x1ea,0x1e,0x1ea,300,(byte *)0x1e,'\x01',
                         *(BITMAPINFO **)(this_01 + 0x5d));
    }
    FUN_006b5f80(DAT_008075a8,0x174,0x1a9,400,0x32);
    thunk_FUN_00540620(0x174,0x1a9,0x174,0x1a9,400,(byte *)0x32,'\x01',
                       *(BITMAPINFO **)(this_01 + 0x5d));
    if ((this_01[0x66] == (MReportTy)0x1) &&
       (this_01[0x67] = (MReportTy)0x0,
       *(int *)(*(int *)(this_01 + (uint)(byte)this_01[0x6a] * 4 + 0x347) + 0xc) != 0)) {
      pcVar12 = s__s_s_s__s_007ca1ec;
      puVar11 = &DAT_0080f33a;
      puStack_8 = (undefined4 *)0x0;
      wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s__s_007ca1ec,&DAT_00807680,PTR_s_SAVEGAME__0079c0d4,
                &DAT_00807ddd,PTR_s_PL_LOG_0079c0d8);
      ppuStack_98 = DAT_00858df8;
      DAT_00858df8 = &ppuStack_98;
      iVar4 = __setjmp3(auStack_94,0,puVar11,pcVar12);
      if (iVar4 == 0) {
        puStack_8 = FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
      }
      puVar11 = puStack_8;
      this_01 = pMStack_c;
      DAT_00858df8 = ppuStack_98;
      if (puStack_8 != (undefined4 *)0x0) {
        puStack_10 = &DAT_0080c522;
        iVar4 = *(int *)(pMStack_c + (uint)(byte)pMStack_c[0x6a] * 4 + 0x347);
        if (*(uint *)(pMStack_c + 0x6b) < *(uint *)(iVar4 + 0xc)) {
          puVar5 = (undefined4 *)
                   (*(int *)(iVar4 + 8) * *(uint *)(pMStack_c + 0x6b) + *(int *)(iVar4 + 0x1c));
        }
        else {
          puVar5 = (undefined4 *)0x0;
        }
        wsprintfA((LPSTR)&DAT_0080f33a,s__s_01d_02d_007cd074,PTR_DAT_0079c0dc,
                  (byte)pMStack_c[0x6a] + 1,*puVar5);
        puVar6 = FUN_006f1ce0(0xc,(char *)&DAT_0080f33a,(int *)&puStack_10,0);
        this_00 = extraout_ECX;
        if (puVar6 != (ushort *)0x0) {
          this_01[0x67] = (MReportTy)0x1;
          puVar11 = &DAT_0080c967;
          puVar5 = &DAT_008087b6;
          for (iVar4 = 0x666; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar5 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar5 = puVar5 + 1;
          }
          *(undefined1 *)puVar5 = *(undefined1 *)puVar11;
          this_00 = (cMf32 *)0x0;
          puVar11 = puStack_8;
        }
        cMf32::delete(this_00,puVar11);
      }
    }
    pMVar1 = this_01 + 0x1d;
    pMVar10 = pMVar1;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pMVar10 = 0;
      pMVar10 = pMVar10 + 4;
    }
    *(undefined4 *)(this_01 + 0x2d) = 0x23;
    iVar4 = 0;
    do {
      *(short *)(this_01 + 0x31) = (short)iVar4 + 1;
      if (iVar4 == 0) {
        sVar3 = 1;
      }
      else if (this_01[0x67] == (MReportTy)0x0) {
        sVar3 = 2;
      }
      else {
        sVar3 = (((int)(DAT_0080c83e + 2) <= iVar4) - 1 & 0xfffe) + 2;
      }
      *(short *)(this_01 + 0x33) = sVar3;
      FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x9f),(undefined4 *)pMVar1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 9);
    if (this_01[0x67] == (MReportTy)0x0) {
      *(undefined4 *)(this_01 + 0x2d) = 0x20;
      *(undefined4 *)(this_01 + 0x31) = 0;
      FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x8f),(undefined4 *)pMVar1);
    }
    else {
      iVar4 = 0;
      this_01[0x69] = (MReportTy)0x0;
      *(undefined4 *)(this_01 + 0x2a3) = 0;
      if (DAT_0080c83e != 0) {
        piVar9 = &DAT_0080c947;
        do {
          if (*(int *)(this_01 + 0x2a3) < *piVar9) {
            *(int *)(this_01 + 0x2a3) = *piVar9;
          }
          iVar4 = iVar4 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar4 < (int)(uint)DAT_0080c83e);
      }
      if (*(int *)(this_01 + 0x2a3) < DAT_0080c963) {
        *(int *)(this_01 + 0x2a3) = DAT_0080c963;
      }
      uVar7 = CreateBut(this_01,1,1,0x262,0x226,0x91,0x28,0x6200,0x6212);
      *(undefined4 *)(this_01 + 0x8f) = uVar7;
      if (this_01[0x66] == (MReportTy)0x1) {
        uVar7 = CreateBut(this_01,1,1,0x1e,0x1ea,300,0x1e,0x6203,0x6215);
        *(undefined4 *)(this_01 + 0x9b) = uVar7;
      }
    }
    this_01[0x68] = (MReportTy)0x1;
    SetCtrl(this_01,1);
    *(undefined4 *)(this_01 + 0x2d) = 5;
    FUN_006e6080(this_01,0xf,0,(undefined4 *)(this_01 + 0x1d));
    DAT_00858df8 = ppuStack_54;
    return;
  }
  DAT_00858df8 = ppuStack_54;
  iVar8 = FUN_006ad4d0(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x30e,0,iVar4,&DAT_007a4ccc);
  if (iVar8 == 0) {
    FUN_006a5e40(iVar4,0,0x7ccec8,0x30e);
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

