
uint FUN_006b1b10(AnonShape_006B1B10_121F236C *param_1,uint param_2,uint param_3)

{
  AnonNested_AnonShape_006B1B10_121F236C_01B0_7CFC8645 *pAVar1;
  uint uVar2;
  uint uVar3;
  uint uVar5;
  int uVar4;
  int iVar6;

  uVar5 = 0xfffffffd;
  if (param_2 < param_1->entryCount) {
    pAVar1 = param_1->entries_01B0[param_2];
    if ((pAVar1->flags & 0x88000) == 0x8000) {
      uVar5 = pAVar1->field_004C;
      pAVar1->field_004C = param_3;
      if ((pAVar1->flags & 0x20) != 0) {
        param_1->field_01B4 = 1;
      }

      uVar4 = FUN_006cee10((int)param_1,(RecoveredRecord_006CEE10_585981DD *)pAVar1);
      pAVar1->field_0050 = uVar4;
      if (((pAVar1->flags & 0x4000000) != 0) && (pAVar1->field_00D0 != 0)) {
        uVar2 = pAVar1->field_00C0;
        iVar6 = 0;
        if (0 < (int)uVar2) {
          do {
            uVar3 = *(uint *)(pAVar1->field_00D0 + iVar6 * 4);
            if (-1 < (int)uVar3) {

              FUN_006b1b10(param_1,uVar3,param_3);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)uVar2);
        }
        return uVar5;
      }
    }
  }
  return uVar5;
}

