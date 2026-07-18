
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
thunk_FUN_0064e5c0(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  param_3 = param_4;
  param_2 = param_5;
  if ((short)param_4 < 1) {
    uStack_c = 0;
    param_3 = _DAT_007fb240;
  }
  if ((short)param_5 < 1) {
    uStack_8 = 0;
    param_2 = CONCAT22((short)((uint)param_5 >> 0x10),DAT_007fb242);
  }
  thunk_FUN_006756d0((short *)&uStack_c,(short *)&uStack_8,(short *)&param_3,(short *)&param_2);
  thunk_FUN_004d83d0(param_1,(int)(short)uStack_c,(int)(short)uStack_8,(int)(short)param_3,
                     (int)(short)param_2);
  return;
}

