
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00436F20 -> 0044CD20 @ 004372DA | 00436F20 -> 0044CD20 @ 004373EE */

void FUN_0044cd20(uint param_1,uint *groupContent,undefined4 param_3)

{
  uint uVar1;
  uint objPtr;
  uint uVar2;
  uint uVar3;
  
  objPtr = param_1;
  uVar3 = 0;
  uVar1 = groupContent[3];
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      FUN_006acc70((int)groupContent,uVar2,&param_1);
      if ((((short)param_1 != -1) &&
          (uVar2 = STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,objPtr,param_1,CASE_1),
          uVar2 != 0)) && (*(int *)(uVar2 + 0x20) == 0x14)) {
        *(undefined4 *)(uVar2 + 0x7ea) = param_3;
      }
      uVar3 = uVar3 + 1;
      uVar2 = uVar3 & 0xffff;
    } while (uVar2 < uVar1);
  }
  return;
}

