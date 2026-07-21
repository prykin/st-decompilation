
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Part.Cpp
   STParticleC::GetMessage
   
   [STSwitchEnumApplier] Switch target field_00C2 uses
   /SubmarineTitans/Recovered/Enums/STParticleC_field_00C2State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_8=8;CASE_10=16;CASE_20=32;CASE_40=64;CASE_80=128
    */

undefined4 __thiscall
STParticleC::GetMessage(STParticleC *this,AnonShape_00627EB0_4C14C976 *param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  short sVar6;
  float fVar7;
  AnonShape_00629F90_C3CBACCB *this_00;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 unaff_ESI;
  AnonNested_00627EB0_0014_B8FBF6AA *pAVar12;
  void *unaff_EDI;
  AnonShape_00629F90_C3CBACCB *pAVar13;
  undefined4 *puVar14;
  VisibleClassTy *pVVar15;
  bool bVar16;
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
  void *local_14;
  AnonShape_00629F90_C3CBACCB *local_10;
  float local_c;
  float local_8;
  
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_10 = (AnonShape_00629F90_C3CBACCB *)this;
  iVar8 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar10 = ReportDebugMessage(s_E____titans_nick_to_Part_Cpp_007d1354,0x218,0,iVar8,&DAT_007a4ccc,
                                s_STParticleC__GetMessage_007d1378);
    if (iVar10 != 0) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return uVar11;
    }
    RaiseInternalException(iVar8,0,s_E____titans_nick_to_Part_Cpp_007d1354,0x21a);
    return 0xffff;
  }
  uVar9 = param_1->field_0010;
  if (0x10f < uVar9) {
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  if (uVar9 == 0x10f) {
    local_14 = (void *)thunk_FUN_0062af40(local_10,&local_18);
    FreeAndNull(&local_14);
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  if (uVar9 != 0) {
    if (uVar9 != 2) {
      if (uVar9 != 3) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      uVar9 = *(uint *)((int)&local_10[2].field_0034 + 2);
      if ((int)uVar9 < 0) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      FUN_006e8ba0(PTR_00807598,uVar9);
      *(undefined4 *)((int)&this_00[2].field_0034 + 2) = 0xffffffff;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    pAVar12 = param_1->field_0014;
    if (pAVar12->field_000C != 2) {
      pAVar13 = local_10;
      for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)pAVar13 = pAVar12->field_0000;
        pAVar12 = (AnonNested_00627EB0_0014_B8FBF6AA *)&pAVar12->field_0x4;
        pAVar13 = (AnonShape_00629F90_C3CBACCB *)&pAVar13->field_0x4;
      }
      *(undefined2 *)pAVar13 = *(undefined2 *)&pAVar12->field_0000;
      thunk_FUN_00629f90(local_10,local_10,PTR_00802a38->field_00E4);
      InitVisibelFlight((STParticleC *)this_00,(uint)(byte)this_00[2].field_0x46);
      iVar8 = *(int *)&this_00->field_0x3c;
      if (iVar8 != 0) {
        *(undefined4 *)((int)&this_00[2].field_0030 + 2) = 1;
        this_00[3].field_002C = iVar8;
        uVar9 = *(uint *)((int)&this_00[2].field_0034 + 2);
        if ((int)uVar9 < 0) {
          g_currentExceptionFrame = local_7c.previous;
          return 0;
        }
        FUN_006eab60(PTR_00807598,uVar9);
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      uVar9 = *(uint *)((int)&this_00[2].field_0034 + 2);
      *(undefined4 *)((int)&this_00[2].field_0030 + 2) = 2;
      if ((int)uVar9 < 0) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      FUN_006eaaa0(PTR_00807598,uVar9,0);
      *(undefined1 *)((int)&this_00[2].field_0030 + 1) = 1;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    thunk_FUN_0062aef0(local_10,&pAVar12->field_0000);
    puVar14 = (undefined4 *)&this_00[2].field_0x47;
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    *(undefined1 *)puVar14 = 0;
    iVar8 = *(int *)((int)&this_00[2].field_0030 + 2);
    if (iVar8 == 3) {
      thunk_FUN_0062a860((int)this_00);
      *(undefined4 *)((int)&this_00[2].field_0030 + 2) = 0;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if (this_00[2].field_0x46 == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if (iVar8 != 2) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    InitVisibelFlight((STParticleC *)this_00,1);
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  if ((local_10[2].field_0x46 == '\0') && (local_10->field_0x40 != '\0')) {
    uVar9 = thunk_FUN_0062b4a0((int)local_10);
    this_00[2].field_0x46 = (char)uVar9;
    if ((char)uVar9 != '\0') {
      thunk_FUN_00629e60(this_00,0);
    }
  }
  switch(*(undefined4 *)((int)&this_00[2].field_0030 + 2)) {
  case 1:
    iVar8 = *(int *)&this_00->field_0x3c + -1;
    *(int *)&this_00->field_0x3c = iVar8;
    if (0 < iVar8) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    *(undefined4 *)((int)&this_00[2].field_0030 + 2) = 2;
    if (*(int *)((int)&this_00[2].field_0024 + 2) <= *(int *)((int)&this_00[2].field_0020 + 2)) {
      *(undefined4 *)((int)&this_00[2].field_0020 + 2) = 0;
    }
    if (this_00[2].field_0x46 == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    uVar9 = *(uint *)((int)&this_00[2].field_0034 + 2);
    if ((int)uVar9 < 0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    FUN_006eaaa0(PTR_00807598,uVar9,0);
    uVar9 = *(uint *)((int)&this_00[2].field_0020 + 2);
    uVar3 = *(uint *)((int)&this_00[2].field_0034 + 2);
    *(undefined1 *)((int)&this_00[2].field_0030 + 1) = 1;
    FUN_006ea270(PTR_00807598,uVar3,0,uVar9);
    uVar9 = *(uint *)((int)&this_00[2].field_0034 + 2);
    local_c = (float)*(int *)&this_00->field_0x46 * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)&this_00[1].field_0020 + 2) = local_c;
    local_8 = (float)*(int *)&this_00[1].field_0x2 * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)&this_00[1].field_0024 + 2) = local_8;
    fVar7 = (float)*(int *)&this_00[1].field_0x6 * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)&this_00[1].field_0028 + 2) = fVar7;
    FUN_006ea960(PTR_00807598,uVar9,local_c,local_8,fVar7 + _DAT_007904fc);
    pVVar15 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar8 = *(int *)&this_00[1].field_0x6;
    sVar6 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      local_c = (float)((short)(((short)(iVar8 / 200) + sVar6) -
                               (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar8 / 200) + sVar6) -
                                   (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
    }
    iVar8 = *(int *)&this_00[1].field_0x2;
    sVar6 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar6) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar6) -
                          (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
    }
    iVar10 = *(int *)&this_00->field_0x46;
    sVar6 = (short)(iVar10 >> 0x1f);
    if (iVar10 < 0) {
      iVar10 = (short)(((short)(iVar10 / 0xc9) + sVar6) -
                      (short)((longlong)iVar10 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar10 = (int)(short)(((short)(iVar10 / 0xc9) + sVar6) -
                           (short)((longlong)iVar10 * 0x28c1979 >> 0x3f));
    }
    if (((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
       ((thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar10,iVar8
                            ,&local_1c,&local_20), (int)local_c < 0 ||
        (local_24 = local_1c, local_28 = local_20, 4 < (int)local_c)))) goto LAB_006282e0;
LAB_00628286:
    if (((local_24 < 0) || ((int)pVVar15->field_0030 <= local_24)) ||
       (((&DAT_0079aed0)[(int)local_c] + local_28 < 0 ||
        ((int)pVVar15->field_0034 <= (&DAT_0079aed0)[(int)local_c] + local_28)))) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if ((bVar16) && (pVVar15->field_004C != 0)) {
      bVar16 = *(char *)(((&DAT_0079aed0)[(int)local_c] + local_28) * pVVar15->field_0030 +
                         pVVar15->field_004C + local_24) != '\0';
    }
    else {
      bVar16 = true;
    }
    break;
  case 2:
    iVar8 = thunk_FUN_0062a370(this_00,PTR_00802a38->field_00E4);
    if (iVar8 < 1) {
      thunk_FUN_00629830((AnonShape_00629830_F056CE49 *)this_00);
      uVar9 = thunk_FUN_0062b4a0((int)this_00);
      this_00[2].field_0x46 = (char)uVar9;
      if ((char)uVar9 == '\0') {
        InitVisibelDeton((STParticleC *)this_00,0);
        uVar9 = *(uint *)((int)&this_00[2].field_0034 + 2);
        if (-1 < (int)uVar9) {
          FUN_006e8ba0(PTR_00807598,uVar9);
          *(undefined4 *)((int)&this_00[2].field_0034 + 2) = 0xffffffff;
        }
      }
      else {
        InitVisibelDeton((STParticleC *)this_00,1);
      }
      *(undefined4 *)((int)&this_00[2].field_0030 + 2) = 3;
      if (iVar8 != -1) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_00[1].field_002C + 2) = 2;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    uVar9 = PTR_00802a38->field_00E4 - *(int *)&this_00[2].field_0x1a;
    if ((this_00[2].field_0x46 != '\0') && ((PTR_00802a38->field_00E4 & 1) == 0)) {
      if ((*(uint *)&this_00->field_0014 & 0xff00) == 0x400) {
        iVar8 = *(int *)&this_00[1].field_0x6;
        if (*(int *)&this_00[1].field_0x12 + 5 <= iVar8) goto LAB_0062838a;
      }
      else {
        iVar8 = *(int *)&this_00[1].field_0x6;
      }
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,1,0,0,*(int *)&this_00->field_0x46,
                 *(int *)&this_00[1].field_0x2,iVar8,0,0,0,0,0,0,-1,0,0);
    }
LAB_0062838a:
    if (uVar9 < 0x19) {
LAB_006283bd:
      piVar1 = (int *)((int)&this_00[2].field_0020 + 2);
      *piVar1 = *piVar1 + 1;
    }
    else if (uVar9 < 0x2d) {
      if ((*(byte *)&PTR_00802a38->field_00E4 & 1) == 0) goto LAB_006283bd;
    }
    else if ((uint)PTR_00802a38->field_00E4 % 3 == 0) goto LAB_006283bd;
    if (*(int *)((int)&this_00[2].field_0024 + 2) <= *(int *)((int)&this_00[2].field_0020 + 2)) {
      *(undefined4 *)((int)&this_00[2].field_0020 + 2) = 0;
    }
    if (this_00[2].field_0x46 == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    FUN_006ea270(PTR_00807598,*(uint *)((int)&this_00[2].field_0034 + 2),0,
                 *(uint *)((int)&this_00[2].field_0020 + 2));
    uVar9 = *(uint *)((int)&this_00[2].field_0034 + 2);
    local_c = (float)*(int *)&this_00->field_0x46 * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)&this_00[1].field_0020 + 2) = local_c;
    local_8 = (float)*(int *)&this_00[1].field_0x2 * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)&this_00[1].field_0024 + 2) = local_8;
    fVar7 = (float)*(int *)&this_00[1].field_0x6 * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)&this_00[1].field_0028 + 2) = fVar7;
    FUN_006ea960(PTR_00807598,uVar9,local_c,local_8,fVar7 + _DAT_007904fc);
    pVVar15 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar8 = *(int *)&this_00[1].field_0x6;
    sVar6 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      local_c = (float)((short)(((short)(iVar8 / 200) + sVar6) -
                               (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar8 / 200) + sVar6) -
                                   (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
    }
    iVar8 = *(int *)&this_00[1].field_0x2;
    sVar6 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar6) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar6) -
                          (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
    }
    iVar10 = *(int *)&this_00->field_0x46;
    sVar6 = (short)(iVar10 >> 0x1f);
    if (iVar10 < 0) {
      iVar10 = (short)(((short)(iVar10 / 0xc9) + sVar6) -
                      (short)((longlong)iVar10 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar10 = (int)(short)(((short)(iVar10 / 0xc9) + sVar6) -
                           (short)((longlong)iVar10 * 0x28c1979 >> 0x3f));
    }
    if ((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
        (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar10,iVar8
                            ,&local_24,&local_28), -1 < (int)local_c)) && ((int)local_c < 5))
    goto LAB_00628286;
LAB_006282e0:
    bVar16 = true;
    break;
  case 3:
    cVar2 = *(char *)((int)&this_00[2].field_002C + 3);
    iVar8 = *(int *)((int)&this_00[2].field_0020 + 2) + 1;
    *(int *)((int)&this_00[2].field_0020 + 2) = iVar8;
    if ((((cVar2 != '\0') && (iVar8 == 0xf)) && (this_00[2].field_0x46 != '\0')) &&
       (puVar4 = *(uint **)((int)&this_00[2].field_0034 + 2), -1 < (int)puVar4)) {
      FUN_006e9cb0(PTR_00807598,puVar4,1);
    }
    if (((*(int *)((int)&this_00[2].field_0020 + 2) == *(int *)((int)&this_00[2].field_0024 + 2)) &&
        (this_00[2].field_0x46 != '\0')) &&
       (puVar4 = *(uint **)((int)&this_00[2].field_0034 + 2), -1 < (int)puVar4)) {
      FUN_006e9d40(PTR_00807598,puVar4,0);
    }
    if (((*(int *)((int)&this_00[2].field_0020 + 2) == 5) &&
        (iVar8 = thunk_FUN_0062b300((int)this_00), iVar8 != 0)) &&
       (*(int *)((int)&this_00[1].field_002C + 2) != 2)) {
      thunk_FUN_0062af90(this_00,*(int *)&this_00->field_0x46,*(int *)&this_00[1].field_0x2,
                         *(int *)&this_00[1].field_0x6);
    }
    uVar9 = *(uint *)((int)&this_00[2].field_0020 + 2);
    if (*(int *)((int)&this_00[2].field_0028 + 2) <= (int)uVar9) {
      thunk_FUN_0062a860((int)this_00);
      *(undefined4 *)((int)&this_00[2].field_0030 + 2) = 0;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if (this_00[2].field_0x46 == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if ((int)uVar9 < *(int *)((int)&this_00[2].field_0024 + 2)) {
      FUN_006ea270(PTR_00807598,*(uint *)((int)&this_00[2].field_0034 + 2),0,uVar9);
      uVar9 = *(uint *)((int)&this_00[2].field_0034 + 2);
      local_c = (float)*(int *)&this_00->field_0x46 * _DAT_007904f8 * _DAT_007904f0;
      *(float *)((int)&this_00[1].field_0020 + 2) = local_c;
      local_8 = (float)*(int *)&this_00[1].field_0x2 * _DAT_007904f8 * _DAT_007904f0;
      *(float *)((int)&this_00[1].field_0024 + 2) = local_8;
      fVar7 = (float)*(int *)&this_00[1].field_0x6 * _DAT_007904f8 * _DAT_007904f0;
      *(float *)((int)&this_00[1].field_0028 + 2) = fVar7;
      FUN_006ea960(PTR_00807598,uVar9,local_c,local_8,fVar7 + _DAT_007904fc);
      pVVar15 = g_visibleClass_00802A88;
      if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
        iVar8 = *(int *)&this_00[1].field_0x6;
        sVar6 = (short)(iVar8 >> 0x1f);
        if (iVar8 < 0) {
          local_c = (float)((short)(((short)(iVar8 / 200) + sVar6) -
                                   (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) + -1);
        }
        else {
          local_c = (float)(int)(short)(((short)(iVar8 / 200) + sVar6) -
                                       (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
        }
        iVar8 = *(int *)&this_00[1].field_0x2;
        sVar6 = (short)(iVar8 >> 0x1f);
        if (iVar8 < 0) {
          iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar6) -
                         (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar6) -
                              (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
        }
        iVar10 = *(int *)&this_00->field_0x46;
        if (iVar10 < 0) {
          iVar10 = (short)(iVar10 / 0xc9) + -1;
        }
        else {
          iVar10 = (int)(short)(iVar10 / 0xc9);
        }
        if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
            (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar10,
                                iVar8,&local_2c,&local_30), (int)local_c < 0)) || (4 < (int)local_c)
           ) {
          bVar16 = true;
        }
        else {
          if (((local_2c < 0) || ((int)pVVar15->field_0030 <= local_2c)) ||
             (((&DAT_0079aed0)[(int)local_c] + local_30 < 0 ||
              ((int)pVVar15->field_0034 <= (&DAT_0079aed0)[(int)local_c] + local_30)))) {
            bVar16 = false;
          }
          else {
            bVar16 = true;
          }
          if ((bVar16) && (pVVar15->field_004C != 0)) {
            bVar16 = *(char *)(((&DAT_0079aed0)[(int)local_c] + local_30) * pVVar15->field_0030 +
                               pVVar15->field_004C + local_2c) != '\0';
          }
          else {
            bVar16 = true;
          }
        }
        cVar2 = *(char *)((int)&this_00[2].field_0030 + 1);
        if (bVar16) {
          if (cVar2 == '\0') {
            FUN_006eaaa0(PTR_00807598,*(uint *)((int)&this_00[2].field_0034 + 2),0);
            *(undefined1 *)((int)&this_00[2].field_0030 + 1) = 1;
          }
        }
        else if (cVar2 == '\x01') {
          FUN_006eab60(PTR_00807598,*(uint *)((int)&this_00[2].field_0034 + 2));
          *(undefined1 *)((int)&this_00[2].field_0030 + 1) = 0;
        }
      }
    }
    if (*(char *)((int)&this_00[2].field_002C + 3) == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar8 = *(int *)((int)&this_00[2].field_0020 + 2);
    if (iVar8 < 0xf) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    switch(*(uint *)&this_00->field_0014 >> 8 & 0xff) {
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
    uVar9 = *(uint *)((int)&this_00[2].field_0034 + 2);
    local_c = (float)*(int *)&this_00->field_0x46 * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)&this_00[1].field_0020 + 2) = local_c;
    local_8 = (float)*(int *)&this_00[1].field_0x2 * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)&this_00[1].field_0024 + 2) = local_8;
    fVar7 = (float)*(int *)&this_00[1].field_0x6 * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)&this_00[1].field_0028 + 2) = fVar7;
    FUN_006ea960(PTR_00807598,uVar9,local_c,local_8,fVar7 + _DAT_007904fc);
    pVVar15 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar8 = *(int *)&this_00[1].field_0x6;
    sVar6 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      local_c = (float)((short)(((short)(iVar8 / 200) + sVar6) -
                               (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar8 / 200) + sVar6) -
                                   (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
    }
    iVar8 = *(int *)&this_00[1].field_0x2;
    sVar6 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar6) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar6) -
                          (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
    }
    iVar10 = *(int *)&this_00->field_0x46;
    sVar6 = (short)(iVar10 >> 0x1f);
    if (iVar10 < 0) {
      iVar10 = (short)(((short)(iVar10 / 0xc9) + sVar6) -
                      (short)((longlong)iVar10 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar10 = (int)(short)(((short)(iVar10 / 0xc9) + sVar6) -
                           (short)((longlong)iVar10 * 0x28c1979 >> 0x3f));
    }
    if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
        (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar10,iVar8
                            ,&local_34,&local_38), (int)local_c < 0)) || (4 < (int)local_c)) {
      bVar16 = true;
    }
    else {
      if (((local_34 < 0) || ((int)pVVar15->field_0030 <= local_34)) ||
         (((&DAT_0079aed0)[(int)local_c] + local_38 < 0 ||
          ((int)pVVar15->field_0034 <= (&DAT_0079aed0)[(int)local_c] + local_38)))) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      if ((bVar16) && (pVVar15->field_004C != 0)) {
        bVar16 = *(char *)(((&DAT_0079aed0)[(int)local_c] + local_38) * pVVar15->field_0030 +
                           local_34 + pVVar15->field_004C) != '\0';
      }
      else {
        bVar16 = true;
      }
    }
    cVar2 = *(char *)((int)&this_00[2].field_0030 + 1);
    goto joined_r0x00628af1;
  default:
    goto switchD_006280c4_default;
  }
  cVar2 = *(char *)((int)&this_00[2].field_0030 + 1);
joined_r0x00628af1:
  if (bVar16) {
    if (cVar2 == '\0') {
      FUN_006eaaa0(PTR_00807598,*(uint *)((int)&this_00[2].field_0034 + 2),0);
      *(undefined1 *)((int)&this_00[2].field_0030 + 1) = 1;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
  }
  else if (cVar2 == '\x01') {
    FUN_006eab60(PTR_00807598,*(uint *)((int)&this_00[2].field_0034 + 2));
    *(undefined1 *)((int)&this_00[2].field_0030 + 1) = 0;
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
switchD_006280c4_default:
  g_currentExceptionFrame = local_7c.previous;
  return 0;
switchD_006288e6_caseD_0:
  if (this_00->field_0014 < 4) {
    FUN_006ea270(PTR_00807598,*(uint *)((int)&this_00[2].field_0034 + 2),1,iVar8 + 3);
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  FUN_006ea270(PTR_00807598,*(uint *)((int)&this_00[2].field_0034 + 2),1,iVar8 - 0xf);
  g_currentExceptionFrame = local_7c.previous;
  return 0;
}

