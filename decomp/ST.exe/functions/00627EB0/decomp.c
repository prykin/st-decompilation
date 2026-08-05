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
  byte bVar6;
  int iVar7;
  int iVar8;
  byte *puVar9;
  STParticleC *pSVar10;
  VisibleClassTy *pVVar11;
  uint uVar12;
  bool bVar13;
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
  iVar7 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0);
  this_00 = local_10;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\nick\\to_Part.Cpp",0x218,0,iVar7,"%s",
                               "STParticleC::GetMessage");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar7,0,"E:\\__titans\\nick\\to_Part.Cpp",0x21a);
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
      if ((int)local_10->field_00C6 < 0) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,local_10->field_00C6);
      this_00->field_00C6 = 0xffffffff;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    puVar9 = (byte *)((message->arg0).ptr);
    if (puVar9[3] != 2) {
      pSVar10 = local_10;
      memmove(pSVar10, puVar9, 0x46); /* compiler REP MOVS byte copy */
      sub_00629F90(local_10,local_10,g_playSystem_00802A38->field_00E4);
      InitVisibelFlight(this_00,(uint)(byte)this_00->field_00D6);
      if (this_00->field_003C != 0) {
        this_00->field_00C2 = CASE_1;
        this_00->field_0104 = this_00->field_003C;
        if ((int)this_00->field_00C6 < 0) {
          g_currentExceptionFrame = local_7c.previous;
          return 0;
        }
        Library::Ourlib::ST3DSMAP::SprHide(g_sT3DSMAPContext_00807598,this_00->field_00C6);
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      this_00->field_00C2 = CASE_2;
      if ((int)this_00->field_00C6 < 0) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,this_00->field_00C6,0);
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
    bVar6 = sub_0062B4A0(local_10);
    this_00->field_00D6 = bVar6;
    if (bVar6 != 0) {
      sub_00629E60(this_00,0);
    }
  }
  switch(this_00->field_00C2) {
  case CASE_1:
    iVar7 = this_00->field_003C + -1;
    this_00->field_003C = iVar7;
    if (0 < iVar7) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    this_00->field_00C2 = CASE_2;
    if (this_00->field_00B6 <= (int)this_00->field_00B2) {
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
    Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,this_00->field_00C6,0);
    this_00->field_00C1 = 1;
    ST3DSMAPContext::sub_006EA270
              (g_sT3DSMAPContext_00807598,this_00->field_00C6,0,this_00->field_00B2);
    local_c = (float)this_00->field_0046 * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_006A = local_c;
    local_8 = (float)this_00->field_004A * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_006E = local_8;
    fVar5 = (float)this_00->field_004E * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_0072 = fVar5;
    Library::Ourlib::ST3DSMAP::SprMove
              (g_sT3DSMAPContext_00807598,this_00->field_00C6,local_c,local_8,fVar5 + _DAT_007904fc);
    pVVar11 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar7 = this_00->field_004E;
    sVar4 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      local_c = (float)((short)(((short)(iVar7 / 200) + sVar4) -
                               (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar7 / 200) + sVar4) -
                                   (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
    }
    iVar7 = this_00->field_004A;
    sVar4 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar4) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar4) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
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
                   (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar8,iVar7,
                    &local_1c,&local_20), (int)local_c < 0 ||
        (local_24 = local_1c, local_28 = local_20, 4 < (int)local_c)))) goto LAB_006282e0;
LAB_00628286:
    if (((local_24 < 0) || (pVVar11->field_0030 <= local_24)) ||
       ((g_centeredOffsets5[(int)local_c] + local_28 < 0 ||
        (pVVar11->field_0034 <= g_centeredOffsets5[(int)local_c] + local_28)))) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if ((bVar13) && (pVVar11->field_004C != nullptr)) {
      bVar13 = pVVar11->field_004C
               [local_24 + (g_centeredOffsets5[(int)local_c] + local_28) * pVVar11->field_0030] != 0
      ;
    }
    else {
      bVar13 = true;
    }
    break;
  case CASE_2:
    iVar7 = sub_0062A370(this_00,g_playSystem_00802A38->field_00E4);
    if (iVar7 < 1) {
      sub_00629830(this_00);
      bVar6 = sub_0062B4A0(this_00);
      this_00->field_00D6 = bVar6;
      if (bVar6 == 0) {
        InitVisibelDeton(this_00,0);
        if (-1 < (int)this_00->field_00C6) {
          Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,this_00->field_00C6);
          this_00->field_00C6 = 0xffffffff;
        }
      }
      else {
        InitVisibelDeton(this_00,1);
      }
      this_00->field_00C2 = CASE_3;
      if (iVar7 != -1) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      this_00->field_0076 = 2;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    uVar12 = g_playSystem_00802A38->field_00E4 - this_00->field_00AA;
    if ((this_00->field_00D6 != '\0') && ((g_playSystem_00802A38->field_00E4 & 1) == 0)) {
      if ((this_00->field_0014 & 0xff00) == 0x400) {
        iVar7 = this_00->field_004E;
        if (this_00->field_005A + 5 <= iVar7) goto LAB_0062838a;
      }
      else {
        iVar7 = this_00->field_004E;
      }
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,1,0,0,this_00->field_0046,this_00->field_004A,iVar7,0,0,0,0,0
                 ,0,-1,0,0);
    }
LAB_0062838a:
    if (uVar12 < 0x19) {
LAB_006283bd:
      this_00->field_00B2 = this_00->field_00B2 + 1;
    }
    else if (uVar12 < 0x2d) {
      if ((g_playSystem_00802A38->field_00E4 & 1) == 0) goto LAB_006283bd;
    }
    else if (g_playSystem_00802A38->field_00E4 % 3 == 0) goto LAB_006283bd;
    if (this_00->field_00B6 <= (int)this_00->field_00B2) {
      this_00->field_00B2 = 0;
    }
    if (this_00->field_00D6 == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    ST3DSMAPContext::sub_006EA270
              (g_sT3DSMAPContext_00807598,this_00->field_00C6,0,this_00->field_00B2);
    local_c = (float)this_00->field_0046 * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_006A = local_c;
    local_8 = (float)this_00->field_004A * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_006E = local_8;
    fVar5 = (float)this_00->field_004E * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_0072 = fVar5;
    Library::Ourlib::ST3DSMAP::SprMove
              (g_sT3DSMAPContext_00807598,this_00->field_00C6,local_c,local_8,fVar5 + _DAT_007904fc);
    pVVar11 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar7 = this_00->field_004E;
    sVar4 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      local_c = (float)((short)(((short)(iVar7 / 200) + sVar4) -
                               (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar7 / 200) + sVar4) -
                                   (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
    }
    iVar7 = this_00->field_004A;
    sVar4 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar4) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar4) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
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
                   (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar8,iVar7,
                    &local_24,&local_28), -1 < (int)local_c)) && ((int)local_c < 5))
    goto LAB_00628286;
LAB_006282e0:
    bVar13 = true;
    break;
  case CASE_3:
    iVar7 = this_00->field_00B2 + 1;
    this_00->field_00B2 = iVar7;
    if ((((this_00->field_00BF != '\0') && (iVar7 == 0xf)) && (this_00->field_00D6 != '\0')) &&
       (-1 < (int)this_00->field_00C6)) {
      ST3DSMAPContext::sub_006E9CB0(g_sT3DSMAPContext_00807598,(uint *)this_00->field_00C6,1);
    }
    if (((this_00->field_00B2 == this_00->field_00B6) && (this_00->field_00D6 != '\0')) &&
       (-1 < (int)this_00->field_00C6)) {
      ST3DSMAPContext::sub_006E9D40(g_sT3DSMAPContext_00807598,(uint *)this_00->field_00C6,0);
    }
    if (((this_00->field_00B2 == 5) && (iVar7 = thunk_FUN_0062b300((int)this_00), iVar7 != 0)) &&
       (this_00->field_0076 != 2)) {
      thunk_FUN_0062af90(this_00,this_00->field_0046,this_00->field_004A,this_00->field_004E);
    }
    uVar12 = this_00->field_00B2;
    if (this_00->field_00BA <= (int)uVar12) {
      sub_0062A860(this_00);
      this_00->field_00C2 = CASE_0;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if (this_00->field_00D6 == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if ((int)uVar12 < this_00->field_00B6) {
      ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,this_00->field_00C6,0,uVar12);
      local_c = (float)this_00->field_0046 * _DAT_007904f8 * _DAT_007904f0;
      this_00->field_006A = local_c;
      local_8 = (float)this_00->field_004A * _DAT_007904f8 * _DAT_007904f0;
      this_00->field_006E = local_8;
      fVar5 = (float)this_00->field_004E * _DAT_007904f8 * _DAT_007904f0;
      this_00->field_0072 = fVar5;
      Library::Ourlib::ST3DSMAP::SprMove
                (g_sT3DSMAPContext_00807598,this_00->field_00C6,local_c,local_8,
                 fVar5 + _DAT_007904fc);
      pVVar11 = g_visibleClass_00802A88;
      if (g_visibleClass_00802A88 != nullptr) {
        iVar7 = this_00->field_004E;
        sVar4 = (short)(iVar7 >> 0x1f);
        if (iVar7 < 0) {
          local_c = (float)((short)(((short)(iVar7 / 200) + sVar4) -
                                   (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)) + -1);
        }
        else {
          local_c = (float)(int)(short)(((short)(iVar7 / 200) + sVar4) -
                                       (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
        }
        iVar7 = this_00->field_004A;
        sVar4 = (short)(iVar7 >> 0x1f);
        if (iVar7 < 0) {
          iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar4) -
                         (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar4) -
                              (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
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
                       (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar8,iVar7,
                        &local_2c,&local_30), (int)local_c < 0)) || (4 < (int)local_c)) {
          bVar13 = true;
        }
        else {
          if (((local_2c < 0) || (pVVar11->field_0030 <= local_2c)) ||
             ((g_centeredOffsets5[(int)local_c] + local_30 < 0 ||
              (pVVar11->field_0034 <= g_centeredOffsets5[(int)local_c] + local_30)))) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          if ((bVar13) && (pVVar11->field_004C != nullptr)) {
            bVar13 = pVVar11->field_004C
                     [local_2c + (g_centeredOffsets5[(int)local_c] + local_30) * pVVar11->field_0030
                     ] != 0;
          }
          else {
            bVar13 = true;
          }
        }
        if (bVar13) {
          if (this_00->field_00C1 == '\0') {
            Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,this_00->field_00C6,0);
            this_00->field_00C1 = 1;
          }
        }
        else if (this_00->field_00C1 == '\x01') {
          Library::Ourlib::ST3DSMAP::SprHide(g_sT3DSMAPContext_00807598,this_00->field_00C6);
          this_00->field_00C1 = 0;
        }
      }
    }
    if (this_00->field_00BF == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar7 = this_00->field_00B2;
    if (iVar7 < 0xf) {
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
    Library::Ourlib::ST3DSMAP::SprMove
              (g_sT3DSMAPContext_00807598,this_00->field_00C6,local_c,local_8,fVar5 + _DAT_007904fc);
    pVVar11 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar7 = this_00->field_004E;
    sVar4 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      local_c = (float)((short)(((short)(iVar7 / 200) + sVar4) -
                               (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar7 / 200) + sVar4) -
                                   (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
    }
    iVar7 = this_00->field_004A;
    sVar4 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar4) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar4) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
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
                   (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar8,iVar7,
                    &local_34,&local_38), (int)local_c < 0)) || (4 < (int)local_c)) {
      bVar13 = true;
    }
    else {
      if (((local_34 < 0) || (pVVar11->field_0030 <= local_34)) ||
         ((g_centeredOffsets5[(int)local_c] + local_38 < 0 ||
          (pVVar11->field_0034 <= g_centeredOffsets5[(int)local_c] + local_38)))) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if ((bVar13) && (pVVar11->field_004C != nullptr)) {
        bVar13 = pVVar11->field_004C
                 [(g_centeredOffsets5[(int)local_c] + local_38) * pVVar11->field_0030 + local_34] !=
                 0;
      }
      else {
        bVar13 = true;
      }
    }
    cVar1 = this_00->field_00C1;
    goto joined_r0x00628af1;
  default:
    goto switchD_006280c4_default;
  }
  cVar1 = this_00->field_00C1;
joined_r0x00628af1:
  if (bVar13) {
    if (cVar1 == '\0') {
      Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,this_00->field_00C6,0);
      this_00->field_00C1 = 1;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
  }
  else if (cVar1 == '\x01') {
    Library::Ourlib::ST3DSMAP::SprHide(g_sT3DSMAPContext_00807598,this_00->field_00C6);
    this_00->field_00C1 = 0;
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
switchD_006280c4_default:
  g_currentExceptionFrame = local_7c.previous;
  return 0;
switchD_006288e6_caseD_0:
  if (*(byte *)&this_00->field_0014 < 4) {
    ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,this_00->field_00C6,1,iVar7 + 3);
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,this_00->field_00C6,1,iVar7 - 0xf);
  g_currentExceptionFrame = local_7c.previous;
  return 0;
}

