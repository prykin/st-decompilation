
void __thiscall FUN_005844e0(void *this,int param_1,int param_2,int param_3)

{
  short sVar1;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    local_10 = (short)(((short)(param_1 / 0xc9) + sVar1) -
                      (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10 = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                           (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    local_c = (short)(((short)(param_2 / 0xc9) + sVar1) -
                     (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_c = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                          (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  local_8 = *(undefined4 *)((int)this + 0x18);
  thunk_FUN_00568dd0(&DAT_00807658,2,(char *)0x0,param_3,&local_10,0);
  return;
}

