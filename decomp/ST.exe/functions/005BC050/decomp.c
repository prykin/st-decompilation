
void FUN_005bc050(char param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  uint local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar6 = FUN_006ad4d0(s_E____titans_Start_prov_obj_cpp_007ccd28,0x279,0,iVar2,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7ccd28,0x279);
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
  if (param_1 != '\0') {
    if (*(uint *)(local_c + 0x1a73) != 0) {
      FUN_006e56b0(*(void **)(local_c + 0xc),*(uint *)(local_c + 0x1a73));
    }
    *(undefined4 *)(local_c + 0x1a73) = 0;
    *(undefined4 *)(local_c + 0x1a61) = 0;
    FUN_006b5f80(DAT_008075a8,0x79,0x51,0x22e,0x145);
    if (*(int *)(local_c + 0x1c96) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(local_c + 0x1c96));
      *(undefined4 *)(local_c + 0x1c96) = 0;
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
    *(undefined1 **)(local_c + 0x1c96) = puVar3;
    if (puVar3 != (undefined1 *)0x0) {
      uVar9 = 0;
      cVar8 = '\x01';
      uVar7 = 0x10;
      iVar6 = 1;
      iVar2 = FUN_006bf9f0(DAT_008075a8,0x79,0x51,0x22e,0x145);
      uVar7 = thunk_FUN_005aacb0(2,0x79,0x51,iVar2,iVar6,uVar7,cVar8,uVar9);
      if (uVar7 != 0) {
        iVar2 = *(int *)(local_c + 0x1c96);
        *(undefined1 *)(iVar2 + 2) = 0;
        *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
        uVar7 = *(uint *)(*(int *)(local_c + 0x1c96) + 3);
        if (-1 < (int)uVar7) {
          FUN_006b3430(DAT_008075a8,uVar7);
        }
        thunk_FUN_005ab0a0();
      }
      thunk_FUN_00540620(0x79,0x51,0x79,0x51,0x22e,(byte *)0x145,'\x01',
                         *(BITMAPINFO **)(DAT_0081176c + 0x2c));
    }
    if (*(uint *)(local_c + 0x1a7b) != 0xffffffff) {
      FUN_006b3af0(*(int **)(local_c + 0x1abf),*(uint *)(local_c + 0x1a7b));
    }
    if (*(uint *)(local_c + 0x1b0c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(local_c + 0x1b50),*(uint *)(local_c + 0x1b0c));
    }
    if (*(uint *)(local_c + 0x1b9d) != 0xffffffff) {
      FUN_006b3af0(*(int **)(local_c + 0x1be1),*(uint *)(local_c + 0x1b9d));
    }
    puVar5 = (uint *)(local_c + 0x1c2a);
    local_8 = 0x16;
    do {
      FUN_006b3af0(DAT_008075a8,*puVar5);
      puVar5 = puVar5 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  iVar2 = *(int *)(local_c + 0x1c82);
  local_8 = *(uint *)(iVar2 + 0x14);
  if (local_8 == 0) {
    local_8 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
  }
  puVar4 = (undefined4 *)FUN_006b4fa0(iVar2);
  for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  if (*(uint *)(local_c + 0x1c86) != 0) {
    FUN_006e56b0(*(void **)(local_c + 0xc),*(uint *)(local_c + 0x1c86));
    *(undefined4 *)(local_c + 0x1c86) = 0;
    FUN_006b5f80(DAT_008075a8,0x79,0x197,0x22e,0x2e);
    if (*(int *)(local_c + 0x1c9a) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(local_c + 0x1c9a));
      *(undefined4 *)(local_c + 0x1c9a) = 0;
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
    *(undefined1 **)(local_c + 0x1c9a) = puVar3;
    if (puVar3 != (undefined1 *)0x0) {
      uVar9 = 0;
      cVar8 = '\x01';
      uVar7 = 0x10;
      iVar6 = 1;
      iVar2 = FUN_006bf9f0(DAT_008075a8,0x79,0x197,0x22e,0x2e);
      uVar7 = thunk_FUN_005aacb0(1,0x79,0x197,iVar2,iVar6,uVar7,cVar8,uVar9);
      if (uVar7 != 0) {
        iVar2 = *(int *)(local_c + 0x1c9a);
        *(undefined1 *)(iVar2 + 2) = 0;
        *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
        uVar7 = *(uint *)(*(int *)(local_c + 0x1c9a) + 3);
        if (-1 < (int)uVar7) {
          FUN_006b3430(DAT_008075a8,uVar7);
        }
        thunk_FUN_005ab0a0();
      }
    }
    thunk_FUN_00540620(0x79,0x197,0x79,0x197,0x22e,(byte *)0x2e,'\x01',
                       *(BITMAPINFO **)(DAT_0081176c + 0x2c));
    FUN_006b3af0(DAT_008075a8,*(uint *)(local_c + 0x1c8a));
  }
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8a60(*(byte **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c),0xfffffffe,
                   *(uint *)(DAT_00802a30 + 0x34),*(uint *)(DAT_00802a30 + 0x38));
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
  }
  DAT_00858df8 = (undefined4 *)local_50;
  return;
}

