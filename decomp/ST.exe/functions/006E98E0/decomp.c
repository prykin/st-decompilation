
undefined4 __thiscall
FUN_006e98e0(void *this,uint param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  uint *puVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  
  if ((param_1 < *(uint *)((int)this + 0x310)) &&
     (puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114),
     (*(uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114) & 0x8000) != 0)) {
    if (puVar1[0x25] <= param_2) {
      FUN_006e91a0();
      return 0;
    }
    if (puVar1[0x28] == 0) {
      puVar3 = FUN_006aac10(puVar1[0x25] * 8);
      puVar1[0x28] = (uint)puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        return 0xfffffffe;
      }
      puVar1[1] = puVar1[1] | 1;
    }
    if (param_4 != *(int *)(puVar1[0x28] + 4 + param_2 * 8)) {
      *puVar1 = *puVar1 & 0xff87ffff | 0x4c;
      *(undefined2 *)(puVar1[0x29] + 2 + param_2 * 4) = 0;
    }
    *(undefined4 *)(puVar1[0x28] + param_2 * 8) = param_3;
    *(int *)(puVar1[0x28] + 4 + param_2 * 8) = param_4;
    if ((*puVar1 & 0x1000) == 0) {
      FUN_006e8840((int)puVar1);
    }
    if (param_4 != 0) {
      pbVar2 = (byte *)(puVar1[0x29] + 3 + param_2 * 4);
      *pbVar2 = *pbVar2 | 0x80;
      if (param_5 != 0) {
        pbVar2 = (byte *)(puVar1[0x29] + 3 + param_2 * 4);
        *pbVar2 = *pbVar2 | 0x40;
      }
      FUN_006e9a10(puVar1,param_2,0xfffffffe);
      return 0;
    }
  }
  else if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return 0;
}

