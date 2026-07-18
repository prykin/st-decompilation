
void FUN_0053cef0(void)

{
  code *pcVar1;
  int iVar2;
  byte *pbVar3;
  ushort *puVar4;
  LPSTR pCVar5;
  uint *puVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  byte bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 local_5c;
  undefined4 local_58 [17];
  int *local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  iVar2 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    DAT_008016ec = local_14;
    thunk_FUN_0053e3f0(s_BKG_SETANYW_007c77ec,0x2f,2,0xc6,0xc,0x2735,0xc9,0x77);
    puVar18 = (undefined4 *)0x0;
    iVar15 = 0;
    iVar2 = 1;
    bVar12 = 0;
    uVar10 = 0xffffffff;
    pbVar3 = (byte *)thunk_FUN_00571240(s_BUT_PRODWEAP_007c201c,0);
    puVar4 = FUN_00709af0(DAT_00806794,0xb,pbVar3,uVar10,bVar12,iVar2,iVar15,puVar18);
    local_c = (undefined4 *)((int)local_14 + 0x1b5);
    *(ushort **)((int)local_14 + 0x1b1) = puVar4;
    iVar2 = 0xb4ff;
    local_8 = 0x17;
    local_10 = 6;
    do {
      uVar19 = 1;
      uVar16 = 0;
      uVar14 = 0;
      iVar17 = *local_14;
      uVar13 = 0;
      iVar15 = iVar2 + 0x10;
      uVar11 = 0;
      uVar8 = 0;
      iVar7 = 1;
      iVar9 = iVar2;
      pCVar5 = thunk_FUN_00571240(s_BUT_PRODWEAP_007c201c,0);
      pCVar5 = FUN_006f2c00(pCVar5,iVar7,uVar8);
      iVar7 = local_8;
      uVar8 = (**(code **)(iVar17 + 4))
                        (0,1,0x24,local_8 + 1,0,1,1,pCVar5,iVar9,iVar15,uVar11,uVar13,uVar14,uVar16,
                         uVar19);
      *local_c = uVar8;
      pbVar3 = (byte *)FUN_00710ba0(*(int *)((int)local_14 + 0x185),0,0x37,iVar7,0xd2,0xc,0);
      if (pbVar3 != (byte *)0x0) {
        uVar8 = 0;
        iVar17 = -1;
        iVar15 = 0;
        puVar6 = (uint *)FUN_006b0140(iVar2 - 0x842b,DAT_00807618);
        FUN_007119c0(puVar6,iVar15,iVar17,uVar8);
        thunk_FUN_00540760((undefined4 *)local_14[0x1a],0x37,local_8,'\x01',pbVar3);
        FUN_00710f00();
      }
      iVar2 = iVar2 + 1;
      local_c = local_c + 1;
      local_8 = local_8 + 0xb;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    uVar20 = 1;
    iVar2 = *local_14;
    uVar19 = 0;
    uVar16 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar11 = 0xb518;
    uVar8 = 0xb508;
    pCVar5 = thunk_FUN_00571240(s_BUT_BIG_007c77e0,0);
    uVar8 = (**(code **)(iVar2 + 4))
                      (0,1,0xa0,0x5c,0,1,1,pCVar5,uVar8,uVar11,uVar13,uVar14,uVar16,uVar19,uVar20);
    *(undefined4 *)((int)local_14 + 0x1cd) = uVar8;
    DAT_00858df8 = (undefined4 *)local_5c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_5c;
  iVar15 = FUN_006ad4d0(s_E____titans_Andrey_setamine_cpp_007c7798,0x29,0,iVar2,&DAT_007a4ccc);
  if (iVar15 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c7798,0x29);
  return;
}

