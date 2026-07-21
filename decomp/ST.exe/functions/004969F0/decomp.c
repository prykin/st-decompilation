
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00496CC0 -> 004969F0 @ 00496D38 | 00496CC0 -> 004969F0 @ 00496D81

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00496CC0 -> 004969F0 @ 00496D38 | 00496CC0 -> 004969F0 @ 00496D81

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00496CC0 -> 004969F0 @ 00496D38 | 00496CC0 -> 004969F0 @ 00496D81 */

void FUN_004969f0(int param_1,int param_2,int param_3,int param_4,uint param_5,undefined4 param_6,
                 uint param_7)

{
  int *piVar1;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  undefined4 local_8;

  if (-1 < (int)param_7) {
    if (param_7 < PTR_007fb270->count) {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(PTR_007fb270, param_7) (runtime stride) */
      piVar1 = (int *)(PTR_007fb270->elementSize * param_7 + (int)PTR_007fb270->data);
    }
    else {
      piVar1 = (int *)0x0;
    }
    piVar1[3] = param_4;
    piVar1[2] = param_3;
    *piVar1 = param_1;
    piVar1[1] = param_2;
    return;
  }
  local_c = param_5;
  local_10 = param_4;
  local_14 = param_3;
  local_8 = param_6;
  local_1c = param_1;
  local_18 = param_2;
  Library::DKW::TBL::FUN_006ae1c0(&PTR_007fb270->flags,&local_1c);
  return;
}

