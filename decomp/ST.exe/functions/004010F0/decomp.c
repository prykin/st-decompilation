
void thunk_FUN_0044cdb0(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_1;
  uVar1 = *(uint *)(param_2 + 0xc);
  if (((-1 < param_3) && (param_3 < 4)) && (uVar4 = 0, uVar1 != 0)) {
    uVar3 = 0;
    do {
      FUN_006acc70(param_2,uVar3,&param_1);
      if ((((short)param_1 != -1) &&
          (uVar3 = STAllPlayersC::GetObjPtr(DAT_007fa174,uVar2,param_1,1), uVar3 != 0)) &&
         (*(int *)(uVar3 + 0x20) == 0x14)) {
        *(int *)(uVar3 + 0x7ee) = param_3;
      }
      uVar4 = uVar4 + 1;
      uVar3 = uVar4 & 0xffff;
    } while (uVar3 < uVar1);
  }
  return;
}

