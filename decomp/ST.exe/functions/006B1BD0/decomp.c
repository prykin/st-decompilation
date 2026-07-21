
uint FUN_006b1bd0(AnonShape_006B1BD0_7C890E99 *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;

  uVar3 = 0xfffffffd;
  if (param_2 < param_1->field_01A0) {
    puVar1 = *(uint **)(param_1->field_01B0 + param_2 * 4);
    if ((*puVar1 & 0x88000) == 0x8000) {
      uVar3 = puVar1[0x13];
      if ((uVar3 != 0xfffffffd) && (puVar1[0x13] = 0xfffffffd, (*puVar1 & 0x20) != 0)) {
        param_1->field_01B4 = 1;
      }
      uVar4 = FUN_006cee10((int)param_1,(int)puVar1);
      puVar1[0x14] = uVar4;
      if (((*puVar1 & 0x4000000) != 0) && (puVar1[0x34] != 0)) {
        uVar4 = puVar1[0x30];
        iVar5 = 0;
        if (0 < (int)uVar4) {
          do {
            uVar2 = *(uint *)(puVar1[0x34] + iVar5 * 4);
            if (-1 < (int)uVar2) {
              FUN_006b1bd0(param_1,uVar2);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)uVar4);
        }
        return uVar3;
      }
    }
  }
  return uVar3;
}

