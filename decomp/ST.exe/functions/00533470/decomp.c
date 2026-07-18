
undefined4 FUN_00533470(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_ESI;
  byte *pbVar8;
  void *unaff_EDI;
  uint uVar9;
  bool bVar10;
  undefined4 local_54;
  undefined4 local_50 [17];
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar4 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    iVar6 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x459,0,iVar4,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
    FUN_006a5e40(iVar4,0,0x7c70a0,0x459);
    return 0;
  }
  uVar9 = 0;
  uVar2 = *(uint *)(*(int *)(local_c + 0x1e9) + 8);
  if (uVar2 == 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    return local_8;
  }
  do {
    pbVar8 = param_1;
    if ((int)uVar9 < (int)uVar2) {
      pbVar5 = *(byte **)(*(int *)(*(int *)(local_c + 0x1e9) + 0x14) + uVar9 * 4);
    }
    else {
      pbVar5 = (byte *)0x0;
    }
    do {
      bVar1 = *pbVar5;
      bVar10 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_005334fb:
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_00533500;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar10 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_005334fb;
      pbVar5 = pbVar5 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00533500:
    if (iVar4 == 0) {
      DAT_00858df8 = (undefined4 *)local_54;
      return 1;
    }
    uVar9 = uVar9 + 1;
    if (uVar2 <= uVar9) {
      DAT_00858df8 = (undefined4 *)local_54;
      return local_8;
    }
  } while( true );
}

