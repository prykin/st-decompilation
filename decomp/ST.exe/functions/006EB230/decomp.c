
undefined4 __thiscall
FUN_006eb230(void *this,uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_4 != 0) && (param_5 != 0)) {
    iVar5 = param_4;
    if (param_4 < 0) {
      iVar5 = -param_4;
      param_2 = param_2 + param_4 + 1;
    }
    iVar3 = param_5;
    if (param_5 < 0) {
      iVar3 = -param_5;
      param_3 = param_3 + param_5 + 1;
    }
    if (param_1 < *(uint *)((int)this + 0x310)) {
      puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
      if ((*puVar1 & 0x8000) != 0) {
        if (puVar1[2] != 0) {
          return 0;
        }
        if ((*puVar1 & 0x10000) == 0) {
          return 0;
        }
        iVar4 = (int)puVar1[0x17] / 2 + puVar1[0x15];
        iVar2 = (int)puVar1[0x18] / 2 + puVar1[0x16];
        if (iVar4 < param_2) {
          return 0;
        }
        if (param_2 + iVar5 <= iVar4) {
          return 0;
        }
        if (iVar2 < param_3) {
          return 0;
        }
        if (param_3 + iVar3 <= iVar2) {
          return 0;
        }
        return 1;
      }
    }
    if (param_1 != 0xffffffff) {
      FUN_006e8c50();
    }
  }
  return 0;
}

