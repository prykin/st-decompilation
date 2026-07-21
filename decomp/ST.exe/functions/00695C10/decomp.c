
uint __thiscall
FUN_00695c10(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;

  puVar4 = &local_24;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)puVar4 = 0;
  local_1f = param_2;
  local_24 = param_1;
  if (param_3 < 0) {
    param_3 = 0;
  }
  local_20 = (undefined1)param_3;
  local_1b = param_4;
  local_17 = param_5;
  if (*(int *)((int)this + 0x5853) == 0) {
    puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x1d,10);
    *(uint **)((int)this + 0x5853) = puVar1;
  }
  if (*(uint **)((int)this + 0x5853) != (uint *)0x0) {
    uVar2 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x5853),&local_24);
    return uVar2;
  }
  return 0xffffffff;
}

