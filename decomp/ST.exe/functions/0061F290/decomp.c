
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0061f290(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int local_1c;
  int local_18;
  void *local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  local_10 = 0;
  if (*(int *)((int)this + 0xa3) != 0) {
    iVar1 = *(int *)(*(int *)((int)this + 0xa3) + 0xc);
    if ((iVar1 != 0) && (local_c = 0, local_14 = this, 0 < iVar1)) {
      do {
        this_00 = DAT_00802a88;
        iVar3 = *(int *)((int)local_14 + 0xa3);
        if (local_c < *(uint *)(iVar3 + 0xc)) {
          piVar4 = (int *)(*(int *)(iVar3 + 8) * local_c + *(int *)(iVar3 + 0x1c));
        }
        else {
          piVar4 = (int *)0x0;
        }
        if ((-1 < (int)*(uint *)((int)piVar4 + 0x26)) && (-1 < *piVar4)) {
          if (*(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)piVar4 + 0x2a) <
              *(int *)((int)local_14 + 0x5f)) {
            local_10 = 1;
            if ((param_1 != 0) && (DAT_00802a88 != (void *)0x0)) {
              if ((float)piVar4[3] < _DAT_0079034c) {
                lVar5 = __ftol();
                iVar3 = (short)lVar5 + -1;
              }
              else {
                lVar5 = __ftol();
                iVar3 = (int)(short)lVar5;
              }
              if ((float)piVar4[2] < _DAT_0079034c) {
                lVar5 = __ftol();
                local_8 = (short)lVar5 + -1;
              }
              else {
                lVar5 = __ftol();
                local_8 = (int)(short)lVar5;
              }
              if ((float)piVar4[1] < _DAT_0079034c) {
                lVar5 = __ftol();
                iVar2 = (short)lVar5 + -1;
              }
              else {
                lVar5 = __ftol();
                iVar2 = (int)(short)lVar5;
              }
              if ((((((DAT_0080874d == -1) || (*(int *)((int)this_00 + 0xf8) == 0)) ||
                    (thunk_FUN_00558c00(this_00,*(undefined4 *)((int)this_00 + 0x10c),iVar2,local_8,
                                        &local_18,&local_1c), iVar3 < 0)) ||
                   ((4 < iVar3 || (local_18 < 0)))) ||
                  ((*(int *)((int)this_00 + 0x30) <= local_18 ||
                   ((iVar3 = (&DAT_0079aed0)[iVar3] + local_1c, iVar3 < 0 ||
                    (*(int *)((int)this_00 + 0x34) <= iVar3)))))) ||
                 ((*(int *)((int)this_00 + 0x4c) == 0 ||
                  (*(char *)(iVar3 * *(int *)((int)this_00 + 0x30) + *(int *)((int)this_00 + 0x4c) +
                            local_18) != '\0')))) {
                if (*(char *)((int)piVar4 + 0x2f) == '\0') {
                  FUN_006eaaa0(DAT_00807598,*(uint *)((int)piVar4 + 0x26),0);
                  *(undefined1 *)((int)piVar4 + 0x2f) = 1;
                }
              }
              else if (*(char *)((int)piVar4 + 0x2f) == '\x01') {
                FUN_006eab60(DAT_00807598,*(uint *)((int)piVar4 + 0x26));
                *(undefined1 *)((int)piVar4 + 0x2f) = 0;
              }
            }
          }
          else {
            FUN_006e8ba0(DAT_00807598,*(uint *)((int)piVar4 + 0x26));
            *(undefined4 *)((int)piVar4 + 0x26) = 0xffffffff;
            *piVar4 = -1;
          }
        }
        local_c = local_c + 1;
      } while ((int)local_c < iVar1);
    }
    return local_10;
  }
  return 0;
}

