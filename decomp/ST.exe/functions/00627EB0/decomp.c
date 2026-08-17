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
  short sVar4;
  float fVar5;
  STParticleC *this_00;
  byte bVar6;
  int local_EAX_36;
  int iVar7;
  int iVar9;
  int iVar8;
  int iVar10;
  byte *puVar11;
  STParticleC *pSVar12;
  VisibleClassTy *pVVar13;
  uint uVar14;
  bool bVar15;
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
  local_EAX_36 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_36 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\nick\\to_Part.Cpp",0x218,0,local_EAX_36,
                               "%s","STParticleC::GetMessage");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_36,0,"E:\\__titans\\nick\\to_Part.Cpp",0x21a);
    return 0xffff;
  }
  SVar2 = message->id;
  if (MESS_SHARED_010F < SVar2) {
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  if (SVar2 == MESS_SHARED_010F) {
    local_14 = thunk_FUN_0062af40(local_10,&local_18);
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
    puVar11 = (byte *)((message->arg0).ptr);
    if (puVar11[3] != 2) {
      pSVar12 = local_10;
      memmove(pSVar12, puVar11, 0x46); /* compiler REP MOVS byte copy */
      /* ST_CALLSITE[00627F75]: CALL 0x004012e4; direct=004012E4 STParticleC::sub_00629F90 */
      sub_00629F90(local_10,local_10,g_playSystem_00802A38->field_00E4);
      /* ST_CALLSITE[00627F85]: CALL 0x00405727; direct=00405727 STParticleC::InitVisibelFlight */
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
    /* ST_CALLSITE[00628014]: CALL 0x0040396d; direct=0040396D STParticleC::sub_0062AEF0 */
    sub_0062AEF0(local_10,puVar11);
    memset(&this_00->field_0xd7, 0, 0x2d); /* compiler bulk-zero initialization */
    if (this_00->field_00C2 == CASE_3) {
      /* ST_CALLSITE[00628036]: CALL 0x004030cb; direct=004030CB STParticleC::sub_0062A860 */
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
    /* ST_CALLSITE[0062806F]: CALL 0x00405727; direct=00405727 STParticleC::InitVisibelFlight */
    InitVisibelFlight(this_00,1);
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  if ((local_10->field_00D6 == '\0') && (local_10->field_0040 != '\0')) {
    /* ST_CALLSITE[0062809D]: CALL 0x004013d4; direct=004013D4 STParticleC::sub_0062B4A0 */
    bVar6 = sub_0062B4A0(local_10);
    this_00->field_00D6 = bVar6;
    if (bVar6 != 0) {
      /* ST_CALLSITE[006280AF]: CALL 0x004058d0; direct=004058D0 STParticleC::sub_00629E60 */
      sub_00629E60(this_00,0);
    }
  }
  switch(this_00->field_00C2) {
  case CASE_1:
    iVar10 = this_00->field_003C + -1;
    this_00->field_003C = iVar10;
    if (0 < iVar10) {
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
    pVVar13 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar10 = this_00->field_004E;
    sVar4 = (short)(iVar10 >> 0x1f);
    if (iVar10 < 0) {
      local_c = (float)((short)(((short)(iVar10 / 200) + sVar4) -
                               (short)((longlong)iVar10 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar10 / 200) + sVar4) -
                                   (short)((longlong)iVar10 * 0x51eb851f >> 0x3f));
    }
    iVar10 = this_00->field_004A;
    iVar10 = STBiasedDiv16(iVar10, 0xc9); /* exact signed 16-bit grid-index division */
    iVar9 = this_00->field_0046;
    iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
    if (((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
       /* ST_CALLSITE[0062826B]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
       ((VisibleClassTy::sub_00558C00
                   (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar10,
                    &local_1c,&local_20), (int)local_c < 0 ||
        (local_24 = local_1c, local_28 = local_20, 4 < (int)local_c)))) goto LAB_006282e0;
LAB_00628286:
    if (((local_24 < 0) || ((int)pVVar13->field_0030 <= local_24)) ||
       ((g_centeredOffsets5[(int)local_c] + local_28 < 0 ||
        (pVVar13->field_0034 <= g_centeredOffsets5[(int)local_c] + local_28)))) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if ((bVar15) && (pVVar13->field_004C != nullptr)) {
      bVar15 = pVVar13->field_004C
               [local_24 + (g_centeredOffsets5[(int)local_c] + local_28) * pVVar13->field_0030] != 0
      ;
    }
    else {
      bVar15 = true;
    }
    break;
  case CASE_2:
    /* ST_CALLSITE[00628308]: CALL 0x00404aca; direct=00404ACA STParticleC::sub_0062A370 */
    iVar7 = sub_0062A370(this_00,g_playSystem_00802A38->field_00E4);
    if (iVar7 < 1) {
      /* ST_CALLSITE[00628550]: CALL 0x004046b5; direct=004046B5 STParticleC::sub_00629830 */
      sub_00629830(this_00);
      /* ST_CALLSITE[00628557]: CALL 0x004013d4; direct=004013D4 STParticleC::sub_0062B4A0 */
      bVar6 = sub_0062B4A0(this_00);
      this_00->field_00D6 = bVar6;
      if (bVar6 == 0) {
        /* ST_CALLSITE[00628574]: CALL 0x00405d53; direct=00405D53 STParticleC::InitVisibelDeton */
        InitVisibelDeton(this_00,0);
        if (-1 < (int)this_00->field_00C6) {
          Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,this_00->field_00C6);
          this_00->field_00C6 = 0xffffffff;
        }
      }
      else {
        /* ST_CALLSITE[0062856A]: CALL 0x00405d53; direct=00405D53 STParticleC::InitVisibelDeton */
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
    uVar14 = g_playSystem_00802A38->field_00E4 - this_00->field_00AA;
    if ((this_00->field_00D6 != '\0') && ((g_playSystem_00802A38->field_00E4 & 1) == 0)) {
      if ((this_00->field_0014 & 0xff00) == 0x400) {
        iVar10 = this_00->field_004E;
        if (this_00->field_005A + 5 <= iVar10) goto LAB_0062838a;
      }
      else {
        iVar10 = this_00->field_004E;
      }
      /* ST_CALLSITE[00628385]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,1,0,0,this_00->field_0046,this_00->field_004A,iVar10,0,0,0,0,
                 0,0,-1,0,0);
    }
LAB_0062838a:
    if (uVar14 < 0x19) {
LAB_006283bd:
      this_00->field_00B2 = this_00->field_00B2 + 1;
    }
    else if (uVar14 < 0x2d) {
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
    pVVar13 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar10 = this_00->field_004E;
    sVar4 = (short)(iVar10 >> 0x1f);
    if (iVar10 < 0) {
      local_c = (float)((short)(((short)(iVar10 / 200) + sVar4) -
                               (short)((longlong)iVar10 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar10 / 200) + sVar4) -
                                   (short)((longlong)iVar10 * 0x51eb851f >> 0x3f));
    }
    iVar10 = this_00->field_004A;
    iVar10 = STBiasedDiv16(iVar10, 0xc9); /* exact signed 16-bit grid-index division */
    iVar9 = this_00->field_0046;
    iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
    if ((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
        /* ST_CALLSITE[00628526]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
        (VisibleClassTy::sub_00558C00
                   (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar10,
                    &local_24,&local_28), -1 < (int)local_c)) && ((int)local_c < 5))
    goto LAB_00628286;
LAB_006282e0:
    bVar15 = true;
    break;
  case CASE_3:
    iVar10 = this_00->field_00B2 + 1;
    this_00->field_00B2 = iVar10;
    if ((((this_00->field_00BF != '\0') && (iVar10 == 0xf)) && (this_00->field_00D6 != '\0')) &&
       (-1 < (int)this_00->field_00C6)) {
      ST3DSMAPContext::sub_006E9CB0(g_sT3DSMAPContext_00807598,(uint *)this_00->field_00C6,1);
    }
    if (((this_00->field_00B2 == this_00->field_00B6) && (this_00->field_00D6 != '\0')) &&
       (-1 < (int)this_00->field_00C6)) {
      ST3DSMAPContext::sub_006E9D40(g_sT3DSMAPContext_00807598,(uint *)this_00->field_00C6,0);
    }
    if (((this_00->field_00B2 == 5) && (iVar10 = thunk_FUN_0062b300((int)this_00), iVar10 != 0)) &&
       (this_00->field_0076 != 2)) {
      thunk_FUN_0062af90(this_00,this_00->field_0046,this_00->field_004A,this_00->field_004E);
    }
    uVar14 = this_00->field_00B2;
    if (this_00->field_00BA <= (int)uVar14) {
      /* ST_CALLSITE[00628676]: CALL 0x004030cb; direct=004030CB STParticleC::sub_0062A860 */
      sub_0062A860(this_00);
      this_00->field_00C2 = CASE_0;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if (this_00->field_00D6 == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if ((int)uVar14 < this_00->field_00B6) {
      ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,this_00->field_00C6,0,uVar14);
      local_c = (float)this_00->field_0046 * _DAT_007904f8 * _DAT_007904f0;
      this_00->field_006A = local_c;
      local_8 = (float)this_00->field_004A * _DAT_007904f8 * _DAT_007904f0;
      this_00->field_006E = local_8;
      fVar5 = (float)this_00->field_004E * _DAT_007904f8 * _DAT_007904f0;
      this_00->field_0072 = fVar5;
      Library::Ourlib::ST3DSMAP::SprMove
                (g_sT3DSMAPContext_00807598,this_00->field_00C6,local_c,local_8,
                 fVar5 + _DAT_007904fc);
      pVVar13 = g_visibleClass_00802A88;
      if (g_visibleClass_00802A88 != nullptr) {
        iVar10 = this_00->field_004E;
        sVar4 = (short)(iVar10 >> 0x1f);
        if (iVar10 < 0) {
          local_c = (float)((short)(((short)(iVar10 / 200) + sVar4) -
                                   (short)((longlong)iVar10 * 0x51eb851f >> 0x3f)) + -1);
        }
        else {
          local_c = (float)(int)(short)(((short)(iVar10 / 200) + sVar4) -
                                       (short)((longlong)iVar10 * 0x51eb851f >> 0x3f));
        }
        iVar10 = this_00->field_004A;
        iVar10 = STBiasedDiv16(iVar10, 0xc9); /* exact signed 16-bit grid-index division */
        iVar9 = this_00->field_0046;
        iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
        if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
            /* ST_CALLSITE[006287E8]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
            (VisibleClassTy::sub_00558C00
                       (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar10,
                        &local_2c,&local_30), (int)local_c < 0)) || (4 < (int)local_c)) {
          bVar15 = true;
        }
        else {
          if (((local_2c < 0) || ((int)pVVar13->field_0030 <= local_2c)) ||
             ((g_centeredOffsets5[(int)local_c] + local_30 < 0 ||
              (pVVar13->field_0034 <= g_centeredOffsets5[(int)local_c] + local_30)))) {
            bVar15 = false;
          }
          else {
            bVar15 = true;
          }
          if ((bVar15) && (pVVar13->field_004C != nullptr)) {
            bVar15 = pVVar13->field_004C
                     [local_2c + (g_centeredOffsets5[(int)local_c] + local_30) * pVVar13->field_0030
                     ] != 0;
          }
          else {
            bVar15 = true;
          }
        }
        if (bVar15) {
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
    iVar10 = this_00->field_00B2;
    if (iVar10 < 0xf) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    switch(this_00->field_0014 >> 8 & 0xff) {
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
    pVVar13 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar10 = this_00->field_004E;
    sVar4 = (short)(iVar10 >> 0x1f);
    if (iVar10 < 0) {
      local_c = (float)((short)(((short)(iVar10 / 200) + sVar4) -
                               (short)((longlong)iVar10 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar10 / 200) + sVar4) -
                                   (short)((longlong)iVar10 * 0x51eb851f >> 0x3f));
    }
    iVar10 = this_00->field_004A;
    iVar10 = STBiasedDiv16(iVar10, 0xc9); /* exact signed 16-bit grid-index division */
    iVar9 = this_00->field_0046;
    iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
    if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
        /* ST_CALLSITE[00628A6E]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
        (VisibleClassTy::sub_00558C00
                   (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar10,
                    &local_34,&local_38), (int)local_c < 0)) || (4 < (int)local_c)) {
      bVar15 = true;
    }
    else {
      if (((local_34 < 0) || ((int)pVVar13->field_0030 <= local_34)) ||
         ((g_centeredOffsets5[(int)local_c] + local_38 < 0 ||
          (pVVar13->field_0034 <= g_centeredOffsets5[(int)local_c] + local_38)))) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      if ((bVar15) && (pVVar13->field_004C != nullptr)) {
        bVar15 = pVVar13->field_004C
                 [(g_centeredOffsets5[(int)local_c] + local_38) * pVVar13->field_0030 + local_34] !=
                 0;
      }
      else {
        bVar15 = true;
      }
    }
    cVar1 = this_00->field_00C1;
    goto joined_r0x00628af1;
  default:
    goto switchD_006280c4_default;
  }
  cVar1 = this_00->field_00C1;
joined_r0x00628af1:
  if (bVar15) {
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
  if ((byte)this_00->field_0014 < 4) {
    ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,this_00->field_00C6,1,iVar10 + 3);
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,this_00->field_00C6,1,iVar10 - 0xf);
  g_currentExceptionFrame = local_7c.previous;
  return 0;
}

