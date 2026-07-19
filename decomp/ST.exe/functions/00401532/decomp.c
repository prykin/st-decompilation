
undefined4 __thiscall
thunk_FUN_004e99e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_25;
  undefined4 uStack_21;
  undefined4 uStack_1d;
  undefined4 uStack_9;
  
  if (*(int *)((int)this + 0x4f8) == 0) {
    puVar3 = &uStack_74;
    for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = 0;
    *(undefined1 *)((int)puVar3 + 2) = 0;
    uStack_70 = *(undefined4 *)((int)this + 0x24);
    uStack_48 = param_1;
    uStack_3c = (uint)*(ushort *)((int)this + 0x30);
    uStack_64 = DAT_00791f18;
    uStack_50 = DAT_00791f18;
    uStack_21 = 100;
    uStack_1d = 100;
    uStack_68 = 1;
    uStack_6c = 1;
    uStack_58 = 1;
    uStack_44 = param_2;
    uStack_38 = *(undefined4 *)((int)this + 0x5c0);
    uStack_40 = param_3;
    uStack_25 = *(undefined4 *)((int)this + 0x18);
    uStack_74 = 0x3e9;
    uStack_9 = 0;
    uStack_54 = 3;
    uStack_60 = 1000;
    uStack_4c = 0x6c;
    uStack_5c = uStack_70;
    STPlaySystemC::CreateGameObject(DAT_00802a38,0x3e9,0,(int *)((int)this + 0x61b),&uStack_74,0);
    uVar1 = *(undefined4 *)(*(int *)((int)this + 0x61b) + 0x18);
    *(undefined4 *)((int)this + 0x4fc) = 0;
    *(undefined4 *)((int)this + 0x4f8) = uVar1;
    return 0;
  }
  return 0;
}

