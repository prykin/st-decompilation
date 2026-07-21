
void __fastcall FUN_0060d300(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x244) != 0) {
    thunk_FUN_0060d220(param_1);
    FreeAndNull((void **)(param_1 + 0x244));
    *(undefined4 *)(param_1 + 0x23c) = 0;
  }
  return;
}

