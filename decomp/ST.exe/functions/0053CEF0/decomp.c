
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::InitSAMPanel */

void __thiscall SAMPanelTy::InitSAMPanel(SAMPanelTy *this)

{
  code *pcVar1;
  SpecPanelTy *pSVar2;
  int iVar3;
  byte *pbVar4;
  ushort *puVar5;
  LPSTR pCVar6;
  uint *puVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  byte bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 local_5c;
  undefined4 local_58 [17];
  SpecPanelTy *local_14;
  int local_10;
  SpecPanelTy *local_c;
  int local_8;
  
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  local_14 = (SpecPanelTy *)this;
  iVar3 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_14;
  if (iVar3 == 0) {
    DAT_008016ec = local_14;
    SpecPanelTy::InitPanel(local_14,s_BKG_SETANYW_007c77ec,0x2f,2,0xc6,0xc,0x2735,0xc9,0x77);
    puVar19 = (undefined4 *)0x0;
    iVar16 = 0;
    iVar3 = 1;
    bVar13 = 0;
    uVar11 = 0xffffffff;
    pbVar4 = (byte *)thunk_FUN_00571240(s_BUT_PRODWEAP_007c201c,0);
    puVar5 = FUN_00709af0(DAT_00806794,0xb,pbVar4,uVar11,bVar13,iVar3,iVar16,puVar19);
    local_c = pSVar2 + 0x1b5;
    *(ushort **)(pSVar2 + 0x1b1) = puVar5;
    iVar3 = 0xb4ff;
    local_8 = 0x17;
    local_10 = 6;
    do {
      uVar20 = 1;
      uVar17 = 0;
      uVar15 = 0;
      iVar18 = *(int *)pSVar2;
      uVar14 = 0;
      iVar16 = iVar3 + 0x10;
      uVar12 = 0;
      uVar9 = 0;
      iVar8 = 1;
      iVar10 = iVar3;
      pCVar6 = thunk_FUN_00571240(s_BUT_PRODWEAP_007c201c,0);
      pCVar6 = FUN_006f2c00(pCVar6,iVar8,uVar9);
      iVar8 = local_8;
      uVar9 = (**(code **)(iVar18 + 4))
                        (0,1,0x24,local_8 + 1,0,1,1,pCVar6,iVar10,iVar16,uVar12,uVar14,uVar15,uVar17
                         ,uVar20);
      *(undefined4 *)local_c = uVar9;
      pbVar4 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(pSVar2 + 0x189),*(int *)(pSVar2 + 0x185),0,
                                           0x37,iVar8,0xd2,0xc,0);
      if (pbVar4 != (byte *)0x0) {
        uVar9 = 0;
        iVar18 = -1;
        iVar16 = 0;
        puVar7 = (uint *)FUN_006b0140(iVar3 - 0x842b,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(pSVar2 + 0x189),puVar7,iVar16,iVar18,uVar9);
        thunk_FUN_00540760(*(undefined4 **)(pSVar2 + 0x68),0x37,local_8,'\x01',pbVar4);
        ccFntTy::EraseSufr(*(ccFntTy **)(pSVar2 + 0x189));
      }
      iVar3 = iVar3 + 1;
      local_c = local_c + 4;
      local_8 = local_8 + 0xb;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    uVar21 = 1;
    iVar3 = *(int *)pSVar2;
    uVar20 = 0;
    uVar17 = 0;
    uVar15 = 0;
    uVar14 = 0;
    uVar12 = 0xb518;
    uVar9 = 0xb508;
    pCVar6 = thunk_FUN_00571240(s_BUT_BIG_007c77e0,0);
    uVar9 = (**(code **)(iVar3 + 4))
                      (0,1,0xa0,0x5c,0,1,1,pCVar6,uVar9,uVar12,uVar14,uVar15,uVar17,uVar20,uVar21);
    *(undefined4 *)(pSVar2 + 0x1cd) = uVar9;
    DAT_00858df8 = (undefined4 *)local_5c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_5c;
  iVar16 = FUN_006ad4d0(s_E____titans_Andrey_setamine_cpp_007c7798,0x29,0,iVar3,&DAT_007a4ccc);
  if (iVar16 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c7798,0x29);
  return;
}

