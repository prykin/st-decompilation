
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00436F20 -> 0044CD20 @ 004372DA | 00436F20 -> 0044CD20 @ 004373EE */

void FUN_0044cd20(uint param_1,uint *groupContent,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  STGameObjC *pSVar3;
  uint index;
  uint uVar4;

  uVar2 = param_1;
  uVar4 = 0;
  uVar1 = groupContent[3];
  if (uVar1 != 0) {
    index = 0;
    do {
      DArrayGetElement((DArrayTy *)groupContent,index,&param_1);
      if ((((short)param_1 != -1) &&
          (pSVar3 = STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,(char)uVar2,param_1,CASE_1),
          pSVar3 != (STGameObjC *)0x0)) && (pSVar3->field_0020 == 0x14)) {
        *(undefined4 *)&pSVar3[4].field_0xa6 = param_3;
      }
      uVar4 = uVar4 + 1;
      index = uVar4 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

