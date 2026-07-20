
undefined4 __fastcall FUN_004ce860(AnonShape_004CE860_DECB0AA9 *param_1)

{
  DArrayTy *pDVar1;
  uint uVar2;
  AnonShape_004CE860_DECB0AA9 *local_8;
  
  pDVar1 = g_playerRuntime[param_1->field_0024].field2168_0x9de;
  if ((pDVar1 != (DArrayTy *)0x0) && (uVar2 = 0, local_8 = param_1, 0 < (int)pDVar1->count)) {
    while( true ) {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar1,uVar2,&local_8);
      if (*(int *)(&local_8[1].field_0x134 + param_1->field_0369 * 4) != 0) break;
      uVar2 = uVar2 + 1;
      pDVar1 = g_playerRuntime[param_1->field_0024].field2168_0x9de;
      if ((int)pDVar1->count <= (int)uVar2) {
        return 0;
      }
    }
    *(int *)(&local_8[1].field_0x134 + param_1->field_0369 * 4) =
         *(int *)(&local_8[1].field_0x134 + param_1->field_0369 * 4) + -1;
    param_1->field_0398 = (param_1->field_0398 * 0x32) / 100;
    param_1->field_039C = (param_1->field_039C * 0x32) / 100;
    param_1->field_03A0 = (param_1->field_03A0 * 0x32) / 100;
    param_1->field_03A4 = (param_1->field_03A4 * 0x32) / 100;
  }
  return 0;
}

