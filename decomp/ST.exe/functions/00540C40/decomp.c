
undefined4 * __cdecl FUN_00540c40(void *param_1,uint *param_2,uint *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint *puVar8;
  char *pcVar9;
  int local_c;
  int local_8;
  
  uVar3 = 0xffffffff;
  iVar5 = 0;
  pcVar6 = &DAT_008016a0;
  do {
    pcVar9 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  local_8 = 0;
  local_c = 0;
  pcVar6 = pcVar9 + -uVar3;
  pcVar9 = (char *)&DAT_008016f0;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  if ((param_1 != (void *)0x0) && (param_2 != (uint *)0x0)) {
    iVar2 = FUN_00711110(param_1,param_2);
    if (param_4 < iVar2) {
      if (param_3 != (uint *)0x0) {
        local_8 = FUN_00711110(param_1,param_3);
      }
      puVar8 = param_2;
      iVar2 = local_8;
      if (param_4 < local_8) goto LAB_00540d59;
      while (iVar2 < param_4) {
        uVar3 = FUN_00710fb0(param_1,(byte *)puVar8);
        iVar5 = iVar5 + *(int *)((int)param_1 + 0x58) +
                        (int)*(short *)(*(int *)((int)param_1 + 0x9a) + 0x6a + (uVar3 & 0xffff) * 10
                                       );
        local_c = local_c + 1;
        puVar8 = (uint *)((int)puVar8 + 1);
        iVar2 = iVar5 + local_8;
      }
      _strncpy((char *)&DAT_008016f0,(char *)param_2,local_c - 1);
      uVar3 = 0xffffffff;
      *(undefined1 *)((int)&DAT_008016ec + local_c + 3) = 0;
      do {
        puVar8 = param_3;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        puVar8 = (uint *)((int)param_3 + 1);
        uVar4 = *param_3;
        param_3 = puVar8;
      } while ((char)uVar4 != '\0');
      uVar3 = ~uVar3;
      pcVar6 = (char *)((int)puVar8 - uVar3);
      iVar5 = -1;
      pcVar9 = (char *)&DAT_008016f0;
      do {
        pcVar7 = pcVar9;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
    }
    else {
      uVar3 = 0xffffffff;
      do {
        puVar8 = param_2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        puVar8 = (uint *)((int)param_2 + 1);
        uVar4 = *param_2;
        param_2 = puVar8;
      } while ((char)uVar4 != '\0');
      uVar3 = ~uVar3;
      pcVar6 = (char *)((int)puVar8 - uVar3);
      pcVar7 = (char *)&DAT_008016f0;
    }
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
LAB_00540d59:
  return &DAT_008016f0;
}

