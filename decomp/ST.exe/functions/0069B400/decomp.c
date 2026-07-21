
int __thiscall FUN_0069b400(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int *local_10;
  int local_c;

  iVar2 = 0;
  iVar3 = (param_3 - param_1) + 1;
  iVar6 = (param_4 - param_2) + 1;
  local_c = 0;
  if (*(int *)((int)this + 0x5847) != 1 && -1 < *(int *)((int)this + 0x5847) + -1) {
    local_10 = (int *)(param_5 + 0x18);
    do {
      param_3 = 0;
      param_4 = 0;
      if (0 < iVar6) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar4 = (*(int *)((int)this + 0x5833) * param_2 + *(int *)((int)this + 0x582f) * local_c +
                param_1) * 2;
        param_5 = iVar6;
        do {
          if (0 < iVar3) {
            psVar7 = (short *)(*(int *)((int)this + 0x584f) + iVar4);
            iVar5 = iVar3;
            do {
              sVar1 = *psVar7;
              if (0 < sVar1) {
                iVar2 = iVar2 + sVar1;
                if (sVar1 == 4) {
                  param_4 = param_4 + 1;
                }
                else {
                  param_3 = param_3 + 1;
                }
              }
              psVar7 = psVar7 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          iVar4 = iVar4 + *(int *)((int)this + 0x5833) * 2;
          param_5 = param_5 + -1;
        } while (param_5 != 0);
      }
      local_c = local_c + 1;
      local_10[-5] = param_3;
      *local_10 = param_4;
      local_10 = local_10 + 1;
    } while (local_c < *(int *)((int)this + 0x5847) + -1);
  }
  return iVar2;
}

