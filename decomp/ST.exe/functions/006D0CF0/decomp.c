
undefined4
FUN_006d0cf0(AnonShape_006D0CF0_F5F86399 *param_1,int param_2,int param_3,
            AnonShape_006D0680_EDC74182 *param_4,int param_5,int param_6,int param_7,int param_8,
            int param_9,byte param_10)

{
  undefined1 *puVar1;
  int iVar2;
  byte *pbVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c [2];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  uint local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079daa0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffa8;
  if (((param_1->field_0474 == 0) || (0x10 < param_1->field_0020)) || (param_4->field_000E != 8)) {
    return 0xffffffd0;
  }
  if ((param_8 < 1) || (param_9 < 1)) {
    return 0;
  }
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffa8;
  if (param_5 == 0) {
    ExceptionList = &local_14;
    param_5 = FUN_006b4fa0((int)param_4);
    puVar1 = local_1c;
  }
  local_1c = puVar1;
  local_24 = 0;
  iVar6 = param_2 + param_1->field_0010;
  iVar5 = param_3 + param_1->field_0014;
  local_2c = param_8;
  local_28 = param_9;
  local_34 = iVar6;
  local_30 = iVar5;
  iVar2 = FUN_006cfeb0(&local_34,&local_34,(int *)&param_1->field_0x484);
  if (iVar2 != 0) {
    param_1->field_0050 =
         param_1->field_0478 /
         ((int)(param_1->field_0020 + (param_1->field_0020 >> 0x1f & 7U)) >> 3);
    local_4c = param_6 + (local_34 - iVar6);
    local_48 = param_7 + (local_30 - iVar5);
    local_44 = local_2c;
    local_40 = local_28;
    iVar2 = FUN_006d0680((AnonShape_006D0680_01056108 *)&param_1->field_0x4c,&local_34,&local_20,
                         param_4,&local_4c,local_3c);
    if (iVar2 != 0) {
      if ((int)local_3c[0] < 0) {
        iVar2 = -((local_40 + -1 + local_48) * local_3c[0]);
      }
      else {
        iVar2 = ((param_4->field_0008 - local_40) - local_48) * local_3c[0];
      }
      pbVar3 = (byte *)(param_5 + local_4c + iVar2);
      iVar2 = param_1->field_0020 * local_34;
      puVar4 = (uint *)((((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) -
                        (local_28 + -1 + local_30) * local_20) + param_1->field_0474);
      local_8 = 0;
      if (param_1->field_0020 == 8) {
        FUN_006cebe0((char *)puVar4,local_20,(char *)pbVar3,local_3c[0],local_2c,local_28,param_10);
        ExceptionList = local_14;
        return local_24;
      }
      FUN_006d13c0(puVar4,local_20,pbVar3,local_3c[0],local_2c,local_28,param_1->field_04C0,param_10
                  );
      ExceptionList = local_14;
      return local_24;
    }
  }
  ExceptionList = local_14;
  return local_24;
}

