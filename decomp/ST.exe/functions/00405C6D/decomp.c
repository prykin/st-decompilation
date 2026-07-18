
void __cdecl thunk_FUN_006823e0(int param_1,float *param_2)

{
  char cVar1;
  char *pcVar2;
  float *pfVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  float *pfVar8;
  undefined1 uStack_10;
  float fStack_f;
  short *psStack_8;
  
  pfVar8 = param_2;
  if (DAT_00848a14 != 0) {
    thunk_FUN_006823a0((short)param_1,(short)param_2);
    iVar7 = (*(int *)(DAT_00848a14 + 4) - (int)pfVar8) + -1;
    pcVar2 = (char *)thunk_FUN_0064a910(DAT_00848a14,iVar7);
    if (pcVar2 == (char *)0x0) {
      FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d5604,0x19c);
    }
    else {
      cVar1 = *pcVar2;
      pcVar6 = pcVar2;
      for (pfVar3 = (float *)0x0; (cVar1 != '\a' && ((int)pfVar3 < (int)pfVar8));
          pfVar3 = (float *)((int)pfVar3 + 1)) {
        cVar1 = pcVar6[5];
        pcVar6 = pcVar6 + 5;
      }
      if (pfVar3 == pfVar8) {
        psStack_8 = (short *)(pcVar2 + (int)pfVar8 * 5 + 1);
        iVar4 = thunk_FUN_006686f0((int)*(short *)(pcVar2 + (int)pfVar8 * 5 + 1));
        if ((iVar4 < 0) || (iVar4 = thunk_FUN_00668a70((int)*psStack_8), iVar4 != 0)) {
          param_1 = 0;
          param_2 = thunk_FUN_0064a970(pcVar2,(int)pfVar8,&param_1);
          if (param_2 == (float *)0x0) {
            thunk_FUN_006802a0(param_1,&DAT_00847824);
            return;
          }
          if (param_1 == 1) {
            iVar7 = thunk_FUN_0064a940(DAT_00848a14,iVar7);
            if (iVar7 == 0) {
              FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d5604,0x17a);
            }
            uStack_10 = 1;
            fStack_f = *param_2;
          }
          else if (param_1 == 2) {
            iVar7 = thunk_FUN_0064a940(DAT_00848a14,iVar7);
            if (iVar7 == 0) {
              FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d5604,0x182);
            }
            uStack_10 = 2;
            fStack_f = *param_2;
          }
          else {
            if (param_1 != 3) {
              FUN_006ab060(&param_2);
              FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d5604,0x195);
              FUN_006ab060(&param_2);
              return;
            }
            iVar7 = thunk_FUN_0064a940(DAT_00848a14,iVar7);
            if (iVar7 == 0) {
              FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d5604,0x18a);
            }
            pfVar8 = param_2;
            pbVar5 = thunk_FUN_0067eca0();
            iVar7 = thunk_FUN_0067f180(pbVar5,(char *)pfVar8);
            if (iVar7 < 0) {
              FUN_006a5e40(-2,DAT_007ed77c,0x7d5604,0x18c);
            }
            uStack_10 = 3;
            fStack_f = (float)CONCAT22(fStack_f._2_2_,(short)iVar7);
          }
          thunk_FUN_00682370((undefined4 *)&uStack_10);
          FUN_006ab060(&param_2);
          return;
        }
      }
    }
  }
  return;
}

