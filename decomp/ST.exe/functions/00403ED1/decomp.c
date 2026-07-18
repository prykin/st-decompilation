
uint __thiscall CPanelTy::PaintPerResSI(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar8;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  uint uStack_10;
  CPanelTy *pCStack_c;
  uint uStack_8;
  
  uStack_54 = DAT_00858df8;
  DAT_00858df8 = &uStack_54;
  pCStack_c = this;
  iVar3 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  pCVar2 = pCStack_c;
  if (iVar3 == 0) {
    PaintDamageXY(pCStack_c,*(int *)(pCStack_c + 0x194),0x5c,0x50,(uint)(byte)pCStack_c[0xc33],
                  0x2714);
    pbVar4 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b2),1);
    thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),0x33,0x7b,'\x01',pbVar4);
    bVar6 = 0;
    uStack_8 = uStack_8 & 0xffffff00;
    uStack_10 = ((uint)(byte)pCVar2[0xc33] * 0x21) / 100;
    uVar5 = (uint)(byte)pCVar2[0xc33] * -0x70a3d701;
    if (uStack_10 != 0) {
      uVar8 = 0;
      do {
        pbVar4 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),uVar8 * 4 + 0x35,0x7d,'\x01',pbVar4);
        bVar6 = bVar6 + 1;
        uStack_8 = CONCAT31(uStack_8._1_3_,bVar6);
        uVar8 = (uint)bVar6;
        uVar5 = uStack_10;
      } while (uVar8 < uStack_10);
    }
    if (bVar6 < 0x21) {
      iVar7 = 0x21 - (uStack_8 & 0xff);
      iVar3 = (uStack_8 & 0xff) * 4 + 0x35;
      do {
        pbVar4 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),0);
        uVar5 = thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),iVar3,0x7d,'\x01',pbVar4);
        iVar3 = iVar3 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    DAT_00858df8 = (undefined4 *)uStack_54;
    return uVar5;
  }
  DAT_00858df8 = (undefined4 *)uStack_54;
  iVar7 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x68,0,iVar3,&DAT_007a4ccc);
  if (iVar7 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  uVar5 = FUN_006a5e40(iVar3,0,0x7c2700,0x68);
  return uVar5;
}

