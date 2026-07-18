
void __thiscall PopUpTy::Clear(PopUpTy *this)

{
  code *pcVar1;
  PopUpTy *pPVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  uint uVar8;
  PopUpTy *pPVar9;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  PopUpTy *pPStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pPStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  pPVar2 = pPStack_8;
  if (iVar3 == 0) {
    if (pPStack_8[0x9c] != (PopUpTy)0x0) {
      if (*(byte **)(pPStack_8 + 0x98) != (byte *)0x0) {
        FUN_006b5570(*(byte **)(pPStack_8 + 0x98));
      }
      puVar4 = FUN_006b54f0((uint *)0x0,10,10);
      *(uint **)(pPVar2 + 0x98) = puVar4;
      iVar3 = *(int *)(pPVar2 + 0x90);
      uVar8 = *(uint *)(iVar3 + 0x14);
      if (uVar8 == 0) {
        uVar8 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar3 + 8);
      }
      puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
      for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar5 = 0x89898989;
        puVar5 = puVar5 + 1;
      }
      pPVar9 = pPVar2 + 0x18;
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar5 = 0x89;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      iVar3 = 0xf;
      do {
        *(uint *)(pPVar9 + 0x3c) = 0;
        FUN_006b2800((int)DAT_008075a8,*(uint *)pPVar9,0,0x13);
        FUN_006b3af0(DAT_008075a8,*(uint *)pPVar9);
        pPVar9 = pPVar9 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      pPVar2[0x9c] = (PopUpTy)0x0;
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar6 = FUN_006ad4d0(s_E____titans_Andrey_mpopup_cpp_007c6f84,0xa8,0,iVar3,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c6f84,0xa8);
  return;
}

