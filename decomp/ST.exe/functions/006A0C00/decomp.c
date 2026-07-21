
void __fastcall FUN_006a0c00(int *param_1)

{
  CHAR local_108 [260];

  *(int *)(*param_1 + 0x14) = param_1[1];
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  wsprintfA(local_108,"%s%08u",&DAT_007c8400,*(undefined4 *)(*param_1 + 0x14));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  cMf32::RecPut((cMf32 *)param_1[6],0xc,local_108,(byte *)*param_1,
                *(int *)((byte *)*param_1 + 0x14) * 0x92 + 0xaa,(undefined4 *)0x0,'\x01',(uint *)0x0
               );
  FreeAndNull((void **)param_1);
  return;
}

