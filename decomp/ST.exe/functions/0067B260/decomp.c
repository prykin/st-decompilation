
void __fastcall FUN_0067b260(int param_1)

{
  uint uVar1;
  DArrayTy *groupContent;
  char *pcVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(char *)(param_1 + 0x662) == '\x01') {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar1 = *(uint *)(*(int *)(param_1 + 0x6a1) + 0xc);
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      groupContent = *(DArrayTy **)(param_1 + 0x6a1);
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(groupContent, uVar1) (runtime stride) */
      if ((((uVar1 < groupContent->count) &&
           (pcVar2 = (char *)(groupContent->elementSize * uVar1 + (int)groupContent->data),
           pcVar2 != (char *)0x0)) && ((short)*pcVar2 == *(short *)(param_1 + 0x660))) &&
         (pcVar2[7] == '\0')) {
        FUN_006b0c70(groupContent,uVar1);
      }
    }
    *(undefined1 *)(param_1 + 0x662) = 0;
  }
  return;
}

