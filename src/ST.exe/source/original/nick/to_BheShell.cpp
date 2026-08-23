#include "st/generated.hpp"
// Generated translation unit: source/original/nick/to_BheShell.cpp

// 005F27C0 STBHEShellC::GetMessage
#line 4 "decomp/ST.exe/functions/005F27C0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_BheShell.cpp
   STBHEShellC::GetMessage

   [STSwitchEnumApplier] Switch target field_0104 uses
   /SubmarineTitans/Recovered/Enums/STBHEShellC_field_0104State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00405EDE|005F27C0; family_names=STBHEShellC::GetMessage; ret4=8;
   direct_offsets={10:1,14:1,18:1,1c:2} */

int __thiscall st::fn_005F27C0(STBHEShellC *this,STMessage *message)

{
  STMessageId SVar1;
  STBHEShellC_field_0104State SVar2;
  short sVar3;
  VisibleClassTy *pVVar4;
  STBHEShellC *this_00;
  int local_EAX_35;
  int iVar5;
  uint local_EAX_546;
  uint uVar7;
  uint local_EAX_792;
  uint uVar9;
  int iVar7;
  int local_EAX_2142;
  int local_EAX_2201;
  int iVar6;
  int iVar8;
  uint uVar10;
  byte *puVar11;
  uint uVar12;
  byte *puVar13;
  bool bVar14;
  code *pcVar15;
  InternalExceptionFrame local_6c;
  int local_28;
  int local_24;
  byte *local_20;
  AnonShape_0060EA30_DCEB68AD *local_1c;
  int local_18;
  STBHEShellC *local_14;
  int local_10;
  int local_c;
  int local_8;

  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_14 = this;
  local_EAX_35 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  this_00 = local_14;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_BheShell.cpp"),0x163,0,local_EAX_35,
                               st::mutable_c_string("%s"),"STBHEShellC::GetMessage");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_35,0,st::mutable_c_string("E:\\__titans\\nick\\to_BheShell.cpp"),0x165);
    return 0xffff;
  }
  SVar1 = message->id;
  if (MESS_SHARED_010F < SVar1) {
    if (SVar1 == MESS_STOCTOPUSC_0112) {
      uVar12 = local_14->field_008F;
      if ((int)uVar12 < 0) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      if ((local_14->field_0104 != CASE_0) && (local_14->field_0104 != CASE_2)) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      pcVar15 = nullptr;
    }
    else {
      if (SVar1 != MESS_STSPRGAMEOBJC_0113) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      uVar12 = local_14->field_008F;
      if ((int)uVar12 < 0) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      if ((local_14->field_0104 != CASE_0) && (local_14->field_0104 != CASE_2)) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      pcVar15 = st::function_address_boundary_cast<code *>(st::fn_005F3530);
    }
    st::fn_006E9520
              (g_sT3DSMAPContext_00807598,uVar12,0,(uint)pcVar15,(uint)local_14);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  if (SVar1 == MESS_SHARED_010F) {
    /* ST_CALLSITE[005F3081]: CALL 0x0040323d; direct=0040323D STBHEShellC::sub_005F5A90 */
    local_20 = st::fn_0040323D(local_14,(int *)&local_1c);
    /* ST_CALLSITE[005F3098]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
    st::fn_004025F9(g_playSystem_00802A38,this_00->field_0018,local_20,(uint)local_1c);
    st::fn_006AB060(&local_20);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  if (SVar1 != MESS_ID_NONE) {
    if (SVar1 != MESS_ID_CREATE) {
      if (SVar1 != MESS_SHARED_0003) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      st::fn_004016A4(local_14);
      /* ST_CALLSITE[005F282C]: CALL 0x00404804; direct=00404804 STBHEShellC::sub_005F53A0 */
      st::fn_00404804(this_00);
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    puVar11 = (byte *)((message->arg0).ptr);
    if (puVar11[3] != 2) {
      puVar13 = (byte *)&local_14->field_0x4d;
      memmove(puVar13, puVar11, 0x3a); /* compiler REP MOVS byte copy */
      iVar8 = local_14->field_006D;
      uVar12 = iVar8 - local_14->field_0061;
      if (((int)((uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f)) < 4) &&
         (uVar10 = local_14->field_0071 - local_14->field_0065,
         (int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) < 4)) {
        iVar7 = local_14->field_0071;
        if (iVar7 == local_14->field_0065) {
          if (iVar8 == local_14->field_0061) {
            local_14->field_006D = iVar8 + 4;
          }
          else if ((int)uVar12 < 1) {
            local_14->field_006D = iVar8 + (uint)(uVar12 != 0) * -4;
          }
          else {
            local_14->field_006D = iVar8 + 4;
          }
        }
        else if ((int)uVar10 < 1) {
          local_14->field_0071 = iVar7 + (uint)(uVar10 != 0) * -4;
        }
        else {
          local_14->field_0071 = iVar7 + 4;
        }
      }
      local_14->field_001C = DAT_00808754;
      /* ST_CALLSITE[005F28E5]: CALL 0x004023fb; direct=004023FB STBHEShellC::sub_005F34B0 */
      st::fn_004023FB(local_14);
      this_00->field_0104 = CASE_0;
      /* ST_CALLSITE[005F2904]: CALL 0x0040473c; direct=0040473C STBHEShellC::sub_005F3BF0 */
      st::fn_0040473C(this_00,this_00->field_006D,this_00->field_0071,this_00->field_0075,'\0');
      /* ST_CALLSITE[005F2918]: CALL 0x0040264e; direct=0040264E STBHEShellC::sub_005F5C40 */
      st::fn_0040264E(this_00,this_00->field_0061,this_00->field_0065,0x489);
      iVar5 = st::fn_00402D06(this_00->field_0061,this_00->field_0065,this_00->field_0069);
      this_00->field_0103 = (char)iVar5;
      if ((char)iVar5 != '\0') {
        /* ST_CALLSITE[005F2943]: CALL 0x004055ba; direct=004055BA STBHEShellC::sub_005F35F0 */
        st::fn_004055BA(this_00,this_00->field_0087);
      }
      this_00->field_007D = DAT_007e66d4;
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    /* ST_CALLSITE[005F296A]: CALL 0x00404e6c; direct=00404E6C STBHEShellC::sub_005F5B80 */
    st::fn_00404E6C(local_14,st::pointer_boundary_cast<undefined4 *>(puVar11));
    memset(&this_00->field_0x20, 0, 0x2d); /* compiler bulk-zero initialization */
    this_00->field_001C = this_00->field_016D;
    if (this_00->field_0103 == '\0') {
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    /* ST_CALLSITE[005F299C]: CALL 0x004055ba; direct=004055BA STBHEShellC::sub_005F35F0 */
    st::fn_004055BA(this_00,this_00->field_0087);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  switch(local_14->field_0104) {
  case CASE_0:
    /* ST_CALLSITE[005F29E2]: CALL 0x0040123a; direct=0040123A STBHEShellC::sub_005F4370 */
    local_EAX_546 = st::fn_0040123A(local_14,&local_8,&local_10,&local_c,0);
    uVar7 = st::fn_00404516
                      ((AnonReceiver_00601500 *)&this_00->field_0x20,local_8,local_10,local_c,
                       this_00->field_0093,this_00->field_0097,this_00->field_009B,
                       this_00->field_0051,0x1e,this_00->field_0081,this_00->field_0085,0xb5,0,0);
    if (0 < (int)uVar7) {
      if (uVar7 == 5) {
        /* ST_CALLSITE[005F2A3E]: CALL 0x004014c9; direct=004014C9 STBHEShellC::sub_005F3470 */
        st::fn_004014C9(this_00);
        goto switchD_005f29cb_default;
      }
LAB_005f2b3a:
      /* ST_CALLSITE[005F2B3D]: CALL 0x00404c46; direct=00404C46 STBHEShellC::sub_005F5D10 */
      st::fn_00404C46(this_00,uVar7);
      goto switchD_005f29cb_default;
    }
    if (local_EAX_546 == 0xffffffff) goto LAB_005f3027;
    if (local_EAX_546 != 0) {
      if (local_EAX_546 == 1) {
        this_00->field_009F = this_00->field_0093;
        this_00->field_00A3 = this_00->field_0097;
        this_00->field_00A7 = this_00->field_009B;
        this_00->field_0093 = local_8;
        this_00->field_0097 = local_10;
        this_00->field_009B = local_c;
        /* ST_CALLSITE[005F2AB0]: CALL 0x0040473c; direct=0040473C STBHEShellC::sub_005F3BF0 */
        iVar8 = st::fn_0040473C(this_00,this_00->field_006D,this_00->field_0071,this_00->field_0075,
                             '\x01');
        this_00->field_0104 = (-(uint)(iVar8 != 0) & 0xfffffffc) + CASE_5;
      }
      goto switchD_005f29cb_default;
    }
    break;
  case CASE_1:
    /* ST_CALLSITE[005F2AD8]: CALL 0x0040123a; direct=0040123A STBHEShellC::sub_005F4370 */
    local_EAX_792 = st::fn_0040123A(local_14,&local_8,&local_10,&local_c,1);
    uVar7 = st::fn_00404516
                      ((AnonReceiver_00601500 *)&this_00->field_0x20,local_8,local_10,local_c,
                       this_00->field_0093,this_00->field_0097,this_00->field_009B,
                       this_00->field_0051,0x1e,this_00->field_0081,this_00->field_0085,0xb5,0,0);
    if (0 < (int)uVar7) {
      if (uVar7 != 5) goto LAB_005f2b3a;
      goto switchD_005f29cb_caseD_5;
    }
    if (local_EAX_792 == 0xffffffff) goto LAB_005f3027;
    if (local_EAX_792 != 0) {
      if (local_EAX_792 == 1) {
        this_00->field_009F = this_00->field_0093;
        this_00->field_00A3 = this_00->field_0097;
        this_00->field_00A7 = this_00->field_009B;
        this_00->field_0093 = local_8;
        this_00->field_0097 = local_10;
        this_00->field_009B = local_c;
        /* ST_CALLSITE[005F2BB0]: CALL 0x0040473c; direct=0040473C STBHEShellC::sub_005F3BF0 */
        iVar8 = st::fn_0040473C(this_00,this_00->field_006D,this_00->field_0071,this_00->field_0075,
                             '\x02');
        this_00->field_0104 = (-(uint)(iVar8 != 0) & 0xfffffffd) + CASE_5;
      }
      goto switchD_005f29cb_default;
    }
    break;
  case CASE_2:
    /* ST_CALLSITE[005F2BD8]: CALL 0x0040123a; direct=0040123A STBHEShellC::sub_005F4370 */
    uVar9 = st::fn_0040123A(local_14,&local_8,&local_10,&local_c,2);
    if (uVar9 == 0xffffffff) {
LAB_005f3027:
      this_00->field_0104 = CASE_5;
      goto switchD_005f29cb_default;
    }
    if (uVar9 != 0) {
      if (uVar9 == 1) {
        /* ST_CALLSITE[005F2C01]: CALL 0x00404e0d; direct=00404E0D STBHEShellC::sub_005F5E30 */
        st::fn_00404E0D(this_00,local_8,local_10,local_c);
        this_00->field_0104 = CASE_3;
        /* ST_CALLSITE[005F2C2D]: CALL 0x0040554c; direct=0040554C STBHEShellC::sub_005F4C50 */
        iVar8 = st::fn_0040554C(this_00,(float)this_00->field_0093,this_00->field_0097,
                             this_00->field_009B,4,0x1e,3);
        if (iVar8 != 0) {
          this_00->field_0108 = 1;
        }
      }
      goto switchD_005f29cb_default;
    }
    break;
  case CASE_3:
    if ((int)local_14->field_008F < 0) {
      local_14->field_0104 = CASE_5 - (local_14->field_0108 != '\0');
      goto switchD_005f29cb_default;
    }
    if (0x10 < (int)local_14->field_00AB) {
      if (local_14->field_00AB == 0x11) {
        st::fn_006E9CB0(g_sT3DSMAPContext_00807598,(uint *)local_14->field_008F,2);
      }
      st::fn_006EA270
                (g_sT3DSMAPContext_00807598,this_00->field_008F,2,this_00->field_00C0);
      if ((int)this_00->field_00C0 < this_00->field_00BC) {
        this_00->field_00C0 = st::machine_word_boundary_cast<undefined4>(this_00->field_00C0 + 1);
      }
    }
    if (this_00->field_00BB != '\0') {
      if (this_00->field_00B7 == this_00->field_00B3) {
        this_00->field_00BB = 0;
        st::fn_006E9D40(g_sT3DSMAPContext_00807598,(uint *)this_00->field_008F,1);
      }
      else {
        st::fn_006EA270
                  (g_sT3DSMAPContext_00807598,this_00->field_008F,1,this_00->field_00B7);
        this_00->field_00B7 = st::machine_word_boundary_cast<undefined4>(this_00->field_00B7 + 1);
      }
    }
    uVar12 = this_00->field_00AB;
    if ((int)uVar12 < this_00->field_00AF) {
      st::fn_006EA270(g_sT3DSMAPContext_00807598,this_00->field_008F,0,uVar12);
LAB_005f2d8b:
      this_00->field_00AB = st::machine_word_boundary_cast<undefined4>(this_00->field_00AB + 1);
    }
    else if (uVar12 == this_00->field_00AF) {
      if (-1 < (int)this_00->field_008F) {
        st::fn_006E9D40(g_sT3DSMAPContext_00807598,(uint *)this_00->field_008F,0);
      }
      goto LAB_005f2d8b;
    }
    st::fn_006EA960
              (g_sT3DSMAPContext_00807598,this_00->field_008F,
               (float)this_00->field_0093 * _DAT_007904f8 * _DAT_007904f0,
               (float)this_00->field_0097 * _DAT_007904f8 * _DAT_007904f0,
               (float)this_00->field_009B * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if (this_00->field_00C0 == this_00->field_00BC) {
      if (-1 < (int)this_00->field_008F) {
        st::fn_006EAB60(g_sT3DSMAPContext_00807598,this_00->field_008F);
      }
      this_00->field_0104 = CASE_4;
    }
    pVVar4 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 != nullptr) {
      iVar8 = this_00->field_009B;
      local_18 = STBiasedDiv16(iVar8, 200); /* exact signed 16-bit grid-index division */
      iVar8 = this_00->field_0097;
      iVar8 = STBiasedDiv16(iVar8, 0xc9); /* exact signed 16-bit grid-index division */
      iVar7 = this_00->field_0093;
      iVar7 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
      if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          /* ST_CALLSITE[005F2EE9]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
          (st::fn_00403F53
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar7,iVar8,
                      &local_24,&local_28), local_18 < 0)) || (4 < local_18)) {
        bVar14 = true;
      }
      else {
        if (((local_24 < 0) || ((int)pVVar4->field_0030 <= local_24)) ||
           ((g_centeredOffsets5[local_18] + local_28 < 0 ||
            (pVVar4->field_0034 <= g_centeredOffsets5[local_18] + local_28)))) {
          bVar14 = false;
        }
        else {
          bVar14 = true;
        }
        if ((bVar14) && (pVVar4->field_004C != nullptr)) {
          bVar14 = pVVar4->field_004C
                   [local_24 + (g_centeredOffsets5[local_18] + local_28) * pVVar4->field_0030] != 0;
        }
        else {
          bVar14 = true;
        }
      }
      if (bVar14) {
        if (this_00->field_00C4 == '\0') {
          st::fn_006EAAA0(g_sT3DSMAPContext_00807598,this_00->field_008F,0);
          this_00->field_00C4 = 1;
        }
      }
      else if (this_00->field_00C4 != '\0') {
        st::fn_006EAB60(g_sT3DSMAPContext_00807598,this_00->field_008F);
        this_00->field_00C4 = 0;
      }
    }
    if (this_00->field_0108 != '\0') {
      /* ST_CALLSITE[005F2FB8]: CALL 0x00401ec4; direct=00401EC4 STBHEShellC::sub_005F4FA0 */
      st::fn_00401EC4(this_00);
      st::fn_00405853((AnonShape_005F5440_D27C3BDE *)this_00);
    }
    goto switchD_005f29cb_default;
  case CASE_4:
    if (local_14->field_0108 != '\0') {
      /* ST_CALLSITE[005F301E]: CALL 0x00401ec4; direct=00401EC4 STBHEShellC::sub_005F4FA0 */
      local_EAX_2142 = st::fn_00401EC4(local_14);
      if (local_EAX_2142 != 0) {
        if (this_00->field_0103 != '\0') {
          st::fn_00405853((AnonShape_005F5440_D27C3BDE *)this_00);
        }
        goto switchD_005f29cb_default;
      }
      goto LAB_005f3027;
    }
    goto LAB_005f2b30;
  case CASE_5:
switchD_005f29cb_caseD_5:
LAB_005f2b30:
    /* ST_CALLSITE[005F2B30]: CALL 0x004014c9; direct=004014C9 STBHEShellC::sub_005F3470 */
    st::fn_004014C9(this_00);
  default:
    goto switchD_005f29cb_default;
  }
  this_00->field_009F = this_00->field_0093;
  this_00->field_00A3 = this_00->field_0097;
  this_00->field_00A7 = this_00->field_009B;
  this_00->field_0093 = local_8;
  this_00->field_0097 = local_10;
  this_00->field_009B = local_c;
switchD_005f29cb_default:
  if (this_00->field_0103 == '\0') {
    local_EAX_2201 = st::fn_00402D06(this_00->field_0093,this_00->field_0097,this_00->field_009B);
    this_00->field_0103 = (char)local_EAX_2201;
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  SVar2 = this_00->field_0104;
  if (((SVar2 != CASE_5) && (SVar2 != CASE_3)) && (SVar2 != CASE_4)) {
    /* ST_CALLSITE[005F2FF5]: CALL 0x0040254a; direct=0040254A STBHEShellC::sub_005F4680 */
    st::fn_0040254A(this_00);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_6c.previous;
  return 0;
}

