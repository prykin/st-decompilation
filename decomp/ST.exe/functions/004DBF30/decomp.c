
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004DBF30 -> 006E62D0 @ 004DBF76 | 004DBF30 -> 006E62D0 @ 004DBFF3 | 004DBF30 ->
   006E62D0 @ 004DC042 | 004DBF30 -> 006E62D0 @ 004DC0AD */

undefined4 __thiscall FUN_004dbf30(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;

  piVar2 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((int)this + (int)param_1 * 4 + 0x4d0) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)((int)this + (int)param_1 * 4 + 0x4e8) == 0) {
      *(undefined4 *)((int)this + (int)param_1 * 4 + 0x4e8) = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + (int)param_1 * 4 + 0x4d0),
                           (int *)&param_1);
      if ((iVar3 == 0) && (param_1[0x131] == *(int *)((int)this + 0x18))) {
        param_1[0x130] = *(int *)((int)this + (int)piVar2 * 4 + 0x4e0);
      }
      if ((*(int *)((int)this + (0x135 - (int)piVar2) * 4) != 0) &&
         (*(int *)((int)this + (0x13b - (int)piVar2) * 4) != 0)) {
        piVar1 = (int *)((int)this + (0x139 - (int)piVar2) * 4);
        *piVar1 = 100 - *(int *)((int)this + (int)piVar2 * 4 + 0x4e0);
        iVar3 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + (0x135 - (int)piVar2) * 4),
                             (int *)&param_1);
        if ((iVar3 == 0) && (param_1[0x131] == *(int *)((int)this + 0x18))) {
          param_1[0x130] = *piVar1;
        }
      }
    }
    else {
      *(undefined4 *)((int)this + (int)param_1 * 4 + 0x4e8) = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + (int)param_1 * 4 + 0x4d0),
                           (int *)&param_1);
      piVar1 = param_1;
      if (iVar3 == 0) {
        param_1[0x130] = 0;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int **)((int)param_1 + 0x61f) != (int *)0x0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          thunk_FUN_00635fd0(*(int **)((int)param_1 + 0x61f));
          Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)((int)piVar1 + 0x61f));
          *(undefined4 *)((int)piVar1 + 0x61f) = 0;
        }
      }
      if ((*(int *)((int)this + (0x135 - (int)piVar2) * 4) != 0) &&
         (*(int *)((int)this + (0x13b - (int)piVar2) * 4) != 0)) {
        piVar1 = (int *)((int)this + (0x139 - (int)piVar2) * 4);
        *piVar1 = 100;
        iVar3 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + (0x135 - (int)piVar2) * 4),
                             (int *)&param_1);
        if ((iVar3 == 0) && (param_1[0x131] == *(int *)((int)this + 0x18))) {
          param_1[0x130] = *piVar1;
          return 0;
        }
      }
    }
  }
  return 0;
}

