
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Part.Cpp
   STParticleC::GetMessage */

undefined4 __thiscall STParticleC::GetMessage(STParticleC *this,int param_1)

{
  STParticleC SVar1;
  code *pcVar2;
  short sVar3;
  float fVar4;
  STParticleC *this_00;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 unaff_ESI;
  undefined4 *puVar9;
  void *unaff_EDI;
  STParticleC *pSVar10;
  void *pvVar11;
  bool bVar12;
  InternalExceptionFrame local_7c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  STParticleC *local_10;
  float local_c;
  float local_8;
  
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_10 = this;
  iVar5 = __setjmp3(local_7c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_nick_to_Part_Cpp_007d1354,0x218,0,iVar5,&DAT_007a4ccc,
                               s_STParticleC__GetMessage_007d1378);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return uVar8;
    }
    RaiseInternalException(iVar5,0,s_E____titans_nick_to_Part_Cpp_007d1354,0x21a);
    return 0xffff;
  }
  uVar6 = *(uint *)(param_1 + 0x10);
  if (0x10f < uVar6) {
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  if (uVar6 == 0x10f) {
    local_14 = thunk_FUN_0062af40(local_10,&local_18);
    FUN_006ab060(&local_14);
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  if (uVar6 != 0) {
    if (uVar6 != 2) {
      if (uVar6 != 3) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      if ((int)*(uint *)(local_10 + 0xc6) < 0) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      FUN_006e8ba0(DAT_00807598,*(uint *)(local_10 + 0xc6));
      *(undefined4 *)(this_00 + 0xc6) = 0xffffffff;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    puVar9 = *(undefined4 **)(param_1 + 0x14);
    if (puVar9[3] != 2) {
      pSVar10 = local_10;
      for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pSVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        pSVar10 = pSVar10 + 4;
      }
      *(undefined2 *)pSVar10 = *(undefined2 *)puVar9;
      thunk_FUN_00629f90(local_10,(int)local_10,*(undefined4 *)(DAT_00802a38 + 0xe4));
      InitVisibelFlight(this_00,(uint)(byte)this_00[0xd6]);
      if (*(int *)(this_00 + 0x3c) != 0) {
        *(undefined4 *)(this_00 + 0xc2) = 1;
        *(int *)(this_00 + 0x104) = *(int *)(this_00 + 0x3c);
        if ((int)*(uint *)(this_00 + 0xc6) < 0) {
          g_currentExceptionFrame = local_7c.previous;
          return 0;
        }
        FUN_006eab60(DAT_00807598,*(uint *)(this_00 + 0xc6));
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      *(undefined4 *)(this_00 + 0xc2) = 2;
      if ((int)*(uint *)(this_00 + 0xc6) < 0) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      FUN_006eaaa0(DAT_00807598,*(uint *)(this_00 + 0xc6),0);
      this_00[0xc1] = (STParticleC)0x1;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    thunk_FUN_0062aef0(local_10,puVar9);
    pSVar10 = this_00 + 0xd7;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pSVar10 = 0;
      pSVar10 = pSVar10 + 4;
    }
    *pSVar10 = (STParticleC)0x0;
    if (*(int *)(this_00 + 0xc2) == 3) {
      thunk_FUN_0062a860((int)this_00);
      *(undefined4 *)(this_00 + 0xc2) = 0;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if (this_00[0xd6] == (STParticleC)0x0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if (*(int *)(this_00 + 0xc2) != 2) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    InitVisibelFlight(this_00,1);
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  if ((local_10[0xd6] == (STParticleC)0x0) && (local_10[0x40] != (STParticleC)0x0)) {
    uVar6 = thunk_FUN_0062b4a0((int)local_10);
    this_00[0xd6] = SUB41(uVar6,0);
    if (SUB41(uVar6,0) != (STParticleC)0x0) {
      thunk_FUN_00629e60(this_00,0);
    }
  }
  switch(*(undefined4 *)(this_00 + 0xc2)) {
  case 1:
    iVar5 = *(int *)(this_00 + 0x3c);
    *(int *)(this_00 + 0x3c) = iVar5 + -1;
    if (0 < iVar5 + -1) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    *(undefined4 *)(this_00 + 0xc2) = 2;
    if (*(int *)(this_00 + 0xb6) <= *(int *)(this_00 + 0xb2)) {
      *(undefined4 *)(this_00 + 0xb2) = 0;
    }
    if (this_00[0xd6] == (STParticleC)0x0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if ((int)*(uint *)(this_00 + 0xc6) < 0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    FUN_006eaaa0(DAT_00807598,*(uint *)(this_00 + 0xc6),0);
    this_00[0xc1] = (STParticleC)0x1;
    FUN_006ea270(DAT_00807598,*(uint *)(this_00 + 0xc6),0,*(uint *)(this_00 + 0xb2));
    local_c = (float)*(int *)(this_00 + 0x46) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)(this_00 + 0x6a) = local_c;
    local_8 = (float)*(int *)(this_00 + 0x4a) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)(this_00 + 0x6e) = local_8;
    fVar4 = (float)*(int *)(this_00 + 0x4e) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)(this_00 + 0x72) = fVar4;
    FUN_006ea960(DAT_00807598,*(uint *)(this_00 + 0xc6),local_c,local_8,fVar4 + _DAT_007904fc);
    pvVar11 = DAT_00802a88;
    if (DAT_00802a88 == (void *)0x0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar5 = *(int *)(this_00 + 0x4e);
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      local_c = (float)((short)(((short)(iVar5 / 200) + sVar3) -
                               (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar5 / 200) + sVar3) -
                                   (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    iVar5 = *(int *)(this_00 + 0x4a);
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar7 = *(int *)(this_00 + 0x46);
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    if (((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
       ((thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar7,iVar5,
                            &local_1c,&local_20), (int)local_c < 0 ||
        (local_24 = local_1c, local_28 = local_20, 4 < (int)local_c)))) goto LAB_006282e0;
LAB_00628286:
    if (((local_24 < 0) || (*(int *)((int)pvVar11 + 0x30) <= local_24)) ||
       (((&DAT_0079aed0)[(int)local_c] + local_28 < 0 ||
        (*(int *)((int)pvVar11 + 0x34) <= (&DAT_0079aed0)[(int)local_c] + local_28)))) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if ((bVar12) && (*(int *)((int)pvVar11 + 0x4c) != 0)) {
      bVar12 = *(char *)(((&DAT_0079aed0)[(int)local_c] + local_28) * *(int *)((int)pvVar11 + 0x30)
                         + *(int *)((int)pvVar11 + 0x4c) + local_24) != '\0';
    }
    else {
      bVar12 = true;
    }
    break;
  case 2:
    iVar5 = thunk_FUN_0062a370(this_00,*(int *)(DAT_00802a38 + 0xe4));
    if (iVar5 < 1) {
      thunk_FUN_00629830((int)this_00);
      uVar6 = thunk_FUN_0062b4a0((int)this_00);
      this_00[0xd6] = SUB41(uVar6,0);
      if (SUB41(uVar6,0) == (STParticleC)0x0) {
        InitVisibelDeton(this_00,0);
        if (-1 < (int)*(uint *)(this_00 + 0xc6)) {
          FUN_006e8ba0(DAT_00807598,*(uint *)(this_00 + 0xc6));
          *(undefined4 *)(this_00 + 0xc6) = 0xffffffff;
        }
      }
      else {
        InitVisibelDeton(this_00,1);
      }
      *(undefined4 *)(this_00 + 0xc2) = 3;
      if (iVar5 != -1) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      *(undefined4 *)(this_00 + 0x76) = 2;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    uVar6 = *(uint *)(DAT_00802a38 + 0xe4) - *(int *)(this_00 + 0xaa);
    if ((this_00[0xd6] != (STParticleC)0x0) && ((*(uint *)(DAT_00802a38 + 0xe4) & 1) == 0)) {
      if ((*(uint *)(this_00 + 0x14) & 0xff00) == 0x400) {
        iVar5 = *(int *)(this_00 + 0x4e);
        if (*(int *)(this_00 + 0x5a) + 5 <= iVar5) goto LAB_0062838a;
      }
      else {
        iVar5 = *(int *)(this_00 + 0x4e);
      }
      thunk_FUN_00556760(DAT_00802a7c,1,0,0,*(int *)(this_00 + 0x46),*(int *)(this_00 + 0x4a),iVar5,
                         0,0,0,0,0,0,-1,0,0);
    }
LAB_0062838a:
    if (uVar6 < 0x19) {
LAB_006283bd:
      *(int *)(this_00 + 0xb2) = *(int *)(this_00 + 0xb2) + 1;
    }
    else if (uVar6 < 0x2d) {
      if ((*(byte *)(DAT_00802a38 + 0xe4) & 1) == 0) goto LAB_006283bd;
    }
    else if (*(uint *)(DAT_00802a38 + 0xe4) % 3 == 0) goto LAB_006283bd;
    if (*(int *)(this_00 + 0xb6) <= *(int *)(this_00 + 0xb2)) {
      *(undefined4 *)(this_00 + 0xb2) = 0;
    }
    if (this_00[0xd6] == (STParticleC)0x0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    FUN_006ea270(DAT_00807598,*(uint *)(this_00 + 0xc6),0,*(uint *)(this_00 + 0xb2));
    local_c = (float)*(int *)(this_00 + 0x46) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)(this_00 + 0x6a) = local_c;
    local_8 = (float)*(int *)(this_00 + 0x4a) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)(this_00 + 0x6e) = local_8;
    fVar4 = (float)*(int *)(this_00 + 0x4e) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)(this_00 + 0x72) = fVar4;
    FUN_006ea960(DAT_00807598,*(uint *)(this_00 + 0xc6),local_c,local_8,fVar4 + _DAT_007904fc);
    pvVar11 = DAT_00802a88;
    if (DAT_00802a88 == (void *)0x0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar5 = *(int *)(this_00 + 0x4e);
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      local_c = (float)((short)(((short)(iVar5 / 200) + sVar3) -
                               (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar5 / 200) + sVar3) -
                                   (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    iVar5 = *(int *)(this_00 + 0x4a);
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar7 = *(int *)(this_00 + 0x46);
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    if ((((DAT_0080874d != -1) && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)) &&
        (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar7,iVar5,
                            &local_24,&local_28), -1 < (int)local_c)) && ((int)local_c < 5))
    goto LAB_00628286;
LAB_006282e0:
    bVar12 = true;
    break;
  case 3:
    iVar5 = *(int *)(this_00 + 0xb2);
    *(int *)(this_00 + 0xb2) = iVar5 + 1;
    if ((((this_00[0xbf] != (STParticleC)0x0) && (iVar5 + 1 == 0xf)) &&
        (this_00[0xd6] != (STParticleC)0x0)) && (-1 < (int)*(uint **)(this_00 + 0xc6))) {
      FUN_006e9cb0(DAT_00807598,*(uint **)(this_00 + 0xc6),1);
    }
    if (((*(int *)(this_00 + 0xb2) == *(int *)(this_00 + 0xb6)) &&
        (this_00[0xd6] != (STParticleC)0x0)) && (-1 < (int)*(uint **)(this_00 + 0xc6))) {
      FUN_006e9d40(DAT_00807598,*(uint **)(this_00 + 0xc6),0);
    }
    if (((*(int *)(this_00 + 0xb2) == 5) && (iVar5 = thunk_FUN_0062b300((int)this_00), iVar5 != 0))
       && (*(int *)(this_00 + 0x76) != 2)) {
      thunk_FUN_0062af90(this_00,*(int *)(this_00 + 0x46),*(int *)(this_00 + 0x4a),
                         *(int *)(this_00 + 0x4e));
    }
    uVar6 = *(uint *)(this_00 + 0xb2);
    if (*(int *)(this_00 + 0xba) <= (int)uVar6) {
      thunk_FUN_0062a860((int)this_00);
      *(undefined4 *)(this_00 + 0xc2) = 0;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if (this_00[0xd6] == (STParticleC)0x0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if ((int)uVar6 < *(int *)(this_00 + 0xb6)) {
      FUN_006ea270(DAT_00807598,*(uint *)(this_00 + 0xc6),0,uVar6);
      local_c = (float)*(int *)(this_00 + 0x46) * _DAT_007904f8 * _DAT_007904f0;
      *(float *)(this_00 + 0x6a) = local_c;
      local_8 = (float)*(int *)(this_00 + 0x4a) * _DAT_007904f8 * _DAT_007904f0;
      *(float *)(this_00 + 0x6e) = local_8;
      fVar4 = (float)*(int *)(this_00 + 0x4e) * _DAT_007904f8 * _DAT_007904f0;
      *(float *)(this_00 + 0x72) = fVar4;
      FUN_006ea960(DAT_00807598,*(uint *)(this_00 + 0xc6),local_c,local_8,fVar4 + _DAT_007904fc);
      pvVar11 = DAT_00802a88;
      if (DAT_00802a88 != (void *)0x0) {
        iVar5 = *(int *)(this_00 + 0x4e);
        sVar3 = (short)(iVar5 >> 0x1f);
        if (iVar5 < 0) {
          local_c = (float)((short)(((short)(iVar5 / 200) + sVar3) -
                                   (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1);
        }
        else {
          local_c = (float)(int)(short)(((short)(iVar5 / 200) + sVar3) -
                                       (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
        }
        iVar5 = *(int *)(this_00 + 0x4a);
        sVar3 = (short)(iVar5 >> 0x1f);
        if (iVar5 < 0) {
          iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) -
                         (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                              (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
        }
        iVar7 = *(int *)(this_00 + 0x46);
        if (iVar7 < 0) {
          iVar7 = (short)(iVar7 / 0xc9) + -1;
        }
        else {
          iVar7 = (int)(short)(iVar7 / 0xc9);
        }
        if ((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
            (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar7,iVar5,
                                &local_2c,&local_30), (int)local_c < 0)) || (4 < (int)local_c)) {
          bVar12 = true;
        }
        else {
          if (((local_2c < 0) || (*(int *)((int)pvVar11 + 0x30) <= local_2c)) ||
             (((&DAT_0079aed0)[(int)local_c] + local_30 < 0 ||
              (*(int *)((int)pvVar11 + 0x34) <= (&DAT_0079aed0)[(int)local_c] + local_30)))) {
            bVar12 = false;
          }
          else {
            bVar12 = true;
          }
          if ((bVar12) && (*(int *)((int)pvVar11 + 0x4c) != 0)) {
            bVar12 = *(char *)(((&DAT_0079aed0)[(int)local_c] + local_30) *
                               *(int *)((int)pvVar11 + 0x30) + *(int *)((int)pvVar11 + 0x4c) +
                              local_2c) != '\0';
          }
          else {
            bVar12 = true;
          }
        }
        if (bVar12) {
          if (this_00[0xc1] == (STParticleC)0x0) {
            FUN_006eaaa0(DAT_00807598,*(uint *)(this_00 + 0xc6),0);
            this_00[0xc1] = (STParticleC)0x1;
          }
        }
        else if (this_00[0xc1] == (STParticleC)0x1) {
          FUN_006eab60(DAT_00807598,*(uint *)(this_00 + 0xc6));
          this_00[0xc1] = (STParticleC)0x0;
        }
      }
    }
    if (this_00[0xbf] == (STParticleC)0x0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar5 = *(int *)(this_00 + 0xb2);
    if (iVar5 < 0xf) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    switch(*(uint *)(this_00 + 0x14) >> 8 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 8:
    case 0x10:
    case 0x20:
    case 0x40:
    case 0x80:
      goto switchD_006288e6_caseD_0;
    default:
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
  case 4:
    local_c = (float)*(int *)(this_00 + 0x46) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)(this_00 + 0x6a) = local_c;
    local_8 = (float)*(int *)(this_00 + 0x4a) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)(this_00 + 0x6e) = local_8;
    fVar4 = (float)*(int *)(this_00 + 0x4e) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)(this_00 + 0x72) = fVar4;
    FUN_006ea960(DAT_00807598,*(uint *)(this_00 + 0xc6),local_c,local_8,fVar4 + _DAT_007904fc);
    pvVar11 = DAT_00802a88;
    if (DAT_00802a88 == (void *)0x0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar5 = *(int *)(this_00 + 0x4e);
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      local_c = (float)((short)(((short)(iVar5 / 200) + sVar3) -
                               (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar5 / 200) + sVar3) -
                                   (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    iVar5 = *(int *)(this_00 + 0x4a);
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar7 = *(int *)(this_00 + 0x46);
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    if ((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
        (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar7,iVar5,
                            &local_34,&local_38), (int)local_c < 0)) || (4 < (int)local_c)) {
      bVar12 = true;
    }
    else {
      if (((local_34 < 0) || (*(int *)((int)pvVar11 + 0x30) <= local_34)) ||
         (((&DAT_0079aed0)[(int)local_c] + local_38 < 0 ||
          (*(int *)((int)pvVar11 + 0x34) <= (&DAT_0079aed0)[(int)local_c] + local_38)))) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if ((bVar12) && (*(int *)((int)pvVar11 + 0x4c) != 0)) {
        bVar12 = *(char *)(((&DAT_0079aed0)[(int)local_c] + local_38) *
                           *(int *)((int)pvVar11 + 0x30) + local_34 + *(int *)((int)pvVar11 + 0x4c))
                 != '\0';
      }
      else {
        bVar12 = true;
      }
    }
    SVar1 = this_00[0xc1];
    goto joined_r0x00628af1;
  default:
    goto switchD_006280c4_default;
  }
  SVar1 = this_00[0xc1];
joined_r0x00628af1:
  if (bVar12) {
    if (SVar1 == (STParticleC)0x0) {
      FUN_006eaaa0(DAT_00807598,*(uint *)(this_00 + 0xc6),0);
      this_00[0xc1] = (STParticleC)0x1;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
  }
  else if (SVar1 == (STParticleC)0x1) {
    FUN_006eab60(DAT_00807598,*(uint *)(this_00 + 0xc6));
    this_00[0xc1] = (STParticleC)0x0;
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
switchD_006280c4_default:
  g_currentExceptionFrame = local_7c.previous;
  return 0;
switchD_006288e6_caseD_0:
  if ((byte)this_00[0x14] < 4) {
    FUN_006ea270(DAT_00807598,*(uint *)(this_00 + 0xc6),1,iVar5 + 3);
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  FUN_006ea270(DAT_00807598,*(uint *)(this_00 + 0xc6),1,iVar5 - 0xf);
  g_currentExceptionFrame = local_7c.previous;
  return 0;
}

