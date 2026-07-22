
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004E51B0 -> 00494AE0 @ 004E575B */

void __fastcall FUN_00494ae0(int *param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)((int)param_1 + 0x6f7);
  if (((iVar1 != 5) && (iVar1 != 0x11)) && (iVar1 != 0x21)) {
    return;
  }
  iVar1 = thunk_FUN_004e60d0(param_1[9],0x3c);
  if (((iVar1 < 1) && (iVar1 = thunk_FUN_004e60d0(param_1[9],0x91), iVar1 < 1)) &&
     (iVar1 = thunk_FUN_004e60d0(param_1[9],0x4c), iVar1 < 1)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (((*(int *)((int)param_1 + 0x792) == 1) &&
        (((*(undefined4 *)((int)param_1 + 0x792) = 0, *(int *)((int)param_1 + 0x45d) != 0x14 ||
          (param_1[0x170] != 3)) && ((*(byte *)((int)param_1 + 0x1d1) & 1) == 0)))) &&
       (*(undefined4 *)((int)param_1 + 0x78a) = 0, g_visibleClass_00802A88 != (VisibleClassTy *)0x0)
       ) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      thunk_FUN_0055a4c0(g_visibleClass_00802A88,(int)*(short *)((int)param_1 + 0x5b),
                         (int)*(short *)((int)param_1 + 0x5d),
                         (char)*(undefined2 *)((int)param_1 + 0x5f),param_1[9],
                         *(undefined **)((int)param_1 + 0x101),param_1[6]);
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  else if ((((*(int *)((int)param_1 + 0x792) == 0) &&
            ((*(undefined4 *)((int)param_1 + 0x792) = 1, *(int *)((int)param_1 + 0x45d) != 0x14 ||
             (param_1[0x170] != 3)))) && ((*(byte *)((int)param_1 + 0x1d1) & 1) == 0)) &&
          (*(undefined4 *)((int)param_1 + 0x78a) = 1,
          g_visibleClass_00802A88 != (VisibleClassTy *)0x0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    VisibleClassTy::SetZoneMin1
              (g_visibleClass_00802A88,(int)*(short *)((int)param_1 + 0x5b),
               (int)*(short *)((int)param_1 + 0x5d),(char)*(undefined2 *)((int)param_1 + 0x5f),
               param_1[9],*(int *)((int)param_1 + 0x101),param_1[6],0xffffffff);
  }
  iVar1 = thunk_FUN_004e60d0(param_1[9],0x9a);
  if (((0 < iVar1) || (iVar1 = thunk_FUN_004e60d0(param_1[9],0x41), 0 < iVar1)) ||
     (iVar1 = thunk_FUN_004e60d0(param_1[9],0x4b), 0 < iVar1)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(int *)((int)param_1 + 0x796) == 0) &&
       ((((*(undefined4 *)((int)param_1 + 0x796) = 1, *(int *)((int)param_1 + 0x45d) != 0x14 ||
          (param_1[0x170] != 3)) && ((*(byte *)((int)param_1 + 0x1d1) & 1) == 0)) &&
        (*(undefined4 *)((int)param_1 + 0x78e) = 1, g_visibleClass_00802A88 != (VisibleClassTy *)0x0
        )))) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      VisibleClassTy::SetZoneMin2
                (g_visibleClass_00802A88,(int)*(short *)((int)param_1 + 0x5b),
                 (int)*(short *)((int)param_1 + 0x5d),(char)*(undefined2 *)((int)param_1 + 0x5f),
                 param_1[9],*(int *)((int)param_1 + 0x101),param_1[6],0xffffffff);
    }
    return;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((int)param_1 + 0x796) != 1) {
    return;
  }
  *(undefined4 *)((int)param_1 + 0x796) = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)((int)param_1 + 0x45d) == 0x14) && (param_1[0x170] == 3)) {
    return;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(byte *)((int)param_1 + 0x1d1) & 1) != 0) {
    return;
  }
  *(undefined4 *)((int)param_1 + 0x78e) = 0;
  if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
    return;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  thunk_FUN_0055a870(g_visibleClass_00802A88,(int)*(short *)((int)param_1 + 0x5b),
                     (int)*(short *)((int)param_1 + 0x5d),(char)*(undefined2 *)((int)param_1 + 0x5f)
                     ,param_1[9],*(undefined **)((int)param_1 + 0x101),param_1[6]);
  return;
}

