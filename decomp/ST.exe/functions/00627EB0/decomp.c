#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Part.Cpp
   STParticleC::GetMessage

   [STSwitchEnumApplier] Switch target field_00C2 uses
   /SubmarineTitans/Recovered/Enums/STParticleC_field_00C2State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_8=8;CASE_10=16;CASE_20=32;CASE_40=64;CASE_80=128

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00405C9A|00627EB0; family_names=STParticleC::GetMessage; ret4=14;
   direct_offsets={10:1,14:4,18:0,1c:0} */

int __thiscall STParticleC::GetMessage(STParticleC *this,STMessage *message)

{
  char cVar1;
  STMessageId SVar2;
  code *pcVar3;
  short sVar4;
  float fVar5;
  STParticleC *this_00;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
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
  void *local_14;
  STParticleC *local_10;
  float local_c;
  float local_8;

  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_10 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0);
  this_00 = local_10;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\nick\\to_Part.Cpp",0x218,0,iVar6,"%s",
                               "STParticleC::GetMessage");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\nick\\to_Part.Cpp",0x21a);
    return 0xffff;
  }
  SVar2 = message->id;
  if (MESS_SHARED_010F < SVar2) {
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  if (SVar2 == MESS_SHARED_010F) {
    local_14 = (void *)thunk_FUN_0062af40(local_10,&local_18);
    FreeAndNull(&local_14);
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  if (SVar2 != MESS_ID_NONE) {
    if (SVar2 != MESS_ID_CREATE) {
      if (SVar2 != MESS_SHARED_0003) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      if (local_10->field_00C6 < 0) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      FUN_006e8ba0(PTR_00807598,local_10->field_00C6);
      this_00->field_00C6 = -1;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    puVar9 = (message->arg0).ptr;
    if (puVar9[3] != 2) {
      pSVar10 = local_10;
      for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined4 *)pSVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        pSVar10 = (STParticleC *)&pSVar10->field_0x4;
      }
      *(undefined2 *)pSVar10 = *(undefined2 *)puVar9;
      sub_00629F90(local_10,local_10,g_playSystem_00802A38->field_00E4);
      InitVisibelFlight(this_00,(uint)(byte)this_00->field_00D6);
      if (this_00->field_003C != 0) {
        this_00->field_00C2 = CASE_1;
        this_00->field_0104 = this_00->field_003C;
        if (this_00->field_00C6 < 0) {
          g_currentExceptionFrame = local_7c.previous;
          return 0;
        }
        FUN_006eab60(PTR_00807598,this_00->field_00C6);
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      this_00->field_00C2 = CASE_2;
      if (this_00->field_00C6 < 0) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      FUN_006eaaa0(PTR_00807598,this_00->field_00C6,0);
      this_00->field_00C1 = 1;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    sub_0062AEF0(local_10,puVar9);
    memset(&this_00->field_0xd7, 0, 0x2d); /* compiler bulk-zero initialization */
    if (this_00->field_00C2 == CASE_3) {
      sub_0062A860(this_00);
      this_00->field_00C2 = CASE_0;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if (this_00->field_00D6 == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if (this_00->field_00C2 != CASE_2) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    InitVisibelFlight(this_00,1);
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  if ((local_10->field_00D6 == '\0') && (local_10->field_0040 != '\0')) {
    uVar7 = sub_0062B4A0(local_10);
    this_00->field_00D6 = (char)uVar7;
    if ((char)uVar7 != '\0') {
      sub_00629E60(this_00,0);
    }
  }
  switch(this_00->field_00C2) {
  case CASE_1:
    iVar6 = this_00->field_003C + -1;
    this_00->field_003C = iVar6;
    if (0 < iVar6) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    this_00->field_00C2 = CASE_2;
    if (this_00->field_00B6 <= this_00->field_00B2) {
      this_00->field_00B2 = 0;
    }
    if (this_00->field_00D6 == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if (this_00->field_00C6 < 0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    FUN_006eaaa0(PTR_00807598,this_00->field_00C6,0);
    this_00->field_00C1 = 1;
    FUN_006ea270(PTR_00807598,this_00->field_00C6,0,this_00->field_00B2);
    local_c = (float)this_00->field_0046 * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_006A = local_c;
    local_8 = (float)this_00->field_004A * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_006E = local_8;
    fVar5 = (float)this_00->field_004E * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_0072 = fVar5;
    FUN_006ea960(PTR_00807598,this_00->field_00C6,local_c,local_8,fVar5 + _DAT_007904fc);
    pVVar11 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar6 = this_00->field_004E;
    sVar4 = (short)(iVar6 >> 0x1f);
    if (iVar6 < 0) {
      local_c = (float)((short)(((short)(iVar6 / 200) + sVar4) -
                               (short)((longlong)iVar6 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar6 / 200) + sVar4) -
                                   (short)((longlong)iVar6 * 0x51eb851f >> 0x3f));
    }
    iVar6 = this_00->field_004A;
    sVar4 = (short)(iVar6 >> 0x1f);
    if (iVar6 < 0) {
      iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar4) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar4) -
                          (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
    }
    iVar8 = this_00->field_0046;
    sVar4 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar4) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar4) -
                          (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
    }
    if (((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
       ((VisibleClassTy::sub_00558C00
                   (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar8,iVar6,
                    &local_1c,&local_20), (int)local_c < 0 ||
        (local_24 = local_1c, local_28 = local_20, 4 < (int)local_c)))) goto LAB_006282e0;
LAB_00628286:
    if (((local_24 < 0) || (pVVar11->field_0030 <= local_24)) ||
       ((g_centeredOffsets5[(int)local_c] + local_28 < 0 ||
        (pVVar11->field_0034 <= g_centeredOffsets5[(int)local_c] + local_28)))) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if ((bVar12) && (pVVar11->field_004C != (byte *)0x0)) {
      bVar12 = pVVar11->field_004C
               [local_24 + (g_centeredOffsets5[(int)local_c] + local_28) * pVVar11->field_0030] != 0
      ;
    }
    else {
      bVar12 = true;
    }
    break;
  case CASE_2:
    iVar6 = sub_0062A370(this_00,g_playSystem_00802A38->field_00E4);
    if (iVar6 < 1) {
      sub_00629830(this_00);
      uVar7 = sub_0062B4A0(this_00);
      this_00->field_00D6 = (char)uVar7;
      if ((char)uVar7 == '\0') {
        InitVisibelDeton(this_00,0);
        if (-1 < this_00->field_00C6) {
          FUN_006e8ba0(PTR_00807598,this_00->field_00C6);
          this_00->field_00C6 = -1;
        }
      }
      else {
        InitVisibelDeton(this_00,1);
      }
      this_00->field_00C2 = CASE_3;
      if (iVar6 != -1) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      this_00->field_0076 = 2;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    uVar7 = g_playSystem_00802A38->field_00E4 - this_00->field_00AA;
    if ((this_00->field_00D6 != '\0') && ((g_playSystem_00802A38->field_00E4 & 1) == 0)) {
      if ((this_00->field_0014 & 0xff00) == 0x400) {
        iVar6 = this_00->field_004E;
        if (this_00->field_005A + 5 <= iVar6) goto LAB_0062838a;
      }
      else {
        iVar6 = this_00->field_004E;
      }
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,1,0,0,this_00->field_0046,this_00->field_004A,iVar6,0,0,0,0,0
                 ,0,-1,0,0);
    }
LAB_0062838a:
    if (uVar7 < 0x19) {
LAB_006283bd:
      this_00->field_00B2 = this_00->field_00B2 + 1;
    }
    else if (uVar7 < 0x2d) {
      if ((g_playSystem_00802A38->field_00E4 & 1) == 0) goto LAB_006283bd;
    }
    else if (g_playSystem_00802A38->field_00E4 % 3 == 0) goto LAB_006283bd;
    if (this_00->field_00B6 <= this_00->field_00B2) {
      this_00->field_00B2 = 0;
    }
    if (this_00->field_00D6 == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    FUN_006ea270(PTR_00807598,this_00->field_00C6,0,this_00->field_00B2);
    local_c = (float)this_00->field_0046 * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_006A = local_c;
    local_8 = (float)this_00->field_004A * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_006E = local_8;
    fVar5 = (float)this_00->field_004E * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_0072 = fVar5;
    FUN_006ea960(PTR_00807598,this_00->field_00C6,local_c,local_8,fVar5 + _DAT_007904fc);
    pVVar11 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar6 = this_00->field_004E;
    sVar4 = (short)(iVar6 >> 0x1f);
    if (iVar6 < 0) {
      local_c = (float)((short)(((short)(iVar6 / 200) + sVar4) -
                               (short)((longlong)iVar6 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar6 / 200) + sVar4) -
                                   (short)((longlong)iVar6 * 0x51eb851f >> 0x3f));
    }
    iVar6 = this_00->field_004A;
    sVar4 = (short)(iVar6 >> 0x1f);
    if (iVar6 < 0) {
      iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar4) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar4) -
                          (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
    }
    iVar8 = this_00->field_0046;
    sVar4 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar4) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar4) -
                          (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
    }
    if ((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
        (VisibleClassTy::sub_00558C00
                   (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar8,iVar6,
                    &local_24,&local_28), -1 < (int)local_c)) && ((int)local_c < 5))
    goto LAB_00628286;
LAB_006282e0:
    bVar12 = true;
    break;
  case CASE_3:
    iVar6 = this_00->field_00B2 + 1;
    this_00->field_00B2 = iVar6;
    if ((((this_00->field_00BF != '\0') && (iVar6 == 0xf)) && (this_00->field_00D6 != '\0')) &&
       (-1 < this_00->field_00C6)) {
      FUN_006e9cb0(PTR_00807598,(uint *)this_00->field_00C6,1);
    }
    if (((this_00->field_00B2 == this_00->field_00B6) && (this_00->field_00D6 != '\0')) &&
       (-1 < this_00->field_00C6)) {
      FUN_006e9d40(PTR_00807598,(uint *)this_00->field_00C6,0);
    }
    if (((this_00->field_00B2 == 5) && (iVar6 = thunk_FUN_0062b300((int)this_00), iVar6 != 0)) &&
       (this_00->field_0076 != 2)) {
      thunk_FUN_0062af90(this_00,this_00->field_0046,this_00->field_004A,this_00->field_004E);
    }
    uVar7 = this_00->field_00B2;
    if (this_00->field_00BA <= (int)uVar7) {
      sub_0062A860(this_00);
      this_00->field_00C2 = CASE_0;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if (this_00->field_00D6 == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if ((int)uVar7 < this_00->field_00B6) {
      FUN_006ea270(PTR_00807598,this_00->field_00C6,0,uVar7);
      local_c = (float)this_00->field_0046 * _DAT_007904f8 * _DAT_007904f0;
      this_00->field_006A = local_c;
      local_8 = (float)this_00->field_004A * _DAT_007904f8 * _DAT_007904f0;
      this_00->field_006E = local_8;
      fVar5 = (float)this_00->field_004E * _DAT_007904f8 * _DAT_007904f0;
      this_00->field_0072 = fVar5;
      FUN_006ea960(PTR_00807598,this_00->field_00C6,local_c,local_8,fVar5 + _DAT_007904fc);
      pVVar11 = g_visibleClass_00802A88;
      if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
        iVar6 = this_00->field_004E;
        sVar4 = (short)(iVar6 >> 0x1f);
        if (iVar6 < 0) {
          local_c = (float)((short)(((short)(iVar6 / 200) + sVar4) -
                                   (short)((longlong)iVar6 * 0x51eb851f >> 0x3f)) + -1);
        }
        else {
          local_c = (float)(int)(short)(((short)(iVar6 / 200) + sVar4) -
                                       (short)((longlong)iVar6 * 0x51eb851f >> 0x3f));
        }
        iVar6 = this_00->field_004A;
        sVar4 = (short)(iVar6 >> 0x1f);
        if (iVar6 < 0) {
          iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar4) -
                         (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar4) -
                              (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
        }
        iVar8 = this_00->field_0046;
        if (iVar8 < 0) {
          iVar8 = (short)(iVar8 / 0xc9) + -1;
        }
        else {
          iVar8 = (int)(short)(iVar8 / 0xc9);
        }
        if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
            (VisibleClassTy::sub_00558C00
                       (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar8,iVar6,
                        &local_2c,&local_30), (int)local_c < 0)) || (4 < (int)local_c)) {
          bVar12 = true;
        }
        else {
          if (((local_2c < 0) || (pVVar11->field_0030 <= local_2c)) ||
             ((g_centeredOffsets5[(int)local_c] + local_30 < 0 ||
              (pVVar11->field_0034 <= g_centeredOffsets5[(int)local_c] + local_30)))) {
            bVar12 = false;
          }
          else {
            bVar12 = true;
          }
          if ((bVar12) && (pVVar11->field_004C != (byte *)0x0)) {
            bVar12 = pVVar11->field_004C
                     [local_2c + (g_centeredOffsets5[(int)local_c] + local_30) * pVVar11->field_0030
                     ] != 0;
          }
          else {
            bVar12 = true;
          }
        }
        if (bVar12) {
          if (this_00->field_00C1 == '\0') {
            FUN_006eaaa0(PTR_00807598,this_00->field_00C6,0);
            this_00->field_00C1 = 1;
          }
        }
        else if (this_00->field_00C1 == '\x01') {
          FUN_006eab60(PTR_00807598,this_00->field_00C6);
          this_00->field_00C1 = 0;
        }
      }
    }
    if (this_00->field_00BF == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar6 = this_00->field_00B2;
    if (iVar6 < 0xf) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    switch((uint)this_00->field_0014 >> 8 & 0xff) {
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
  case CASE_4:
    local_c = (float)this_00->field_0046 * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_006A = local_c;
    local_8 = (float)this_00->field_004A * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_006E = local_8;
    fVar5 = (float)this_00->field_004E * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_0072 = fVar5;
    FUN_006ea960(PTR_00807598,this_00->field_00C6,local_c,local_8,fVar5 + _DAT_007904fc);
    pVVar11 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar6 = this_00->field_004E;
    sVar4 = (short)(iVar6 >> 0x1f);
    if (iVar6 < 0) {
      local_c = (float)((short)(((short)(iVar6 / 200) + sVar4) -
                               (short)((longlong)iVar6 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar6 / 200) + sVar4) -
                                   (short)((longlong)iVar6 * 0x51eb851f >> 0x3f));
    }
    iVar6 = this_00->field_004A;
    sVar4 = (short)(iVar6 >> 0x1f);
    if (iVar6 < 0) {
      iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar4) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar4) -
                          (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
    }
    iVar8 = this_00->field_0046;
    sVar4 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar4) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar4) -
                          (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
    }
    if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
        (VisibleClassTy::sub_00558C00
                   (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar8,iVar6,
                    &local_34,&local_38), (int)local_c < 0)) || (4 < (int)local_c)) {
      bVar12 = true;
    }
    else {
      if (((local_34 < 0) || (pVVar11->field_0030 <= local_34)) ||
         ((g_centeredOffsets5[(int)local_c] + local_38 < 0 ||
          (pVVar11->field_0034 <= g_centeredOffsets5[(int)local_c] + local_38)))) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if ((bVar12) && (pVVar11->field_004C != (byte *)0x0)) {
        bVar12 = pVVar11->field_004C
                 [(g_centeredOffsets5[(int)local_c] + local_38) * pVVar11->field_0030 + local_34] !=
                 0;
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
      FUN_006eaaa0(PTR_00807598,this_00->field_00C6,0);
      this_00->field_00C1 = 1;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
  }
  else if (cVar1 == '\x01') {
    FUN_006eab60(PTR_00807598,this_00->field_00C6);
    this_00->field_00C1 = 0;
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
switchD_006280c4_default:
  g_currentExceptionFrame = local_7c.previous;
  return 0;
switchD_006288e6_caseD_0:
  if (*(byte *)&this_00->field_0014 < 4) {
    FUN_006ea270(PTR_00807598,this_00->field_00C6,1,iVar6 + 3);
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  FUN_006ea270(PTR_00807598,this_00->field_00C6,1,iVar6 - 0xf);
  g_currentExceptionFrame = local_7c.previous;
  return 0;
}

