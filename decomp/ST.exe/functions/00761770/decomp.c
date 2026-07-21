
void FUN_00761770(int param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  *(undefined1 *)(*param_4 + param_5) =
       *(undefined1 *)
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        ((**(int **)(param_2 + 0x50) * *param_3 + 4 >> 3 & 0x3ffU) + 0x80 +
        *(int *)(param_1 + 0x132));
  return;
}

