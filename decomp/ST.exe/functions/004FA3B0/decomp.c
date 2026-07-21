
void __fastcall FUN_004fa3b0(void *param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(char *)((int)param_1 + 0xb63) != '\0') && (*(char *)((int)param_1 + 0xb64) != '\0')) {
    thunk_FUN_004f8020(param_1,'\0',1);
    return;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(char *)((int)param_1 + 0xc51) != '\0') && (*(char *)((int)param_1 + 0xc52) != '\0')) {
    thunk_FUN_004f8020(param_1,'\x01',1);
  }
  return;
}

