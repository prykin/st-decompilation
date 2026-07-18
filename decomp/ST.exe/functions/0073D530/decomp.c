
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073d530(void)

{
  byte *local_18;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  if (DAT_0085a5ec == 0) {
    FUN_00736ac0();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_008572f8,0x104);
  DAT_00857180 = &DAT_008572f8;
  if (*DAT_0085a594 == 0) {
    local_18 = &DAT_008572f8;
  }
  else {
    local_18 = DAT_0085a594;
  }
  FUN_0073d610(local_18,(undefined4 *)0x0,(byte *)0x0,&local_10,&local_8);
  local_c = (undefined4 *)thunk_FUN_006a3c10(local_8 + local_10 * 4,2,"stdargv.c",0x80);
  if (local_c == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_0073d610(local_18,local_c,(byte *)(local_c + local_10),&local_10,&local_8);
  _DAT_00857164 = local_10 + -1;
  DAT_00857168 = local_c;
  return;
}

