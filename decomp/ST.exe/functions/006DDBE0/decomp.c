
void __fastcall FUN_006ddbe0(AnonShape_006DDBE0_9835BAB9 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  ushort *local_2c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079dfd8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  if (((param_1->field_0004 == 0) || ((*(uint *)(param_1->field_0004 + 0xc) & 0x1100) != 0x100)) &&
     ((param_1->field_02DC == 0 || (param_1->field_02D8 != 0)))) {
    uVar4 = param_1->field_0038 - param_1->field_0030;
    iVar3 = param_1->field_003C - param_1->field_0034;
    ExceptionList = &local_14;
    FUN_006b01d0(param_1->field_000C,param_1->field_0028,param_1->field_0030,param_1->field_0034,
                 uVar4,iVar3,(char)param_1->field_0128);
    if (param_1->field_0124 == 1) {
      puVar2 = (undefined4 *)
               (param_1->field_0028 * param_1->field_0034 + param_1->field_0014 +
               param_1->field_0030);
      while (iVar3 != 0) {
        puVar5 = puVar2;
        for (uVar1 = uVar4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar5 = 0x40404040;
          puVar5 = puVar5 + 1;
        }
        for (uVar1 = uVar4 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar5 = 0x40;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        puVar2 = (undefined4 *)((int)puVar2 + param_1->field_0028);
        iVar3 = iVar3 + -1;
      }
    }
    else {
      local_2c = (ushort *)
                 (param_1->field_0014 +
                 (param_1->field_0028 * param_1->field_0034 + param_1->field_0030) * 2);
      local_8 = 1;
      while (iVar3 != 0) {
        FUN_006ce6c0(local_2c,uVar4,30000);
        local_2c = local_2c + param_1->field_0028;
        iVar3 = iVar3 + -1;
      }
    }
  }
  ExceptionList = local_14;
  return;
}

