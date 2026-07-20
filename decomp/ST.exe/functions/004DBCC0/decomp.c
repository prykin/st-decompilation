
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004DBCC0 -> 006E62D0 @ 004DBD2B | 004DBCC0 -> 006E62D0 @ 004DBD92 */

undefined4 __thiscall FUN_004dbcc0(void *this,int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1;
  if ((*(int *)((int)this + (int)param_1 * 4 + 0x4d0) != 0) &&
     (*(int *)((int)this + (int)param_1 * 4 + 0x4e8) != 0)) {
    *(int *)((int)this + (int)param_1 * 4 + 0x4e0) = param_2;
    if (100 < param_2) {
      *(undefined4 *)((int)this + (int)param_1 * 4 + 0x4e0) = 100;
    }
    if (*(int *)((int)this + (int)param_1 * 4 + 0x4e0) < 0) {
      *(undefined4 *)((int)this + (int)param_1 * 4 + 0x4e0) = 0;
    }
    iVar3 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + (int)param_1 * 4 + 0x4d0),(int *)&param_1
                        );
    if (iVar3 == 0) {
      iVar3 = *(int *)((int)this + 0x18);
      param_1[0x130] = *(int *)((int)this + (int)piVar2 * 4 + 0x4e0);
      param_1[0x131] = iVar3;
    }
    if (*(int *)((int)this + (0x135 - (int)piVar2) * 4) != 0) {
      piVar1 = (int *)((int)this + (0x139 - (int)piVar2) * 4);
      *piVar1 = 100 - *(int *)((int)this + (int)piVar2 * 4 + 0x4e0);
      if (*(int *)((int)this + (0x13b - (int)piVar2) * 4) != 0) {
        iVar3 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + (0x135 - (int)piVar2) * 4),
                             (int *)&param_1);
        if ((iVar3 == 0) && (param_1[0x131] == *(int *)((int)this + 0x18))) {
          param_1[0x130] = *piVar1;
        }
      }
    }
  }
  return 0;
}

