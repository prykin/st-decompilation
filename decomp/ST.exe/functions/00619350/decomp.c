
void __thiscall FUN_00619350(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;

  puVar1 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x104);
  *(undefined4 *)((int)this + 0x14c) = *(undefined4 *)((int)this + 0x1c);
  puVar3 = (undefined4 *)((int)this + 0x4d);
  puVar4 = puVar1;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar1[3] = 2;
  *param_1 = 0x104;
  return;
}

