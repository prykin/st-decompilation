
int thunk_FUN_0044ab90(undefined4 param_1,uint param_2,int param_3,char param_4,uint *param_5,
                      undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbStack_10;
  uint *puStack_c;
  byte *pbStack_8;
  
  iVar2 = param_3;
  uVar6 = 0;
  puStack_c = (uint *)0x0;
  pbStack_10 = (byte *)0x0;
  pbStack_8 = (byte *)0x0;
  if (param_2 == 0) {
    iVar7 = (int)&DAT_007f4f83 + (char)param_1 * 0xa62;
  }
  else {
    if (param_2 != 1) {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2fde,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__CheckTmps_invalid_007a88bc);
      if (iVar2 == 0) {
        return -1;
      }
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    iVar7 = (int)&DAT_007f4fd3 + (char)param_1 * 0xa62;
  }
  if (0x19a < param_3) {
    if (((param_3 == 0x1a4) || (param_3 == 0x1ae)) || (param_3 == 0x1b8)) goto LAB_0044ae50;
    goto LAB_0044ae21;
  }
  if (param_3 == 0x19a) {
LAB_0044ac57:
    if (param_5 == (uint *)0x0) {
      return -1;
    }
    uVar5 = param_5[3];
    if (uVar5 == 0) {
      return -1;
    }
    param_2 = uVar5;
    FUN_006afe40((int *)&puStack_c,param_5);
    if (0 < (int)uVar5) {
      do {
        FUN_006acc70((int)puStack_c,uVar6,(undefined4 *)((int)&param_6 + 2));
        if (param_6._2_2_ == -1) {
          FUN_006b0c70((int)puStack_c,uVar6);
          uVar5 = uVar5 - 1;
          uVar6 = uVar6 - 1;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar5);
      param_2 = uVar5;
      if (uVar5 != 0) {
        param_5 = (uint *)0x0;
        piVar3 = (int *)(iVar7 + 10);
        puVar4 = puStack_c;
        do {
          if (((*(int *)((int)piVar3 + -10) == iVar2) &&
              (*(int *)((int)piVar3 + -6) == (int)param_4)) &&
             (iVar7 = *(int *)(*piVar3 + 0xc), iVar7 != 0)) {
            FUN_006afe40((int *)&pbStack_10,puVar4);
            FUN_006afe40((int *)&pbStack_8,(uint *)*piVar3);
            uVar6 = 0;
            if (0 < iVar7) {
              do {
                FUN_006acc70((int)pbStack_8,uVar6,(undefined4 *)((int)&param_1 + 2));
                if (param_1._2_2_ == -1) {
                  FUN_006b0c70((int)pbStack_8,uVar6);
                  iVar7 = iVar7 + -1;
                  uVar6 = uVar6 - 1;
                }
                uVar6 = uVar6 + 1;
              } while ((int)uVar6 < iVar7);
              if ((iVar7 != 0) && (0 < (int)param_2)) {
                while( true ) {
                  FUN_006acc70((int)pbStack_10,0,(undefined4 *)((int)&param_6 + 2));
                  uVar6 = 0;
                  if (iVar7 < 1) break;
                  while( true ) {
                    FUN_006acc70((int)pbStack_8,uVar6,(undefined4 *)((int)&param_1 + 2));
                    if (param_6._2_2_ == param_1._2_2_) break;
                    uVar6 = uVar6 + 1;
                    if (iVar7 <= (int)uVar6) goto LAB_0044ada0;
                  }
                  FUN_006b0c70((int)pbStack_10,0);
                  param_2 = param_2 - 1;
                  FUN_006b0c70((int)pbStack_8,uVar6);
                  iVar7 = iVar7 + -1;
                  if ((int)param_2 < 1) break;
                }
              }
            }
LAB_0044ada0:
            FUN_006ae110(pbStack_10);
            pbStack_10 = (byte *)0x0;
            FUN_006ae110(pbStack_8);
            pbStack_8 = (byte *)0x0;
            if ((param_2 == 0) && (iVar7 == 0)) {
              FUN_006ae110((byte *)puStack_c);
              return (int)param_5;
            }
            param_2 = puStack_c[3];
            puVar4 = puStack_c;
            iVar2 = param_3;
          }
          piVar3 = piVar3 + 4;
          param_5 = (uint *)((int)param_5 + 1);
          if (4 < (int)param_5) {
            FUN_006ae110((byte *)puVar4);
            return -1;
          }
        } while( true );
      }
    }
    FUN_006ae110((byte *)puStack_c);
    return -1;
  }
  if (param_3 < 0x5b) {
    if (param_3 == 0x5a) {
LAB_0044ae50:
      iVar2 = 0;
      piVar3 = (int *)(iVar7 + 4);
      while (((piVar3[-1] != param_3 || ((short)piVar3[1] != (short)param_6)) ||
             (*piVar3 != (int)param_4))) {
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 4;
        if (4 < iVar2) {
          return -1;
        }
      }
      return iVar2;
    }
    if (param_3 == 0) {
      return -1;
    }
    if (param_3 == 0x3c) goto LAB_0044ac57;
  }
  else if (param_3 == 0x172) goto LAB_0044ae50;
LAB_0044ae21:
  iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3019,0,0,&DAT_007a4ccc,
                             s_STAllPlayersC__CheckTmps_invalid_007a888c);
  if (iVar2 == 0) {
    return -1;
  }
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}

