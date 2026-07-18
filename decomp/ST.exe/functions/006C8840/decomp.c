
uint * FUN_006c8840(uint *param_1,uint *param_2,int *param_3)

{
  char cVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  int local_c;
  char *local_8;
  
  puVar3 = param_2;
  uVar6 = param_1[2];
  uVar4 = uVar6 + 7 >> 3;
  local_c = uVar4 + 0x18;
  puVar7 = param_1;
  puVar9 = param_2;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  param_2[5] = 0;
  *param_2 = *param_2 & 0xfffffff7;
  puVar7 = param_2 + 6;
  local_8 = (char *)((int)puVar7 + uVar4);
  puVar9 = puVar7;
  for (uVar6 = uVar6 + 7 >> 5; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (uint *)((int)puVar9 + 1);
  }
  param_2 = (uint *)0x0;
  if (0 < (int)param_1[2]) {
    do {
      pcVar8 = *(char **)(param_1[5] + (int)param_2 * 4);
      if (pcVar8 != (char *)0x0) {
        uVar6 = 0xffffffff;
        pcVar10 = pcVar8;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        local_c = local_c + uVar6;
        pcVar10 = local_8;
        for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar10 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar10 = pcVar10 + 1;
        }
        local_8 = local_8 + uVar6;
        pbVar2 = (byte *)((int)puVar7 + ((int)((uint)param_2 ^ 7) >> 3));
        *pbVar2 = *pbVar2 | '\x01' << (((uint)param_2 ^ 7) & 7);
      }
      param_2 = (uint *)((int)param_2 + 1);
    } while ((int)param_2 < (int)param_1[2]);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = local_c;
  }
  return puVar3;
}

