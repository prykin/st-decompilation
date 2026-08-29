
uint FUN_006bc970(int *param_1,int param_2,int *param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  int iVar4;
  int iVar3;
  int uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
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
  uVar5 = 0x7fff;
  if (0 < param_4) {
    auto param_1_after_write = param_3; /* compiler stack-slot lifetime split */
    do {
      puVar1 = (uint *)*param_1_after_write;
      if ((*puVar1 & 8) == 0) {
        if (((*puVar1 & 2) == 0) || ((int)puVar1[0x1a] < 5)) {

          iVar4 = FUN_006b0460((int *)&local_20,local_c,(int *)(puVar1 + 1));
          if (iVar4 != 0) {
            if ((int)puVar1[0x1a] < 5) {

              iVar3 = FUN_006d1ad0((int *)(puVar1 + 0x1a),4,local_20,local_1c,local_18,local_14,
                                   puVar1[3],puVar1[4],-(uint)((*puVar1 & 0x2000) != 0));
            }
            else {
              iVar3 = -1;
            }
            uVar5 = *puVar1;
            *puVar1 = uVar5 | 2;
            if (((uVar5 & 0x3000) != 0) || (((uVar5 & 0x4000) != 0 && ((uVar5 & 0x20000) == 0)))) {
              *puVar1 = uVar5 | 6;
              if (((uVar5 & 0x2000) == 0) || (iVar3 == -1)) {
                iVar4 = piVar2[4];
                iVar10 = piVar2[3];
                uVar5 = puVar1[4];
                uVar9 = puVar1[3];
                uVar8 = puVar1[2];
                uVar7 = puVar1[1];
                piVar6 = (int *)piVar2[0x70];
              }
              else {
                iVar4 = piVar2[4];
                iVar10 = piVar2[3];
                piVar6 = (int *)piVar2[0x70];
                uVar7 = local_20;
                uVar8 = local_1c;
                uVar9 = local_18;
                uVar5 = local_14;
              }

              uVar4 = FUN_006d1ad0(piVar6,100,uVar7,uVar8,uVar9,uVar5,iVar10,iVar4,1);
              if (uVar4 == -1) {
                return 0xffffffff;
              }
              if (uVar4 != 0) {
                if (uVar4 + -1 <= param_2) {
                  return uVar4;
                }
                if (uVar4 < (int)local_8) {
                  local_8 = uVar4;
                }
              }
            }
          }
        }
      }
      else {

        iVar4 = FUN_006cfeb0((int *)&local_20,local_c,piVar2 + piVar2[0x79] * 4 + 5);
        if (iVar4 != 0) {
          FUN_006bcb30(piVar2,local_20,local_1c,local_18,local_14);
        }
      }
      local_10 = local_10 + 1;
      param_1_after_write = param_1_after_write + 1;
      uVar5 = local_8;
    } while (local_10 < param_4);
  }
  return -(uint)(uVar5 != 0x7fff) & uVar5;
}

