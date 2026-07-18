
undefined4 __fastcall FUN_004e0830(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *this;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  int iVar13;
  char *pcVar14;
  char cVar15;
  undefined4 uVar16;
  
  if (param_1[0x134] == 1) {
    if (*(int *)(*(int *)((int)param_1 + 0x1f5) + 0x1a4) ==
        *(int *)(*(int *)((int)param_1 + 0x1f5) + 0x1a0)) {
      iVar2 = param_1[0x13a];
      if (iVar2 == 1) {
        if (param_1[0x139] == 0) {
          param_1[0x13a] = 3;
          thunk_FUN_004e04a0((int)param_1);
          switch(param_1[0x16b]) {
          case 0x39:
switchD_004e08b2_caseD_39:
            iVar2 = *param_1;
            iVar3 = thunk_FUN_004406c0(*(char *)((int)param_1 + 0x23d));
            (**(code **)(iVar2 + 0x90))(3,(-(uint)((char)iVar3 != '\x02') & 0xffffff3a) + 0x2e9);
            break;
          case 0x3b:
switchD_004e08b2_caseD_3b:
            iVar2 = *param_1;
            iVar3 = thunk_FUN_004406c0(*(char *)((int)param_1 + 0x23d));
            (**(code **)(iVar2 + 0x90))(3,(-(uint)((char)iVar3 != '\x02') & 0xffffff3a) + 0x2f6);
            break;
          case 0x4f:
switchD_004e08b2_caseD_4f:
            iVar2 = *param_1;
            iVar3 = thunk_FUN_004406c0(*(char *)((int)param_1 + 0x23d));
            (**(code **)(iVar2 + 0x90))(3,(-(uint)((char)iVar3 != '\x02') & 0xffffff32) + 0x34f);
            break;
          case 0x5e:
switchD_004e08b2_caseD_5e:
            (**(code **)(*param_1 + 0x90))(3,0x3aa);
            break;
          case 0x60:
            (**(code **)(*param_1 + 0x90))(3,0x3b9);
          }
        }
        else {
          param_1[0x13a] = 2;
LAB_004e0a1f:
          thunk_FUN_004e04a0((int)param_1);
        }
      }
      else if (iVar2 == 2) {
        if (param_1[0x139] == 0) {
          param_1[0x13a] = 3;
          thunk_FUN_004e04a0((int)param_1);
          switch(param_1[0x16b]) {
          case 0x39:
            goto switchD_004e08b2_caseD_39;
          case 0x3b:
            goto switchD_004e08b2_caseD_3b;
          case 0x4f:
            goto switchD_004e08b2_caseD_4f;
          case 0x52:
            iVar2 = *param_1;
            iVar3 = thunk_FUN_004406c0(*(char *)((int)param_1 + 0x23d));
            (**(code **)(iVar2 + 0x90))(3,(-(uint)((char)iVar3 != '\x02') & 0xffffff3b) + 0x35c);
            break;
          case 0x5e:
            goto switchD_004e08b2_caseD_5e;
          case 0x60:
            (**(code **)(*param_1 + 0x90))(3,0x3b9);
          }
        }
        else {
          iVar2 = param_1[0x16b];
          if (((iVar2 == 0x3b) || (iVar2 == 0x60)) || (iVar2 == 0x52)) goto LAB_004e0a1f;
        }
      }
      else if (iVar2 == 3) {
        param_1[0x13a] = 0;
        goto LAB_004e0a1f;
      }
    }
    if (param_1[0x139] == 0) {
      if (param_1[0x16b] == 0x4f) {
        iVar2 = thunk_FUN_004406c0((char)param_1[9]);
        iVar3 = 0xe;
        if ((char)iVar2 != '\x02') goto LAB_004e0a4f;
      }
      else {
LAB_004e0a4f:
        iVar3 = 0xc;
      }
      if ((*(int *)(*(int *)((int)param_1 + 0x1f5) + 0x18 + iVar3 * 0x24) ==
           *(int *)(*(int *)((int)param_1 + 0x1f5) + iVar3 * 0x24 + 0x14)) && (param_1[0x13a] == 0))
      {
        param_1[0x134] = 0;
        thunk_FUN_004cabb0(1);
      }
    }
  }
  if ((param_1[0x16b] != 0x52) && (param_1[0x16b] != 0x5f)) goto switchD_004e0aad_default;
  switch(param_1[0x134]) {
  case 2:
    iVar3 = param_1[0x16d];
    iVar2 = iVar3 + 2;
    if (iVar3 < iVar2) {
      iVar13 = param_1[0x16c];
      do {
        if (iVar13 < iVar13 + 2) {
          sVar7 = (short)param_1[0x16e] + 1;
          iVar4 = iVar13;
          do {
            sVar1 = (short)iVar4;
            if (((sVar1 < 0) || (DAT_007fb240 <= sVar1)) ||
               ((sVar6 = (short)iVar3, sVar6 < 0 ||
                ((((DAT_007fb242 <= sVar6 || (sVar7 < 0)) || (DAT_007fb244 <= sVar7)) ||
                 (*(int *)(DAT_007fb248 +
                          ((int)sVar6 * (int)DAT_007fb240 + (int)DAT_007fb246 * (int)sVar7 +
                          (int)sVar1) * 8) == 0)))))) {
              param_1[0x13c] = iVar4;
              param_1[0x13b] = 1;
              param_1[0x13d] = iVar3;
              param_1[0x13e] = param_1[0x16e] + 1;
              if (DAT_00800bcc == (void *)0x0) {
                thunk_FUN_004cf430();
              }
              thunk_FUN_004d0970(DAT_00800bcc,param_1[0x13c],param_1[0x13d],param_1[0x13e]);
              param_1[0x134] = 3;
              param_1[0x13f] = param_1[0x16c] * 0xc9 + 0xdc;
              param_1[0x140] = param_1[0x16d] * 0xc9 + 100;
              param_1[0x141] = param_1[0x16e] * 0xc9 + -0x28;
              thunk_FUN_004ec0f0((int)param_1);
              thunk_FUN_004cabb0(0);
              if (param_1[0x16b] == 0x52) {
                iVar2 = *param_1;
                iVar3 = thunk_FUN_004406c0(*(char *)((int)param_1 + 0x23d));
                (**(code **)(iVar2 + 0x90))(3,(-(uint)((char)iVar3 != '\x02') & 0xffffff3b) + 0x35e)
                ;
                goto switchD_004e0aad_default;
              }
              if (param_1[0x16b] != 0x5f) goto switchD_004e0aad_default;
              iVar2 = *param_1;
              uVar16 = 0x3b1;
              goto LAB_004e0f14;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar13 + 2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    break;
  case 3:
    iVar2 = thunk_FUN_004ac910((void *)((int)param_1 + 0x1d5),'\x0e');
    if ((*(int *)(*(int *)((int)param_1 + 0x1f5) + 0x20c) <= iVar2) && (param_1[0x137] != 0)) {
      param_1[0x142] = 0;
      if (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d)) {
        thunk_FUN_0052af50(0,*(float *)((int)param_1 + 0x1f9),*(float *)((int)param_1 + 0x1fd));
      }
      param_1[0x134] = 4;
      param_1[0x144] = 0;
      param_1[0x145] = *(int *)(DAT_00802a38 + 0xe4);
      thunk_FUN_004cabb0(0);
    }
    break;
  case 4:
    if (param_1[0x144] < 0x1e) break;
    thunk_FUN_004d0a80(DAT_00800bcc,param_1[0x13c],param_1[0x13d],param_1[0x13e]);
    iVar2 = param_1[6];
    iVar3 = param_1[0x13e];
    iVar13 = param_1[0x13d];
    uVar16 = 0x5a;
    iVar4 = param_1[0x13c];
    pcVar14 = (char *)0x0;
    uVar12 = (undefined2)param_1[0x141];
    uVar11 = (undefined2)param_1[0x140];
    uVar10 = (undefined2)param_1[0x13f];
    iVar9 = param_1[0x138];
    iVar8 = param_1[0x137];
    param_1[0x13b] = 0;
    uVar5 = thunk_FUN_004406c0((char)param_1[9]);
    thunk_FUN_005fd1b0(param_1[9],uVar5 & 0xff,iVar8,iVar9,uVar10,uVar11,uVar12,iVar4,iVar13,iVar3,
                       pcVar14,iVar2,uVar16);
    if (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d)) {
      thunk_FUN_0052af50(0,*(float *)((int)param_1 + 0x1f9),*(float *)((int)param_1 + 0x1fd));
      uVar5 = thunk_FUN_004406c0((char)param_1[9]);
      uVar5 = uVar5 & 0xff;
      if (uVar5 == 1) {
        iVar2 = *param_1;
        uVar16 = 0x6b;
LAB_004e0de2:
        (**(code **)(iVar2 + 0x90))(6,uVar16);
      }
      else if (uVar5 == 2) {
        (**(code **)(*param_1 + 0x90))(6,0x6c);
      }
      else if (uVar5 == 3) {
        iVar2 = *param_1;
        uVar16 = 0x6d;
        goto LAB_004e0de2;
      }
    }
    param_1[0x134] = 5;
    thunk_FUN_004cbf70((int)param_1);
    thunk_FUN_004cabb0(0);
    iVar2 = param_1[0x16b];
    if (iVar2 != 0x52) {
joined_r0x004e0f0b:
      if (iVar2 == 0x5f) {
        iVar2 = *param_1;
        uVar16 = 0x3b2;
LAB_004e0f14:
        (**(code **)(iVar2 + 0x90))(3,uVar16);
      }
      break;
    }
    cVar15 = *(char *)((int)param_1 + 0x23d);
    iVar2 = *param_1;
    goto LAB_004e0e15;
  case 5:
    iVar2 = thunk_FUN_004ac910((void *)((int)param_1 + 0x1d5),'\x0e');
    if (iVar2 == *(int *)(*(int *)((int)param_1 + 0x1f5) + 0x20c)) {
      param_1[0x134] = 0;
      param_1[0x137] = 0;
      param_1[0x142] = 0;
      thunk_FUN_004cbf70((int)param_1);
      thunk_FUN_004cabb0(0);
    }
    break;
  case 6:
    if (((param_1[0x13f] != param_1[0x16c] * 0xc9 + 0xdc) ||
        (param_1[0x140] != param_1[0x16d] * 0xc9 + 100)) ||
       (param_1[0x141] != param_1[0x16e] * 0xc9 + -0x28)) break;
    param_1[0x134] = 5;
    thunk_FUN_004cabb0(0);
    iVar2 = param_1[0x16b];
    if (iVar2 != 0x52) goto joined_r0x004e0f0b;
    cVar15 = *(char *)((int)param_1 + 0x23d);
    iVar2 = *param_1;
LAB_004e0e15:
    iVar3 = thunk_FUN_004406c0(cVar15);
    (**(code **)(iVar2 + 0x90))(3,(-(uint)((char)iVar3 != '\x02') & 0xffffff3b) + 0x35f);
  }
switchD_004e0aad_default:
  if ((param_1[0x16b] == 0x61) && (param_1[0x138] != 0)) {
    iVar2 = thunk_FUN_004e4180(param_1[9]);
    iVar3 = thunk_FUN_004e41c0(param_1[9]);
    if ((iVar3 < iVar2) &&
       ((uint)(param_1[0x14a] + param_1[0x149]) <= *(uint *)(DAT_00802a38 + 0xe4))) {
      param_1[0x149] = *(uint *)(DAT_00802a38 + 0xe4);
      if (DAT_007be8c4 <= param_1[0x146]) {
        thunk_FUN_004e1310((int)param_1);
      }
      iVar2 = param_1[0x138];
      param_1[0x138] = iVar2 + -5;
      if (iVar2 + -5 < 0) {
        param_1[0x138] = 0;
      }
      iVar2 = param_1[0x146];
      param_1[0x146] = iVar2 + 5;
      if (DAT_007be8c4 < iVar2 + 5) {
        param_1[0x146] = DAT_007be8c4;
      }
      this = thunk_FUN_004d85e0(param_1[0x16c],param_1[0x16d],param_1[0x16e]);
      if (this != (void *)0x0) {
        thunk_FUN_0057dfd0(this,param_1[0x138],1);
      }
      if ((param_1[0x138] == 0) && (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d))) {
        (**(code **)(*param_1 + 0x90))(4,0x3bd);
      }
    }
  }
  return 0;
}

