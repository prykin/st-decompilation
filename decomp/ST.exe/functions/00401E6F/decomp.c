
undefined4 __fastcall thunk_FUN_00493340(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uStack_14;
  void *pvStack_10;
  short sStack_a;
  short sStack_8;
  short sStack_6;
  
  iVar4 = *(int *)(param_1 + 0x24) * 0xa62;
  iVar1 = *(int *)((int)&DAT_007f5107 + iVar4);
  iVar4 = *(int *)((int)&DAT_007f4e29 + iVar4);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
    uVar7 = 0;
    if (0 < iVar2) {
      do {
        FUN_006acc70(iVar1,uVar7,&uStack_14);
        if ((short)uStack_14 != -1) {
          FUN_006acc70(iVar4,uStack_14 & 0xffff,&pvStack_10);
          if (pvStack_10 == (void *)0x0) {
            iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x5221,0,0,
                                       &DAT_007a4ccc,s_STBoatC__CheckForReplenisher_NUL_007abbf4);
            if (iVar5 != 0) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return uVar6;
            }
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x5222);
          }
          thunk_FUN_004162b0(pvStack_10,&sStack_a,&sStack_8,&sStack_6);
          iVar5 = FUN_006aadd0((int)*(short *)(param_1 + 0x47),(int)*(short *)(param_1 + 0x49),
                               (int)*(short *)(param_1 + 0x4b),(int)sStack_a,(int)sStack_8,
                               (int)sStack_6);
          if (iVar5 < 7) {
            return 1;
          }
        }
        uVar7 = uVar7 + 1;
        if (iVar2 <= (int)uVar7) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

