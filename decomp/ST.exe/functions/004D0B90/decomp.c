
int FUN_004d0b90(int param_1)

{
  short *psVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  byte *pbVar6;
  int iVar7;
  void *unaff_EDI;
  STSprGameObjC *pSVar8;
  byte *pbVar9;
  undefined4 local_50;
  undefined4 local_4c [16];
  STSprGameObjC *local_c;
  byte *local_8;
  
  pSVar8 = (STSprGameObjC *)0x0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar7 = FUN_006ad4d0(s_E____titans_Artem_TLO_dock_cpp_007bf39c,0x341,0,iVar3,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    FUN_006a5e40(iVar3,0,0x7bf39c,0x342);
    return iVar3;
  }
  STSprGameObjC::GetMessage(local_c,param_1);
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 2) {
    DAT_00800bcc = local_c;
    *(undefined4 *)(local_c + 0x20) = 0x3ea;
    *(undefined4 *)(local_c + 0x28) = 2;
    local_8 = *(byte **)(param_1 + 0x14);
    if (local_c != (STSprGameObjC *)0x0) {
      pSVar8 = local_c + 0x231;
    }
    pbVar6 = local_8;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pSVar8 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pSVar8 = pSVar8 + 4;
    }
    if (*(int *)(local_c + 0x23d) == 2) {
      if (*(int *)(local_c + 0x249) != 0) {
        iVar3 = FUN_006aac70(*(int *)(local_c + 0x249) * 0xc);
        *(int *)(local_c + 0x24d) = iVar3;
      }
      if (*(int *)(local_c + 0x245) != 0) {
        pbVar6 = local_8 + 0x1c;
        pbVar9 = *(byte **)(local_c + 0x24d);
        for (uVar5 = *(int *)(local_c + 0x245) * 3 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
          pbVar6 = pbVar6 + 4;
          pbVar9 = pbVar9 + 4;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pbVar9 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          pbVar9 = pbVar9 + 1;
        }
        iVar3 = 0;
        if (0 < *(int *)(local_c + 0x245)) {
          iVar7 = 0;
          do {
            psVar1 = (short *)(*(int *)(local_c + 0x24d) + iVar7);
            iVar4 = DumpClassC::WritePtr
                              (*psVar1,*(short *)(*(int *)(local_c + 0x24d) + 4 + iVar7),psVar1[4],0
                               ,(int)local_c);
            if (iVar4 != 0) {
              FUN_006a5e40(iVar4,DAT_007ed77c,0x7bf39c,0x326);
            }
            iVar3 = iVar3 + 1;
            iVar7 = iVar7 + 0xc;
          } while (iVar3 < *(int *)(local_c + 0x245));
        }
      }
    }
  }
  else if (iVar3 == 3) {
    DAT_00800bcc = (STSprGameObjC *)0x0;
    thunk_FUN_004ad310((int)(local_c + 0x1d5));
    if (*(int *)(local_c + 0x24d) != 0) {
      FUN_006ab060((undefined4 *)(local_c + 0x24d));
      DAT_00858df8 = (undefined4 *)local_50;
      return 0;
    }
  }
  else if (iVar3 == 0x10f) {
    local_8 = (byte *)FUN_006aac70(*(int *)(local_c + 0x245) * 0xc + 0x1c);
    if (local_c == (STSprGameObjC *)0x0) {
      pSVar8 = (STSprGameObjC *)0x0;
    }
    else {
      pSVar8 = local_c + 0x231;
    }
    pbVar6 = local_8;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pbVar6 = *(undefined4 *)pSVar8;
      pSVar8 = pSVar8 + 4;
      pbVar6 = pbVar6 + 4;
    }
    local_8[0xc] = 2;
    local_8[0xd] = 0;
    local_8[0xe] = 0;
    local_8[0xf] = 0;
    if (*(int *)(local_c + 0x245) != 0) {
      pbVar6 = *(byte **)(local_c + 0x24d);
      pbVar9 = local_8 + 0x1c;
      for (uVar5 = *(int *)(local_c + 0x245) * 3 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
        pbVar6 = pbVar6 + 4;
        pbVar9 = pbVar9 + 4;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pbVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        pbVar9 = pbVar9 + 1;
      }
    }
    STPlaySystemC::SaveObjData
              (DAT_00802a38,*(undefined4 *)(local_c + 0x18),local_8,
               *(int *)(local_c + 0x245) * 0xc + 0x1c);
    FUN_006ab060(&local_8);
    DAT_00858df8 = (undefined4 *)local_50;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  return 0;
}

