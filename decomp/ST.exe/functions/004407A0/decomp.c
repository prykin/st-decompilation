
void FUN_004407a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  DArrayTy *pDVar1;
  uint uVar2;
  uint uVar3;
  
  pDVar1 = g_playerRuntime[(char)param_1].groups;
  if (((pDVar1 != (DArrayTy *)0x0) && (uVar2 = pDVar1->count, uVar2 != 0)) &&
     (uVar3 = 0, 0 < (int)uVar2)) {
    do {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar1,uVar3,&param_1);
      if (param_1 != 0) {
        STGroupBoatC::ReMakePVecAndTgtListExt((STGroupBoatC *)param_1,(char)param_2,(short)param_3);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)uVar2);
  }
  return;
}

