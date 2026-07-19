
uint __thiscall
FUN_00620520(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = param_1;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  if (*(int *)((int)this + 0xd1) == 0) {
    puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
    *(uint **)((int)this + 0xd1) = puVar1;
  }
  if (*(uint **)((int)this + 0xd1) != (uint *)0x0) {
    uVar2 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0xd1),&local_18);
    return uVar2;
  }
  return 0xffffffff;
}

