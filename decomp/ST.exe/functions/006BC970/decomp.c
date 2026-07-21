
uint FUN_006bc970(int *param_1,int param_2,int *param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int *local_c;
  uint local_8;

  piVar2 = param_1;
  local_10 = 0;
  local_c = (int *)(param_2 * 0x10 + 8 + param_1[0x70]);
  local_8 = 0x7fff;
  uVar4 = 0x7fff;
  if (0 < param_4) {
    param_1 = param_3;
    do {
      puVar1 = (uint *)*param_1;
      if ((*puVar1 & 8) == 0) {
        if (((*puVar1 & 2) == 0) || ((int)puVar1[0x1a] < 5)) {
          iVar3 = FUN_006b0460((int *)&local_20,local_c,(int *)(puVar1 + 1));
          if (iVar3 != 0) {
            if ((int)puVar1[0x1a] < 5) {
              iVar3 = FUN_006d1ad0((int *)(puVar1 + 0x1a),4,local_20,local_1c,local_18,local_14,
                                   puVar1[3],puVar1[4],-(uint)((*puVar1 & 0x2000) != 0));
            }
            else {
              iVar3 = -1;
            }
            uVar4 = *puVar1;
            *puVar1 = uVar4 | 2;
            if (((uVar4 & 0x3000) != 0) || (((uVar4 & 0x4000) != 0 && ((uVar4 & 0x20000) == 0)))) {
              *puVar1 = uVar4 | 6;
              if (((uVar4 & 0x2000) == 0) || (iVar3 == -1)) {
                iVar3 = piVar2[4];
                iVar9 = piVar2[3];
                uVar4 = puVar1[4];
                uVar8 = puVar1[3];
                uVar7 = puVar1[2];
                uVar6 = puVar1[1];
                piVar5 = (int *)piVar2[0x70];
              }
              else {
                iVar3 = piVar2[4];
                iVar9 = piVar2[3];
                piVar5 = (int *)piVar2[0x70];
                uVar6 = local_20;
                uVar7 = local_1c;
                uVar8 = local_18;
                uVar4 = local_14;
              }
              uVar4 = FUN_006d1ad0(piVar5,100,uVar6,uVar7,uVar8,uVar4,iVar9,iVar3,1);
              if (uVar4 == 0xffffffff) {
                return 0xffffffff;
              }
              if (uVar4 != 0) {
                if ((int)(uVar4 - 1) <= param_2) {
                  return uVar4;
                }
                if ((int)uVar4 < (int)local_8) {
                  local_8 = uVar4;
                }
              }
            }
          }
        }
      }
      else {
        iVar3 = FUN_006cfeb0((int *)&local_20,local_c,piVar2 + piVar2[0x79] * 4 + 5);
        if (iVar3 != 0) {
          FUN_006bcb30(piVar2,local_20,local_1c,local_18,local_14);
        }
      }
      local_10 = local_10 + 1;
      param_1 = param_1 + 1;
      uVar4 = local_8;
    } while (local_10 < param_4);
  }
  return -(uint)(uVar4 != 0x7fff) & uVar4;
}

