
float * thunk_FUN_00671f10(int param_1,int *param_2,int *param_3)

{
  short sVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  float fVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  short *psVar7;
  float10 fVar8;
  int *piVar9;
  undefined4 uStack_70;
  undefined4 auStack_6c [16];
  undefined1 uStack_2c;
  float fStack_2b;
  int *piStack_24;
  float fStack_20;
  int iStack_1c;
  float *pfStack_18;
  int iStack_14;
  int iStack_10;
  int *piStack_c;
  float *pfStack_8;
  
  pfStack_18 = (float *)0x0;
  pfStack_8 = (float *)0x0;
  piStack_c = (int *)0x0;
  iStack_10 = 0;
  iStack_14 = 0;
  uStack_70 = DAT_00858df8;
  DAT_00858df8 = &uStack_70;
  iVar3 = __setjmp3(auStack_6c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_70;
    if (pfStack_8 != (float *)0x0) {
      FUN_006ab060(&pfStack_8);
    }
    if (pfStack_18 != (float *)0x0) {
      FUN_006ab060(&pfStack_18);
    }
    thunk_FUN_0064a800(&piStack_c);
    if (0 < iVar3) {
      iVar3 = -0x6b;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar3;
    }
    return (float *)0x0;
  }
  _strncpy((char *)(piStack_24 + 1),&DAT_008016a0,0x7f);
  piStack_24[0x21] = -1;
  piStack_c = thunk_FUN_0064a630(10);
  fStack_20 = 0.0;
  psVar7 = (short *)(param_1 + 1);
  do {
    while( true ) {
      if ((*(char *)((int)psVar7 + -1) == '\a') && (*psVar7 == 0x1d)) {
        if (piStack_c[1] != 1) {
          FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2cf4,0x570);
        }
        if (param_3 != (int *)0x0) {
          *param_3 = (int)fStack_20 + 1;
        }
        puVar2 = (undefined1 *)piStack_c[2];
        switch(*puVar2) {
        case 1:
        case 4:
          fVar6 = (float)(**(code **)*piStack_24)(puVar2);
          pfStack_18 = (float *)FUN_006aac10(4);
          *pfStack_18 = fVar6;
          if (param_2 != (int *)0x0) {
            *param_2 = 1;
          }
          break;
        case 2:
        case 5:
          fVar8 = (float10)(**(code **)(*piStack_24 + 4))(puVar2);
          fStack_20 = (float)fVar8;
          pfStack_18 = (float *)FUN_006aac10(4);
          *pfStack_18 = fStack_20;
          if (param_2 != (int *)0x0) {
            *param_2 = 2;
          }
          break;
        case 3:
        case 6:
          fVar6 = (float)(**(code **)(*piStack_24 + 8))(puVar2);
          if (fVar6 == 0.0) {
            FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2cf4,0x585);
          }
          pfStack_18 = (float *)FUN_006aac10(4);
          *pfStack_18 = fVar6;
          if (param_2 != (int *)0x0) {
            *param_2 = 3;
          }
          break;
        default:
          FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2cf4,0x58b);
        }
        thunk_FUN_0064a800(&piStack_c);
        DAT_00858df8 = (undefined4 *)uStack_70;
        return pfStack_18;
      }
      thunk_FUN_0064a830(piStack_c,(undefined4 *)((int)psVar7 + -1));
      if (*(char *)((int)psVar7 + -1) == '\a') break;
LAB_006721a4:
      fStack_20 = (float)((int)fStack_20 + 1);
      psVar7 = (short *)((int)psVar7 + 5);
    }
    iVar3 = (piStack_c[1] - (int)psVar7[1]) + -1;
    if (iVar3 < 0) {
      FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2cf4,0x53e);
    }
    if ((iStack_10 == 0) && (iStack_14 == 0)) {
      iVar4 = thunk_FUN_006686f0((int)*psVar7);
      if ((iVar4 < 0) || (iVar4 = thunk_FUN_00668a70((int)*psVar7), iVar4 != 0)) {
        iVar4 = (int)psVar7[1];
        piVar9 = &iStack_1c;
        pcVar5 = (char *)thunk_FUN_0064a910((int)piStack_c,iVar3);
        pfStack_8 = thunk_FUN_0064a970(pcVar5,iVar4,piVar9);
      }
      else {
        iVar4 = (int)psVar7[1];
        piVar9 = &iStack_1c;
        pcVar5 = (char *)thunk_FUN_0064a910((int)piStack_c,iVar3);
        pfStack_8 = (float *)thunk_FUN_0066acc0(pcVar5,iVar4,piVar9);
      }
    }
    else {
      iStack_1c = 1;
      pfStack_8 = (float *)FUN_006aac10(4);
      *pfStack_8 = (float)(uint)(iStack_10 == 0);
    }
    if (pfStack_8 == (float *)0x0) {
      FUN_006a5e40(iStack_1c,DAT_007ed77c,0x7d2cf4,0x56c);
      goto LAB_006721a4;
    }
    iVar3 = thunk_FUN_0064a940((int)piStack_c,iVar3);
    if (iVar3 == 0) {
      FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2cf4,0x54c);
    }
    if (iStack_1c == 1) {
      uStack_2c = 1;
      fStack_2b = *pfStack_8;
    }
    else if (iStack_1c == 2) {
      uStack_2c = 2;
      fStack_2b = *pfStack_8;
    }
    else if (iStack_1c == 3) {
      iVar3 = (**(code **)(*piStack_24 + 0xc))(pfStack_8);
      if (iVar3 < 0) {
        FUN_006a5e40(-2,DAT_007ed77c,0x7d2cf4,0x559);
      }
      uStack_2c = 3;
      fStack_2b = (float)CONCAT22(fStack_2b._2_2_,(short)iVar3);
    }
    else {
      FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2cf4,0x55e);
    }
    thunk_FUN_0064a830(piStack_c,(undefined4 *)&uStack_2c);
    FUN_006ab060(&pfStack_8);
    sVar1 = *psVar7;
    if (((sVar1 == 800) && (fStack_2b == 0.0)) && (iStack_14 == 0)) {
      iStack_10 = iStack_10 + 1;
    }
    if ((sVar1 == 3) && (0 < iStack_10)) {
      iStack_10 = iStack_10 + -1;
    }
    if (((sVar1 == 0x321) && (fStack_2b == 1.4013e-45)) && (iStack_10 == 0)) {
      iStack_14 = iStack_14 + 1;
    }
    if ((sVar1 != 0x34) || (iStack_14 < 1)) goto LAB_006721a4;
    iStack_14 = iStack_14 + -1;
    fStack_20 = (float)((int)fStack_20 + 1);
    psVar7 = (short *)((int)psVar7 + 5);
  } while( true );
}

