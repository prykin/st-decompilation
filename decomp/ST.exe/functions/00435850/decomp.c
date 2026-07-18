
uint FUN_00435850(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_2c;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  iVar3 = (int)(char)param_1;
  local_8 = *(int *)((int)&DAT_007f4e24 + iVar3 * 0xa62 + 1);
  uVar1 = *(uint *)(local_8 + 0xc);
  uVar2 = uVar1;
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    FUN_006acc70(local_8,uVar1,&local_c);
    if (local_c == 0) {
      uVar2 = uVar1;
    }
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_24 = uVar2 & 0xffff;
  local_2c = 1;
  local_34 = iVar3;
  (**(code **)(*DAT_00802a38 + 8))(0x10ff,local_10,&param_1,local_38,0);
  if (param_2 == 1) {
    thunk_FUN_00423360(param_1);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = param_1;
  }
  return CONCAT22((short)((uint)param_3 >> 0x10),(short)uVar2);
}

