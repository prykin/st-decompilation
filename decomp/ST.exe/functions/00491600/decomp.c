
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\To_boat.cpp
   Diagnostic line evidence: 20488 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __fastcall FUN_00491600(int *param_1)

{
  int iVar1;
  undefined1 local_24 [16];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 0x100))(*(uint *)((int)param_1 + 0x1d1) | 0xd);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  thunk_FUN_00495ff0(*(short *)((int)param_1 + 0x5b),*(short *)((int)param_1 + 0x5d),
                     *(short *)((int)param_1 + 0x5f),*(byte *)((int)param_1 + 0x8e),
                     (AnonShape_00495FF0_59081BDD *)param_1);
  param_1[0x170] = 3;
  if (DAT_008117bc != (undefined4 *)0x0) {
    local_10 = (undefined2)param_1[9];
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_e = *(undefined2 *)((int)param_1 + 0x32);
    local_14 = 0x5dd2;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)((int)param_1 + 0x5a6) == 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar1 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,
                         *(AnonShape_005EFAE0_B406B78B **)((int)param_1 + 0x5a2),
                         (int *)((int)param_1 + 0x5a6));
      if (iVar1 == -4) {
        RaiseInternalException
                  (-4,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x5008);
      }
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)((int)param_1 + 0x5a6);
    local_c = *(undefined2 *)(iVar1 + 0x24);
    local_a = *(undefined2 *)(iVar1 + 0x32);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

