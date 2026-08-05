
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall
FUN_00660620(AnonShape_00660620_6BCED4D7 *param_1,undefined4 param_2,uint param_3)

{
  STGroupBoatC *pSVar1;
  DArrayTy *array;
  undefined4 local_18;
  DArrayTy *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_18 = 0;
  local_14 = nullptr;
  local_10 = 0;
  local_c = 0;
  param_1->field_00A7 = 0;
  local_8 = 0;
  pSVar1 = thunk_FUN_0042b760(param_1->field_0024,(ushort)param_3);
  if (pSVar1 != nullptr) {
    array = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar1);
    if ((array != nullptr) || (_DAT_0000000c != 0)) {
      local_18 = 0;
      local_14 = array;
      if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
        pSVar1 = thunk_FUN_0042b760(param_1->field_0024,param_1->field_007D);
        if (pSVar1 != nullptr) {
          pSVar1->sub_00498D20(5,(short)&local_18);
          if (array != nullptr) {
            DArrayDestroy(array);
          }
          return 0;
        }
      }
      if (array != nullptr) {
        DArrayDestroy(array);
      }
    }
  }
  return 0xffffffff;
}

