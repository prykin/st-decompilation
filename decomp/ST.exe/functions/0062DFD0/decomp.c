
uint __thiscall FUN_0062dfd0(void *this,int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint local_c;
  uint local_8;
  
  local_c = 0xffffffff;
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x70);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0xc);
    local_8 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = *(int *)((int)this + param_1 * 4 + 0x70);
        if ((((local_8 < *(uint *)(iVar3 + 0xc)) &&
             (piVar4 = (int *)(*(int *)(iVar3 + 8) * local_8 + *(int *)(iVar3 + 0x1c)),
             piVar4 != (int *)0x0)) && (*piVar4 == param_2)) && (uVar2 = piVar4[2], -1 < (int)uVar2)
           ) {
          iVar3 = *(int *)((int)this + param_1 * 4 + 0x50);
          if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0xc))) &&
             (iVar3 = *(int *)(iVar3 + 8) * uVar2 + *(int *)(iVar3 + 0x1c), iVar3 != 0)) {
            thunk_FUN_0062dfb0();
            *param_3 = piVar4[2];
            *(undefined4 *)(iVar3 + 0x10 + piVar4[2] * 4) = 0;
            *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + -1;
          }
          FUN_006b0c70(*(AnonShape_006B0C70_7C4FE646 **)((int)this + param_1 * 4 + 0x70),local_8);
          local_c = local_8;
        }
        local_8 = local_8 + 1;
      } while ((int)local_8 < iVar1);
    }
    return local_c;
  }
  return 0xffffffff;
}

