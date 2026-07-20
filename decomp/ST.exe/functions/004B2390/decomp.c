
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004B2520 -> 004B2390 @ 004B25DA | 004B2520 -> 004B2390 @ 004B2996 | 004B2520 ->
   004B2390 @ 004B29F2 | 004B2520 -> 004B2390 @ 004B2A8B | 004B2520 -> 004B2390 @ 004B2ADB */

undefined4 __cdecl
FUN_004b2390(uint param_1,int param_2,int param_3,undefined4 param_4,int *param_5,int param_6)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  undefined4 local_8;
  
  local_8 = 0;
  if ((((-1 < param_2) && (param_2 < SHORT_007fb240)) && (-1 < param_3)) &&
     (param_3 < SHORT_007fb242)) {
    sVar3 = (short)param_2;
    if (-1 < sVar3) {
      sVar1 = (short)param_3;
      sVar4 = (short)param_4;
      if (((((SHORT_007fb240 <= sVar3) || (sVar1 < 0)) ||
           ((SHORT_007fb242 <= sVar1 || ((sVar4 < 0 || (SHORT_007fb244 <= sVar4)))))) ||
          (*(int *)(DAT_007fb248 +
                   ((int)SHORT_007fb246 * (int)sVar4 + (int)sVar1 * (int)SHORT_007fb240 + (int)sVar3
                   ) * 8) == 0)) &&
         (((((sVar3 < SHORT_007fb240 && (-1 < sVar1)) && (sVar1 < SHORT_007fb242)) &&
           ((-1 < sVar4 && (sVar4 < SHORT_007fb244)))) &&
          (((*(short *)(DAT_007fb280 +
                       ((int)SHORT_007fb278 * (int)sVar1 + (int)SHORT_007fb27e * (int)sVar4 +
                       (int)sVar3) * 2) == 0 &&
            ((local_8 = 1, param_6 != 0 && (g_visibleClass_00802A88 != (VisibleClassTy *)0x0)))) &&
           (iVar2 = thunk_FUN_0055b1c0(g_visibleClass_00802A88,param_2,param_3,param_4,param_1),
           iVar2 != 0)))))) {
        local_8 = 0;
        *param_5 = 1;
      }
    }
    return local_8;
  }
  return 0;
}

