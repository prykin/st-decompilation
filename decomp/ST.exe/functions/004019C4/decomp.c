
void __thiscall CPanelTy::PaintLife(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *this_00;
  undefined4 *puVar2;
  byte bVar3;
  CPanelTy CVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined4 extraout_EDX;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  UINT UVar9;
  undefined4 uStack_5c;
  undefined4 auStack_58 [16];
  CPanelTy *pCStack_18;
  undefined4 *puStack_14;
  uint uStack_10;
  uint uStack_c;
  CPanelTy CStack_5;
  
  if (param_1 == 0) {
    puStack_14 = *(undefined4 **)(this + 0x19c);
    CVar4 = this[0xc6c];
  }
  else {
    puStack_14 = *(undefined4 **)(this + 0x184);
    CVar4 = this[0xb7e];
  }
  uStack_c = CONCAT31(uStack_c._1_3_,CVar4);
  if (param_1 == 0) {
    CStack_5 = this[0xc53];
  }
  else {
    CStack_5 = this[0xb65];
  }
  if ((byte)CVar4 < 0x65) {
    uStack_5c = DAT_00858df8;
    DAT_00858df8 = &uStack_5c;
    pCStack_18 = this;
    iVar5 = __setjmp3(auStack_58,0,unaff_EDI,unaff_ESI);
    puVar2 = puStack_14;
    this_00 = pCStack_18;
    if (iVar5 == 0) {
      bVar3 = (byte)uStack_c;
      cVar7 = (char)(((uStack_c & 0xff) * 7) / 10);
      uStack_10 = CONCAT31(uStack_10._1_3_,cVar7);
      if (((byte)uStack_c != 0) && (cVar7 == '\0')) {
        uStack_10 = CONCAT31(uStack_10._1_3_,1);
      }
      if ((byte)uStack_c < 0x46) {
        iVar5 = (-(uint)((byte)uStack_c < 0x14) & 6) + 6;
      }
      else {
        iVar5 = 0;
      }
      FUN_006b55f0(puStack_14,0,5,0x1f,*(int *)(pCStack_18 + 0x286),0,0,iVar5,uStack_10 & 0xff,6);
      if ((param_1 == 0) && (CStack_5 == (CPanelTy)0x2)) {
        UVar9 = 0x36ba;
        uVar8 = uStack_c;
      }
      else {
        UVar9 = 0x36b1;
        uVar8 = CONCAT31((int3)((uint)extraout_EDX >> 8),'d' - bVar3);
      }
      PaintDamageXY(this_00,(int)puVar2,5,0x27,uVar8,UVar9);
      DAT_00858df8 = (undefined4 *)uStack_5c;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_5c;
    iVar6 = FUN_006ad4d0(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x2f,0,iVar5,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7c23cc,0x2f);
  }
  return;
}

