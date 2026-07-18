
void __thiscall CPanelTy::UpdateStackPanel(CPanelTy *this,uint param_1)

{
  code *pcVar1;
  CPanelTy *this_00;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  ushort *puVar5;
  byte bVar6;
  undefined4 unaff_ESI;
  CPanelTy *pCVar7;
  CPanelTy *pCVar8;
  void *unaff_EDI;
  CPanelTy *pCVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  CPanelTy aCStack_ac [68];
  undefined4 uStack_68;
  undefined4 auStack_64 [16];
  CPanelTy *pCStack_24;
  CPanelTy *pCStack_20;
  uint uStack_1c;
  CPanelTy *pCStack_18;
  CPanelTy *pCStack_14;
  CPanelTy *pCStack_10;
  CPanelTy *pCStack_c;
  byte bStack_5;
  
  if (0x3ff < DAT_00806730) {
    uStack_68 = DAT_00858df8;
    DAT_00858df8 = &uStack_68;
    pCStack_24 = this;
    iVar3 = __setjmp3(auStack_64,0,unaff_EDI,unaff_ESI);
    this_00 = pCStack_24;
    if (iVar3 == 0) {
      pCStack_c = (CPanelTy *)(param_1 & 0xff);
      pCVar8 = pCStack_24 + (int)pCStack_c * 0x42 + 0xc87;
      pCVar7 = pCVar8;
      pCVar9 = aCStack_ac;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(int *)pCVar9 = *(int *)pCVar7;
        pCVar7 = pCVar7 + 4;
        pCVar9 = pCVar9 + 4;
      }
      pCStack_18 = pCVar8;
      *(undefined2 *)pCVar9 = *(undefined2 *)pCVar7;
      thunk_FUN_0043beb0(DAT_007fa174,CONCAT31((int3)(param_1 >> 8),(char)param_1 + '\x0e'),
                         (int *)pCVar8);
      pCVar8 = pCStack_c;
      uStack_1c = uStack_1c & 0xffffff00;
      bVar2 = ((DAT_00806730 != 0x400) - 1U & 0xfc) + 6;
      bStack_5 = bVar2;
      if (bVar2 != 0) {
        pCStack_20 = aCStack_ac;
        pCStack_c = pCStack_18;
        pCStack_10 = this_00 + (int)pCVar8 * 6 + 0xd3b;
        pCStack_14 = this_00 + (int)pCVar8 * 0x18 + 0xd53;
        do {
          iVar3 = 0xb;
          bVar10 = true;
          pCVar8 = pCStack_20;
          pCVar7 = pCStack_c;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar10 = *pCVar8 == *pCVar7;
            pCVar8 = pCVar8 + 1;
            pCVar7 = pCVar7 + 1;
          } while (bVar10);
          if ((!bVar10) && (pCStack_10[0xc] == (CPanelTy)0x1)) {
            puVar13 = (undefined4 *)0x0;
            iVar12 = 0;
            iVar3 = 1;
            bVar2 = 0;
            uVar11 = 6;
            pbVar4 = (byte *)thunk_FUN_004f1d20(pCStack_c);
            puVar5 = FUN_00709af0(DAT_00806794,0x1f,pbVar4,uVar11,bVar2,iVar3,iVar12,puVar13);
            *(ushort **)(pCStack_14 + -0x48) = puVar5;
            *pCStack_10 = (CPanelTy)0x0;
            *(undefined4 *)pCStack_14 = *(undefined4 *)(this_00 + 0x38);
            thunk_FUN_004f1c80(this_00,param_1,uStack_1c);
            bVar6 = ((char)param_1 == '\0') + 9;
            pCStack_18 = (CPanelTy *)CONCAT31(pCStack_18._1_3_,bVar6);
            bVar2 = bStack_5;
            if (bVar6 < 0xb) {
              uVar11 = (uint)bVar6;
              if (-1 < (int)*(uint *)(this_00 + uVar11 * 4 + 0x148)) {
                FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + uVar11 * 4 + 0x148),0xffffffff,
                             *(uint *)(this_00 + uVar11 * 4 + 0x3c),
                             *(uint *)(this_00 + uVar11 * 4 + 0x94));
                bVar2 = bStack_5;
              }
            }
          }
          bVar6 = (char)uStack_1c + 1;
          pCStack_14 = pCStack_14 + 4;
          pCStack_20 = pCStack_20 + 0xb;
          pCStack_c = pCStack_c + 0xb;
          uStack_1c = CONCAT31(uStack_1c._1_3_,bVar6);
          pCStack_10 = pCStack_10 + 1;
        } while (bVar6 < bVar2);
      }
      DAT_00858df8 = (undefined4 *)uStack_68;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_68;
    iVar12 = FUN_006ad4d0(s_E____titans_Andrey_cpanel3_cpp_007c26a0,0x2a,0,iVar3,&DAT_007a4ccc);
    if (iVar12 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c26a0,0x2a);
  }
  return;
}

