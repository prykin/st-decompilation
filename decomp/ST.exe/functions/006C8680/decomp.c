
uint * FUN_006c8680(uint *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  char *pcVar5;
  void *unaff_EDI;
  char *pcVar6;
  uint *puVar7;
  undefined4 local_58;
  undefined4 local_54 [16];
  uint *local_14;
  char *local_10;
  uint local_c;
  uint *local_8;
  
  local_8 = FUN_006b54f0(param_1,param_2[3],param_2[4]);
  if (local_8 != (uint *)0x0) {
    *local_8 = *local_8 | *param_2;
    uVar4 = param_2[2];
    local_8[2] = uVar4;
    local_14 = param_2 + 6;
    local_10 = (char *)((uVar4 + 7 >> 3) + (int)local_14);
    local_58 = DAT_00858df8;
    DAT_00858df8 = &local_58;
    iVar2 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
    if (iVar2 == 0) {
      uVar4 = 0;
      puVar7 = local_8;
      if (0 < (int)local_8[2]) {
        do {
          local_c = uVar4;
          if ((*(byte *)((int)local_14 + ((int)(uVar4 ^ 7) >> 3)) >> ((uVar4 ^ 7) & 7) & 1) == 0) {
            *(undefined4 *)(puVar7[5] + uVar4 * 4) = 0;
          }
          else {
            uVar3 = 0xffffffff;
            pcVar5 = local_10;
            do {
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
            uVar3 = ~uVar3;
            iVar2 = FUN_006aac70(uVar3);
            *(int *)(local_8[5] + uVar4 * 4) = iVar2;
            pcVar5 = local_10;
            pcVar6 = *(char **)(local_8[5] + local_c * 4);
            for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar6 = pcVar6 + 4;
            }
            local_10 = local_10 + uVar3;
            for (uVar3 = uVar3 & 3; puVar7 = local_8, uVar3 != 0; uVar3 = uVar3 - 1) {
              *pcVar6 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar6 = pcVar6 + 1;
            }
          }
          uVar4 = local_c + 1;
        } while ((int)uVar4 < (int)puVar7[2]);
      }
      DAT_00858df8 = (undefined4 *)local_58;
      return puVar7;
    }
    DAT_00858df8 = (undefined4 *)local_58;
    local_8[2] = local_c;
    FUN_006b5570((byte *)local_8);
    FUN_006a5e40(iVar2,0,0x7ee094,0x28);
  }
  return (uint *)0x0;
}

