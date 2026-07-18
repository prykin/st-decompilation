
void __thiscall PrividerTy::DeleteCtrls(PrividerTy *this,char param_1)

{
  code *pcVar1;
  PrividerTy *pPVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  PrividerTy *pPVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  PrividerTy *pPStack_c;
  uint uStack_8;
  
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  pPStack_c = this;
  iVar3 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_50;
    iVar7 = FUN_006ad4d0(s_E____titans_Start_prov_obj_cpp_007ccd28,0x279,0,iVar3,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7ccd28,0x279);
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
  pPVar2 = pPStack_c;
  if (param_1 != '\0') {
    if (*(uint *)(pPStack_c + 0x1a73) != 0) {
      FUN_006e56b0(*(void **)(pPStack_c + 0xc),*(uint *)(pPStack_c + 0x1a73));
    }
    *(undefined4 *)(pPVar2 + 0x1a73) = 0;
    *(undefined4 *)(pPVar2 + 0x1a61) = 0;
    FUN_006b5f80(DAT_008075a8,0x79,0x51,0x22e,0x145);
    if (*(HoloTy **)(pPVar2 + 0x1c96) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pPVar2 + 0x1c96));
      FUN_0072e2b0(*(undefined4 **)(pPVar2 + 0x1c96));
      *(undefined4 *)(pPVar2 + 0x1c96) = 0;
    }
    puVar4 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4[2] = 1;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 3) = 0xffffffff;
      puVar4[1] = 2;
      *(undefined4 *)(puVar4 + 7) = 0;
      *(undefined4 *)(puVar4 + 0xb) = 0;
      *(undefined4 *)(puVar4 + 0xf) = 0;
      *(undefined4 *)(puVar4 + 0x1b) = 1;
      *(undefined4 *)(puVar4 + 0x13) = 1;
      *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar4 + 0x27) = 0;
      *(undefined4 *)(puVar4 + 0x23) = 0;
      *(undefined4 *)(puVar4 + 0x2f) = 1;
      *(undefined4 *)(puVar4 + 0x2b) = 1;
    }
    *(undefined1 **)(pPVar2 + 0x1c96) = puVar4;
    if (puVar4 != (undefined1 *)0x0) {
      uVar10 = 0;
      cVar9 = '\x01';
      uVar8 = 0x10;
      iVar7 = 1;
      iVar3 = FUN_006bf9f0(DAT_008075a8,0x79,0x51,0x22e,0x145);
      uVar8 = HoloTy::Init(*(HoloTy **)(pPVar2 + 0x1c96),2,0x79,0x51,iVar3,iVar7,uVar8,cVar9,uVar10)
      ;
      if (uVar8 != 0) {
        iVar3 = *(int *)(pPVar2 + 0x1c96);
        *(undefined1 *)(iVar3 + 2) = 0;
        *(undefined4 *)(iVar3 + 0x17) = 0xffffffff;
        if (-1 < (int)*(uint *)(*(int *)(pPVar2 + 0x1c96) + 3)) {
          FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(pPVar2 + 0x1c96) + 3));
        }
        HoloTy::NextFas(*(HoloTy **)(pPVar2 + 0x1c96));
      }
      thunk_FUN_00540620(0x79,0x51,0x79,0x51,0x22e,(byte *)0x145,'\x01',
                         *(BITMAPINFO **)(DAT_0081176c + 0x2c));
    }
    if (*(uint *)(pPVar2 + 0x1a7b) != 0xffffffff) {
      FUN_006b3af0(*(int **)(pPVar2 + 0x1abf),*(uint *)(pPVar2 + 0x1a7b));
    }
    if (*(uint *)(pPVar2 + 0x1b0c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(pPVar2 + 0x1b50),*(uint *)(pPVar2 + 0x1b0c));
    }
    if (*(uint *)(pPVar2 + 0x1b9d) != 0xffffffff) {
      FUN_006b3af0(*(int **)(pPVar2 + 0x1be1),*(uint *)(pPVar2 + 0x1b9d));
    }
    pPVar6 = pPVar2 + 0x1c2a;
    uStack_8 = 0x16;
    do {
      FUN_006b3af0(DAT_008075a8,*(uint *)pPVar6);
      pPVar6 = pPVar6 + 4;
      uStack_8 = uStack_8 + -1;
    } while (uStack_8 != 0);
  }
  iVar3 = *(int *)(pPVar2 + 0x1c82);
  uStack_8 = *(uint *)(iVar3 + 0x14);
  if (uStack_8 == 0) {
    uStack_8 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(iVar3 + 8);
  }
  puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
  for (uVar8 = uStack_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (uVar8 = uStack_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  if (*(uint *)(pPVar2 + 0x1c86) != 0) {
    FUN_006e56b0(*(void **)(pPVar2 + 0xc),*(uint *)(pPVar2 + 0x1c86));
    *(undefined4 *)(pPVar2 + 0x1c86) = 0;
    FUN_006b5f80(DAT_008075a8,0x79,0x197,0x22e,0x2e);
    if (*(HoloTy **)(pPVar2 + 0x1c9a) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pPVar2 + 0x1c9a));
      FUN_0072e2b0(*(undefined4 **)(pPVar2 + 0x1c9a));
      *(undefined4 *)(pPVar2 + 0x1c9a) = 0;
    }
    puVar4 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4[2] = 1;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 3) = 0xffffffff;
      puVar4[1] = 2;
      *(undefined4 *)(puVar4 + 7) = 0;
      *(undefined4 *)(puVar4 + 0xb) = 0;
      *(undefined4 *)(puVar4 + 0xf) = 0;
      *(undefined4 *)(puVar4 + 0x1b) = 1;
      *(undefined4 *)(puVar4 + 0x13) = 1;
      *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar4 + 0x27) = 0;
      *(undefined4 *)(puVar4 + 0x23) = 0;
      *(undefined4 *)(puVar4 + 0x2f) = 1;
      *(undefined4 *)(puVar4 + 0x2b) = 1;
    }
    *(undefined1 **)(pPVar2 + 0x1c9a) = puVar4;
    if (puVar4 != (undefined1 *)0x0) {
      uVar10 = 0;
      cVar9 = '\x01';
      uVar8 = 0x10;
      iVar7 = 1;
      iVar3 = FUN_006bf9f0(DAT_008075a8,0x79,0x197,0x22e,0x2e);
      uVar8 = HoloTy::Init(*(HoloTy **)(pPVar2 + 0x1c9a),1,0x79,0x197,iVar3,iVar7,uVar8,cVar9,uVar10
                          );
      if (uVar8 != 0) {
        iVar3 = *(int *)(pPVar2 + 0x1c9a);
        *(undefined1 *)(iVar3 + 2) = 0;
        *(undefined4 *)(iVar3 + 0x17) = 0xffffffff;
        if (-1 < (int)*(uint *)(*(int *)(pPVar2 + 0x1c9a) + 3)) {
          FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(pPVar2 + 0x1c9a) + 3));
        }
        HoloTy::NextFas(*(HoloTy **)(pPVar2 + 0x1c9a));
      }
    }
    thunk_FUN_00540620(0x79,0x197,0x79,0x197,0x22e,(byte *)0x2e,'\x01',
                       *(BITMAPINFO **)(DAT_0081176c + 0x2c));
    FUN_006b3af0(DAT_008075a8,*(uint *)(pPVar2 + 0x1c8a));
  }
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8a60(*(byte **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c),0xfffffffe,
                   *(uint *)(DAT_00802a30 + 0x34),*(uint *)(DAT_00802a30 + 0x38));
      DAT_00858df8 = (undefined4 *)uStack_50;
      return;
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  return;
}

