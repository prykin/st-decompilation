
int __thiscall
FUN_00631aa0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;

  puVar4 = local_30;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)puVar4 = 0;
  local_30[1] = param_2;
  local_30[0] = param_1;
  local_30[2] = param_3;
  local_30[3] = param_4;
  local_20 = param_5;
  local_18 = param_7;
  local_1c = param_6;
  local_14 = param_8;
  if (*(int *)((int)this + 0x6d) == 0) {
    puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x29,10);
    *(uint **)((int)this + 0x6d) = puVar1;
  }
  if (*(uint **)((int)this + 0x6d) != (uint *)0x0) {
    uVar2 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x6d),local_30);
    return uVar2 + 1;
  }
  return 1;
}

