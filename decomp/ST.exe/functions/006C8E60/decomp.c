
void FUN_006c8e60(int *param_1,byte param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;

  iVar2 = *param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pbVar4 = (byte *)((*(byte *)((int)param_1 + 0xd) >> 1 & 0xe) + 0x16 + (int)param_1);
  while (pbVar3 = pbVar4, pbVar3 < (byte *)(iVar2 + (int)param_1)) {
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

