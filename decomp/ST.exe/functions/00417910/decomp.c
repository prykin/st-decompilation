
uint __thiscall FUN_00417910(void *this,short param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)*(short *)((int)this + 0x86);
  iVar4 = (int)param_1;
  if ((int)(param_1 / *(short *)((int)this + 0x86)) * uVar3 - iVar4 != 0) {
    return 0xffffffff;
  }
  sVar1 = *(short *)((int)this + 0x6c);
  if (sVar1 == param_1) {
    return 0;
  }
  uVar2 = (int)uVar3 >> 0x1f;
  if (param_1 < sVar1) {
    if (0xb3 < sVar1 - iVar4) {
      iVar4 = (uVar3 ^ uVar2) - uVar2;
      sVar1 = (short)iVar4;
      goto LAB_00417989;
    }
  }
  else if (iVar4 - sVar1 < 0xb4) {
    iVar4 = (uVar3 ^ uVar2) - uVar2;
    sVar1 = (short)iVar4;
    goto LAB_00417989;
  }
  iVar4 = (uVar3 ^ uVar2) - uVar2;
  sVar1 = -(short)iVar4;
LAB_00417989:
  *(short *)((int)this + 0x6c) = *(short *)((int)this + 0x6c) + sVar1;
  if (0x168 - iVar4 < (int)*(short *)((int)this + 0x6c)) {
    *(undefined2 *)((int)this + 0x6c) = 0;
  }
  if (*(short *)((int)this + 0x6c) < 0) {
    *(short *)((int)this + 0x6c) = 0x168 - (short)iVar4;
  }
  return -(uint)(*(short *)((int)this + 0x6c) != param_1) & 2;
}

