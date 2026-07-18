
undefined4 FUN_006c13d0(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  char *pcVar8;
  void *unaff_EDI;
  undefined4 local_48;
  undefined4 local_44 [16];
  
  local_48 = DAT_00858df8;
  DAT_00858df8 = &local_48;
  iVar2 = __setjmp3(local_44,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_48;
    FUN_006a5e40(iVar2,0,0x7ede14,0x405);
    return 0;
  }
  puVar3 = FUN_006aac10(0xc);
  if (param_1 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)FUN_006aac70(0x10);
    puVar3[1] = puVar4;
    FUN_0072da70(puVar4,param_1,0x10);
  }
  uVar6 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = (char *)FUN_006aac10(~uVar6);
  puVar3[2] = pcVar5;
  if ((pcVar5 != (char *)0x0) && (param_2 != (char *)0x0)) {
    uVar6 = 0xffffffff;
    do {
      pcVar8 = param_2;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar8 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar8;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar8 + -uVar6;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar5 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  FUN_006b9910(param_4,puVar3);
  DAT_00858df8 = (undefined4 *)local_48;
  return 1;
}

