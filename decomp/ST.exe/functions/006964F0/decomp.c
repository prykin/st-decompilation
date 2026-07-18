
void __thiscall FUN_006964f0(void *this,uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int *piVar4;
  int local_54 [9];
  undefined4 local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  iVar1 = *(int *)((int)this + 0x5853);
  if (((iVar1 != 0) && (param_1 < *(uint *)(iVar1 + 0xc))) &&
     (piVar4 = (int *)(*(int *)(iVar1 + 8) * param_1 + *(int *)(iVar1 + 0x1c)), piVar4 != (int *)0x0
     )) {
    if (param_2 != 0) {
      local_8 = *piVar4;
    }
    local_24 = *(int *)((int)this + 0x584f) + *(int *)((int)this + 0x582f) * local_8 * 2;
    iVar1 = *(int *)(*(int *)((int)piVar4 + 0x15) + 0xc);
    *(int *)((int)piVar4 + 0x11) = iVar1;
    local_1c = piVar4;
    if (iVar1 == 0) {
      thunk_FUN_00695cd0(this,param_1,param_2,-1);
    }
    else {
      thunk_FUN_006948e0(this,*(int *)((int)this + 0x5833));
      iVar1 = *(int *)((int)piVar4 + 0x15);
      local_18 = 0;
      uVar2 = *(uint *)(iVar1 + 0xc);
      if (0 < (int)uVar2) {
        do {
          if (local_18 < uVar2) {
            puVar3 = (undefined1 *)(*(int *)(iVar1 + 8) * local_18 + *(int *)(iVar1 + 0x1c));
          }
          else {
            puVar3 = (undefined1 *)0x0;
          }
          local_28 = thunk_FUN_00696400(this,*(int *)(puVar3 + 2),(int)local_54);
          local_14 = 0;
          local_10 = 0;
          if (0 < local_28) {
            local_c = local_54;
            local_20 = local_28;
            do {
              iVar1 = *local_c;
              uVar2 = (uint)*(short *)(local_24 + iVar1 * 2);
              if (uVar2 == param_1) {
                local_14 = local_14 + 1;
                if (param_2 != 0) {
                  thunk_FUN_006a1370(*(int **)((int)this + 8),iVar1 % *(int *)((int)this + 0x5833),
                                     iVar1 / *(int *)((int)this + 0x5833),local_8,&local_30);
                  uVar2 = local_2c & 0xf;
                  piVar4 = local_1c;
                  if (((local_2c & 0x2000) == 0x2000) &&
                     (((8 < uVar2 && (uVar2 < 0xf)) || (uVar2 == 0)))) {
                    local_10 = local_10 + 1;
                  }
                }
              }
              else {
                thunk_FUN_006960d0(this,param_1,uVar2);
              }
              local_c = local_c + 1;
              local_20 = local_20 + -1;
            } while (local_20 != 0);
            local_20 = 0;
          }
          *puVar3 = 0;
          if (((local_14 == local_28) && (local_28 == 8)) &&
             ((*puVar3 = 1, 3 < local_10 && (*puVar3 = 3, local_10 == 8)))) {
            *puVar3 = 7;
          }
          iVar1 = *(int *)((int)piVar4 + 0x15);
          local_18 = local_18 + 1;
          uVar2 = *(uint *)(iVar1 + 0xc);
        } while ((int)local_18 < (int)uVar2);
        return;
      }
    }
  }
  return;
}

