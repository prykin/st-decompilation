
void FUN_0044cdb0(uint param_1,DArrayTy *param_2,int param_3)

{
  uint uVar1;
  uint objPtr;
  STGameObjC *pSVar2;
  uint index;
  uint uVar3;
  
  objPtr = param_1;
  uVar1 = param_2->count;
  if (((-1 < param_3) && (param_3 < 4)) && (uVar3 = 0, uVar1 != 0)) {
    index = 0;
    do {
      DArrayGetElement(param_2,index,&param_1);
      if ((((short)param_1 != -1) &&
          (pSVar2 = STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,objPtr,param_1,CASE_1),
          pSVar2 != (STGameObjC *)0x0)) && (pSVar2->field_0020 == 0x14)) {
        *(int *)&pSVar2[4].field_0xaa = param_3;
      }
      uVar3 = uVar3 + 1;
      index = uVar3 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

