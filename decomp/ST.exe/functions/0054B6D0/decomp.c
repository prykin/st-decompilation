
void __fastcall FUN_0054b6d0(int param_1)

{
  if (g_cPanel_00801688 != (CPanelTy *)0x0) {
    *(int *)(param_1 + 0x4be) =
         /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
         (*(int *)&g_cPanel_00801688->field_0x94 - *(int *)(param_1 + 0x4b6)) + 1;
  }
  return;
}

