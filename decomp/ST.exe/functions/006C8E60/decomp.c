
void FUN_006c8e60(RecoveredRecord_006C8E60_3F75B164 *param_1,byte param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;

  iVar2 = *(int *)param_1;
  pbVar4 = &param_1[1].field_0x8 + (param_1->field_000D >> 1 & 0xe);
  while (pbVar3 = pbVar4, pbVar3 < &param_1->field_0x0 + iVar2) {
    bVar1 = *pbVar3;
    pbVar4 = pbVar3 + 1;
    if ((bVar1 != 0) && ((bVar1 & 0x80) != 0)) {
      if ((bVar1 & 0x40) == 0) {
        uVar5 = bVar1 & 0x3f;
        if (-1 < (int)(uVar5 - 1)) {
          do {
            if (*pbVar4 == param_2) {
              *pbVar4 = param_3;
            }
            pbVar4 = pbVar4 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      else {
        if (*pbVar4 == param_2) {
          *pbVar4 = param_3;
        }
        pbVar4 = pbVar3 + 2;
      }
    }
  }
  return;
}

