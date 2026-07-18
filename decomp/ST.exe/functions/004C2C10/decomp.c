
undefined4 __fastcall FUN_004c2c10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_58 [5];
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  int local_8;
  
  if (*(int *)(param_1 + 0x408) == 0) {
    puVar3 = local_58;
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_58[1] = *(undefined4 *)(param_1 + 0x24);
    iVar2 = *(int *)(param_1 + 0x235) * 4;
    local_58[3] = 1;
    local_58[2] = 1;
    local_38 = *(undefined4 *)(&DAT_00794fa4 + iVar2);
    local_34 = *(undefined4 *)(&DAT_007950ac + iVar2);
    local_44 = (int)*(short *)(param_1 + 0x41);
    local_40 = (int)*(short *)(param_1 + 0x43);
    local_28 = (uint)*(ushort *)(param_1 + 0x32);
    local_3c = (int)*(short *)(param_1 + 0x45);
    local_2c = *(undefined4 *)(param_1 + 0x18);
    local_58[0] = 0xdc;
    local_30 = 100;
    if (*(int *)(param_1 + 0x5ac) == 0x4d) {
      local_24 = *(undefined4 *)(param_1 + 0x4d4);
    }
    else if (*(int *)(param_1 + 0x5ac) == 0x73) {
      local_24 = *(undefined4 *)(param_1 + 0x4d0);
    }
    thunk_FUN_0054cc20(0xdc,0,&local_8,local_58,0);
    uVar1 = *(undefined4 *)(local_8 + 0x18);
    *(undefined4 *)(param_1 + 0x408) = 1;
    *(undefined4 *)(param_1 + 0x40c) = uVar1;
    return 0;
  }
  return 0;
}

