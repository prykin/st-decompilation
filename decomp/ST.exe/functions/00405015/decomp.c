
undefined4 __fastcall thunk_FUN_00615ad0(void *param_1)

{
  int iVar1;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iVar1 = thunk_FUN_00615860((int)*(short *)((int)param_1 + 0x1f5),&iStack_10,&iStack_c,&iStack_8);
  if (iVar1 != 0) {
    if (*(int *)((int)param_1 + 0x2dd) == 0) {
      iVar1 = Library::DKW::LIB::FUN_006aac70(0x1c);
      *(int *)((int)param_1 + 0x2dd) = iVar1;
    }
    *(undefined4 *)((int)param_1 + 0x2d5) = 1;
    iVar1 = thunk_FUN_00615430(param_1,0,(int)*(short *)((int)param_1 + 0x1e9),
                               (int)*(short *)((int)param_1 + 0x1eb),
                               (int)*(short *)((int)param_1 + 0x1ed),iStack_10,iStack_c,iStack_8,
                               (int)*(short *)((int)param_1 + 0x1ef),
                               (int)*(short *)((int)param_1 + 0x1f1),
                               (undefined4 *)(int)*(short *)((int)param_1 + 499));
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

