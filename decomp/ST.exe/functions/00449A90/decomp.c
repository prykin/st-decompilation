
uint FUN_00449a90(undefined4 param_1,short param_2)

{
  dword dVar1;
  uint uVar2;
  uint uVar3;
  DArrayTy *pDVar4;
  undefined4 local_18;
  DArrayTy *local_14;
  dword local_c;
  DArrayTy *local_8;
  
  pDVar4 = g_playerRuntime[(char)param_1].pgPairs;
  if (((pDVar4 != (DArrayTy *)0x0) && (local_c = pDVar4->count, local_c != 0)) &&
     (uVar2 = 0, local_8 = pDVar4, 0 < (int)local_c)) {
    do {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar4,uVar2,&local_18);
      if (((local_14 != (DArrayTy *)0x0) && (dVar1 = local_14->count, dVar1 != 0)) &&
         (uVar3 = 0, pDVar4 = local_8, 0 < (int)dVar1)) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_14,uVar3,
                       (undefined4 *)((int)&param_1 + 2));
          if (param_1._2_2_ == param_2) {
            return uVar2;
          }
          uVar3 = uVar3 + 1;
          pDVar4 = local_8;
        } while ((int)uVar3 < (int)dVar1);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)local_c);
  }
  return 0xffffffff;
}

