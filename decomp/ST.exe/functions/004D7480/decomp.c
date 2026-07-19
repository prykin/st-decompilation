
undefined4
FUN_004d7480(char param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  int iVar1;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_18 = param_3;
  local_8 = param_7;
  local_c = param_6;
  local_10 = param_5;
  local_14 = param_4;
  iVar1 = param_2 * 0x44 + param_1 * 0xa62;
  Library::DKW::TBL::FUN_006ae1c0((uint *)(&DAT_007f560e + iVar1),&local_18);
  *(int *)(&DAT_007f562e + iVar1) = *(int *)(&DAT_007f562e + iVar1) + param_4;
  *(int *)(&DAT_007f5632 + iVar1) = *(int *)(&DAT_007f5632 + iVar1) + param_5;
  *(int *)(&DAT_007f5636 + iVar1) = *(int *)(&DAT_007f5636 + iVar1) + param_6;
  *(int *)(&DAT_007f563a + iVar1) = *(int *)(&DAT_007f563a + iVar1) + param_7;
  thunk_FUN_004d78e0(param_1);
  return 0;
}

