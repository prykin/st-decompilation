
byte * __cdecl FUN_0071a270(int param_1,char *param_2,byte param_3,byte param_4)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  char *pcVar10;
  void *unaff_EDI;
  char *pcVar11;
  undefined1 local_458;
  char local_457 [515];
  char local_254 [512];
  ushort *local_54;
  undefined4 local_50;
  undefined4 local_4c [16];
  ushort local_a;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar6 = FUN_006ad4d0(s_E__Ourlib_mfwav_cpp_007f0800,0xf5,0,iVar3,&DAT_007a4ccc);
    if (iVar6 == 0) {
      if (local_8 != (byte *)0x0) {
        FUN_006f20e0((uint *)&local_54);
        if (*(int *)(local_8 + 5) != 0) {
          *(undefined4 *)(*(int *)(local_8 + 5) + 4) = 0;
          iVar6 = FUN_006b1190(*(int *)(local_8 + 5),(undefined4 *)local_254);
          while (-1 < iVar6) {
            FUN_006f20e0((uint *)&local_54);
            iVar6 = FUN_006b1190(*(int *)(local_8 + 5),(undefined4 *)local_254);
          }
          FUN_006ae110(*(byte **)(local_8 + 5));
          local_8[5] = 0;
          local_8[6] = 0;
          local_8[7] = 0;
          local_8[8] = 0;
        }
        FUN_006ab060(&local_8);
      }
      FUN_006a5e40(iVar3,0,0x7f0800,0x105);
      return (byte *)0x0;
    }
    pcVar2 = (code *)swi(3);
    pbVar7 = (byte *)(*pcVar2)();
    return pbVar7;
  }
  if (param_1 == 0) {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7f0800,0xd6);
  }
  local_8 = (byte *)FUN_006aac10(9);
  *(int *)(local_8 + 1) = param_1;
  *local_8 = param_3;
  puVar4 = FUN_006ae290((uint *)0x0,0x14,0x204,0x14);
  *(uint **)(local_8 + 5) = puVar4;
  local_54 = (ushort *)0x0;
  uVar8 = 0xffffffff;
  local_458 = 2;
  do {
    pcVar5 = param_2;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar5 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar5;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar5 + -uVar8;
  pcVar10 = local_457;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar10 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar10 = pcVar10 + 1;
  }
  FUN_006f12b0(FUN_006f2d10,&local_458);
  pcVar5 = (char *)FUN_006f2790();
  if (pcVar5 != (char *)0x0) {
    local_a = (ushort)param_3;
    do {
      iVar3 = FUN_00719df0(param_1,pcVar5,1);
      if (local_a == (ushort)iVar3) {
        uVar8 = 0xffffffff;
        pcVar10 = pcVar5;
        do {
          pcVar11 = pcVar10;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar10 = pcVar11 + -uVar8;
        pcVar11 = local_254;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        local_54 = FUN_00719d00(param_1,pcVar5,param_4,1);
        FUN_006ae1c0(*(uint **)(local_8 + 5),(undefined4 *)local_254);
        local_54 = (ushort *)0x0;
      }
      pcVar5 = (char *)FUN_006f2790();
    } while (pcVar5 != (char *)0x0);
  }
  if (*(int *)(*(byte **)(local_8 + 5) + 0xc) == 0) {
    FUN_006ae110(*(byte **)(local_8 + 5));
    local_8[5] = 0;
    local_8[6] = 0;
    local_8[7] = 0;
    local_8[8] = 0;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  return local_8;
}

