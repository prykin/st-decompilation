
void __fastcall FUN_0062a860(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined4 local_10;

  puVar2 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = *(undefined4 *)(param_1 + 0xd2);
  local_14 = 10;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  thunk_FUN_00604870(*(void **)(param_1 + 0xce),local_24);
  return;
}

