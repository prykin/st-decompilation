
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00436F20 -> 0044CDB0 @ 004374A4 | 0044CDB0 -> 006ACC70 @ 0044CDDA */

void FUN_0044cdb0(uint param_1,DArrayTy *groupContent,int param_3)

{
  uint uVar1;
  uint uVar2;
  STGameObjC *pSVar3;
  uint index;
  uint uVar4;

  uVar2 = param_1;
  uVar1 = groupContent->count;
  if (((-1 < param_3) && (param_3 < 4)) && (uVar4 = 0, uVar1 != 0)) {
    index = 0;
    do {
      DArrayGetElement(groupContent,index,&param_1);
      if ((((short)param_1 != -1) &&
          (pSVar3 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,(char)uVar2,param_1,CASE_1),
          pSVar3 != (STGameObjC *)0x0)) && (pSVar3->field_0020 == 0x14)) {
        pSVar3->field_07EE = param_3;
      }
      uVar4 = uVar4 + 1;
      index = uVar4 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

