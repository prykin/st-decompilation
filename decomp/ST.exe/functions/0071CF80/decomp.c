
/* [STVTableApplier] Virtual slot 0079E284+0xC */

undefined4 __fastcall FUN_0071cf80(void *param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((int)param_1 + 0x188) != 0) {
    *(undefined2 *)((int)param_1 + 0x18e) = *(undefined2 *)((int)param_1 + 0x1e8);
    *(undefined2 *)((int)param_1 + 0x18c) = *(undefined2 *)((int)param_1 + 0x1c);
    *(int *)((int)param_1 + 400) = (int)param_1 + 0x24;
    iVar1 = FUN_006e5fe0(param_1,(undefined4 *)((int)param_1 + 0x178));
    if (iVar1 != 0) {
      return 0xffffffff;
    }
  }
  return 0;
}

