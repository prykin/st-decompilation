
void FUN_0044cdb0(uint param_1,DArrayTy *param_2,int param_3)

{
  uint uVar1;
  uint objPtr;
  uint uVar2;
  uint uVar3;
  
  objPtr = param_1;
  uVar1 = param_2->count;
  if (((-1 < param_3) && (param_3 < 4)) && (uVar3 = 0, uVar1 != 0)) {
    uVar2 = 0;
    do {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,uVar2,&param_1);
      if ((((short)param_1 != -1) &&
          (uVar2 = STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,objPtr,param_1,CASE_1),
          uVar2 != 0)) && (*(int *)(uVar2 + 0x20) == 0x14)) {
        *(int *)(uVar2 + 0x7ee) = param_3;
      }
      uVar3 = uVar3 + 1;
      uVar2 = uVar3 & 0xffff;
    } while (uVar2 < uVar1);
  }
  return;
}

