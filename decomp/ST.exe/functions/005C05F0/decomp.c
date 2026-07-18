
void __fastcall FUN_005c05f0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  int local_8;
  
  local_8 = 4;
  puVar3 = (uint *)(param_1 + 0x8f);
  do {
    if (*puVar3 != 0) {
      FUN_006e56b0(*(void **)(param_1 + 0xc),*puVar3);
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (*(uint *)(param_1 + 0x9f) != 0) {
    FUN_006e56b0(*(void **)(param_1 + 0xc),*(uint *)(param_1 + 0x9f));
    *(undefined4 *)(param_1 + 0x9f) = 0;
  }
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
    }
  }
  FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
  if (*(HoloTy **)(param_1 + 0x453) != (HoloTy *)0x0) {
    HoloTy::Done(*(HoloTy **)(param_1 + 0x453));
    FUN_0072e2b0(*(undefined4 **)(param_1 + 0x453));
    *(undefined4 *)(param_1 + 0x453) = 0;
  }
  if (*(HoloTy **)(param_1 + 0x457) != (HoloTy *)0x0) {
    HoloTy::Done(*(HoloTy **)(param_1 + 0x457));
    FUN_0072e2b0(*(undefined4 **)(param_1 + 0x457));
    *(undefined4 *)(param_1 + 0x457) = 0;
  }
  puVar1 = (undefined1 *)FUN_0072e530(0x33);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1[2] = 1;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    puVar1[1] = 2;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 1;
    *(undefined4 *)(puVar1 + 0x13) = 1;
    *(undefined4 *)(puVar1 + 0x17) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x27) = 0;
    *(undefined4 *)(puVar1 + 0x23) = 0;
    *(undefined4 *)(puVar1 + 0x2f) = 1;
    *(undefined4 *)(puVar1 + 0x2b) = 1;
  }
  *(undefined1 **)(param_1 + 0x453) = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    uVar7 = 0;
    cVar6 = '\x01';
    uVar5 = 0x10;
    iVar4 = 1;
    iVar2 = FUN_006bf9f0(DAT_008075a8,0x47,0x46,0x2bd,0x15e);
    uVar5 = HoloTy::Init(*(HoloTy **)(param_1 + 0x453),2,0x47,0x46,iVar2,iVar4,uVar5,cVar6,uVar7);
    if (uVar5 != 0) {
      iVar2 = *(int *)(param_1 + 0x453);
      *(undefined1 *)(iVar2 + 2) = 0;
      *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
      uVar5 = *(uint *)(*(int *)(param_1 + 0x453) + 3);
      if (-1 < (int)uVar5) {
        FUN_006b3430(DAT_008075a8,uVar5);
      }
      HoloTy::NextFas(*(HoloTy **)(param_1 + 0x453));
    }
    HoloTy::NextFas(*(HoloTy **)(param_1 + 0x453));
  }
  puVar1 = (undefined1 *)FUN_0072e530(0x33);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1[2] = 1;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    puVar1[1] = 2;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 1;
    *(undefined4 *)(puVar1 + 0x13) = 1;
    *(undefined4 *)(puVar1 + 0x17) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x27) = 0;
    *(undefined4 *)(puVar1 + 0x23) = 0;
    *(undefined4 *)(puVar1 + 0x2f) = 1;
    *(undefined4 *)(puVar1 + 0x2b) = 1;
  }
  *(undefined1 **)(param_1 + 0x457) = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    uVar7 = 0;
    cVar6 = '\x01';
    uVar5 = 0x10;
    iVar4 = 1;
    iVar2 = FUN_006bf9f0(DAT_008075a8,0x1a,10,0x2e9,0x32);
    uVar5 = HoloTy::Init(*(HoloTy **)(param_1 + 0x457),3,0x1a,10,iVar2,iVar4,uVar5,cVar6,uVar7);
    if (uVar5 != 0) {
      iVar2 = *(int *)(param_1 + 0x457);
      *(undefined1 *)(iVar2 + 2) = 0;
      *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
      uVar5 = *(uint *)(*(int *)(param_1 + 0x457) + 3);
      if (-1 < (int)uVar5) {
        FUN_006b3430(DAT_008075a8,uVar5);
      }
      HoloTy::NextFas(*(HoloTy **)(param_1 + 0x457));
    }
    HoloTy::NextFas(*(HoloTy **)(param_1 + 0x457));
  }
  thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(param_1 + 0x5d));
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8a60(*(byte **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c),0xfffffffe,
                   *(uint *)(DAT_00802a30 + 0x34),*(uint *)(DAT_00802a30 + 0x38));
      *(undefined1 *)(param_1 + 0x65) = 4;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x65) = 4;
  return;
}

