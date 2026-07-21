
int FUN_0069ac20(int param_1,int param_2,int param_3,DArrayTy *param_4)

{
  dword dVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  int local_8;

  iVar2 = 0xff;
  local_8 = 0xff;
  if (param_4 != (DArrayTy *)0x0) {
    dVar1 = param_4->count;
    uVar4 = 0;
    if (0 < (int)dVar1) {
      while( true ) {
        if (uVar4 < param_4->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_4, uVar4) (runtime stride) */
          psVar3 = (short *)(param_4->elementSize * uVar4 + (int)param_4->data);
        }
        else {
          psVar3 = (short *)0x0;
        }
        iVar2 = FUN_006acf90((int)*psVar3,(int)psVar3[1],param_1,param_2);
        if (iVar2 < param_3) break;
        if (iVar2 < local_8) {
          local_8 = iVar2;
        }
        uVar4 = uVar4 + 1;
        if ((int)dVar1 <= (int)uVar4) {
          return local_8;
        }
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}

