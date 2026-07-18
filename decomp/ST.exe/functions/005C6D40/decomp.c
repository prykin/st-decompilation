
void FUN_005c6d40(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  uint *puVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  undefined4 local_54;
  undefined4 local_50 [16];
  void *local_10;
  int local_c;
  int local_8;
  
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar2 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    iVar5 = FUN_006ad4d0(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x3a4,0,iVar2,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7cd0e8,0x3a4);
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
  if (*(uint *)((int)local_10 + 0x215d) != 0) {
    FUN_006e56b0(*(void **)((int)local_10 + 0xc),*(uint *)((int)local_10 + 0x215d));
  }
  *(undefined4 *)((int)local_10 + 0x215d) = 0;
  puVar4 = (uint *)((int)local_10 + 0x1f8c);
  local_c = 10;
  do {
    local_8 = 8;
    do {
      if (*puVar4 != 0) {
        FUN_006e56b0(*(void **)((int)local_10 + 0xc),*puVar4);
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (*(uint *)((int)local_10 + 0x211d) != 0) {
      FUN_006e56b0(*(void **)((int)local_10 + 0xc),*(uint *)((int)local_10 + 0x211d));
      *(undefined4 *)((int)local_10 + 0x211d) = 0;
    }
    local_c = local_c + -1;
  } while (local_c != 0);
  if (*(int *)((int)local_10 + 0x21e8) != 0) {
    thunk_FUN_005aafb0();
    FUN_0072e2b0(*(undefined4 **)((int)local_10 + 0x21e8));
    *(undefined4 *)((int)local_10 + 0x21e8) = 0;
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
  *(undefined1 **)((int)local_10 + 0x21e8) = puVar3;
  if (puVar3 != (undefined1 *)0x0) {
    uVar8 = 0;
    cVar7 = '\x01';
    uVar6 = 0x10;
    iVar5 = 1;
    iVar2 = FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x205,0x104);
    uVar6 = thunk_FUN_005aacb0(2,0x112,0x38,iVar2,iVar5,uVar6,cVar7,uVar8);
    if (uVar6 != 0) {
      iVar2 = *(int *)((int)local_10 + 0x21e8);
      *(undefined1 *)(iVar2 + 2) = 0;
      *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
      uVar6 = *(uint *)(*(int *)((int)local_10 + 0x21e8) + 3);
      if (-1 < (int)uVar6) {
        FUN_006b3430(DAT_008075a8,uVar6);
      }
      thunk_FUN_005ab0a0();
    }
    FUN_006b5f80(DAT_008075a8,0x112,0x38,0x205,0x104);
    thunk_FUN_00540620(0x112,0x38,0x112,0x38,0x205,(byte *)0x104,'\x01',
                       *(BITMAPINFO **)(DAT_0081176c + 0x2c));
  }
  if (*(uint *)((int)local_10 + 0x1c6f) != 0xffffffff) {
    FUN_006b3af0(*(int **)((int)local_10 + 0x1cb3),*(uint *)((int)local_10 + 0x1c6f));
  }
  if (*(uint *)((int)local_10 + 0x1d00) != 0xffffffff) {
    FUN_006b3af0(*(int **)((int)local_10 + 0x1d44),*(uint *)((int)local_10 + 0x1d00));
  }
  if (*(uint *)((int)local_10 + 0x1d91) != 0xffffffff) {
    FUN_006b3af0(*(int **)((int)local_10 + 0x1dd5),*(uint *)((int)local_10 + 0x1d91));
  }
  puVar4 = (uint *)((int)local_10 + 0x20cc);
  local_c = 10;
  do {
    FUN_006b3af0(DAT_008075a8,*puVar4);
    puVar4 = puVar4 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  puVar4 = (uint *)((int)local_10 + 0x2125);
  local_c = 0xe;
  do {
    if (*puVar4 != 0) {
      FUN_006e56b0(*(void **)((int)local_10 + 0xc),*puVar4);
      *puVar4 = 0;
    }
    puVar4 = puVar4 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (*(int *)((int)local_10 + 0x21f4) != 0) {
    thunk_FUN_005aafb0();
    FUN_0072e2b0(*(undefined4 **)((int)local_10 + 0x21f4));
    *(undefined4 *)((int)local_10 + 0x21f4) = 0;
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
  *(undefined1 **)((int)local_10 + 0x21f4) = puVar3;
  if (puVar3 != (undefined1 *)0x0) {
    uVar8 = 0;
    cVar7 = '\x01';
    uVar6 = 0x10;
    iVar5 = 1;
    iVar2 = FUN_006bf9f0(DAT_008075a8,0x112,0x149,0x205,0x8c);
    uVar6 = thunk_FUN_005aacb0(2,0x112,0x149,iVar2,iVar5,uVar6,cVar7,uVar8);
    if (uVar6 != 0) {
      iVar2 = *(int *)((int)local_10 + 0x21f4);
      *(undefined1 *)(iVar2 + 2) = 0;
      *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
      uVar6 = *(uint *)(*(int *)((int)local_10 + 0x21f4) + 3);
      if (-1 < (int)uVar6) {
        FUN_006b3430(DAT_008075a8,uVar6);
      }
      thunk_FUN_005ab0a0();
    }
    FUN_006b5f80(DAT_008075a8,0x112,0x149,0x205,0x8c);
    thunk_FUN_00540620(0x112,0x149,0x112,0x149,0x205,(byte *)0x8c,'\x01',
                       *(BITMAPINFO **)(DAT_0081176c + 0x2c));
  }
  FUN_006b3af0(DAT_008075a8,*(uint *)((int)local_10 + 0x1e22));
  if ((((*(char *)((int)local_10 + 0x21e2) == '\0') ||
       (cVar7 = *(char *)((int)local_10 + 0x1e26), cVar7 == '\x06')) || (cVar7 == '\a')) ||
     (cVar7 == '\x0e')) {
    *(undefined4 *)((int)local_10 + 0x2d) = 0x20;
    *(undefined4 *)((int)local_10 + 0x31) = 0;
    FUN_006e6080(local_10,2,*(undefined4 *)(DAT_0081176c + 0x389),
                 (undefined4 *)((int)local_10 + 0x1d));
  }
  else {
    if (*(uint *)(DAT_0081176c + 0x389) != 0) {
      FUN_006e56b0(*(void **)((int)local_10 + 0xc),*(uint *)(DAT_0081176c + 0x389));
    }
    *(undefined4 *)(DAT_0081176c + 0x389) = 0;
    iVar2 = *(int *)(DAT_0081176c + 0x544);
    FUN_006b4170(iVar2,0,0,0,*(int *)(iVar2 + 4),*(int *)(iVar2 + 8),0xff);
    if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
    }
    puVar4 = FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)(DAT_0081176c + 0x548) = puVar4;
    if (*(int *)((int)local_10 + 0x21ec) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)((int)local_10 + 0x21ec));
      *(undefined4 *)((int)local_10 + 0x21ec) = 0;
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
    *(undefined1 **)((int)local_10 + 0x21ec) = puVar3;
    if (puVar3 != (undefined1 *)0x0) {
      uVar8 = 0;
      cVar7 = '\x01';
      uVar6 = 0x10;
      iVar5 = 1;
      iVar2 = FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
      uVar6 = thunk_FUN_005aacb0(4,10,0xb4,iVar2,iVar5,uVar6,cVar7,uVar8);
      if (uVar6 != 0) {
        iVar2 = *(int *)((int)local_10 + 0x21ec);
        *(undefined1 *)(iVar2 + 2) = 0;
        *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
        uVar6 = *(uint *)(*(int *)((int)local_10 + 0x21ec) + 3);
        if (-1 < (int)uVar6) {
          FUN_006b3430(DAT_008075a8,uVar6);
        }
        thunk_FUN_005ab0a0();
      }
      FUN_006b5f80(DAT_008075a8,10,0xb4,0xf9,0x121);
      thunk_FUN_00540620(10,0xb4,10,0xb4,0xf9,(byte *)0x121,'\x01',
                         *(BITMAPINFO **)(DAT_0081176c + 0x2c));
    }
    if (*(uint *)(DAT_0081176c + 0x391) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_0081176c + 0x3d5),*(uint *)(DAT_0081176c + 0x391));
    }
    if (*(uint *)(DAT_0081176c + 0x422) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_0081176c + 0x466),*(uint *)(DAT_0081176c + 0x422));
    }
    if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3));
    }
    FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
  }
  if ((*(char *)((int)local_10 + 0x21e3) != '\0') &&
     (((cVar7 = *(char *)((int)local_10 + 0x1e26), cVar7 == '\x06' || (cVar7 == '\a')) ||
      (cVar7 == '\x0e')))) {
    puVar4 = (uint *)((int)local_10 + 0x1f60);
    local_c = 7;
    do {
      if (*puVar4 != 0) {
        FUN_006e56b0(*(void **)((int)local_10 + 0xc),*puVar4);
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    if (*(int *)((int)local_10 + 0x21f0) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)((int)local_10 + 0x21f0));
      *(undefined4 *)((int)local_10 + 0x21f0) = 0;
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
    *(undefined1 **)((int)local_10 + 0x21f0) = puVar3;
    if (puVar3 != (undefined1 *)0x0) {
      uVar8 = 0;
      cVar7 = '\x01';
      uVar6 = 0x10;
      iVar5 = 1;
      iVar2 = FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x123);
      uVar6 = thunk_FUN_005aacb0(4,10,0xb4,iVar2,iVar5,uVar6,cVar7,uVar8);
      if (uVar6 != 0) {
        iVar2 = *(int *)((int)local_10 + 0x21f0);
        *(undefined1 *)(iVar2 + 2) = 0;
        *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
        uVar6 = *(uint *)(*(int *)((int)local_10 + 0x21f0) + 3);
        if (-1 < (int)uVar6) {
          FUN_006b3430(DAT_008075a8,uVar6);
        }
        thunk_FUN_005ab0a0();
      }
      FUN_006b5f80(DAT_008075a8,10,0xb4,0xf9,0x121);
      thunk_FUN_00540620(10,0xb4,10,0xb4,0xf9,(byte *)0x123,'\x01',
                         *(BITMAPINFO **)(DAT_0081176c + 0x2c));
    }
    FUN_006b3af0(DAT_008075a8,*(uint *)((int)local_10 + 0x1f80));
  }
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8a60(*(byte **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c),0xfffffffe,
                   *(uint *)(DAT_00802a30 + 0x34),*(uint *)(DAT_00802a30 + 0x38));
      DAT_00858df8 = (undefined4 *)local_54;
      return;
    }
  }
  DAT_00858df8 = (undefined4 *)local_54;
  return;
}

