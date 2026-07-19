
uint __thiscall thunk_FUN_00631880(void *this,undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 auStack_2c [8];
  undefined4 uStack_b;
  
  uVar1 = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    puVar4 = auStack_2c;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined1 *)puVar4 = *(undefined1 *)param_1;
    uStack_b = param_2;
    if (*(int *)((int)this + 0x3c) == 0) {
      puVar2 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x25,10);
      *(uint **)((int)this + 0x3c) = puVar2;
    }
    if (*(uint **)((int)this + 0x3c) == (uint *)0x0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x3c),auStack_2c);
      if (-1 < (int)uVar1) {
        return uVar1 + 1;
      }
    }
  }
  return uVar1;
}

