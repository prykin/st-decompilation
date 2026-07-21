
void __thiscall FUN_006ea800(void *this,uint param_1,int param_2,int param_3)

{
  uint *puVar1;
  ushort *puVar2;

  if ((param_1 < *(uint *)((int)this + 0x310)) &&
     (puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114), (*puVar1 & 0x8000) != 0)) {
    if ((int)puVar1[0x25] <= param_2) {
      FUN_006e91a0();
      return;
    }
    puVar2 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
    if (param_3 == 0) {
      *puVar2 = *puVar2 & 0xffef;
    }
    else {
      *(byte *)puVar2 = (byte)*puVar2 | 0x10;
    }
    if ((puVar1[2] == 0) && ((*puVar1 & 0x10001) != 0)) {
      *puVar1 = *puVar1 & 0xff87ffff | 4;
      return;
    }
  }
  else if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

