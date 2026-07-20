
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Part.Cpp
   STParticleC::GetMessage */

undefined4 __thiscall STParticleC::GetMessage(STParticleC *this,int param_1)

{
  char cVar1;
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
  VisibleClassTy *pVVar11;
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
  LPVOID local_14;
  STParticleC *local_10;
  float local_c;
  float local_8;
  
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0,unaff_EDI,unaff_ESI);
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
    local_14 = (LPVOID)thunk_FUN_0062af40(local_10,&local_18);
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
      if ((int)local_10->field_00C6 < 0) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      FUN_006e8ba0(DAT_00807598,local_10->field_00C6);
      this_00->field_00C6 = 0xffffffff;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    puVar9 = *(undefined4 **)(param_1 + 0x14);
    if (puVar9[3] != 2) {
      pSVar10 = local_10;
      for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pSVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        pSVar10 = (STParticleC *)&pSVar10->field_0x4;
      }
      *(undefined2 *)pSVar10 = *(undefined2 *)puVar9;
      thunk_FUN_00629f90(local_10,(int)local_10,*(undefined4 *)(DAT_00802a38 + 0xe4));
      InitVisibelFlight(this_00,(uint)(byte)this_00->field_00D6);
      if (this_00->field_003C != 0) {
        this_00->field_00C2 = 1;
        this_00->field_0104 = this_00->field_003C;
        if ((int)this_00->field_00C6 < 0) {
          g_currentExceptionFrame = local_7c.previous;
          return 0;
        }
        FUN_006eab60(DAT_00807598,this_00->field_00C6);
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      this_00->field_00C2 = 2;
      if ((int)this_00->field_00C6 < 0) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      FUN_006eaaa0(DAT_00807598,this_00->field_00C6,0);
      this_00->field_00C1 = 1;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    thunk_FUN_0062aef0(local_10,puVar9);
    puVar9 = (undefined4 *)&this_00->field_0xd7;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined1 *)puVar9 = 0;
    if (this_00->field_00C2 == 3) {
      thunk_FUN_0062a860((int)this_00);
      this_00->field_00C2 = 0;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if (this_00->field_00D6 == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if (this_00->field_00C2 != 2) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    InitVisibelFlight(this_00,1);
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  if ((local_10->field_00D6 == '\0') && (local_10->field_0040 != '\0')) {
    uVar6 = thunk_FUN_0062b4a0((int)local_10);
    this_00->field_00D6 = (char)uVar6;
    if ((char)uVar6 != '\0') {
      thunk_FUN_00629e60(this_00,0);
    }
  }
  switch(this_00->field_00C2) {
  case 1:
    iVar5 = this_00->field_003C + -1;
    this_00->field_003C = iVar5;
    if (0 < iVar5) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    this_00->field_00C2 = 2;
    if ((int)this_00->field_00B6 <= (int)this_00->field_00B2) {
      this_00->field_00B2 = 0;
    }
    if (this_00->field_00D6 == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if ((int)this_00->field_00C6 < 0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    FUN_006eaaa0(DAT_00807598,this_00->field_00C6,0);
    this_00->field_00C1 = 1;
    FUN_006ea270(DAT_00807598,this_00->field_00C6,0,this_00->field_00B2);
    local_c = (float)this_00->field_0046 * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_006A = local_c;
    local_8 = (float)this_00->field_004A * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_006E = local_8;
    fVar4 = (float)this_00->field_004E * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_0072 = fVar4;
    FUN_006ea960(DAT_00807598,this_00->field_00C6,local_c,local_8,fVar4 + _DAT_007904fc);
    pVVar11 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar5 = this_00->field_004E;
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      local_c = (float)((short)(((short)(iVar5 / 200) + sVar3) -
                               (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar5 / 200) + sVar3) -
                                   (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    iVar5 = this_00->field_004A;
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar7 = this_00->field_0046;
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    if (((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
       ((thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar7,iVar5,
                            &local_1c,&local_20), (int)local_c < 0 ||
        (local_24 = local_1c, local_28 = local_20, 4 < (int)local_c)))) goto LAB_006282e0;
LAB_00628286:
    if (((local_24 < 0) || ((int)pVVar11->field_0030 <= local_24)) ||
       (((&DAT_0079aed0)[(int)local_c] + local_28 < 0 ||
        ((int)pVVar11->field_0034 <= (&DAT_0079aed0)[(int)local_c] + local_28)))) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if ((bVar12) && (pVVar11->field_004C != 0)) {
      bVar12 = *(char *)(((&DAT_0079aed0)[(int)local_c] + local_28) * pVVar11->field_0030 +
                         pVVar11->field_004C + local_24) != '\0';
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
      this_00->field_00D6 = (char)uVar6;
      if ((char)uVar6 == '\0') {
        InitVisibelDeton(this_00,0);
        if (-1 < (int)this_00->field_00C6) {
          FUN_006e8ba0(DAT_00807598,this_00->field_00C6);
          this_00->field_00C6 = 0xffffffff;
        }
      }
      else {
        InitVisibelDeton(this_00,1);
      }
      this_00->field_00C2 = 3;
      if (iVar5 != -1) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      this_00->field_0076 = 2;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    uVar6 = *(uint *)(DAT_00802a38 + 0xe4) - this_00->field_00AA;
    if ((this_00->field_00D6 != '\0') && ((*(uint *)(DAT_00802a38 + 0xe4) & 1) == 0)) {
      if ((*(uint *)&this_00->field_0x14 & 0xff00) == 0x400) {
        iVar5 = this_00->field_004E;
        if (this_00->field_005A + 5 <= iVar5) goto LAB_0062838a;
      }
      else {
        iVar5 = this_00->field_004E;
      }
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,1,0,0,this_00->field_0046,this_00->field_004A,iVar5,0,0,0,0,0
                 ,0,-1,0,0);
    }
LAB_0062838a:
    if (uVar6 < 0x19) {
LAB_006283bd:
      this_00->field_00B2 = this_00->field_00B2 + 1;
    }
    else if (uVar6 < 0x2d) {
      if ((*(byte *)(DAT_00802a38 + 0xe4) & 1) == 0) goto LAB_006283bd;
    }
    else if (*(uint *)(DAT_00802a38 + 0xe4) % 3 == 0) goto LAB_006283bd;
    if ((int)this_00->field_00B6 <= (int)this_00->field_00B2) {
      this_00->field_00B2 = 0;
    }
    if (this_00->field_00D6 == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    FUN_006ea270(DAT_00807598,this_00->field_00C6,0,this_00->field_00B2);
    local_c = (float)this_00->field_0046 * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_006A = local_c;
    local_8 = (float)this_00->field_004A * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_006E = local_8;
    fVar4 = (float)this_00->field_004E * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_0072 = fVar4;
    FUN_006ea960(DAT_00807598,this_00->field_00C6,local_c,local_8,fVar4 + _DAT_007904fc);
    pVVar11 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar5 = this_00->field_004E;
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      local_c = (float)((short)(((short)(iVar5 / 200) + sVar3) -
                               (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar5 / 200) + sVar3) -
                                   (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    iVar5 = this_00->field_004A;
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar7 = this_00->field_0046;
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    if ((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
        (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar7,iVar5,
                            &local_24,&local_28), -1 < (int)local_c)) && ((int)local_c < 5))
    goto LAB_00628286;
LAB_006282e0:
    bVar12 = true;
    break;
  case 3:
    iVar5 = this_00->field_00B2 + 1;
    this_00->field_00B2 = iVar5;
    if ((((this_00->field_0xbf != '\0') && (iVar5 == 0xf)) && (this_00->field_00D6 != '\0')) &&
       (-1 < (int)this_00->field_00C6)) {
      FUN_006e9cb0(DAT_00807598,(uint *)this_00->field_00C6,1);
    }
    if (((this_00->field_00B2 == this_00->field_00B6) && (this_00->field_00D6 != '\0')) &&
       (-1 < (int)this_00->field_00C6)) {
      FUN_006e9d40(DAT_00807598,(uint *)this_00->field_00C6,0);
    }
    if (((this_00->field_00B2 == 5) && (iVar5 = thunk_FUN_0062b300((int)this_00), iVar5 != 0)) &&
       (this_00->field_0076 != 2)) {
      thunk_FUN_0062af90(this_00,this_00->field_0046,this_00->field_004A,this_00->field_004E);
    }
    uVar6 = this_00->field_00B2;
    if (*(int *)&this_00->field_0xba <= (int)uVar6) {
      thunk_FUN_0062a860((int)this_00);
      this_00->field_00C2 = 0;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if (this_00->field_00D6 == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if ((int)uVar6 < (int)this_00->field_00B6) {
      FUN_006ea270(DAT_00807598,this_00->field_00C6,0,uVar6);
      local_c = (float)this_00->field_0046 * _DAT_007904f8 * _DAT_007904f0;
      this_00->field_006A = local_c;
      local_8 = (float)this_00->field_004A * _DAT_007904f8 * _DAT_007904f0;
      this_00->field_006E = local_8;
      fVar4 = (float)this_00->field_004E * _DAT_007904f8 * _DAT_007904f0;
      this_00->field_0072 = fVar4;
      FUN_006ea960(DAT_00807598,this_00->field_00C6,local_c,local_8,fVar4 + _DAT_007904fc);
      pVVar11 = g_visibleClass_00802A88;
      if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
        iVar5 = this_00->field_004E;
        sVar3 = (short)(iVar5 >> 0x1f);
        if (iVar5 < 0) {
          local_c = (float)((short)(((short)(iVar5 / 200) + sVar3) -
                                   (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1);
        }
        else {
          local_c = (float)(int)(short)(((short)(iVar5 / 200) + sVar3) -
                                       (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
        }
        iVar5 = this_00->field_004A;
        sVar3 = (short)(iVar5 >> 0x1f);
        if (iVar5 < 0) {
          iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) -
                         (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                              (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
        }
        iVar7 = this_00->field_0046;
        if (iVar7 < 0) {
          iVar7 = (short)(iVar7 / 0xc9) + -1;
        }
        else {
          iVar7 = (int)(short)(iVar7 / 0xc9);
        }
        if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
            (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar7,
                                iVar5,&local_2c,&local_30), (int)local_c < 0)) || (4 < (int)local_c)
           ) {
          bVar12 = true;
        }
        else {
          if (((local_2c < 0) || ((int)pVVar11->field_0030 <= local_2c)) ||
             (((&DAT_0079aed0)[(int)local_c] + local_30 < 0 ||
              ((int)pVVar11->field_0034 <= (&DAT_0079aed0)[(int)local_c] + local_30)))) {
            bVar12 = false;
          }
          else {
            bVar12 = true;
          }
          if ((bVar12) && (pVVar11->field_004C != 0)) {
            bVar12 = *(char *)(((&DAT_0079aed0)[(int)local_c] + local_30) * pVVar11->field_0030 +
                               pVVar11->field_004C + local_2c) != '\0';
          }
          else {
            bVar12 = true;
          }
        }
        if (bVar12) {
          if (this_00->field_00C1 == '\0') {
            FUN_006eaaa0(DAT_00807598,this_00->field_00C6,0);
            this_00->field_00C1 = 1;
          }
        }
        else if (this_00->field_00C1 == '\x01') {
          FUN_006eab60(DAT_00807598,this_00->field_00C6);
          this_00->field_00C1 = 0;
        }
      }
    }
    if (this_00->field_0xbf == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar5 = this_00->field_00B2;
    if (iVar5 < 0xf) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    switch(*(uint *)&this_00->field_0x14 >> 8 & 0xff) {
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
    local_c = (float)this_00->field_0046 * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_006A = local_c;
    local_8 = (float)this_00->field_004A * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_006E = local_8;
    fVar4 = (float)this_00->field_004E * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_0072 = fVar4;
    FUN_006ea960(DAT_00807598,this_00->field_00C6,local_c,local_8,fVar4 + _DAT_007904fc);
    pVVar11 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar5 = this_00->field_004E;
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      local_c = (float)((short)(((short)(iVar5 / 200) + sVar3) -
                               (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar5 / 200) + sVar3) -
                                   (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    iVar5 = this_00->field_004A;
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar7 = this_00->field_0046;
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
        (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar7,iVar5,
                            &local_34,&local_38), (int)local_c < 0)) || (4 < (int)local_c)) {
      bVar12 = true;
    }
    else {
      if (((local_34 < 0) || ((int)pVVar11->field_0030 <= local_34)) ||
         (((&DAT_0079aed0)[(int)local_c] + local_38 < 0 ||
          ((int)pVVar11->field_0034 <= (&DAT_0079aed0)[(int)local_c] + local_38)))) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if ((bVar12) && (pVVar11->field_004C != 0)) {
        bVar12 = *(char *)(((&DAT_0079aed0)[(int)local_c] + local_38) * pVVar11->field_0030 +
                           local_34 + pVVar11->field_004C) != '\0';
      }
      else {
        bVar12 = true;
      }
    }
    cVar1 = this_00->field_00C1;
    goto joined_r0x00628af1;
  default:
    goto switchD_006280c4_default;
  }
  cVar1 = this_00->field_00C1;
joined_r0x00628af1:
  if (bVar12) {
    if (cVar1 == '\0') {
      FUN_006eaaa0(DAT_00807598,this_00->field_00C6,0);
      this_00->field_00C1 = 1;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
  }
  else if (cVar1 == '\x01') {
    FUN_006eab60(DAT_00807598,this_00->field_00C6);
    this_00->field_00C1 = 0;
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
switchD_006280c4_default:
  g_currentExceptionFrame = local_7c.previous;
  return 0;
switchD_006288e6_caseD_0:
  if ((byte)this_00->field_0x14 < 4) {
    FUN_006ea270(DAT_00807598,this_00->field_00C6,1,iVar5 + 3);
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  FUN_006ea270(DAT_00807598,this_00->field_00C6,1,iVar5 - 0xf);
  g_currentExceptionFrame = local_7c.previous;
  return 0;
}

