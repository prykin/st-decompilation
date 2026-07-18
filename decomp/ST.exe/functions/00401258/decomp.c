
void __thiscall thunk_FUN_004602e0(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar3 = (undefined4 *)((int)this + 0x2cc);
    for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)((int)this + 0x2c4) = 0;
    uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    *(short *)((int)this + 0xf8) = (short)((ulonglong)(uVar1 >> 0x10) % 0x1f) + 0x1e;
  }
  thunk_FUN_0045ff50(this,param_1);
  return;
}

