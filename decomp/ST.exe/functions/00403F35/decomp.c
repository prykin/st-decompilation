
void __thiscall thunk_FUN_00646d40(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x95);
  *(undefined4 *)((int)this + 0x28) = 2;
  *(undefined4 *)((int)this + 0xad) = *(undefined4 *)((int)this + 0xb1);
  if (this == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)((int)this + 0x1c);
  }
  for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar1 = puVar1 + 1;
  }
  *(undefined1 *)puVar1 = *(undefined1 *)puVar3;
  *param_1 = 0x95;
  return;
}

