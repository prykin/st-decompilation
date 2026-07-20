
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004DBE00 -> 006E62D0 @ 004DBE3B | 004DBE00 -> 006E62D0 @ 004DBEC1 */

undefined4 __thiscall FUN_004dbe00(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = (int *)((int)this + 0x4d0);
  do {
    if ((int *)*piVar1 == param_1) {
      iVar2 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + iVar3 * 4 + 0x4d0),(int *)&param_1);
      piVar1 = param_1;
      if (iVar2 == 0) {
        param_1[0x130] = 0;
        if (*(int **)((int)param_1 + 0x61f) != (int *)0x0) {
          thunk_FUN_00635fd0(*(int **)((int)param_1 + 0x61f));
          Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)((int)piVar1 + 0x61f));
          *(undefined4 *)((int)piVar1 + 0x61f) = 0;
        }
      }
      *(undefined4 *)((int)this + iVar3 * 4 + 0x4d0) = 0;
      *(undefined4 *)((int)this + iVar3 * 4 + 0x4e0) = 0;
      if (*(int *)((int)this + (0x135 - iVar3) * 4) != 0) {
        piVar1 = (int *)((int)this + (0x139 - iVar3) * 4);
        *piVar1 = 100;
        if (*(int *)((int)this + (0x13b - iVar3) * 4) != 0) {
          iVar3 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + (0x135 - iVar3) * 4),
                               (int *)&param_1);
          if ((iVar3 == 0) && (param_1[0x131] == *(int *)((int)this + 0x18))) {
            param_1[0x130] = *piVar1;
          }
        }
      }
      return 0;
    }
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar3 < 2);
  return 0;
}

