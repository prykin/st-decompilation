
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006324c0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  thunk_FUN_00632030(param_2,&param_2,&local_8,&local_c,&local_10);
  switch(param_1) {
  case 0:
    thunk_FUN_00632650(this,DAT_007d1a38,DAT_007d1a3c,DAT_007d1a40,0,&DAT_007d1a38);
    return;
  case 1:
    thunk_FUN_00632650(this,DAT_007d1a88,DAT_007d1a8c,DAT_007d1a90,1,&DAT_007d1a88);
    return;
  case 2:
    _DAT_007d1ae8 = param_2;
    _DAT_007d1aec = local_8;
    _DAT_007d1af0 = local_c;
    _DAT_007d1b24 = local_10;
    thunk_FUN_00632650(this,DAT_007d1ad8,DAT_007d1adc,DAT_007d1ae0,2,&DAT_007d1ad8);
    return;
  case 3:
    thunk_FUN_00632650(this,DAT_007d1b28,DAT_007d1b2c,DAT_007d1b30,3,&DAT_007d1b28);
    return;
  case 4:
    thunk_FUN_00632650(this,DAT_007d1b60,DAT_007d1b64,DAT_007d1b68,4,&DAT_007d1b60);
  }
  return;
}

