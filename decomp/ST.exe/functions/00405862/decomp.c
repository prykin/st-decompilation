
uint __thiscall CPanelTy::PaintPerRes(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *this_00;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar7;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  uint uStack_10;
  CPanelTy *pCStack_c;
  uint uStack_8;
  
  uStack_54 = DAT_00858df8;
  DAT_00858df8 = &uStack_54;
  pCStack_c = this;
  iVar2 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  this_00 = pCStack_c;
  if (iVar2 == 0) {
    PaintDamageXY(pCStack_c,*(int *)(pCStack_c + 0x194),param_1 + 0x39,0x65,
                  (uint)(byte)pCStack_c[0xc33],0x2714);
    PaintCostsXY(this_00,*(int *)(this_00 + 0x194),param_1 + 0x39,0x70,*(ushort *)(this_00 + 0xc1c),
                 0xffff,3,0);
    uStack_8 = uStack_8 & 0xffffff00;
    uStack_10 = ((uint)(byte)this_00[0xc33] * 0x28) / 100;
    uVar4 = (uint)(byte)this_00[0xc33] * -0x33333328;
    if (uStack_10 != 0) {
      uVar7 = 0;
      do {
        pbVar3 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),3);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),param_1 + 0xb + uVar7 * 4,0x5c,'\x01',
                           pbVar3);
        bVar5 = (byte)uStack_8 + 1;
        uStack_8 = CONCAT31(uStack_8._1_3_,bVar5);
        uVar7 = (uint)bVar5;
        uVar4 = uStack_10;
      } while (uVar7 < uStack_10);
    }
    if ((byte)uStack_8 < 0x28) {
      iVar2 = param_1 + 0xb + (uStack_8 & 0xff) * 4;
      iVar6 = 0x28 - (uStack_8 & 0xff);
      do {
        pbVar3 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
        uVar4 = thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),iVar2,0x5c,'\x01',pbVar3);
        iVar2 = iVar2 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    DAT_00858df8 = (undefined4 *)uStack_54;
    return uVar4;
  }
  DAT_00858df8 = (undefined4 *)uStack_54;
  iVar6 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x57,0,iVar2,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  uVar4 = FUN_006a5e40(iVar2,0,0x7c2700,0x57);
  return uVar4;
}

