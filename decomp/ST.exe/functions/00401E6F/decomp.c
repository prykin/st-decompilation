
undefined4 __thiscall STBoatC::CheckForReplenisher(STBoatC *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uStack_14;
  void *pvStack_10;
  short sStack_a;
  short sStack_8;
  short sStack_6;
  
  iVar1 = *(int *)((int)&DAT_007f5107 + *(int *)(this + 0x24) * 0xa62);
  iVar2 = *(int *)((int)&DAT_007f4e29 + *(int *)(this + 0x24) * 0xa62);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0xc);
    uVar7 = 0;
    if (0 < iVar3) {
      do {
        FUN_006acc70(iVar1,uVar7,&uStack_14);
        if ((short)uStack_14 != -1) {
          FUN_006acc70(iVar2,uStack_14 & 0xffff,&pvStack_10);
          if (pvStack_10 == (void *)0x0) {
            iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x5221,0,0,
                                       &DAT_007a4ccc,s_STBoatC__CheckForReplenisher_NUL_007abbf4);
            if (iVar5 != 0) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return uVar6;
            }
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x5222);
          }
          thunk_FUN_004162b0(pvStack_10,&sStack_a,&sStack_8,&sStack_6);
          iVar5 = FUN_006aadd0((int)*(short *)(this + 0x47),(int)*(short *)(this + 0x49),
                               (int)*(short *)(this + 0x4b),(int)sStack_a,(int)sStack_8,
                               (int)sStack_6);
          if (iVar5 < 7) {
            return 1;
          }
        }
        uVar7 = uVar7 + 1;
        if (iVar3 <= (int)uVar7) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

