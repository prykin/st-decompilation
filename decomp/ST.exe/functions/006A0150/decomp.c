
undefined4 __fastcall FUN_006a0150(int param_1)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  
  psVar1 = (short *)Library::Ourlib::MFSTMAP::mfTMapCreate
                              (*(int *)(param_1 + 0x228),*(int *)(param_1 + 0x22c),
                               *(int *)(param_1 + 0x234),*(int *)(param_1 + 0x239),0x20);
  *(short **)(param_1 + 0xc) = psVar1;
  piVar2 = Library::Ourlib::MFSTMAP::FUN_006f0620(psVar1);
  *(int **)(param_1 + 8) = piVar2;
  thunk_FUN_006a2d80(1,piVar2);
  iVar3 = Library::Ourlib::MFSTMAP::AuxTMapRefreshAll
                    (*(short **)(param_1 + 0xc),*(int **)(param_1 + 8));
  if (iVar3 != 0) {
    return 0;
  }
  return 1;
}

