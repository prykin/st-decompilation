
void __thiscall PopUpTy::ChangeState(PopUpTy *this)

{
  code *pcVar1;
  PopUpTy *pPVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_ESI;
  PopUpTy *pPVar8;
  void *unaff_EDI;
  undefined4 uStack_5c;
  undefined4 auStack_58 [16];
  PopUpTy *pPStack_18;
  int iStack_14;
  int iStack_10;
  uint uStack_c;
  PopUpTy PStack_5;
  
  uStack_5c = DAT_00858df8;
  DAT_00858df8 = &uStack_5c;
  pPStack_18 = this;
  iVar3 = __setjmp3(auStack_58,0,unaff_EDI,unaff_ESI);
  pPVar2 = pPStack_18;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_5c;
    iVar6 = FUN_006ad4d0(s_E____titans_Andrey_mpopup_cpp_007c6f84,0x95,0,iVar3,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar3,0,0x7c6f84,0x95);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iStack_10 = -0x18 - (int)pPStack_18;
  PStack_5 = (PopUpTy)0x0;
  iStack_14 = 0;
  uStack_c = 0x1e;
  pPVar8 = pPStack_18 + 0x18;
  do {
    iVar3 = iStack_14;
    if ((DAT_00807342 == 0) || ((byte)pPVar2[0x9c] <= (byte)PStack_5)) {
LAB_0052da81:
      *(uint *)(pPVar8 + 0x3c) = 0;
      FUN_006b2800((int)DAT_008075a8,*(uint *)pPVar8,0,0x13);
      FUN_006b3af0(DAT_008075a8,*(uint *)pPVar8);
    }
    else {
      iVar6 = *(int *)(pPVar2 + 0x98);
      if (iStack_14 < *(int *)(iVar6 + 8)) {
        iVar7 = *(int *)(pPVar8 + *(int *)(iVar6 + 0x14) + iStack_10);
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 == 0) goto LAB_0052da81;
      if (iStack_14 < *(int *)(iVar6 + 8)) {
        puVar4 = *(uint **)(pPVar8 + *(int *)(iVar6 + 0x14) + iStack_10);
      }
      else {
        puVar4 = (uint *)0x0;
      }
      uVar5 = FUN_00711110(*(void **)(pPVar2 + 0x94),puVar4);
      if ((int)*(uint *)(*(int *)(pPVar2 + 0x90) + 4) <= (int)uVar5) {
        uVar5 = *(uint *)(*(int *)(pPVar2 + 0x90) + 4);
      }
      *(uint *)(pPVar8 + 0x3c) = uVar5;
      FUN_006b2800((int)DAT_008075a8,*(uint *)pPVar8,uVar5,0x13);
      FUN_006b3640(DAT_008075a8,*(uint *)pPVar8,0xffffffff,0xd,uStack_c);
      FUN_006b3430(DAT_008075a8,*(uint *)pPVar8);
    }
    PStack_5 = (PopUpTy)((char)PStack_5 + 1);
    iStack_14 = iVar3 + 1;
    pPVar8 = pPVar8 + 4;
    uStack_c = uStack_c + 0x13;
    if (0xe < (byte)PStack_5) {
      DAT_00858df8 = (undefined4 *)uStack_5c;
      return;
    }
  } while( true );
}

