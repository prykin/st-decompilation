
void __thiscall
thunk_FUN_0049a500(void *this,undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  uint uVar1;
  void *this_00;
  uint uVar2;
  undefined4 extraout_EDX;
  short sVar3;
  short sVar5;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  uint uStack_10;
  uint uStack_c;
  int iStack_8;
  int iVar4;
  int iVar6;
  
  uVar2 = 0;
  uVar1 = *(uint *)(*(int *)((int)this + 0x29) + 0xc);
  if (*(short *)((int)this + 0x27) != 0) {
    iVar4 = 0;
    sVar3 = 0;
    iVar6 = 0;
    sVar5 = 0;
    iStack_8 = 0;
    uStack_c = 0;
    if (uVar1 != 0) {
      do {
        FUN_006acc70(*(int *)((int)this + 0x29),uVar2,&uStack_10);
        if ((short)uStack_10 != -1) {
          this_00 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                        *(undefined1 *)((int)this + 0x24)),uStack_10
                                               ,1);
          thunk_FUN_004162b0(this_00,(undefined2 *)&iStack_14,(undefined2 *)&iStack_18,
                             (undefined2 *)&iStack_1c);
          iVar6 = iVar6 + iStack_14;
          iVar4 = iVar4 + iStack_18;
          iStack_8 = iStack_8 + iStack_1c;
        }
        sVar5 = (short)iVar6;
        sVar3 = (short)iVar4;
        uStack_c = uStack_c + 1;
        uVar2 = uStack_c & 0xffff;
      } while (uVar2 < uVar1);
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = (short)((int)sVar5 / (int)(uint)*(ushort *)((int)this + 0x27));
    }
    if (param_2 != (undefined2 *)0x0) {
      *param_2 = (short)((int)sVar3 / (int)(uint)*(ushort *)((int)this + 0x27));
    }
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = (short)((int)(short)iStack_8 / (int)(uint)*(ushort *)((int)this + 0x27));
    }
  }
  return;
}

