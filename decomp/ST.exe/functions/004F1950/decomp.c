
void __fastcall FUN_004f1950(int param_1)

{
  byte *pbVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pbVar1 = FUN_0070b650(*(short **)(param_1 + 0x25b),(uint)*(byte *)(param_1 + 0x25f));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  DibPut(*(AnonShape_006B5B10_E0D06CF1 **)(param_1 + 0x1b4),0xb,9,'\x06',pbVar1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  Library::DKW::DDX::FUN_006b3640
            (DAT_008075a8,*(uint *)(param_1 + 0x17c),0xffffffff,*(uint *)(param_1 + 0x10c),
             *(uint *)(param_1 + 0x110));
  return;
}

