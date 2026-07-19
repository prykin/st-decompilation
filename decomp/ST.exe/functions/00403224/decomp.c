
undefined4 * __thiscall VisibleClassTy::PrepareToSave(VisibleClassTy *this,uint *param_1)

{
  code *pcVar1;
  VisibleClassTy *pVVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  void *unaff_EDI;
  undefined4 *puVar8;
  InternalExceptionFrame IStack_68;
  VisibleClassTy *pVStack_24;
  undefined4 *puStack_20;
  VisibleClassTy *pVStack_1c;
  uint uStack_18;
  undefined4 *puStack_14;
  uint uStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  
  puStack_8 = (undefined4 *)0x0;
  puStack_c = (undefined4 *)0x0;
  uStack_10 = 0;
  puStack_14 = (undefined4 *)0x0;
  uStack_18 = 0;
  IStack_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_68;
  pVStack_24 = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pVVar2 = pVStack_24;
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_68.previous;
    if (puStack_c != (undefined4 *)0x0) {
      FUN_006ab060(&puStack_c);
    }
    if (puStack_14 != (undefined4 *)0x0) {
      FUN_006ab060(&puStack_14);
    }
    if (puStack_8 != (undefined4 *)0x0) {
      FUN_006ab060(&puStack_8);
    }
    iVar5 = ReportDebugMessage(s_E____titans_grig_visible_cpp_007c92cc,0x105,0,iVar3,&DAT_007a4ccc,
                               s_VisibleClassTy__PrepareToSave_er_007c932c);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      puVar4 = (undefined4 *)(*pcVar1)();
      return puVar4;
    }
    RaiseInternalException(iVar3,0,s_E____titans_grig_visible_cpp_007c92cc,0x106);
    return (undefined4 *)0x0;
  }
  if (*(int *)(pVStack_24 + 0x114) != 0) {
    puStack_c = (undefined4 *)FUN_006b0020(*(uint **)(pVStack_24 + 0xf4),(int *)&uStack_10);
    puStack_14 = (undefined4 *)FUN_006b0020(*(uint **)(pVVar2 + 0x110),(int *)&uStack_18);
    if (*(int *)(pVVar2 + 0x114) != 0) {
      iVar3 = *(int *)(pVVar2 + 0x2c) * *(int *)(pVVar2 + 0x28) * 4;
      goto LAB_0055832e;
    }
  }
  iVar3 = 0;
LAB_0055832e:
  uVar6 = iVar3 + uStack_18 + 0x81 + uStack_10;
  *param_1 = uVar6;
  puStack_8 = Library::DKW::LIB::FUN_006aac10(uVar6);
  *puStack_8 = 0x50;
  puStack_8[1] = 0xff;
  puStack_8[2] = 2;
  puStack_8[5] = 1;
  puStack_8[6] = *(undefined4 *)(pVVar2 + 0x20);
  puStack_8[7] = *(undefined4 *)(pVVar2 + 0x24);
  puStack_8[8] = *(undefined4 *)(pVVar2 + 0x28);
  puStack_8[9] = *(undefined4 *)(pVVar2 + 0x2c);
  puStack_8[10] = *(undefined4 *)(pVVar2 + 0x30);
  puStack_8[0xb] = *(undefined4 *)(pVVar2 + 0x34);
  puStack_8[0xc] = *(undefined4 *)(pVVar2 + 0x1c);
  puStack_8[0x10] = *(undefined4 *)(pVVar2 + 0x114);
  puStack_8[0x11] = *(undefined4 *)(pVVar2 + 0xf8);
  puStack_8[0xd] = (uint)DAT_0080874d;
  puStack_8[0xe] = uStack_10;
  puStack_8[0xf] = uStack_18;
  puStack_8[0x12] = *(undefined4 *)(pVVar2 + 0xfc);
  puStack_8[0x13] = *(undefined4 *)(pVVar2 + 0x100);
  if (*(int *)(pVVar2 + 0x114) != 0) {
    pVStack_1c = pVVar2 + 0x3c;
    puVar4 = puStack_8 + 0x20;
    puStack_20 = (undefined4 *)0x4;
    do {
      if (*(undefined4 **)pVStack_1c != (undefined4 *)0x0) {
        iVar3 = *(int *)(pVVar2 + 0x28);
        iVar5 = *(int *)(pVVar2 + 0x2c);
        puVar7 = *(undefined4 **)pVStack_1c;
        puVar8 = puVar4;
        for (uVar6 = (uint)(iVar3 * iVar5) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar6 = iVar3 * iVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        puVar4 = (undefined4 *)((int)puVar4 + *(int *)(pVVar2 + 0x28) * *(int *)(pVVar2 + 0x2c));
      }
      pVStack_1c = pVStack_1c + 4;
      puStack_20 = (undefined4 *)((int)puStack_20 + -1);
    } while (puStack_20 != (undefined4 *)0x0);
    puStack_20 = (undefined4 *)0x0;
    if (puStack_c != (undefined4 *)0x0) {
      puVar7 = puStack_c;
      puVar8 = puVar4;
      for (uVar6 = uStack_10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uStack_10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puStack_20 = (undefined4 *)((int)puVar4 + uStack_10);
      FUN_006ab060(&puStack_c);
      puVar4 = puStack_20;
    }
    if (puStack_14 != (undefined4 *)0x0) {
      puVar7 = puStack_14;
      for (uVar6 = uStack_18 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar6 = uStack_18 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      FUN_006ab060(&puStack_14);
    }
  }
  g_currentExceptionFrame = IStack_68.previous;
  return puStack_8;
}

