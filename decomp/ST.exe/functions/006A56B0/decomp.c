
undefined4 __cdecl
FUN_006a56b0(void *param_1,UINT_PTR param_2,int *param_3,undefined4 *param_4,undefined4 *param_5)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;

  BVar2 = thunk_FUN_006a5620((int)param_1);
  if (BVar2 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar1 = *(uint *)((int)param_1 + -0xc);
    if (((((uVar1 & 0xffff) == 4) || (uVar1 == 1)) || ((uVar1 & 0xffff) == 2)) || (uVar1 == 3)) {
      iVar3 = thunk_FUN_006a55d0(param_1,param_2,1);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (((iVar3 != 0) && (*(UINT_PTR *)((int)param_1 + -0x10) == param_2)) &&
         (*(int *)((int)param_1 + -8) <= DAT_007ec17c)) {
        if (param_3 != (int *)0x0) {
          *param_3 = *(int *)((int)param_1 + -8);
        }
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = *(undefined4 *)((int)param_1 + -0x18);
        }
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = *(undefined4 *)((int)param_1 + -0x14);
        }
        return 1;
      }
    }
  }
  return 0;
}

