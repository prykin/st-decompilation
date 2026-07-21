
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00436F20 -> 0044CD20 @ 004372DA | 00436F20 -> 0044CD20 @ 004373EE */

void FUN_0044cd20(uint param_1,uint *groupContent,undefined4 param_3)

{
  uint uVar1;
  uint objPtr;
  STGameObjC *pSVar2;
  uint index;
  uint uVar3;
  
  objPtr = param_1;
  uVar3 = 0;
  uVar1 = groupContent[3];
  if (uVar1 != 0) {
    index = 0;
    do {
      DArrayGetElement((DArrayTy *)groupContent,index,&param_1);
      if ((((short)param_1 != -1) &&
          (pSVar2 = STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,objPtr,param_1,CASE_1),
          pSVar2 != (STGameObjC *)0x0)) && (pSVar2->field_0020 == 0x14)) {
        *(undefined4 *)&pSVar2[4].field_0xa6 = param_3;
      }
      uVar3 = uVar3 + 1;
      index = uVar3 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

