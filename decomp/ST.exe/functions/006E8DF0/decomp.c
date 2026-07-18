
void __thiscall
FUN_006e8df0(void *this,uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,int param_6,int param_7)

{
  uint *puVar1;
  
  if (((param_1 < *(uint *)((int)this + 0x310)) &&
      (puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114), (*puVar1 & 0x8000) != 0))
     && ((puVar1[1] & 0x2000) != 0)) {
    *(undefined4 *)(puVar1[0x28] + 8) = param_2;
    *(undefined4 *)(puVar1[0x28] + 0xc) = param_3;
    *(undefined4 *)(puVar1[0x28] + 0x10) = param_4;
    if (param_5 != -32000) {
      *(int *)(puVar1[0x28] + 0x19) = 0x168 - param_5;
    }
    if (0 < param_6) {
      *(int *)(puVar1[0x28] + 0x1d) = param_6;
    }
    if (0 < param_7) {
      *(int *)(puVar1[0x28] + 0x21) = param_7;
    }
    *puVar1 = *puVar1 | 0xc;
    return;
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

