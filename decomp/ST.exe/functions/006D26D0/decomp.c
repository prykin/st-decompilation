
void FUN_006d26d0(byte *param_1,int param_2,byte *param_3,int param_4,int param_5,uint param_6,
                 int param_7)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar7;

  do {
    while( true ) {
      uVar5 = (uint)*param_3;
      param_3 = param_3 + 1;
      iVar6 = param_5;
      if (uVar5 != 0) break;
      param_1 = param_1 + param_2;
      iVar6 = param_7 + -1;
      bVar3 = param_7 < 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_7 = iVar6;
      if (iVar6 == 0 || bVar3) {
        return;
      }
    }
    while( true ) {
      while( true ) {
        uVar7 = param_6;
        if ((uVar5 & 0x80) == 0) {
          do {
            if (iVar6 < (int)uVar5) {
              uVar5 = (uint)(byte)((char)uVar5 - (char)iVar6);
              goto LAB_006d2766;
            }
            iVar6 = iVar6 - uVar5;
            bVar2 = *param_3;
            uVar5 = (uint)bVar2;
            param_3 = param_3 + 1;
          } while ((bVar2 & 0x80) == 0);
        }
        if ((uVar5 & 0x40) != 0) break;
        uVar4 = uVar5 & 0xffffff3f;
        if (iVar6 < (int)uVar4) {
          param_3 = param_3 + iVar6;
          uVar5 = (uint)(byte)((char)uVar4 - (char)iVar6);
          goto LAB_006d2759;
        }
        uVar5 = (uint)param_3[uVar4];
        param_3 = param_3 + uVar4 + 1;
        iVar6 = iVar6 - uVar4;
      }
      uVar4 = uVar5 & 0xffffff3f;
      if (iVar6 < (int)uVar4) break;
      uVar5 = (uint)param_3[1];
      param_3 = param_3 + 2;
      iVar6 = iVar6 - uVar4;
    }
    uVar5 = (uint)(byte)((char)uVar4 - (char)iVar6);
    while( true ) {
      uVar5 = uVar5 & 0x3f;
      pbVar1 = param_3 + 1;
      bVar2 = *param_3;
      if ((int)uVar7 < (int)uVar5) break;
      uVar7 = uVar7 - uVar5;
      for (; param_3 = pbVar1, uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_1 = bVar2;
        param_1 = param_1 + 1;
      }
      while( true ) {
        while( true ) {
          uVar5 = uVar7;
          if ((int)uVar7 < 1) goto LAB_006d27a4;
          bVar2 = *param_3;
          uVar5 = (uint)bVar2;
          param_3 = param_3 + 1;
          if ((bVar2 & 0x80) != 0) break;
LAB_006d2766:
          if ((int)uVar7 < (int)uVar5) {
            if (0 < (int)uVar7) {
              uVar5 = uVar5 - uVar7;
              param_1 = param_1 + uVar7;
            }
            goto LAB_006d27a4;
          }
          uVar7 = uVar7 - uVar5;
          param_1 = param_1 + uVar5;
        }
        if ((bVar2 & 0x40) != 0) break;
LAB_006d2759:
        uVar5 = uVar5 & 0x3f;
        if ((int)uVar7 < (int)uVar5) {
          uVar5 = uVar5 | 0x80;
          if (0 < (int)uVar7) {
            uVar5 = uVar5 - uVar7;
            for (; uVar7 != 0; uVar7 = uVar7 - 1) {
              *param_1 = *param_3;
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
            }
          }
          goto LAB_006d27a4;
        }
        uVar7 = uVar7 - uVar5;
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *param_1 = *param_3;
          param_3 = param_3 + 1;
          param_1 = param_1 + 1;
        }
      }
    }
    uVar5 = uVar5 | 0xc0;
    if (0 < (int)uVar7) {
      uVar5 = uVar5 - uVar7;
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        *param_1 = bVar2;
        param_1 = param_1 + 1;
      }
    }
LAB_006d27a4:
    iVar6 = (param_4 - param_6) - param_5;
    while( true ) {
      while( true ) {
        pbVar7 = param_3;
        if ((uVar5 & 0x80) == 0) {
          do {
            if (iVar6 <= (int)uVar5) goto cf_continue_loop_006D27EE;
            iVar6 = iVar6 - uVar5;
            bVar2 = *param_3;
            uVar5 = (uint)bVar2;
            param_3 = param_3 + 1;
            pbVar7 = param_3;
          } while ((bVar2 & 0x80) == 0);
        }
        if ((uVar5 & 0x40) == 0) break;
        param_3 = pbVar7 + 1;
        if (iVar6 <= (int)(uVar5 & 0xffffff3f)) goto cf_continue_loop_006D27EE;
        iVar6 = iVar6 - (uVar5 & 0xffffff3f);
        uVar5 = (uint)*param_3;
        param_3 = pbVar7 + 2;
      }
      uVar7 = uVar5 & 0xffffff3f;
      if (iVar6 <= (int)uVar7) break;
      iVar6 = iVar6 - uVar7;
      uVar5 = (uint)pbVar7[uVar7];
      param_3 = pbVar7 + uVar7 + 1;
    }
    param_3 = pbVar7 + uVar7;
cf_continue_loop_006D27EE:
    param_1 = param_1 + (param_2 - param_6);
    iVar6 = param_7 + -1;
    bVar3 = param_7 < 1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_7 = iVar6;
    if (iVar6 == 0 || bVar3) {
      return;
    }
  } while( true );
}

