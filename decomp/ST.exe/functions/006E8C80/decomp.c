
void __thiscall
FUN_006e8c80(void *this,uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint *puVar1;
  
  if (((param_1 < *(uint *)((int)this + 0x310)) &&
      (puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114), (*puVar1 & 0x8000) != 0))
     && ((puVar1[1] & 0x4000) != 0)) {
    *(undefined4 *)puVar1[0x28] = param_2;
    *(undefined4 *)(puVar1[0x28] + 4) = param_3;
    *(undefined4 *)(puVar1[0x28] + 8) = param_4;
    *(undefined4 *)(puVar1[0x28] + 0xc) = param_5;
    *(undefined4 *)(puVar1[0x28] + 0x10) = param_6;
    *(undefined4 *)(puVar1[0x28] + 0x14) = param_7;
    *puVar1 = *puVar1 | 0xc;
    return;
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

