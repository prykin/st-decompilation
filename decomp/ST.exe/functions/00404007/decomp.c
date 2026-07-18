
void __thiscall thunk_FUN_006964f0(void *this,uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int *piVar4;
  int aiStack_54 [9];
  undefined4 uStack_30;
  uint uStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int *piStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  int *piStack_c;
  int iStack_8;
  
  iStack_8 = 0;
  iVar1 = *(int *)((int)this + 0x5853);
  if (((iVar1 != 0) && (param_1 < *(uint *)(iVar1 + 0xc))) &&
     (piVar4 = (int *)(*(int *)(iVar1 + 8) * param_1 + *(int *)(iVar1 + 0x1c)), piVar4 != (int *)0x0
     )) {
    if (param_2 != 0) {
      iStack_8 = *piVar4;
    }
    iStack_24 = *(int *)((int)this + 0x584f) + *(int *)((int)this + 0x582f) * iStack_8 * 2;
    iVar1 = *(int *)(*(int *)((int)piVar4 + 0x15) + 0xc);
    *(int *)((int)piVar4 + 0x11) = iVar1;
    piStack_1c = piVar4;
    if (iVar1 == 0) {
      thunk_FUN_00695cd0(this,param_1,param_2,-1);
    }
    else {
      thunk_FUN_006948e0(this,*(int *)((int)this + 0x5833));
      iVar1 = *(int *)((int)piVar4 + 0x15);
      uStack_18 = 0;
      uVar2 = *(uint *)(iVar1 + 0xc);
      if (0 < (int)uVar2) {
        do {
          if (uStack_18 < uVar2) {
            puVar3 = (undefined1 *)(*(int *)(iVar1 + 8) * uStack_18 + *(int *)(iVar1 + 0x1c));
          }
          else {
            puVar3 = (undefined1 *)0x0;
          }
          iStack_28 = thunk_FUN_00696400(this,*(int *)(puVar3 + 2),(int)aiStack_54);
          iStack_14 = 0;
          iStack_10 = 0;
          if (0 < iStack_28) {
            piStack_c = aiStack_54;
            iStack_20 = iStack_28;
            do {
              iVar1 = *piStack_c;
              uVar2 = (uint)*(short *)(iStack_24 + iVar1 * 2);
              if (uVar2 == param_1) {
                iStack_14 = iStack_14 + 1;
                if (param_2 != 0) {
                  thunk_FUN_006a1370(*(int **)((int)this + 8),iVar1 % *(int *)((int)this + 0x5833),
                                     iVar1 / *(int *)((int)this + 0x5833),iStack_8,&uStack_30);
                  uVar2 = uStack_2c & 0xf;
                  piVar4 = piStack_1c;
                  if (((uStack_2c & 0x2000) == 0x2000) &&
                     (((8 < uVar2 && (uVar2 < 0xf)) || (uVar2 == 0)))) {
                    iStack_10 = iStack_10 + 1;
                  }
                }
              }
              else {
                thunk_FUN_006960d0(this,param_1,uVar2);
              }
              piStack_c = piStack_c + 1;
              iStack_20 = iStack_20 + -1;
            } while (iStack_20 != 0);
            iStack_20 = 0;
          }
          *puVar3 = 0;
          if (((iStack_14 == iStack_28) && (iStack_28 == 8)) &&
             ((*puVar3 = 1, 3 < iStack_10 && (*puVar3 = 3, iStack_10 == 8)))) {
            *puVar3 = 7;
          }
          iVar1 = *(int *)((int)piVar4 + 0x15);
          uStack_18 = uStack_18 + 1;
          uVar2 = *(uint *)(iVar1 + 0xc);
        } while ((int)uStack_18 < (int)uVar2);
        return;
      }
    }
  }
  return;
}

