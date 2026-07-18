
undefined4 __thiscall thunk_FUN_00556dd0(void *this,int *param_1)

{
  int iVar1;
  code *pcVar2;
  void *this_00;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar9;
  short sVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char cVar11;
  undefined4 uStack_7c;
  undefined4 auStack_78 [16];
  int iStack_38;
  void *pvStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  if (((((*(byte *)(param_1 + 0x1b) & 1) == 0) && (DAT_0080731e == 0)) ||
      (*(int *)((int)this + 0x24) == 0)) || ((param_1 == (int *)0x0 || (DAT_00806770 == 0)))) {
    return 0;
  }
  uStack_7c = DAT_00858df8;
  DAT_00858df8 = &uStack_7c;
  pvStack_34 = this;
  iVar3 = __setjmp3(auStack_78,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    iStack_8 = FUN_006acf0d(param_1[4],param_1[5],param_1[6],param_1[7],param_1[8],param_1[9]);
    if (iStack_8 == 0) {
      iVar3 = param_1[0x18];
      iStack_10 = param_1[0xf];
      if (0 < iVar3) {
        iVar4 = iStack_10 - iVar3;
        if (iVar4 < 0) {
          iVar7 = *(int *)((int)pvStack_34 + 0x1c);
        }
        else {
          iVar7 = *(int *)((int)pvStack_34 + 0x1c);
        }
        uVar5 = iVar7 * 0x41c64e6d + 0x3039;
        *(uint *)((int)pvStack_34 + 0x1c) = uVar5;
        iStack_10 = (uVar5 >> 0x10) % (((iStack_10 + iVar3) - iVar4) + 1U) + iVar4;
      }
      iStack_8 = param_1[0x17];
      if (iStack_8 < 1) {
        iStack_8 = param_1[0xe];
      }
      else {
        iVar3 = param_1[0xe] + iStack_8;
        iStack_8 = param_1[0xe] - iStack_8;
        if (iStack_8 < 0) {
          uVar5 = *(int *)((int)pvStack_34 + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)pvStack_34 + 0x1c) = uVar5;
          iStack_8 = (uVar5 >> 0x10) % ((iVar3 - iStack_8) + 1U) + iStack_8;
        }
        else {
          uVar5 = *(int *)((int)pvStack_34 + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)pvStack_34 + 0x1c) = uVar5;
          iStack_8 = (uVar5 >> 0x10) % ((iVar3 - iStack_8) + 1U) + iStack_8;
        }
      }
      iStack_14 = param_1[0xd];
      iVar3 = param_1[0x16];
      if (0 < iVar3) {
        iVar4 = iStack_14 - iVar3;
        if (iVar4 < 0) {
          iVar7 = *(int *)((int)pvStack_34 + 0x1c);
        }
        else {
          iVar7 = *(int *)((int)pvStack_34 + 0x1c);
        }
        uVar5 = iVar7 * 0x41c64e6d + 0x3039;
        *(uint *)((int)pvStack_34 + 0x1c) = uVar5;
        iStack_14 = (uVar5 >> 0x10) % (((iStack_14 + iVar3) - iVar4) + 1U) + iVar4;
      }
      iStack_18 = param_1[0x15];
      if (iStack_18 < 1) {
        iStack_18 = param_1[0xc];
      }
      else {
        iVar3 = param_1[0xc] + iStack_18;
        iStack_18 = param_1[0xc] - iStack_18;
        if (iStack_18 < 0) {
          uVar5 = *(int *)((int)pvStack_34 + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)pvStack_34 + 0x1c) = uVar5;
          iStack_18 = (uVar5 >> 0x10) % ((iVar3 - iStack_18) + 1U) + iStack_18;
        }
        else {
          uVar5 = *(int *)((int)pvStack_34 + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)pvStack_34 + 0x1c) = uVar5;
          iStack_18 = (uVar5 >> 0x10) % ((iVar3 - iStack_18) + 1U) + iStack_18;
        }
      }
      iVar3 = param_1[0x14];
      if (iVar3 < 1) {
        sVar10 = (short)param_1[0xb];
      }
      else {
        iVar4 = param_1[0xb];
        iStack_c = iVar4 - iVar3;
        if (iStack_c < 0) {
          iVar7 = *(int *)((int)pvStack_34 + 0x1c);
        }
        else {
          iVar7 = *(int *)((int)pvStack_34 + 0x1c);
        }
        uVar5 = iVar7 * 0x41c64e6d + 0x3039;
        *(uint *)((int)pvStack_34 + 0x1c) = uVar5;
        sVar10 = (short)((uVar5 >> 0x10) % (((iVar4 + iVar3) - iStack_c) + 1U)) + (short)iStack_c;
      }
      iVar3 = param_1[0x13];
      if (iVar3 < 1) {
        sVar9 = (short)param_1[10];
      }
      else {
        iVar4 = param_1[10];
        iStack_c = iVar4 - iVar3;
        if (iStack_c < 0) {
          iVar7 = *(int *)((int)pvStack_34 + 0x1c);
        }
        else {
          iVar7 = *(int *)((int)pvStack_34 + 0x1c);
        }
        uVar5 = iVar7 * 0x41c64e6d + 0x3039;
        *(uint *)((int)pvStack_34 + 0x1c) = uVar5;
        sVar9 = (short)((uVar5 >> 0x10) % (((iVar4 + iVar3) - iStack_c) + 1U)) + (short)iStack_c;
      }
      thunk_FUN_00556760(pvStack_34,(short)*param_1,(short)param_1[1],0,param_1[4],param_1[5],
                         param_1[6],sVar9,sVar10,(short)iStack_18,(short)iStack_14,(short)iStack_8,
                         (short)iStack_10,param_1[0x19],(short)param_1[0x1a],(byte)param_1[0x1b]);
    }
    else {
      iVar3 = DAT_00806760;
      if (*(int *)(&DAT_007c900c + *param_1 * 0x18) != 1) {
        iVar3 = DAT_00806770;
      }
      iVar4 = 1;
      cVar11 = '\x1d';
      pcVar6 = thunk_FUN_00555840(*param_1);
      iStack_38 = FUN_00716e60(iVar3,pcVar6,cVar11,iVar4);
      if (param_1[3] < 0) {
        iVar3 = FUN_006acf0d(0,0,0,(param_1[0x13] * iStack_38) / 10 +
                                   (param_1[0x16] * iStack_38 * iStack_38) / 0x14 + param_1[0x10],
                             (param_1[0x14] * iStack_38) / 10 +
                             (param_1[0x17] * iStack_38 * iStack_38) / 0x14 + param_1[0x11],
                             (param_1[0x15] * iStack_38) / 10 +
                             (param_1[0x18] * iStack_38 * iStack_38) / 0x14 + param_1[0x12]);
        if (*(int *)(&DAT_007c9008 + *param_1 * 0x18) < iVar3 / 2) {
          iVar3 = ((iVar3 / 2) * 100) / *(int *)(&DAT_007c9008 + *param_1 * 0x18);
        }
        else {
          iVar3 = 100;
        }
        param_1[3] = iVar3;
      }
      this_00 = pvStack_34;
      iStack_30 = 0;
      while( true ) {
        if (param_1[3] < 1) {
          iStack_c = *(int *)(&DAT_007c9008 + *param_1 * 0x18);
        }
        else {
          iStack_c = (*(int *)(&DAT_007c9008 + *param_1 * 0x18) * 100) / param_1[3];
        }
        iStack_c = iStack_c * iStack_30;
        if (iStack_8 <= iStack_c) break;
        iVar3 = param_1[0x18];
        if (iVar3 < 1) {
          iStack_18 = param_1[0xf];
        }
        else {
          iVar4 = param_1[0xf];
          iStack_18 = iVar4 - iVar3;
          if (iStack_18 < 0) {
            iVar7 = *(int *)((int)this_00 + 0x1c);
          }
          else {
            iVar7 = *(int *)((int)this_00 + 0x1c);
          }
          uVar5 = iVar7 * 0x41c64e6d + 0x3039;
          *(uint *)((int)this_00 + 0x1c) = uVar5;
          iStack_18 = (uVar5 >> 0x10) % (((iVar4 + iVar3) - iStack_18) + 1U) + iStack_18;
        }
        iVar3 = param_1[0x17];
        if (iVar3 < 1) {
          iStack_14 = param_1[0xe];
        }
        else {
          iVar4 = param_1[0xe];
          iStack_14 = iVar4 - iVar3;
          if (iStack_14 < 0) {
            iVar7 = *(int *)((int)this_00 + 0x1c);
          }
          else {
            iVar7 = *(int *)((int)this_00 + 0x1c);
          }
          uVar5 = iVar7 * 0x41c64e6d + 0x3039;
          *(uint *)((int)this_00 + 0x1c) = uVar5;
          iStack_14 = (uVar5 >> 0x10) % (((iVar4 + iVar3) - iStack_14) + 1U) + iStack_14;
        }
        iVar3 = param_1[0x16];
        if (iVar3 < 1) {
          iStack_1c = param_1[0xd];
        }
        else {
          iVar4 = param_1[0xd];
          iStack_1c = iVar4 - iVar3;
          if (iStack_1c < 0) {
            iVar7 = *(int *)((int)this_00 + 0x1c);
          }
          else {
            iVar7 = *(int *)((int)this_00 + 0x1c);
          }
          uVar5 = iVar7 * 0x41c64e6d + 0x3039;
          *(uint *)((int)this_00 + 0x1c) = uVar5;
          iStack_1c = (uVar5 >> 0x10) % (((iVar4 + iVar3) - iStack_1c) + 1U) + iStack_1c;
        }
        iVar3 = param_1[0x15];
        if (iVar3 < 1) {
          iStack_20 = param_1[0xc];
        }
        else {
          iVar4 = param_1[0xc];
          iStack_20 = iVar4 - iVar3;
          if (iStack_20 < 0) {
            iVar7 = *(int *)((int)this_00 + 0x1c);
          }
          else {
            iVar7 = *(int *)((int)this_00 + 0x1c);
          }
          uVar5 = iVar7 * 0x41c64e6d + 0x3039;
          *(uint *)((int)this_00 + 0x1c) = uVar5;
          iStack_20 = (uVar5 >> 0x10) % (((iVar4 + iVar3) - iStack_20) + 1U) + iStack_20;
        }
        iVar3 = param_1[0x14];
        if (iVar3 < 1) {
          iStack_24 = param_1[0xb];
        }
        else {
          iVar4 = param_1[0xb];
          iStack_24 = iVar4 - iVar3;
          if (iStack_24 < 0) {
            iVar7 = *(int *)((int)this_00 + 0x1c);
          }
          else {
            iVar7 = *(int *)((int)this_00 + 0x1c);
          }
          uVar5 = iVar7 * 0x41c64e6d + 0x3039;
          *(uint *)((int)this_00 + 0x1c) = uVar5;
          iStack_24 = (uVar5 >> 0x10) % (((iVar4 + iVar3) - iStack_24) + 1U) + iStack_24;
        }
        iVar3 = param_1[0x13];
        if (iVar3 < 1) {
          iStack_28 = param_1[10];
        }
        else {
          iVar4 = param_1[10];
          iStack_28 = iVar4 - iVar3;
          if (iStack_28 < 0) {
            iVar7 = *(int *)((int)this_00 + 0x1c);
          }
          else {
            iVar7 = *(int *)((int)this_00 + 0x1c);
          }
          uVar5 = iVar7 * 0x41c64e6d + 0x3039;
          *(uint *)((int)this_00 + 0x1c) = uVar5;
          iStack_28 = (uVar5 >> 0x10) % (((iVar4 + iVar3) - iStack_28) + 1U) + iStack_28;
        }
        if (param_1[0x12] < 1) {
          iVar3 = iStack_8 - iStack_c;
          iStack_2c = (param_1[6] * iVar3 + param_1[9] * iStack_c) / iStack_8;
        }
        else {
          iVar3 = iStack_8 - iStack_c;
          iVar7 = (param_1[6] * iVar3 + param_1[9] * iStack_c) / iStack_8;
          iVar4 = param_1[0x12];
          iStack_2c = iVar7 - iVar4;
          uVar5 = *(int *)((int)this_00 + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this_00 + 0x1c) = uVar5;
          iStack_2c = (uVar5 >> 0x10) % (((iVar7 + iVar4) - iStack_2c) + 1U) + iStack_2c;
        }
        if (param_1[0x11] < 1) {
          iVar4 = (iVar3 * param_1[5] + param_1[8] * iStack_c) / iStack_8;
        }
        else {
          iVar7 = (iVar3 * param_1[5] + param_1[8] * iStack_c) / iStack_8;
          iVar4 = param_1[0x11];
          iStack_10 = iVar7 - iVar4;
          uVar5 = *(int *)((int)this_00 + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this_00 + 0x1c) = uVar5;
          iVar4 = (uVar5 >> 0x10) % (((iVar7 + iVar4) - iStack_10) + 1U) + iStack_10;
        }
        if (param_1[0x10] < 1) {
          iVar3 = (iVar3 * param_1[4] + iStack_c * param_1[7]) / iStack_8;
        }
        else {
          iVar7 = (iVar3 * param_1[4] + iStack_c * param_1[7]) / iStack_8;
          iVar3 = param_1[0x10];
          iStack_10 = iVar7 - iVar3;
          if (iStack_10 < 0) {
            iVar1 = *(int *)((int)this_00 + 0x1c);
          }
          else {
            iVar1 = *(int *)((int)this_00 + 0x1c);
          }
          uVar5 = iVar1 * 0x41c64e6d + 0x3039;
          *(uint *)((int)this_00 + 0x1c) = uVar5;
          iVar3 = (uVar5 >> 0x10) % (((iVar7 + iVar3) - iStack_10) + 1U) + iStack_10;
        }
        thunk_FUN_00556760(this_00,(short)*param_1,(short)param_1[1],
                           (param_1[2] * iStack_c * iStack_38) / (iStack_8 * 100),iVar3,iVar4,
                           iStack_2c,(short)iStack_28,(short)iStack_24,(short)iStack_20,
                           (short)iStack_1c,(short)iStack_14,(short)iStack_18,param_1[0x19],
                           (short)param_1[0x1a],(byte)param_1[0x1b]);
        iStack_30 = iStack_30 + 1;
      }
    }
    DAT_00858df8 = (undefined4 *)uStack_7c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)uStack_7c;
  iVar4 = FUN_006ad4d0(s_E____titans_grig_traks_cpp_007c9104,0x1f7,0,iVar3,&DAT_007a4ccc);
  if (iVar4 == 0) {
    FUN_006a5e40(iVar3,0,0x7c9104,0x1f8);
    return 0xffffffff;
  }
  pcVar2 = (code *)swi(3);
  uVar8 = (*pcVar2)();
  return uVar8;
}

