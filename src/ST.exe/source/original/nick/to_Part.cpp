#include "st/generated.hpp"
// Generated translation unit: source/original/nick/to_Part.cpp

// 00627EB0 STParticleC::GetMessage
#line 4 "decomp/ST.exe/functions/00627EB0/decomp.c"
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

int __thiscall st::fn_00627EB0(STParticleC *this,STMessage *message)

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
  local_EAX_36 = st::fn_0072D7F0(local_7c.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_36 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_Part.Cpp"),0x218,0,local_EAX_36,
                               st::mutable_c_string("%s"),"STParticleC::GetMessage");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_36,0,st::mutable_c_string("E:\\__titans\\nick\\to_Part.Cpp"),0x21a);
    return 0xffff;
  }
  SVar2 = message->id;
  if (MESS_SHARED_010F < SVar2) {
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  if (SVar2 == MESS_SHARED_010F) {
    local_14 = st::fn_00403C7E(local_10,&local_18);
    st::fn_006AB060(&local_14);
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
      st::fn_006E8BA0(g_sT3DSMAPContext_00807598,local_10->field_00C6);
      this_00->field_00C6 = 0xffffffff;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    puVar11 = (byte *)((message->arg0).ptr);
    if (puVar11[3] != 2) {
      pSVar12 = local_10;
      memmove(pSVar12, puVar11, 0x46); /* compiler REP MOVS byte copy */
      st::fn_004012E4(local_10,local_10,g_playSystem_00802A38->field_00E4);
      st::fn_00405727(this_00,(uint)(byte)this_00->field_00D6);
      if (this_00->field_003C != 0) {
        this_00->field_00C2 = CASE_1;
        this_00->field_0104 = this_00->field_003C;
        if ((int)this_00->field_00C6 < 0) {
          g_currentExceptionFrame = local_7c.previous;
          return 0;
        }
        st::fn_006EAB60(g_sT3DSMAPContext_00807598,this_00->field_00C6);
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      this_00->field_00C2 = CASE_2;
      if ((int)this_00->field_00C6 < 0) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      st::fn_006EAAA0(g_sT3DSMAPContext_00807598,this_00->field_00C6,0);
      this_00->field_00C1 = 1;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    st::fn_0040396D(local_10,st::pointer_boundary_cast<undefined4 *>(puVar11));
    memset(&this_00->field_0xd7, 0, 0x2d); /* compiler bulk-zero initialization */
    if (this_00->field_00C2 == CASE_3) {
      st::fn_004030CB(this_00);
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
    st::fn_00405727(this_00,1);
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  if ((local_10->field_00D6 == '\0') && (local_10->field_0040 != '\0')) {
    bVar6 = st::fn_004013D4(local_10);
    this_00->field_00D6 = bVar6;
    if (bVar6 != 0) {
      st::fn_004058D0(this_00,0);
    }
  }
  switch(this_00->field_00C2) {
  case CASE_1:
    iVar10 = st::machine_word_boundary_cast<int>(this_00->field_003C + -1);
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
    st::fn_006EAAA0(g_sT3DSMAPContext_00807598,this_00->field_00C6,0);
    this_00->field_00C1 = 1;
    st::fn_006EA270
              (g_sT3DSMAPContext_00807598,this_00->field_00C6,0,this_00->field_00B2);
    local_c = (float)this_00->field_0046 * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_006A = local_c;
    local_8 = (float)this_00->field_004A * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_006E = local_8;
    fVar5 = (float)this_00->field_004E * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_0072 = fVar5;
    st::fn_006EA960
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
       ((st::fn_00403F53
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
    iVar7 = st::fn_00404ACA(this_00,g_playSystem_00802A38->field_00E4);
    if (iVar7 < 1) {
      st::fn_004046B5(this_00);
      bVar6 = st::fn_004013D4(this_00);
      this_00->field_00D6 = bVar6;
      if (bVar6 == 0) {
        st::fn_00405D53(this_00,0);
        if (-1 < (int)this_00->field_00C6) {
          st::fn_006E8BA0(g_sT3DSMAPContext_00807598,this_00->field_00C6);
          this_00->field_00C6 = 0xffffffff;
        }
      }
      else {
        st::fn_00405D53(this_00,1);
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
      st::fn_00401433
                (g_traksClass_00802A7C,1,0,0,this_00->field_0046,this_00->field_004A,iVar10,0,0,0,0,
                 0,0,-1,0,0);
    }
LAB_0062838a:
    if (uVar14 < 0x19) {
LAB_006283bd:
      this_00->field_00B2 = st::machine_word_boundary_cast<undefined4>(this_00->field_00B2 + 1);
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
    st::fn_006EA270
              (g_sT3DSMAPContext_00807598,this_00->field_00C6,0,this_00->field_00B2);
    local_c = (float)this_00->field_0046 * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_006A = local_c;
    local_8 = (float)this_00->field_004A * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_006E = local_8;
    fVar5 = (float)this_00->field_004E * _DAT_007904f8 * _DAT_007904f0;
    this_00->field_0072 = fVar5;
    st::fn_006EA960
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
        (st::fn_00403F53
                   (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar10,
                    &local_24,&local_28), -1 < (int)local_c)) && ((int)local_c < 5))
    goto LAB_00628286;
LAB_006282e0:
    bVar15 = true;
    break;
  case CASE_3:
    iVar10 = st::machine_word_boundary_cast<int>(this_00->field_00B2 + 1);
    this_00->field_00B2 = iVar10;
    if ((((this_00->field_00BF != '\0') && (iVar10 == 0xf)) && (this_00->field_00D6 != '\0')) &&
       (-1 < (int)this_00->field_00C6)) {
      st::fn_006E9CB0(g_sT3DSMAPContext_00807598,(uint *)this_00->field_00C6,1);
    }
    if (((this_00->field_00B2 == this_00->field_00B6) && (this_00->field_00D6 != '\0')) &&
       (-1 < (int)this_00->field_00C6)) {
      st::fn_006E9D40(g_sT3DSMAPContext_00807598,(uint *)this_00->field_00C6,0);
    }
    if (((this_00->field_00B2 == 5) && (iVar10 = st::fn_00404AAC((int)this_00), iVar10 != 0)) &&
       (this_00->field_0076 != 2)) {
      st::fn_00401D6B(this_00,this_00->field_0046,this_00->field_004A,this_00->field_004E);
    }
    uVar14 = this_00->field_00B2;
    if (this_00->field_00BA <= (int)uVar14) {
      st::fn_004030CB(this_00);
      this_00->field_00C2 = CASE_0;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if (this_00->field_00D6 == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if ((int)uVar14 < this_00->field_00B6) {
      st::fn_006EA270(g_sT3DSMAPContext_00807598,this_00->field_00C6,0,uVar14);
      local_c = (float)this_00->field_0046 * _DAT_007904f8 * _DAT_007904f0;
      this_00->field_006A = local_c;
      local_8 = (float)this_00->field_004A * _DAT_007904f8 * _DAT_007904f0;
      this_00->field_006E = local_8;
      fVar5 = (float)this_00->field_004E * _DAT_007904f8 * _DAT_007904f0;
      this_00->field_0072 = fVar5;
      st::fn_006EA960
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
            (st::fn_00403F53
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
            st::fn_006EAAA0(g_sT3DSMAPContext_00807598,this_00->field_00C6,0);
            this_00->field_00C1 = 1;
          }
        }
        else if (this_00->field_00C1 == '\x01') {
          st::fn_006EAB60(g_sT3DSMAPContext_00807598,this_00->field_00C6);
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
    st::fn_006EA960
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
        (st::fn_00403F53
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
      st::fn_006EAAA0(g_sT3DSMAPContext_00807598,this_00->field_00C6,0);
      this_00->field_00C1 = 1;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
  }
  else if (cVar1 == '\x01') {
    st::fn_006EAB60(g_sT3DSMAPContext_00807598,this_00->field_00C6);
    this_00->field_00C1 = 0;
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
switchD_006280c4_default:
  g_currentExceptionFrame = local_7c.previous;
  return 0;
switchD_006288e6_caseD_0:
  if ((byte)this_00->field_0014 < 4) {
    st::fn_006EA270(g_sT3DSMAPContext_00807598,this_00->field_00C6,1,iVar10 + 3);
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  st::fn_006EA270(g_sT3DSMAPContext_00807598,this_00->field_00C6,1,iVar10 - 0xf);
  g_currentExceptionFrame = local_7c.previous;
  return 0;
}

// 00629070 STParticleC::InitVisibelFlight
#line 4 "decomp/ST.exe/functions/00629070/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Part.Cpp
   STParticleC::InitVisibelFlight */

undefined4 __thiscall st::fn_00629070(STParticleC *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  short sVar5;
  float fVar6;
  VisibleClassTy *pVVar7;
  STParticleC *pSVar8;
  int iVar9;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar11;
  int iVar12;
  char **ppcVar13;
  bool bVar14;
  InternalExceptionFrame local_70;
  int local_2c;
  int local_28;
  uint local_24;
  float local_20;
  STParticleC *local_1c;
  uint local_18;
  float local_14;
  uint local_10;
  uint local_c;
  char **local_8;

  local_24 = st::machine_word_boundary_cast<uint>(this->field_0014 >> 8 & 0xff);
  ppcVar13 = nullptr;
  local_8 = nullptr;
  switch(local_24) {
  case 0:
  case 1:
    iVar12 = this->field_001C;
    if (iVar12 == 4) {
      ppcVar13 = &PTR_s_partdw01_007d0798;
      local_8 = &PTR_s_partdw01_007d0798;
      iVar12 = (uint)(byte)this->field_0014 * 8;
      local_10 = *(int *)(&DAT_007d0af0 + iVar12) / 2;
      local_c = *(int *)(&DAT_007d0af4 + iVar12) / 2 - 0xe;
    }
    else {
      if (local_24 == 0) {
        iVar10 = (uint)(byte)this->field_0014 * 8;
        iVar2 = *(int *)(&DAT_007d0a70 + iVar10);
        iVar10 = *(int *)("%" + iVar10);
      }
      else {
        iVar10 = (uint)(byte)this->field_0014 * 8;
        iVar2 = *(int *)(&DAT_007d0bf0 + iVar10);
        iVar10 = *(int *)(&DAT_007d0bf4 + iVar10);
      }
      local_10 = iVar2 / 2;
      local_c = iVar10 / 2 - 0xe;
      if ((this->field_0014 & 0x100) == 0) {
        if (iVar12 == 2) {
          ppcVar13 = &PTR_s_particle0_007d0718;
          local_8 = &PTR_s_particle0_007d0718;
        }
        else {
          ppcVar13 = &PTR_s_particle01_007d0758;
          local_8 = &PTR_s_particle01_007d0758;
        }
      }
      else if (iVar12 == 2) {
        ppcVar13 = &PTR_s_part_g0_007d0800;
        local_8 = &PTR_s_part_g0_007d0800;
      }
      else {
        ppcVar13 = &PTR_s_part_w0_007d07d8;
        local_8 = &PTR_s_part_w0_007d07d8;
      }
    }
    break;
  case 2:
    ppcVar13 = &PTR_s_gr2part0_007d0828;
    local_8 = &PTR_s_gr2part0_007d0828;
    local_10 = DAT_007d09d4 / 2;
    local_c = local_10 - 0xe;
    break;
  case 4:
    ppcVar13 = &PTR_s_stoun0_007d09d8;
    local_8 = &PTR_s_stoun0_007d09d8;
    iVar12 = *(int *)(&DAT_007d0a00 + (uint)(byte)this->field_0014 * 4);
    goto LAB_00629242;
  case 8:
    ppcVar13 = &PTR_s_gr1part0_007d0870;
    local_8 = &PTR_s_gr1part0_007d0870;
    local_10 = DAT_007d09d4 / 2;
    local_c = local_10 - 0xe;
    break;
  case 0x10:
    ppcVar13 = &PTR_s_partsi01_007d08c4;
    local_8 = &PTR_s_partsi01_007d08c4;
    iVar12 = (uint)(byte)this->field_0014 * 8;
    local_10 = *(int *)(&DAT_007d0af0 + iVar12) / 2;
    local_c = *(int *)(&DAT_007d0af4 + iVar12) / 2 - 0xe;
    break;
  case 0x20:
    ppcVar13 = &PTR_s_part_s0_007d0924;
    local_8 = &PTR_s_part_s0_007d0924;
    iVar12 = (uint)(byte)this->field_0014 * 8;
    local_10 = *(int *)(&DAT_007d0b70 + iVar12) / 2;
    local_c = *(int *)(&DAT_007d0b74 + iVar12) / 2 - 0xe;
    break;
  case 0x40:
    ppcVar13 = &PTR_s_grsi0_007d0984;
    local_8 = &PTR_s_grsi0_007d0984;
    iVar12 = DAT_007d09d4;
    goto LAB_00629242;
  case 0x80:
    ppcVar13 = &PTR_s_rubb3_007d08bc;
    local_8 = &PTR_s_rubb3_007d08bc;
    iVar12 = DAT_007d08b8;
LAB_00629242:
    local_10 = iVar12 / 2;
    local_c = local_10 - 0xe;
  }
  if (ppcVar13 == nullptr) {
    return 0xffffffff;
  }
  local_18 = STReplaceLowByte((uint32_t)(local_18), (uint8_t)((char)this->field_0014));
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_1c = this;
  iVar9 = st::fn_0072D7F0(local_70.jumpBuffer,0);
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar11 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_Part.Cpp"),0x2ac,0,iVar9,st::mutable_c_string("%s"),
                                "STParticleC::InitVisibelFlight");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar9,0,st::mutable_c_string("E:\\__titans\\nick\\to_Part.Cpp"),0x2ae);
    return 0xffff;
  }
  puVar9 = st::fn_00709AF0
                     (PTR_00806774,CASE_1D,local_8[local_18 & 0xff],0xffffffff,0,1,0,
                      nullptr);
  pSVar8 = local_1c;
  local_1c->field_00B6 = *(int *)puVar9;
  if (param_1 == 0) {
    return 0;
  }
  local_1c->field_00CA = puVar9;
  puVar1 = &local_1c->field_00C6;
  st::fn_006E8660
            (g_sT3DSMAPContext_00807598,st::pointer_boundary_cast<int *>(puVar1),2,0,STField<uint>(puVar9,9),
             STField<uint>(puVar9,0xd),local_10,local_c,0);
  if (DAT_00807326 != '\0') {
    st::fn_006E9520
              (g_sT3DSMAPContext_00807598,*puVar1,0,0x4049f8,(uint)pSVar8);
  }
  st::fn_006E98E0
            (g_sT3DSMAPContext_00807598,*puVar1,0,*(int *)puVar9,STField<int>(puVar9,0x21),1);
  st::fn_006EA270(g_sT3DSMAPContext_00807598,*puVar1,0,0);
  uVar3 = *puVar1;
  local_20 = (float)pSVar8->field_0046 * _DAT_007904f8 * _DAT_007904f0;
  pSVar8->field_006A = local_20;
  local_14 = (float)pSVar8->field_004A * _DAT_007904f8 * _DAT_007904f0;
  pSVar8->field_006E = local_14;
  fVar6 = (float)pSVar8->field_004E * _DAT_007904f8 * _DAT_007904f0;
  pSVar8->field_0072 = fVar6;
  st::fn_006EA960
            (g_sT3DSMAPContext_00807598,uVar3,local_20,local_14,fVar6 + _DAT_007904fc);
  st::fn_006EAAA0(g_sT3DSMAPContext_00807598,*puVar1,0);
  pSVar8->field_00C1 = 1;
  if (local_24 == 4) {
    st::fn_006EA4E0
              (g_sT3DSMAPContext_00807598,*puVar1,1,0xffffffff,0xffffffff);
    if (pSVar8->field_0018 != 0) {
      st::fn_006EA460
                (g_sT3DSMAPContext_00807598,*puVar1,pSVar8->field_0018);
    }
  }
  pVVar7 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 != nullptr) {
    iVar12 = pSVar8->field_004E;
    sVar5 = (short)(iVar12 >> 0x1f);
    if (iVar12 < 0) {
      local_14 = (float)((short)(((short)(iVar12 / 200) + sVar5) -
                                (short)((longlong)iVar12 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_14 = (float)(int)(short)(((short)(iVar12 / 200) + sVar5) -
                                    (short)((longlong)iVar12 * 0x51eb851f >> 0x3f));
    }
    iVar12 = pSVar8->field_004A;
    iVar12 = STBiasedDiv16(iVar12, 0xc9); /* exact signed 16-bit grid-index division */
    iVar10 = pSVar8->field_0046;
    iVar10 = STBiasedDiv16(iVar10, 0xc9); /* exact signed 16-bit grid-index division */
    if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
        (st::fn_00403F53
                   (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar10,iVar12,
                    &local_28,&local_2c), (int)local_14 < 0)) || (4 < (int)local_14)) {
      bVar14 = true;
    }
    else {
      if (((local_28 < 0) || ((int)pVVar7->field_0030 <= local_28)) ||
         ((g_centeredOffsets5[(int)local_14] + local_2c < 0 ||
          (pVVar7->field_0034 <= g_centeredOffsets5[(int)local_14] + local_2c)))) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if ((bVar14) && (pVVar7->field_004C != nullptr)) {
        bVar14 = pVVar7->field_004C
                 [local_28 + (g_centeredOffsets5[(int)local_14] + local_2c) * pVVar7->field_0030] !=
                 0;
      }
      else {
        bVar14 = true;
      }
    }
    if (bVar14) {
      if (pSVar8->field_00C1 == '\0') {
        st::fn_006EAAA0(g_sT3DSMAPContext_00807598,pSVar8->field_00C6,0);
        pSVar8->field_00C1 = 1;
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
    }
    else if (pSVar8->field_00C1 == '\x01') {
      st::fn_006EAB60(g_sT3DSMAPContext_00807598,pSVar8->field_00C6);
      pSVar8->field_00C1 = 0;
    }
  }
  g_currentExceptionFrame = local_70.previous;
  return 0;
}

// 006298A0 STParticleC::InitVisibelDeton
#line 4 "decomp/ST.exe/functions/006298A0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Part.Cpp
   STParticleC::InitVisibelDeton */

undefined4 __thiscall st::fn_006298A0(STParticleC *this,int param_1)

{
  undefined4 *puVar1;
  AnonPointee_STParticleC_00EB *pAVar2;
  short sVar4;
  float fVar5;
  VisibleClassTy *pVVar6;
  STParticleC *pSVar7;
  int iVar8;
  char *text;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;
  uint *puVar13;
  InternalExceptionFrame local_60;
  float local_1c;
  STParticleC *local_18;
  int local_14;
  int local_10;
  float local_c;
  uint local_8;

  local_8 = 0;
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_18 = this;
  iVar8 = st::fn_0072D7F0(local_60.jumpBuffer,0);
  pSVar7 = local_18;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar10 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_Part.Cpp"),800,0,iVar8,st::mutable_c_string("%s"),
                                "STParticleC::InitVisibelDeton");
    if (iVar10 == 0) {
      st::fn_006A5E40(iVar8,0,st::mutable_c_string("E:\\__titans\\nick\\to_Part.Cpp"),0x322);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  text = PTR_s_expl_sb1_007d0c44;
  if (3 < (byte)local_18->field_0014) {
    text = PTR_s_expl_sb0_007d0c40;
  }
  puVar8 = st::fn_00709AF0
                     (PTR_00806764,CASE_1D,text,0xffffffff,0,1,0,nullptr);
  pSVar7->field_00B6 = *(int *)puVar8;
  if (param_1 != 0) {
    puVar1 = &pSVar7->field_00C6;
    if ((int)pSVar7->field_00C6 < 0) {
      st::fn_006E8660
                (g_sT3DSMAPContext_00807598,st::pointer_boundary_cast<int *>(puVar1),2,0,STField<uint>(puVar8,9),
                 STField<uint>(puVar8,0xd),0x5a,0x45,0);
    }
    else {
      st::fn_006E9520(g_sT3DSMAPContext_00807598,pSVar7->field_00C6,0,0,0);
      st::fn_006E9AF0
                (g_sT3DSMAPContext_00807598,*puVar1,2,0,STField<uint>(puVar8,9),
                 STField<uint>(puVar8,0xd),0x5a,0x45,1);
    }
    st::fn_006E98E0
              (g_sT3DSMAPContext_00807598,*puVar1,0,*(int *)puVar8,STField<int>(puVar8,0x21),1);
    st::fn_006EA270(g_sT3DSMAPContext_00807598,*puVar1,0,pSVar7->field_00B2);
    local_1c = (float)pSVar7->field_0046 * _DAT_007904f8 * _DAT_007904f0;
    pSVar7->field_006A = local_1c;
    local_c = (float)pSVar7->field_004A * _DAT_007904f8 * _DAT_007904f0;
    pSVar7->field_006E = local_c;
    fVar5 = (float)pSVar7->field_004E * _DAT_007904f8 * _DAT_007904f0;
    pSVar7->field_0072 = fVar5;
    st::fn_006EA960
              (g_sT3DSMAPContext_00807598,*puVar1,local_1c,local_c,fVar5 + _DAT_007904fc);
    st::fn_006EAAA0(g_sT3DSMAPContext_00807598,*puVar1,0);
    pSVar7->field_00C1 = 1;
    pVVar6 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 != nullptr) {
      iVar11 = pSVar7->field_004E;
      sVar4 = (short)(iVar11 >> 0x1f);
      if (iVar11 < 0) {
        local_c = (float)((short)(((short)(iVar11 / 200) + sVar4) -
                                 (short)((longlong)iVar11 * 0x51eb851f >> 0x3f)) + -1);
      }
      else {
        local_c = (float)(int)(short)(((short)(iVar11 / 200) + sVar4) -
                                     (short)((longlong)iVar11 * 0x51eb851f >> 0x3f));
      }
      iVar11 = pSVar7->field_004A;
      iVar11 = STBiasedDiv16(iVar11, 0xc9); /* exact signed 16-bit grid-index division */
      iVar9 = pSVar7->field_0046;
      iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
      if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          (st::fn_00403F53
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar11,
                      &local_14,&local_10), (int)local_c < 0)) || (4 < (int)local_c)) {
        bVar12 = true;
      }
      else {
        if (((local_14 < 0) || ((int)pVVar6->field_0030 <= local_14)) ||
           ((local_10 + g_centeredOffsets5[(int)local_c] < 0 ||
            (pVVar6->field_0034 <= local_10 + g_centeredOffsets5[(int)local_c])))) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if ((bVar12) && (pVVar6->field_004C != nullptr)) {
          bVar12 = pVVar6->field_004C
                   [local_14 + (g_centeredOffsets5[(int)local_c] + local_10) * pVVar6->field_0030]
                   != 0;
        }
        else {
          bVar12 = true;
        }
      }
      if (bVar12) {
        if (pSVar7->field_00C1 == '\0') {
          st::fn_006EAAA0(g_sT3DSMAPContext_00807598,*puVar1,0);
          pSVar7->field_00C1 = 1;
        }
      }
      else if (pSVar7->field_00C1 == '\x01') {
        st::fn_006EAB60(g_sT3DSMAPContext_00807598,*puVar1);
        pSVar7->field_00C1 = 0;
      }
    }
    if ((byte)pSVar7->field_0014 < 4) {
      puVar8 = st::fn_00709AF0
                         (PTR_00806764,CASE_1D,st::mutable_c_string("expl_s1"),0xffffffff,0,1,0,nullptr
                         );
      if (0xe < (int)pSVar7->field_00B2) {
        local_8 = st::machine_word_boundary_cast<uint>(pSVar7->field_00B2 + 3);
      }
      st::fn_006E98E0
                (g_sT3DSMAPContext_00807598,*puVar1,1,*(int *)puVar8,STField<int>(puVar8,0x21),1);
      st::fn_006EA270(g_sT3DSMAPContext_00807598,*puVar1,1,local_8);
      puVar13 = (uint *)*puVar1;
    }
    else {
      puVar8 = st::fn_00709AF0
                         (PTR_00806764,CASE_1D,st::mutable_c_string("expl_s0"),0xffffffff,0,1,0,nullptr
                         );
      if (0xe < (int)pSVar7->field_00B2) {
        local_8 = st::machine_word_boundary_cast<uint>(pSVar7->field_00B2 - 0xf);
      }
      st::fn_006E98E0
                (g_sT3DSMAPContext_00807598,*puVar1,1,*(int *)puVar8,STField<int>(puVar8,0x21),1);
      st::fn_006EA270(g_sT3DSMAPContext_00807598,*puVar1,1,local_8);
      puVar13 = (uint *)*puVar1;
    }
    st::fn_006E9D40(g_sT3DSMAPContext_00807598,puVar13,1);
    pAVar2 = pSVar7->field_00EB;
    if (pAVar2 != nullptr) {
      if (pSVar7->field_00F3 == 0) {
        st::fn_006EA460
                  (g_sT3DSMAPContext_00807598,*puVar1,pAVar2->field_01ED);
      }
      else {
        st::fn_006EA3E0
                  (g_sT3DSMAPContext_00807598,*puVar1,pAVar2->field_01ED);
      }
    }
    st::fn_006EA4E0(g_sT3DSMAPContext_00807598,*puVar1,1,0x5a,0x53);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  return 0;
}

