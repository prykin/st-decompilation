
uint FUN_0069c710(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;

  iVar3 = param_3;
  uVar4 = 0xffffffff;
  if (param_3 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar4 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)(param_3 + 0xc),&param_2);
    if (-1 < (int)uVar4) {
      pbVar1 = (byte *)(param_1 + 1 + param_2 * 0xe);
      bVar2 = *pbVar1;
      if ((bVar2 & 4) == 0) {
        if ((bVar2 & 8) != 0) {
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
        }
      }
      else {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
        if ((*pbVar1 & 8) != 0) {
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
          return uVar4;
        }
      }
    }
  }
  return uVar4;
}

