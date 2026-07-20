
int FUN_0069ac20(int param_1,int param_2,int param_3,AnonShape_0069AC20_BA305C93 *param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  int local_8;
  
  iVar2 = 0xff;
  local_8 = 0xff;
  if (param_4 != (AnonShape_0069AC20_BA305C93 *)0x0) {
    iVar1 = param_4->field_000C;
    uVar4 = 0;
    if (0 < iVar1) {
      while( true ) {
        if (uVar4 < (uint)param_4->field_000C) {
          psVar3 = (short *)(param_4->field_0008 * uVar4 + param_4->field_001C);
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
        if (iVar1 <= (int)uVar4) {
          return local_8;
        }
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}

