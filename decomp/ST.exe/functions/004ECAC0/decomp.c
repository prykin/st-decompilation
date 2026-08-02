
undefined4 __fastcall FUN_004ecac0(int param_1)

{
  DArrayTy *pDVar1;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)&g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field_0x9f2 == 0) {
    local_8 = param_1;
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
    *(DArrayTy **)&g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field_0x9f2 = pDVar1;
  }
  local_8 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  Library::DKW::TBL::DArrayAppend
            (*(DArrayTy **)&g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field_0x9f2,&local_8);
  return 0;
}

