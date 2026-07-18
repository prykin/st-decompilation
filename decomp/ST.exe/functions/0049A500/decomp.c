
void __thiscall FUN_0049a500(void *this,undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  uint uVar1;
  void *this_00;
  uint uVar2;
  undefined4 extraout_EDX;
  short sVar3;
  short sVar5;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  int iVar4;
  int iVar6;
  
  uVar2 = 0;
  uVar1 = *(uint *)(*(int *)((int)this + 0x29) + 0xc);
  if (*(short *)((int)this + 0x27) != 0) {
    iVar4 = 0;
    sVar3 = 0;
    iVar6 = 0;
    sVar5 = 0;
    local_8 = 0;
    local_c = 0;
    if (uVar1 != 0) {
      do {
        FUN_006acc70(*(int *)((int)this + 0x29),uVar2,&local_10);
        if ((short)local_10 != -1) {
          this_00 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                        *(undefined1 *)((int)this + 0x24)),local_10,
                                               1);
          thunk_FUN_004162b0(this_00,(undefined2 *)&local_14,(undefined2 *)&local_18,
                             (undefined2 *)&local_1c);
          iVar6 = iVar6 + local_14;
          iVar4 = iVar4 + local_18;
          local_8 = local_8 + local_1c;
        }
        sVar5 = (short)iVar6;
        sVar3 = (short)iVar4;
        local_c = local_c + 1;
        uVar2 = local_c & 0xffff;
      } while (uVar2 < uVar1);
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = (short)((int)sVar5 / (int)(uint)*(ushort *)((int)this + 0x27));
    }
    if (param_2 != (undefined2 *)0x0) {
      *param_2 = (short)((int)sVar3 / (int)(uint)*(ushort *)((int)this + 0x27));
    }
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = (short)((int)(short)local_8 / (int)(uint)*(ushort *)((int)this + 0x27));
    }
  }
  return;
}

