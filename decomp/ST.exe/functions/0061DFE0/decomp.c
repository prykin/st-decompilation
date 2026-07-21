
void __fastcall FUN_0061dfe0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar2 = *(int *)(param_1 + 0xac) * 0x41c64e6d + 0x3039;
  *(uint *)(param_1 + 0xac) = uVar2;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar4 = *(int *)(param_1 + 0xa3);
  iVar3 = ((uVar2 >> 0x10) % 3 + 3) * 0x200 + DAT_008032d0;
  if (iVar4 != 0) {
    local_8 = 0;
    if (0 < *(int *)(iVar4 + 0xc)) {
      bVar5 = *(int *)(iVar4 + 0xc) != 0;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((bVar5) && (iVar4 = *(int *)(iVar4 + 8) * local_8 + *(int *)(iVar4 + 0x1c), iVar4 != 0))
        {
          puVar1 = (uint *)(iVar4 + 0x26);
          FUN_006e88c0(PTR_00807598,(int *)puVar1,*(undefined4 *)(iVar4 + 4),
                       *(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc),
                       *(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14),
                       *(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x1c),
                       *(undefined1 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x21),iVar3,0xffffffff)
          ;
          if (*(char *)(iVar4 + 0x2f) == '\0') {
            FUN_006eab60(PTR_00807598,*puVar1);
          }
          else {
            FUN_006eaaa0(PTR_00807598,*puVar1,0);
          }
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar4 = *(int *)(param_1 + 0xa3);
        local_8 = local_8 + 1;
        bVar5 = local_8 < *(uint *)(iVar4 + 0xc);
      } while ((int)local_8 < (int)*(uint *)(iVar4 + 0xc));
    }
  }
  return;
}

