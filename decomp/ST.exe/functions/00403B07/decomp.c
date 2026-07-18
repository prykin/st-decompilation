
void thunk_FUN_005c0e00(void)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int iVar7;
  void *this;
  undefined4 unaff_ESI;
  int *piVar8;
  void *unaff_EDI;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 **ppuStack_98;
  undefined4 auStack_94 [16];
  undefined4 **ppuStack_54;
  undefined4 auStack_50 [16];
  undefined4 *puStack_10;
  void *pvStack_c;
  undefined4 *puStack_8;
  
  ppuStack_54 = DAT_00858df8;
  DAT_00858df8 = &ppuStack_54;
  iVar3 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  this = pvStack_c;
  if (iVar3 == 0) {
    if (*(uint *)((int)pvStack_c + 0x8f) != 0) {
      FUN_006e56b0(*(void **)((int)pvStack_c + 0xc),*(uint *)((int)pvStack_c + 0x8f));
      *(undefined4 *)((int)this + 0x8f) = 0;
      FUN_006b5f80(DAT_008075a8,0x262,0x226,0x91,0x28);
      thunk_FUN_00540620(0x262,0x226,0x262,0x226,0x91,(byte *)0x28,'\x01',
                         *(BITMAPINFO **)((int)this + 0x5d));
    }
    if (*(uint *)((int)this + 0x9b) != 0) {
      FUN_006e56b0(*(void **)((int)this + 0xc),*(uint *)((int)this + 0x9b));
      *(undefined4 *)((int)this + 0x9b) = 0;
      FUN_006b5f80(DAT_008075a8,0x1e,0x1ea,300,0x1e);
      thunk_FUN_00540620(0x1e,0x1ea,0x1e,0x1ea,300,(byte *)0x1e,'\x01',
                         *(BITMAPINFO **)((int)this + 0x5d));
    }
    FUN_006b5f80(DAT_008075a8,0x174,0x1a9,400,0x32);
    thunk_FUN_00540620(0x174,0x1a9,0x174,0x1a9,400,(byte *)0x32,'\x01',
                       *(BITMAPINFO **)((int)this + 0x5d));
    if ((*(char *)((int)this + 0x66) == '\x01') &&
       (*(undefined1 *)((int)this + 0x67) = 0,
       *(int *)(*(int *)((int)this + (uint)*(byte *)((int)this + 0x6a) * 4 + 0x347) + 0xc) != 0)) {
      pcVar10 = s__s_s_s__s_007ca1ec;
      puVar9 = &DAT_0080f33a;
      puStack_8 = (undefined4 *)0x0;
      wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s__s_007ca1ec,&DAT_00807680,PTR_s_SAVEGAME__0079c0d4,
                &DAT_00807ddd,PTR_s_PL_LOG_0079c0d8);
      ppuStack_98 = DAT_00858df8;
      DAT_00858df8 = &ppuStack_98;
      iVar3 = __setjmp3(auStack_94,0,puVar9,pcVar10);
      if (iVar3 == 0) {
        puStack_8 = FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
      }
      puVar9 = puStack_8;
      this = pvStack_c;
      DAT_00858df8 = ppuStack_98;
      if (puStack_8 != (undefined4 *)0x0) {
        puStack_10 = &DAT_0080c522;
        iVar3 = *(int *)((int)pvStack_c + (uint)*(byte *)((int)pvStack_c + 0x6a) * 4 + 0x347);
        if (*(uint *)((int)pvStack_c + 0x6b) < *(uint *)(iVar3 + 0xc)) {
          puVar4 = (undefined4 *)
                   (*(int *)(iVar3 + 8) * *(uint *)((int)pvStack_c + 0x6b) + *(int *)(iVar3 + 0x1c))
          ;
        }
        else {
          puVar4 = (undefined4 *)0x0;
        }
        wsprintfA((LPSTR)&DAT_0080f33a,s__s_01d_02d_007cd074,PTR_DAT_0079c0dc,
                  *(byte *)((int)pvStack_c + 0x6a) + 1,*puVar4);
        puVar5 = FUN_006f1ce0(0xc,(char *)&DAT_0080f33a,(int *)&puStack_10,0);
        if (puVar5 != (ushort *)0x0) {
          *(undefined1 *)((int)pvStack_c + 0x67) = 1;
          puVar9 = &DAT_0080c967;
          puVar4 = &DAT_008087b6;
          for (iVar3 = 0x666; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar4 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar4 = puVar4 + 1;
          }
          *(undefined1 *)puVar4 = *(undefined1 *)puVar9;
          puVar9 = puStack_8;
        }
        FUN_006f1170(puVar9);
      }
    }
    puVar9 = (undefined4 *)((int)this + 0x1d);
    puVar4 = puVar9;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)((int)this + 0x2d) = 0x23;
    iVar3 = 0;
    do {
      *(short *)((int)this + 0x31) = (short)iVar3 + 1;
      if (iVar3 == 0) {
        sVar2 = 1;
      }
      else if (*(char *)((int)this + 0x67) == '\0') {
        sVar2 = 2;
      }
      else {
        sVar2 = (((int)(DAT_0080c83e + 2) <= iVar3) - 1 & 0xfffe) + 2;
      }
      *(short *)((int)this + 0x33) = sVar2;
      FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x9f),puVar9);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 9);
    if (*(char *)((int)this + 0x67) == '\0') {
      *(undefined4 *)((int)this + 0x2d) = 0x20;
      *(undefined4 *)((int)this + 0x31) = 0;
      FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x8f),puVar9);
    }
    else {
      iVar3 = 0;
      *(undefined1 *)((int)this + 0x69) = 0;
      *(undefined4 *)((int)this + 0x2a3) = 0;
      if (DAT_0080c83e != 0) {
        piVar8 = &DAT_0080c947;
        do {
          if (*(int *)((int)this + 0x2a3) < *piVar8) {
            *(int *)((int)this + 0x2a3) = *piVar8;
          }
          iVar3 = iVar3 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar3 < (int)(uint)DAT_0080c83e);
      }
      if (*(int *)((int)this + 0x2a3) < DAT_0080c963) {
        *(int *)((int)this + 0x2a3) = DAT_0080c963;
      }
      uVar6 = thunk_FUN_005c0980(1,1,0x262,0x226,0x91,0x28,0x6200,0x6212);
      *(undefined4 *)((int)this + 0x8f) = uVar6;
      if (*(char *)((int)this + 0x66) == '\x01') {
        uVar6 = thunk_FUN_005c0980(1,1,0x1e,0x1ea,300,0x1e,0x6203,0x6215);
        *(undefined4 *)((int)this + 0x9b) = uVar6;
      }
    }
    *(undefined1 *)((int)this + 0x68) = 1;
    thunk_FUN_005c1340(this,1);
    *(undefined4 *)((int)this + 0x2d) = 5;
    FUN_006e6080(this,0xf,0,(undefined4 *)((int)this + 0x1d));
    DAT_00858df8 = ppuStack_54;
    return;
  }
  DAT_00858df8 = ppuStack_54;
  iVar7 = FUN_006ad4d0(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x30e,0,iVar3,&DAT_007a4ccc);
  if (iVar7 == 0) {
    FUN_006a5e40(iVar3,0,0x7ccec8,0x30e);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

