
void __thiscall FUN_006e9520(void *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (param_1 < *(uint *)((int)this + 0x310)) {
    puVar3 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
    uVar1 = *(uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
    if ((uVar1 & 0x8000) != 0) {
      uVar2 = puVar3[1];
      if (param_3 == 0) {
        if ((uVar2 & 0x8000) == 0) {
          return;
        }
        puVar3[1] = uVar2 & 0xffff7fff;
        iVar5 = 0;
        *puVar3 = uVar1 | 0x204c;
        if (0 < (int)puVar3[0x38]) {
          puVar4 = (undefined4 *)(puVar3[0x39] + 8);
          do {
            FUN_006a5e90((undefined4 *)*puVar4);
            puVar4 = puVar4 + 3;
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)puVar3[0x38]);
        }
        FUN_006ab060(puVar3 + 0x39);
        iVar5 = 0;
        if (0 < (int)puVar3[0x38]) {
          puVar4 = (undefined4 *)(puVar3[0x3c] + 0xc);
          do {
            FUN_006a5e90((undefined4 *)*puVar4);
            puVar4 = puVar4 + 4;
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)puVar3[0x38]);
        }
        FUN_006ab060(puVar3 + 0x3c);
        puVar3[0x38] = 0;
        if ((puVar3[1] & 0x40) == 0) {
          return;
        }
        puVar3 = (uint *)(*(int *)((int)this + 0x31c) + puVar3[7] * 0x114);
      }
      else {
        if (((((uVar2 & 0x8000) != 0) && (puVar3[0x3d] == param_3)) && (puVar3[0x3e] == param_4)) &&
           (puVar3[0x41] == param_2)) {
          return;
        }
        puVar3[1] = uVar2 | 0x8000;
        *puVar3 = uVar1 & 0xffffdfff | 0x4c;
        puVar3[0x3d] = param_3;
        puVar3[0x3e] = param_4;
        puVar3[0x41] = 0;
        if ((uVar2 & 0x40) == 0) {
          return;
        }
        puVar3 = (uint *)(*(int *)((int)this + 0x31c) + puVar3[7] * 0x114);
      }
      if (puVar3[2] != 0) {
        return;
      }
      if ((*puVar3 & 0x10000) == 0) {
        return;
      }
      *puVar3 = *puVar3 | 4;
      return;
    }
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

