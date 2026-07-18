
void __thiscall CPanelTy::PaintEnergy(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  CPanelTy CVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar10;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  CPanelTy *pCStack_10;
  uint uStack_c;
  int iStack_8;
  
  if (param_1 == 0) {
    iStack_8 = *(int *)(this + 0x194);
    CVar7 = this[0xc6d];
  }
  else {
    iStack_8 = *(int *)(this + 0x18c);
    CVar7 = this[0xb7f];
  }
  uStack_c = CONCAT31(uStack_c._1_3_,CVar7);
  if ((byte)CVar7 < 0x65) {
    uStack_54 = DAT_00858df8;
    DAT_00858df8 = &uStack_54;
    pCStack_10 = this;
    iVar3 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
    pCVar2 = pCStack_10;
    if (iVar3 != 0) {
      DAT_00858df8 = (undefined4 *)uStack_54;
      iVar6 = FUN_006ad4d0(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x4a,0,iVar3,&DAT_007a4ccc);
      if (iVar6 == 0) {
        FUN_006a5e40(iVar3,0,0x7c23cc,0x4a);
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_1 == 0) {
      iVar3 = FUN_0070b3a0(*(int *)(pCStack_10 + 0x2da),2);
      iVar6 = iStack_8;
      FUN_006b5440(iStack_8,0,199,6,iVar3,0,0xff);
      iVar4 = FUN_0070b3a0(*(int *)(pCVar2 + 0x2da),3);
      iVar3 = (int)((uStack_c & 0xff) * *(int *)(iVar4 + 8)) / 100;
      iVar8 = *(int *)(iVar4 + 8) - iVar3;
      FUN_006b5110(iVar6,0,199,iVar8 + 6,iVar4,0,0,iVar8,*(int *)(iVar4 + 4),iVar3,0xff);
      uVar5 = *(uint *)(pCVar2 + 0x15c);
      if ((int)uVar5 < 0) {
        DAT_00858df8 = (undefined4 *)uStack_54;
        return;
      }
      uVar10 = *(uint *)(pCVar2 + 0xa8);
      uVar9 = *(uint *)(pCVar2 + 0x50);
    }
    else {
      iVar3 = FUN_0070b3a0(*(int *)(pCStack_10 + 0x2da),0);
      iVar6 = iStack_8;
      FUN_006b5440(iStack_8,0,2,6,iVar3,0,0xff);
      iVar4 = FUN_0070b3a0(*(int *)(pCVar2 + 0x2da),1);
      iVar3 = (int)((uStack_c & 0xff) * *(int *)(iVar4 + 8)) / 100;
      iVar8 = *(int *)(iVar4 + 8) - iVar3;
      FUN_006b5110(iVar6,0,2,iVar8 + 6,iVar4,0,0,iVar8,*(int *)(iVar4 + 4),iVar3,0xff);
      uVar5 = *(uint *)(pCVar2 + 0x154);
      if ((int)uVar5 < 0) {
        DAT_00858df8 = (undefined4 *)uStack_54;
        return;
      }
      uVar10 = *(uint *)(pCVar2 + 0xa0);
      uVar9 = *(uint *)(pCVar2 + 0x48);
    }
    FUN_006b3640(DAT_008075a8,uVar5,0xffffffff,uVar9,uVar10);
    DAT_00858df8 = (undefined4 *)uStack_54;
    return;
  }
  return;
}

