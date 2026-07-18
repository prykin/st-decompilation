
int __cdecl FUN_0070b770(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  void *in_stack_ffffff2c;
  void *pvVar4;
  undefined4 in_stack_ffffff30;
  void *local_90;
  undefined4 local_8c [16];
  void *local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  pvVar4 = DAT_00858df8;
  sVar1 = *(short *)(param_1 + 0xe);
  local_8 = 0;
  if (sVar1 == 8) {
    if (param_2 != 8) {
      if (param_2 == 0x10) {
        DAT_00858df8 = (void **)&stack0xffffff2c;
        iVar2 = __setjmp3((undefined4 *)&stack0xffffff30,0,pvVar4,in_stack_ffffff30);
        if (iVar2 != 0) {
          DAT_00858df8 = pvVar4;
          return local_8;
        }
        iVar2 = FUN_006d1a10((undefined4 *)0x0,0,0,0,param_1,0,0,0,*(int *)(param_1 + 4),
                             *(int *)(param_1 + 8));
        DAT_00858df8 = pvVar4;
        return iVar2;
      }
      if (param_2 != 0x18) {
        return 0;
      }
      local_90 = DAT_00858df8;
      DAT_00858df8 = &local_90;
      iVar2 = __setjmp3(local_8c,0,in_stack_ffffff2c,in_stack_ffffff30);
      if (iVar2 != 0) {
        DAT_00858df8 = local_90;
        return local_8;
      }
      iVar2 = FUN_006d1a50((undefined4 *)0x0,0,0,0,param_1,0,0,0,*(int *)(param_1 + 4),
                           *(int *)(param_1 + 8));
      DAT_00858df8 = local_90;
      return iVar2;
    }
  }
  else {
    if (sVar1 == 0x10) {
      bVar3 = param_2 == 0x10;
    }
    else {
      if (sVar1 != 0x18) {
        return 0;
      }
      if (param_2 == 0x10) {
        local_4c = DAT_00858df8;
        DAT_00858df8 = &local_4c;
        iVar2 = __setjmp3(local_48,0,in_stack_ffffff2c,in_stack_ffffff30);
        if (iVar2 != 0) {
          DAT_00858df8 = local_4c;
          return local_8;
        }
        iVar2 = FUN_006d1a90((undefined4 *)0x0,0,0,0,param_1,0,0,0,*(int *)(param_1 + 4),
                             *(int *)(param_1 + 8));
        DAT_00858df8 = local_4c;
        return iVar2;
      }
      bVar3 = param_2 == 0x18;
    }
    if (!bVar3) {
      return 0;
    }
  }
  return param_1;
}

