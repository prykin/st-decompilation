
undefined4 __thiscall
FUN_004e99e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_9;
  
  if (*(int *)((int)this + 0x4f8) == 0) {
    puVar3 = &local_74;
    for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = 0;
    *(undefined1 *)((int)puVar3 + 2) = 0;
    local_70 = *(undefined4 *)((int)this + 0x24);
    local_48 = param_1;
    local_3c = (uint)*(ushort *)((int)this + 0x30);
    local_64 = DAT_00791f18;
    local_50 = DAT_00791f18;
    local_21 = 100;
    local_1d = 100;
    local_68 = 1;
    local_6c = 1;
    local_58 = 1;
    local_44 = param_2;
    local_38 = *(undefined4 *)((int)this + 0x5c0);
    local_40 = param_3;
    local_25 = *(undefined4 *)((int)this + 0x18);
    local_74 = 0x3e9;
    local_9 = 0;
    local_54 = 3;
    local_60 = 1000;
    local_4c = 0x6c;
    local_5c = local_70;
    thunk_FUN_0054cc20(0x3e9,0,(int *)((int)this + 0x61b),&local_74,0);
    uVar1 = *(undefined4 *)(*(int *)((int)this + 0x61b) + 0x18);
    *(undefined4 *)((int)this + 0x4fc) = 0;
    *(undefined4 *)((int)this + 0x4f8) = uVar1;
    return 0;
  }
  return 0;
}

