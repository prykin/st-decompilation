
uint __cdecl FUN_0067f950(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  byte *pbVar7;
  void *unaff_EDI;
  bool bVar8;
  undefined4 local_4c;
  undefined4 local_48 [16];
  undefined4 local_8;
  
  local_8 = 0;
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  uVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (uVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    if (-1 < (int)uVar3) {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
  uVar3 = 0;
  iVar2 = *(int *)(DAT_00848a34 + 8);
  if (0 < iVar2) {
    if (iVar2 < 1) {
      pbVar7 = (byte *)0x0;
      pbVar4 = param_1;
      goto LAB_0067f9ac;
    }
    do {
      pbVar7 = *(byte **)(*(int *)(DAT_00848a34 + 0x14) + uVar3 * 4);
      pbVar4 = param_1;
LAB_0067f9ac:
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_0067f9d0:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0067f9d5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_0067f9d0;
        pbVar7 = pbVar7 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_0067f9d5:
      if (iVar5 == 0) goto LAB_0067f9e1;
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar2);
  }
  uVar3 = 0xffffffff;
LAB_0067f9e1:
  if ((int)uVar3 < 0) {
    uVar3 = FUN_006b5aa0(DAT_00848a34,(char *)param_1);
    local_8 = 0;
    uVar6 = FUN_006ae1c0(DAT_00848a30,&local_8);
    if (uVar6 != uVar3) {
      FUN_006a5e40(-5,DAT_007ed77c,0x7d55d8,0x195);
    }
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return uVar3;
}

