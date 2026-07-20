
void __thiscall FUN_0060d810(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(undefined4 **)((int)this + 0x244) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)((int)this + 0x244);
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    **(undefined4 **)((int)this + 0x244) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x244) + 4) = 0x33;
    iVar1 = Library::DKW::LIB::FUN_006aac70(0xcc);
    *(int *)(*(int *)((int)this + 0x244) + 8) = iVar1;
    puVar2 = &DAT_007cf730;
    puVar3 = *(undefined4 **)(*(int *)((int)this + 0x244) + 8);
    for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(*(int *)((int)this + 0x244) + 0xc) = param_1;
    *(undefined4 *)(*(int *)((int)this + 0x244) + 0x10) = param_2;
    *(undefined4 *)(*(int *)((int)this + 0x244) + 0x14) = *(undefined4 *)((int)this + 0x1fd);
    *(undefined4 *)(*(int *)((int)this + 0x244) + 0x18) = 0x1e;
    *(undefined4 *)(*(int *)((int)this + 0x244) + 0x1c) = 0x7d;
    *(undefined4 *)(*(int *)((int)this + 0x244) + 0x28) = PTR_00802a38->field_00E4;
    **(undefined4 **)((int)this + 0x244) = 1;
    *(undefined4 *)(*(int *)((int)this + 0x244) + 0x24) = 0x14;
    *(undefined4 *)(*(int *)((int)this + 0x244) + 0x20) = 0;
    *(undefined4 *)((int)this + 0x240) = 1;
  }
  return;
}

