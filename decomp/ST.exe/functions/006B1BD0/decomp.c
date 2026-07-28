
uint FUN_006b1bd0(AnonShape_006B1BD0_7C890E99 *param_1,uint param_2)

{
  AnonNested_AnonShape_006B1BD0_7C890E99_01B0_6D384113 *pAVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;

  uVar3 = 0xfffffffd;
  if (param_2 < param_1->entryCount) {
    pAVar1 = param_1->entries[param_2];
    if ((pAVar1->field_0000 & 0x88000) == 0x8000) {
      uVar3 = pAVar1->field_004C;
      if ((uVar3 != 0xfffffffd) &&
         (pAVar1->field_004C = 0xfffffffd, (pAVar1->field_0000 & 0x20) != 0)) {
        param_1->field_01B4 = 1;
      }
      uVar4 = FUN_006cee10((int)param_1,(int)pAVar1);
      pAVar1->field_0050 = uVar4;
      if (((pAVar1->field_0000 & 0x4000000) != 0) && (pAVar1->field_00D0 != 0)) {
        uVar4 = pAVar1->field_00C0;
        iVar5 = 0;
        if (0 < (int)uVar4) {
          do {
            uVar2 = *(uint *)(pAVar1->field_00D0 + iVar5 * 4);
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

