
void FUN_0044cdb0(uint param_1,DArrayTy *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  STGameObjC *pSVar3;
  uint index;
  uint uVar4;

  uVar2 = param_1;
  uVar1 = param_2->count;
  if (((-1 < param_3) && (param_3 < 4)) && (uVar4 = 0, uVar1 != 0)) {
    index = 0;
    do {
      DArrayGetElement(param_2,index,&param_1);
      if ((((short)param_1 != -1) &&
          (pSVar3 = STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,(char)uVar2,param_1,CASE_1),
          pSVar3 != (STGameObjC *)0x0)) && (pSVar3->field_0020 == 0x14)) {
        *(int *)&pSVar3[4].field_0xaa = param_3;
      }
      uVar4 = uVar4 + 1;
      index = uVar4 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

