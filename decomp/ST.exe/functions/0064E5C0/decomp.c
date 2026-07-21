
void __cdecl
FUN_0064e5c0(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_2;
  local_8 = param_3;
  param_3 = param_4;
  param_2 = param_5;
  if ((short)param_4 < 1) {
    local_c = 0;
    param_3 = g_worldGrid._0_4_;
  }
  if ((short)param_5 < 1) {
    local_8 = 0;
    param_2 = CONCAT22((short)((uint)param_5 >> 0x10),g_worldGrid.sizeY);
  }
  thunk_FUN_006756d0((short *)&local_c,(short *)&local_8,(short *)&param_3,(short *)&param_2);
  thunk_FUN_004d83d0(param_1,(int)(short)local_c,(int)(short)local_8,(int)(short)param_3,
                     (int)(short)param_2);
  return;
}

