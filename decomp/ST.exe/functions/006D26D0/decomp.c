
void FUN_006d26d0(byte *param_1,int param_2,byte *param_3,int param_4,int param_5,uint param_6,
                 int param_7)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  
  do {
    while( true ) {
      uVar4 = (uint)*param_3;
      param_3 = param_3 + 1;
      iVar5 = param_5;
      if (uVar4 != 0) break;
      param_1 = param_1 + param_2;
      iVar5 = param_7 + -1;
      bVar2 = param_7 < 1;
      param_7 = iVar5;
      if (iVar5 == 0 || bVar2) {
        return;
      }
    }
    while( true ) {
      while( true ) {
        uVar6 = param_6;
        if ((uVar4 & 0x80) == 0) {
          do {
            if (iVar5 < (int)uVar4) {
              uVar4 = (uint)(byte)((char)uVar4 - (char)iVar5);
              goto LAB_006d2766;
            }
            iVar5 = iVar5 - uVar4;
            bVar1 = *param_3;
            uVar4 = (uint)bVar1;
            param_3 = param_3 + 1;
          } while ((bVar1 & 0x80) == 0);
        }
        if ((uVar4 & 0x40) != 0) break;
        uVar3 = uVar4 & 0xffffff3f;
        if (iVar5 < (int)uVar3) {
          param_3 = param_3 + iVar5;
          uVar4 = (uint)(byte)((char)uVar3 - (char)iVar5);
          goto LAB_006d2759;
        }
        uVar4 = (uint)param_3[uVar3];
        param_3 = param_3 + uVar3 + 1;
        iVar5 = iVar5 - uVar3;
      }
      uVar3 = uVar4 & 0xffffff3f;
      if (iVar5 < (int)uVar3) break;
      uVar4 = (uint)param_3[1];
      param_3 = param_3 + 2;
      iVar5 = iVar5 - uVar3;
    }
    uVar4 = (uint)(byte)((char)uVar3 - (char)iVar5);
    while( true ) {
      uVar4 = uVar4 & 0x3f;
      pbVar7 = param_3 + 1;
      bVar1 = *param_3;
      if ((int)uVar6 < (int)uVar4) break;
      uVar6 = uVar6 - uVar4;
      for (; param_3 = pbVar7, uVar4 != 0; uVar4 = uVar4 - 1) {
        *param_1 = bVar1;
        param_1 = param_1 + 1;
      }
      while( true ) {
        while( true ) {
          uVar4 = uVar6;
          if ((int)uVar6 < 1) goto LAB_006d27a4;
          bVar1 = *param_3;
          uVar4 = (uint)bVar1;
          param_3 = param_3 + 1;
          if ((bVar1 & 0x80) != 0) break;
LAB_006d2766:
          if ((int)uVar6 < (int)uVar4) {
            if (0 < (int)uVar6) {
              uVar4 = uVar4 - uVar6;
              param_1 = param_1 + uVar6;
            }
            goto LAB_006d27a4;
          }
          uVar6 = uVar6 - uVar4;
          param_1 = param_1 + uVar4;
        }
        if ((bVar1 & 0x40) != 0) break;
LAB_006d2759:
        uVar4 = uVar4 & 0x3f;
        if ((int)uVar6 < (int)uVar4) {
          uVar4 = uVar4 | 0x80;
          if (0 < (int)uVar6) {
            uVar4 = uVar4 - uVar6;
            for (; uVar6 != 0; uVar6 = uVar6 - 1) {
              *param_1 = *param_3;
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
            }
          }
          goto LAB_006d27a4;
        }
        uVar6 = uVar6 - uVar4;
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *param_1 = *param_3;
          param_3 = param_3 + 1;
          param_1 = param_1 + 1;
        }
      }
    }
    uVar4 = uVar4 | 0xc0;
    if (0 < (int)uVar6) {
      uVar4 = uVar4 - uVar6;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *param_1 = bVar1;
        param_1 = param_1 + 1;
      }
    }
LAB_006d27a4:
    iVar5 = (param_4 - param_6) - param_5;
    while( true ) {
      while( true ) {
        pbVar7 = param_3;
        if ((uVar4 & 0x80) == 0) {
          do {
            if (iVar5 <= (int)uVar4) goto cf_continue_loop_006D27EE;
            iVar5 = iVar5 - uVar4;
            bVar1 = *param_3;
            uVar4 = (uint)bVar1;
            param_3 = param_3 + 1;
            pbVar7 = param_3;
          } while ((bVar1 & 0x80) == 0);
        }
        if ((uVar4 & 0x40) == 0) break;
        param_3 = pbVar7 + 1;
        if (iVar5 <= (int)(uVar4 & 0xffffff3f)) goto cf_continue_loop_006D27EE;
        iVar5 = iVar5 - (uVar4 & 0xffffff3f);
        uVar4 = (uint)*param_3;
        param_3 = pbVar7 + 2;
      }
      uVar6 = uVar4 & 0xffffff3f;
      if (iVar5 <= (int)uVar6) break;
      iVar5 = iVar5 - uVar6;
      uVar4 = (uint)pbVar7[uVar6];
      param_3 = pbVar7 + uVar6 + 1;
    }
    param_3 = pbVar7 + uVar6;
cf_continue_loop_006D27EE:
    param_1 = param_1 + (param_2 - param_6);
    iVar5 = param_7 + -1;
    bVar2 = param_7 < 1;
    param_7 = iVar5;
    if (iVar5 == 0 || bVar2) {
      return;
    }
  } while( true );
}

