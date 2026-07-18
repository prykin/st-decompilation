
void thunk_FUN_0059f670(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  char cVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_4c;
    iVar4 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x89c,0,iVar2,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar2,0,0x7cbf70,0x89c);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
    }
  }
  switch(*(char *)(iStack_8 + 0x1a5f)) {
  case '\x02':
  case '\x04':
  case '\x05':
  case '\a':
    if (*(char *)(iStack_8 + 0x1a5f) == '\a') {
      thunk_FUN_005a0a50(iStack_8);
    }
    else {
      thunk_FUN_005a0590(iStack_8);
    }
  case '\x01':
    if (*(int *)(iStack_8 + 0x1f23) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(iStack_8 + 0x1f23));
      *(undefined4 *)(iStack_8 + 0x1f23) = 0;
    }
    puVar3 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      puVar3[2] = 1;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 3) = 0xffffffff;
      puVar3[1] = 2;
      *(undefined4 *)(puVar3 + 7) = 0;
      *(undefined4 *)(puVar3 + 0xb) = 0;
      *(undefined4 *)(puVar3 + 0xf) = 0;
      *(undefined4 *)(puVar3 + 0x1b) = 1;
      *(undefined4 *)(puVar3 + 0x13) = 1;
      *(undefined4 *)(puVar3 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar3 + 0x27) = 0;
      *(undefined4 *)(puVar3 + 0x23) = 0;
      *(undefined4 *)(puVar3 + 0x2f) = 1;
      *(undefined4 *)(puVar3 + 0x2b) = 1;
    }
    *(undefined1 **)(iStack_8 + 0x1f23) = puVar3;
    if (puVar3 != (undefined1 *)0x0) {
      uVar8 = 0;
      cVar6 = '\x01';
      uVar5 = 0x10;
      iVar4 = 1;
      iVar2 = FUN_006bf9f0(DAT_008075a8,0xb4,0xaa,0x1b8,0x106);
      uVar5 = thunk_FUN_005aacb0(4,0xb4,0xaa,iVar2,iVar4,uVar5,cVar6,uVar8);
      if (uVar5 != 0) {
        iVar2 = *(int *)(iStack_8 + 0x1f23);
        *(undefined1 *)(iVar2 + 2) = 0;
        *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
        uVar5 = *(uint *)(*(int *)(iStack_8 + 0x1f23) + 3);
        if (-1 < (int)uVar5) {
          FUN_006b3430(DAT_008075a8,uVar5);
        }
        thunk_FUN_005ab0a0();
      }
      FUN_006b5f80(DAT_008075a8,0xb4,0xaa,0x1b8,0x106);
      thunk_FUN_00540620(0xb4,0xaa,0xb4,0xaa,0x1b8,(byte *)0x106,'\x01',
                         *(BITMAPINFO **)(iStack_8 + 0x5d));
    }
    uVar5 = *(uint *)(iStack_8 + 0x1abc);
    piVar7 = DAT_008075a8;
    break;
  case '\x03':
    thunk_FUN_005a0590(iStack_8);
    if (*(int *)(iStack_8 + 0x1f23) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(iStack_8 + 0x1f23));
      *(undefined4 *)(iStack_8 + 0x1f23) = 0;
    }
    puVar3 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      puVar3[2] = 1;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 3) = 0xffffffff;
      puVar3[1] = 2;
      *(undefined4 *)(puVar3 + 7) = 0;
      *(undefined4 *)(puVar3 + 0xb) = 0;
      *(undefined4 *)(puVar3 + 0xf) = 0;
      *(undefined4 *)(puVar3 + 0x1b) = 1;
      *(undefined4 *)(puVar3 + 0x13) = 1;
      *(undefined4 *)(puVar3 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar3 + 0x27) = 0;
      *(undefined4 *)(puVar3 + 0x23) = 0;
      *(undefined4 *)(puVar3 + 0x2f) = 1;
      *(undefined4 *)(puVar3 + 0x2b) = 1;
    }
    *(undefined1 **)(iStack_8 + 0x1f23) = puVar3;
    if (puVar3 == (undefined1 *)0x0) goto switchD_0059f6f7_default;
    uVar8 = 0;
    cVar6 = '\x01';
    uVar5 = 0x10;
    iVar4 = 1;
    iVar2 = FUN_006bf9f0(DAT_008075a8,0x22,0x72,0x2e1,0x14c);
    uVar5 = thunk_FUN_005aacb0(4,0x22,0x72,iVar2,iVar4,uVar5,cVar6,uVar8);
    if (uVar5 != 0) {
      iVar2 = *(int *)(iStack_8 + 0x1f23);
      *(undefined1 *)(iVar2 + 2) = 0;
      *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
      uVar5 = *(uint *)(*(int *)(iStack_8 + 0x1f23) + 3);
      if (-1 < (int)uVar5) {
        FUN_006b3430(DAT_008075a8,uVar5);
      }
      thunk_FUN_005ab0a0();
    }
    FUN_006b5f80(DAT_008075a8,0x22,0x72,0x2e1,0x14c);
    thunk_FUN_00540620(0x22,0x72,0x22,0x72,0x2e1,(byte *)0x14c,'\x01',
                       *(BITMAPINFO **)(iStack_8 + 0x5d));
    if (*(uint *)(iStack_8 + 0x1b2c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(iStack_8 + 0x1b70),*(uint *)(iStack_8 + 0x1b2c));
    }
    if (*(uint *)(iStack_8 + 0x1bbd) != 0xffffffff) {
      FUN_006b3af0(*(int **)(iStack_8 + 0x1c01),*(uint *)(iStack_8 + 0x1bbd));
    }
    uVar5 = *(uint *)(iStack_8 + 0x1c4e);
    if (uVar5 == 0xffffffff) goto switchD_0059f6f7_default;
    piVar7 = *(int **)(iStack_8 + 0x1c92);
    break;
  case '\x06':
    thunk_FUN_005a07f0(iStack_8);
    if (*(int *)(iStack_8 + 0x1f27) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(iStack_8 + 0x1f27));
      *(undefined4 *)(iStack_8 + 0x1f27) = 0;
    }
    puVar3 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      puVar3[2] = 1;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 3) = 0xffffffff;
      puVar3[1] = 2;
      *(undefined4 *)(puVar3 + 7) = 0;
      *(undefined4 *)(puVar3 + 0xb) = 0;
      *(undefined4 *)(puVar3 + 0xf) = 0;
      *(undefined4 *)(puVar3 + 0x1b) = 1;
      *(undefined4 *)(puVar3 + 0x13) = 1;
      *(undefined4 *)(puVar3 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar3 + 0x27) = 0;
      *(undefined4 *)(puVar3 + 0x23) = 0;
      *(undefined4 *)(puVar3 + 0x2f) = 1;
      *(undefined4 *)(puVar3 + 0x2b) = 1;
    }
    *(undefined1 **)(iStack_8 + 0x1f27) = puVar3;
    if (puVar3 != (undefined1 *)0x0) {
      uVar8 = 0;
      cVar6 = '\x01';
      uVar5 = 0x10;
      iVar4 = 1;
      iVar2 = FUN_006bf9f0(DAT_008075a8,0x13,0x5e,0x1bf,0x175);
      uVar5 = thunk_FUN_005aacb0(4,0x13,0x5e,iVar2,iVar4,uVar5,cVar6,uVar8);
      if (uVar5 != 0) {
        iVar2 = *(int *)(iStack_8 + 0x1f27);
        *(undefined1 *)(iVar2 + 2) = 0;
        *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
        uVar5 = *(uint *)(*(int *)(iStack_8 + 0x1f27) + 3);
        if (-1 < (int)uVar5) {
          FUN_006b3430(DAT_008075a8,uVar5);
        }
        thunk_FUN_005ab0a0();
      }
      FUN_006b5f80(DAT_008075a8,0x13,0x5e,0x1bf,0x175);
      thunk_FUN_00540620(0x13,0x5e,0x13,0x5e,0x1bf,(byte *)0x175,'\x01',
                         *(BITMAPINFO **)(iStack_8 + 0x5d));
      if (*(uint *)(iStack_8 + 0x1b2c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(iStack_8 + 0x1b70),*(uint *)(iStack_8 + 0x1b2c));
      }
      if (*(uint *)(iStack_8 + 0x1bbd) != 0xffffffff) {
        FUN_006b3af0(*(int **)(iStack_8 + 0x1c01),*(uint *)(iStack_8 + 0x1bbd));
      }
      if (*(uint *)(iStack_8 + 0x1c4e) != 0xffffffff) {
        FUN_006b3af0(*(int **)(iStack_8 + 0x1c92),*(uint *)(iStack_8 + 0x1c4e));
      }
    }
    if (*(int *)(iStack_8 + 0x1f2b) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(iStack_8 + 0x1f2b));
      *(undefined4 *)(iStack_8 + 0x1f2b) = 0;
    }
    puVar3 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      puVar3[2] = 1;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 3) = 0xffffffff;
      puVar3[1] = 2;
      *(undefined4 *)(puVar3 + 7) = 0;
      *(undefined4 *)(puVar3 + 0xb) = 0;
      *(undefined4 *)(puVar3 + 0xf) = 0;
      *(undefined4 *)(puVar3 + 0x1b) = 1;
      *(undefined4 *)(puVar3 + 0x13) = 1;
      *(undefined4 *)(puVar3 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar3 + 0x27) = 0;
      *(undefined4 *)(puVar3 + 0x23) = 0;
      *(undefined4 *)(puVar3 + 0x2f) = 1;
      *(undefined4 *)(puVar3 + 0x2b) = 1;
    }
    *(undefined1 **)(iStack_8 + 0x1f2b) = puVar3;
    if (puVar3 == (undefined1 *)0x0) goto switchD_0059f6f7_default;
    uVar8 = 0;
    cVar6 = '\x01';
    uVar5 = 0x10;
    iVar4 = 1;
    iVar2 = FUN_006bf9f0(DAT_008075a8,0x1e9,0x5e,0x124,0x175);
    uVar5 = thunk_FUN_005aacb0(2,0x1e9,0x5e,iVar2,iVar4,uVar5,cVar6,uVar8);
    if (uVar5 != 0) {
      iVar2 = *(int *)(iStack_8 + 0x1f2b);
      *(undefined1 *)(iVar2 + 2) = 0;
      *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
      uVar5 = *(uint *)(*(int *)(iStack_8 + 0x1f2b) + 3);
      if (-1 < (int)uVar5) {
        FUN_006b3430(DAT_008075a8,uVar5);
      }
      thunk_FUN_005ab0a0();
    }
    FUN_006b5f80(DAT_008075a8,0x1e9,0x5e,0x124,0x175);
    thunk_FUN_00540620(0x1e9,0x5e,0x1e9,0x5e,0x124,(byte *)0x175,'\x01',
                       *(BITMAPINFO **)(iStack_8 + 0x5d));
    if (*(uint *)(iStack_8 + 0x1cdf) != 0xffffffff) {
      FUN_006b3af0(*(int **)(iStack_8 + 0x1d23),*(uint *)(iStack_8 + 0x1cdf));
    }
    if (*(uint *)(iStack_8 + 0x1d70) != 0xffffffff) {
      FUN_006b3af0(*(int **)(iStack_8 + 0x1db4),*(uint *)(iStack_8 + 0x1d70));
    }
    uVar5 = *(uint *)(iStack_8 + 0x1e01);
    if (uVar5 == 0xffffffff) goto switchD_0059f6f7_default;
    piVar7 = *(int **)(iStack_8 + 0x1e45);
    break;
  case '\b':
    thunk_FUN_005a0af0(iStack_8);
    if (*(int *)(iStack_8 + 0x1f2f) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(iStack_8 + 0x1f2f));
      *(undefined4 *)(iStack_8 + 0x1f2f) = 0;
    }
    puVar3 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      puVar3[2] = 1;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 3) = 0xffffffff;
      puVar3[1] = 2;
      *(undefined4 *)(puVar3 + 7) = 0;
      *(undefined4 *)(puVar3 + 0xb) = 0;
      *(undefined4 *)(puVar3 + 0xf) = 0;
      *(undefined4 *)(puVar3 + 0x1b) = 1;
      *(undefined4 *)(puVar3 + 0x13) = 1;
      *(undefined4 *)(puVar3 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar3 + 0x27) = 0;
      *(undefined4 *)(puVar3 + 0x23) = 0;
      *(undefined4 *)(puVar3 + 0x2f) = 1;
      *(undefined4 *)(puVar3 + 0x2b) = 1;
    }
    *(undefined1 **)(iStack_8 + 0x1f2f) = puVar3;
    if (puVar3 != (undefined1 *)0x0) {
      uVar8 = 0;
      cVar6 = '\x01';
      uVar5 = 0x10;
      iVar4 = 1;
      iVar2 = FUN_006bf9f0(DAT_008075a8,0x199,0x5e,0x174,0x175);
      uVar5 = thunk_FUN_005aacb0(2,0x199,0x5e,iVar2,iVar4,uVar5,cVar6,uVar8);
      if (uVar5 != 0) {
        iVar2 = *(int *)(iStack_8 + 0x1f2f);
        *(undefined1 *)(iVar2 + 2) = 0;
        *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
        uVar5 = *(uint *)(*(int *)(iStack_8 + 0x1f2f) + 3);
        if (-1 < (int)uVar5) {
          FUN_006b3430(DAT_008075a8,uVar5);
        }
        thunk_FUN_005ab0a0();
      }
      FUN_006b5f80(DAT_008075a8,0x199,0x5e,0x174,0x175);
      thunk_FUN_00540620(0x199,0x5e,0x199,0x5e,0x174,(byte *)0x175,'\x01',
                         *(BITMAPINFO **)(iStack_8 + 0x5d));
    }
    if (*(int *)(iStack_8 + 0x1f2b) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(iStack_8 + 0x1f2b));
      *(undefined4 *)(iStack_8 + 0x1f2b) = 0;
    }
    puVar3 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      puVar3[2] = 1;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 3) = 0xffffffff;
      puVar3[1] = 2;
      *(undefined4 *)(puVar3 + 7) = 0;
      *(undefined4 *)(puVar3 + 0xb) = 0;
      *(undefined4 *)(puVar3 + 0xf) = 0;
      *(undefined4 *)(puVar3 + 0x1b) = 1;
      *(undefined4 *)(puVar3 + 0x13) = 1;
      *(undefined4 *)(puVar3 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar3 + 0x27) = 0;
      *(undefined4 *)(puVar3 + 0x23) = 0;
      *(undefined4 *)(puVar3 + 0x2f) = 1;
      *(undefined4 *)(puVar3 + 0x2b) = 1;
    }
    *(undefined1 **)(iStack_8 + 0x1f2b) = puVar3;
    if (puVar3 == (undefined1 *)0x0) goto switchD_0059f6f7_default;
    uVar8 = 0;
    cVar6 = '\x01';
    uVar5 = 0x10;
    iVar4 = 1;
    iVar2 = FUN_006bf9f0(DAT_008075a8,0x13,0x5e,0x174,0x175);
    uVar5 = thunk_FUN_005aacb0(4,0x13,0x5e,iVar2,iVar4,uVar5,cVar6,uVar8);
    if (uVar5 != 0) {
      iVar2 = *(int *)(iStack_8 + 0x1f2b);
      *(undefined1 *)(iVar2 + 2) = 0;
      *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
      uVar5 = *(uint *)(*(int *)(iStack_8 + 0x1f2b) + 3);
      if (-1 < (int)uVar5) {
        FUN_006b3430(DAT_008075a8,uVar5);
      }
      thunk_FUN_005ab0a0();
    }
    FUN_006b5f80(DAT_008075a8,0x13,0x5e,0x174,0x175);
    thunk_FUN_00540620(0x13,0x5e,0x13,0x5e,0x174,(byte *)0x175,'\x01',
                       *(BITMAPINFO **)(iStack_8 + 0x5d));
    if (*(uint *)(iStack_8 + 0x1cdf) != 0xffffffff) {
      FUN_006b3af0(*(int **)(iStack_8 + 0x1d23),*(uint *)(iStack_8 + 0x1cdf));
    }
    if (*(uint *)(iStack_8 + 0x1d70) != 0xffffffff) {
      FUN_006b3af0(*(int **)(iStack_8 + 0x1db4),*(uint *)(iStack_8 + 0x1d70));
    }
    uVar5 = *(uint *)(iStack_8 + 0x1e01);
    if (uVar5 == 0xffffffff) goto switchD_0059f6f7_default;
    piVar7 = *(int **)(iStack_8 + 0x1e45);
    break;
  case '\t':
    thunk_FUN_005a0c80(iStack_8);
    if (*(int *)(iStack_8 + 0x1f23) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(iStack_8 + 0x1f23));
      *(undefined4 *)(iStack_8 + 0x1f23) = 0;
    }
    puVar3 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      puVar3[2] = 1;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 3) = 0xffffffff;
      puVar3[1] = 2;
      *(undefined4 *)(puVar3 + 7) = 0;
      *(undefined4 *)(puVar3 + 0xb) = 0;
      *(undefined4 *)(puVar3 + 0xf) = 0;
      *(undefined4 *)(puVar3 + 0x1b) = 1;
      *(undefined4 *)(puVar3 + 0x13) = 1;
      *(undefined4 *)(puVar3 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar3 + 0x27) = 0;
      *(undefined4 *)(puVar3 + 0x23) = 0;
      *(undefined4 *)(puVar3 + 0x2f) = 1;
      *(undefined4 *)(puVar3 + 0x2b) = 1;
    }
    *(undefined1 **)(iStack_8 + 0x1f23) = puVar3;
    if (puVar3 != (undefined1 *)0x0) {
      uVar8 = 0;
      cVar6 = '\x01';
      uVar5 = 0x10;
      iVar4 = 1;
      iVar2 = FUN_006bf9f0(DAT_008075a8,0x22,0x5e,0x2e1,0x175);
      uVar5 = thunk_FUN_005aacb0(4,0x22,0x5e,iVar2,iVar4,uVar5,cVar6,uVar8);
      if (uVar5 != 0) {
        iVar2 = *(int *)(iStack_8 + 0x1f23);
        *(undefined1 *)(iVar2 + 2) = 0;
        *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
        uVar5 = *(uint *)(*(int *)(iStack_8 + 0x1f23) + 3);
        if (-1 < (int)uVar5) {
          FUN_006b3430(DAT_008075a8,uVar5);
        }
        thunk_FUN_005ab0a0();
      }
      FUN_006b5f80(DAT_008075a8,0x22,0x5e,0x2e1,0x175);
      thunk_FUN_00540620(0x22,0x5e,0x22,0x5e,0x2e1,(byte *)0x175,'\x01',
                         *(BITMAPINFO **)(iStack_8 + 0x5d));
    }
    uVar5 = *(uint *)(iStack_8 + 0x1abc);
    piVar7 = DAT_008075a8;
    break;
  case '\n':
    thunk_FUN_005a0590(iStack_8);
    if (*(int *)(iStack_8 + 0x1f23) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(iStack_8 + 0x1f23));
      *(undefined4 *)(iStack_8 + 0x1f23) = 0;
    }
    puVar3 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      puVar3[2] = 1;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 3) = 0xffffffff;
      puVar3[1] = 2;
      *(undefined4 *)(puVar3 + 7) = 0;
      *(undefined4 *)(puVar3 + 0xb) = 0;
      *(undefined4 *)(puVar3 + 0xf) = 0;
      *(undefined4 *)(puVar3 + 0x1b) = 1;
      *(undefined4 *)(puVar3 + 0x13) = 1;
      *(undefined4 *)(puVar3 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar3 + 0x27) = 0;
      *(undefined4 *)(puVar3 + 0x23) = 0;
      *(undefined4 *)(puVar3 + 0x2f) = 1;
      *(undefined4 *)(puVar3 + 0x2b) = 1;
    }
    *(undefined1 **)(iStack_8 + 0x1f23) = puVar3;
    if (puVar3 != (undefined1 *)0x0) {
      uVar8 = 0;
      cVar6 = '\x01';
      uVar5 = 0x10;
      iVar4 = 1;
      iVar2 = FUN_006bf9f0(DAT_008075a8,0xb4,0x5e,0x1b8,0x17a);
      uVar5 = thunk_FUN_005aacb0(4,0xb4,0x5e,iVar2,iVar4,uVar5,cVar6,uVar8);
      if (uVar5 != 0) {
        iVar2 = *(int *)(iStack_8 + 0x1f23);
        *(undefined1 *)(iVar2 + 2) = 0;
        *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
        uVar5 = *(uint *)(*(int *)(iStack_8 + 0x1f23) + 3);
        if (-1 < (int)uVar5) {
          FUN_006b3430(DAT_008075a8,uVar5);
        }
        thunk_FUN_005ab0a0();
      }
      FUN_006b5f80(DAT_008075a8,0xb4,0x5e,0x1b8,0x17a);
      thunk_FUN_00540620(0xb4,0x5e,0xb4,0x5e,0x1b8,(byte *)0x17a,'\x01',
                         *(BITMAPINFO **)(iStack_8 + 0x5d));
    }
    uVar5 = *(uint *)(iStack_8 + 0x1abc);
    piVar7 = DAT_008075a8;
    break;
  default:
    goto switchD_0059f6f7_default;
  }
  FUN_006b3af0(piVar7,uVar5);
switchD_0059f6f7_default:
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8a60(*(byte **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c),0xfffffffe,
                   *(uint *)(DAT_00802a30 + 0x34),*(uint *)(DAT_00802a30 + 0x38));
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return;
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  return;
}

