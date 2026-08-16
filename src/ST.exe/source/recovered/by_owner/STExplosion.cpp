#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STExplosion.cpp

// 00604080 STExplosion::STExplosion
#line 4 "decomp/ST.exe/functions/00604080/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079CB14 (store 00604098)
   Evidence: final_vptr=0079CB14; returns_this=true; calls_before=1; field_writes_after=8;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00604080 returns STExplosion::STExplosion this @ 006040F3 */

STExplosion * __thiscall st::fn_00604080(STExplosion *this)

{
  int iVar1;
  STParticleC **ppSVar2;

  st::fn_00401933((STGameObjC *)this);
  this->vtable = &st_global_0079CB14;
  this->field_0215 = nullptr;
  ppSVar2 = &this->field_0219;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppSVar2 = nullptr;
    ppSVar2 = ppSVar2 + 1;
  }
  this->field_0269 = 0;
  this->field_026D = 0;
  this->field_026E = g_playSystem_00802A38->field_00E4;
  memset(&this->field_0282, 0, 0x2d); /* compiler bulk-zero initialization */
  this->field_02AF = nullptr;
  this->field_02B3 = nullptr;
  this->field_02BB = nullptr;
  this->field_02B7 = -1;
  return this;
}

// 00604120 STExplosion::sub_00604120
#line 4 "decomp/ST.exe/functions/00604120/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STExplosion.
   Evidence: this_call_owners=[STExplosion]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00604120(STExplosion *this)

{
  if (this->field_0215 != nullptr) {
    st::fn_006AE110(this->field_0215);
  }
  if (this->field_02B3 != nullptr) {
    st::fn_006AB060(&this->field_02B3);
  }
  return;
}

// 00604350 STExplosion::sub_00604350
#line 4 "decomp/ST.exe/functions/00604350/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STExplosion.
   Evidence: this_call_owners=[STExplosion]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_00604350(STExplosion *this)

{
  int iVar1;
  short sVar2;
  VisibleClassTy *pVVar3;
  VisibleClassTy *pVVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_14 = this->field_01F1;
  sVar2 = (short)(local_14 >> 0x1f);
  if (local_14 < 0) {
    iVar5 = (int)(short)(((short)(local_14 / 0xc9) + sVar2) -
                        (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
    local_c = iVar5 + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(local_14 / 0xc9) + sVar2) -
                        (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
    local_c = iVar5;
  }
  iVar1 = this->field_01F5;
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    iVar6 = (int)(short)(((short)(iVar1 / 0xc9) + sVar2) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
    local_10 = iVar6 + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(iVar1 / 0xc9) + sVar2) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
    local_10 = iVar6;
  }
  iVar7 = this->field_01F9;
  local_8 = STBiasedDiv16(iVar7, 200); /* exact signed 16-bit grid-index division */
  if (iVar1 < 0) {
    iVar6 = iVar6 + -1;
  }
  if (local_14 < 0) {
    iVar5 = iVar5 + -1;
  }
  if ((((g_sT3DSMAPContext_00807598->field_0048 <= iVar5 + 3) &&
       (iVar5 + -3 <= g_sT3DSMAPContext_00807598->field_0058)) &&
      (g_sT3DSMAPContext_00807598->field_0044 <= iVar6 + 3)) &&
     (iVar6 + -3 <= g_sT3DSMAPContext_00807598->field_0054)) {
    iVar6 = st::fn_006DDBD0();
    iVar1 = local_c;
    iVar5 = local_10;
    pVVar3 = g_visibleClass_00802A88;
    if ((iVar6 != 0) && (g_visibleClass_00802A88 != nullptr)) {
      iVar7 = local_10 + -3;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      local_c = local_c + -3;
      if (local_c < 0) {
        local_c = 0;
      }
      local_14 = local_10 + 4;
      if ((int)g_worldGrid.sizeY < local_10 + 4) {
        local_14 = (int)g_worldGrid.sizeY;
      }
      local_10 = iVar1 + 4;
      if (g_worldGrid.sizeX < local_10) {
        local_10 = (int)g_worldGrid.sizeX;
      }
      if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
            ((st::fn_00403F53
                        (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar1,iVar5,
                         &local_18,&local_1c), pVVar4 = g_visibleClass_00802A88, local_8 < 0 ||
             ((((4 < local_8 || (local_18 < 0)) || ((int)pVVar3->field_0030 <= local_18)) ||
              ((iVar5 = g_centeredOffsets5[local_8] + local_1c, iVar5 < 0 ||
               (pVVar3->field_0034 <= iVar5)))))))) || (pVVar3->field_004C == nullptr)) ||
          ((pVVar3->field_004C[local_18 + iVar5 * pVVar3->field_0030] != 0 || (DAT_0080874d == -1)))
          ) || (((((g_visibleClass_00802A88->field_00F8 == 0 ||
                   (((st::fn_00403F53
                                (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_c
                                 ,iVar7,&local_1c,&local_18), pVVar3 = g_visibleClass_00802A88,
                     local_1c < 0 || ((int)pVVar4->field_0030 <= local_1c)) ||
                    (iVar5 = g_centeredOffsets5[local_8] + local_18, iVar5 < 0)))) ||
                  (((pVVar4->field_0034 <= iVar5 || (pVVar4->field_004C == nullptr)) ||
                   (pVVar4->field_004C[local_1c + iVar5 * pVVar4->field_0030] != 0)))) ||
                 ((((DAT_0080874d == -1 || (g_visibleClass_00802A88->field_00F8 == 0)) ||
                   ((st::fn_00403F53
                               (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_10
                                ,iVar7,&local_1c,&local_18), iVar1 = local_8, iVar5 = local_14,
                    pVVar4 = g_visibleClass_00802A88, local_1c < 0 ||
                    ((((int)pVVar3->field_0030 <= local_1c ||
                      (iVar7 = g_centeredOffsets5[local_8] + local_18, iVar7 < 0)) ||
                     (pVVar3->field_0034 <= iVar7)))))) ||
                  ((pVVar3->field_004C == nullptr ||
                   (pVVar3->field_004C[local_1c + iVar7 * pVVar3->field_0030] != 0)))))) ||
                ((DAT_0080874d == -1 ||
                 (((g_visibleClass_00802A88->field_00F8 == 0 ||
                   (st::fn_00403F53
                              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_c,
                               local_14,&local_1c,&local_18), local_1c < 0)) ||
                  (((int)pVVar4->field_0030 <= local_1c ||
                   ((((local_18 = g_centeredOffsets5[iVar1] + local_18, local_18 < 0 ||
                      (pVVar4->field_0034 <= local_18)) || (pVVar4->field_004C == nullptr)) ||
                    ((pVVar4->field_004C[local_1c + local_18 * pVVar4->field_0030] != 0 ||
                     (iVar5 = st::fn_00404E5D
                                        (g_visibleClass_00802A88,local_10,iVar5,local_8), iVar5 == 1
                     )))))))))))))) {
        return 1;
      }
    }
    return iVar6;
  }
  return 0;
}

// 00604970 STExplosion::sub_00604970
#line 4 "decomp/ST.exe/functions/00604970/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STExplosion.
   Evidence: this_call_owners=[STExplosion]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_00604970(STExplosion *this)

{
  int iVar1;
  int iVar2;
  STMessage *pSVar3;
  STParticleC **ppSVar4;
  STMessage local_28;
  int local_8;

  iVar2 = 0;
  pSVar3 = &local_28;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    pSVar3->unknown_00 = 0;
    pSVar3 = (STMessage *)&pSVar3->unknown_04;
  }
  local_28.id = MESS_SHARED_0003;
  local_8 = 0;
  iVar1 = 0;
  if (0 < this->field_0269) {
    ppSVar4 = &this->field_0219;
    do {
      if (*ppSVar4 != nullptr) {
        st::fn_00405C9A(*ppSVar4,&local_28);
        iVar1 = st::fn_00404C37(this,iVar2);
        if (iVar1 != 0) {
          local_8 = local_8 + 1;
        }
      }
      iVar2 = iVar2 + 1;
      ppSVar4 = ppSVar4 + 1;
      iVar1 = local_8;
    } while (iVar2 < this->field_0269);
  }
  return iVar1;
}

// 00605130 STExplosion::sub_00605130
#line 4 "decomp/ST.exe/functions/00605130/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STExplosion.
   Evidence: this_call_owners=[STExplosion]; agreed_this_calls=1; incoming_this_accesses=12;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00605130(STExplosion *this)

{
  uint uVar1;

  this->field_028A = this->field_01F1;
  this->field_028E = this->field_01F5;
  this->field_0282 = 0;
  this->field_0286 = 0;
  this->field_0292 = this->field_01F9;
  this->field_0296 = 0;
  this->field_029A = DAT_007cee44;
  uVar1 = g_playSystem_00802A38->field_00E4;
  this->field_02AB = 0;
  this->field_02A7 = uVar1;
  return;
}

// 00605780 STExplosion::sub_00605780
#line 4 "decomp/ST.exe/functions/00605780/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STExplosion.
   Evidence: this_call_owners=[STExplosion]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00605780(STExplosion *this)

{
  if ((STT3DSprC *)this->field_02AF != nullptr) {
    st::fn_004021D5((STT3DSprC *)this->field_02AF);
    st::fn_0072E2B0(this->field_02AF);
    this->field_02AF = nullptr;
  }
  return;
}

// 00606050 STExplosion::sub_00606050
#line 4 "decomp/ST.exe/functions/00606050/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STExplosion.
   Evidence: this_call_owners=[STExplosion]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=40; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall
st::fn_00606050
          (STExplosion *this,int param_1,int param_2,int param_3,int param_4,uint *param_5,
          undefined4 param_6,int param_7,undefined4 param_8,undefined1 param_9)

{
  byte bVar1;
  int local_EAX_29;
  int iVar2;
  uint uVar3;
  uint uVar3_mg10;
  uint uVar2;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar9;
  STMessage *pSVar10;
  uint local_100 [20];
  STMessage local_b0;
  int local_90 [6];
  int local_78;
  undefined4 local_74;
  undefined4 local_70 [5];
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  undefined1 local_30;
  byte local_2f;
  uint *local_2e;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  byte *local_10;
  int local_c;
  char local_5;

  iVar6 = 0;
  local_5 = '\0';
  local_EAX_29 = st::fn_004049B7((char)param_8);
  local_18 = (int)(byte)local_EAX_29;
  if (param_4 == 0x21) {
    this->field_02B7 = param_7;
  }
  local_74 = st::fn_004017AD((Global_sub_00606A50_param_1Enum)param_5);
  local_14 = st::fn_004052EF(param_4,st::pointer_boundary_cast<void **>(&local_10),st::pointer_boundary_cast<undefined4 *>(&local_78),st::pointer_boundary_cast<undefined4 *>(&local_28),st::pointer_boundary_cast<undefined4 *>(&local_1c),st::pointer_boundary_cast<undefined4 *>(&local_24));
  if (0 < local_24) {
    local_18 = local_24;
  }
  if ((param_4 == 0x15) || (param_4 == 9)) {
    local_28 = 0;
    local_5 = '\x01';
    if (param_4 == 0x15) {
      local_1c = 0;
    }
  }
  uVar3 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
  this->field_001C = uVar3;
  iVar7 = (uVar3 >> 0x10) % (local_78 + 1U) + 9;
  local_c = iVar7;
  iVar2 = st::fn_00403D8C((STExplosionC *)this,iVar7);
  this->field_0269 = iVar2;
  if (iVar2 != iVar7) {
    return -1;
  }
  iVar5 = 0;
  memset(local_90, 0, 0x18); /* compiler bulk-zero initialization */
  auto param_7_after_write = 0; /* compiler stack-slot lifetime split */
  if (0 < local_28) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_5 = local_100;
    local_20 = local_28;
    do {
      bVar1 = *local_10;
      if (bVar1 < 2) {
        if (bVar1 == 1) {
          uVar3 = 0;
          goto LAB_00606189;
        }
      }
      else {
        uVar3 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
        this->field_001C = uVar3;
        uVar3 = (uint)local_10[(uVar3 >> 0x10) % (uint)bVar1 + 3];
LAB_00606189:
        if (local_90[uVar3 & 0x7f] != 0) {
          iVar7 = 0;
          do {
            if (4 < iVar7) break;
            uVar3 = uVar3 + 1;
            if (4 < ((byte)uVar3 & 0x7f)) {
              uVar3 = uVar3 & 0x80;
            }
            iVar7 = iVar7 + 1;
          } while (local_90[uVar3 & 0x7f] != 0);
        }
        *param_5 = uVar3;
        local_90[uVar3 & 0x7f] = st::machine_word_boundary_cast<int>(local_90[uVar3 & 0x7f] + 1);
        if ((local_18 != 3) &&
           (uVar4 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039), this->field_001C = uVar4,
           (uVar4 & 0x10000) != 0)) {
          *param_5 = uVar3 | 0x100;
        }
        iVar5 = param_7_after_write + 1;
        param_5 = param_5 + 1;
        param_7_after_write = iVar5;
      }
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  param_5 = nullptr;
  if (0 < local_1c) {
    puVar9 = local_100 + iVar5;
    do {
      if (iVar5 == local_c) break;
      bVar1 = local_10[1];
      if (bVar1 < 2) {
        if (bVar1 == 1) {
          *puVar9 = 0;
          goto LAB_00606282;
        }
      }
      else {
        uVar3 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
        this->field_001C = uVar3;
        *puVar9 = (uint)local_10[(uVar3 >> 0x10) % (uint)bVar1 + 0xd];
LAB_00606282:
        if (((local_5 == '\0') && (local_18 != 3)) &&
           (uVar3 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039), this->field_001C = uVar3,
           (uVar3 & 0x10000) != 0)) {
          *puVar9 = *puVar9 | 0x100;
        }
        iVar5 = param_7_after_write + 1;
        puVar9 = puVar9 + 1;
        param_7_after_write = iVar5;
      }
      param_5 = (uint *)((int)param_5 + 1);
    } while ((int)param_5 < local_1c);
  }
  param_5 = nullptr;
  puVar9 = local_100 + iVar5;
  do {
    if (iVar5 == local_c) break;
    bVar1 = local_10[2];
    if (bVar1 < 2) {
      if (bVar1 == 1) {
        *puVar9 = 0;
        goto LAB_00606321;
      }
    }
    else {
      uVar3 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
      this->field_001C = uVar3;
      *puVar9 = (uint)local_10[(uVar3 >> 0x10) % (uint)bVar1 + 0x19];
LAB_00606321:
      iVar5 = param_7_after_write + 1;
      puVar9 = puVar9 + 1;
      param_7_after_write = iVar5;
    }
    param_5 = (uint *)((int)param_5 + 1);
  } while ((int)param_5 < 0x14);
  pSVar10 = &local_b0;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    pSVar10->unknown_00 = 0;
    pSVar10 = (STMessage *)&pSVar10->unknown_04;
  }
  local_b0.id = MESS_ID_CREATE;
  if (iVar5 < local_c) {
    local_c = iVar5;
  }
  param_5 = nullptr;
  if (0 < local_c) {
    do {
      memset(local_70, 0, 0x46); /* compiler bulk-zero initialization */
      local_54 = local_18;
      local_70[1] = param_8;
      local_30 = param_9;
      local_70[0] = 100;
      local_70[2] = 0;
      local_70[3] = 0;
      local_2e = param_5;
      local_58 = param_4;
      if (local_18 == 3) {
        if (((param_5 == nullptr) && (param_4 != 0x2b)) &&
           ((param_4 != 0xfd && (param_4 != 0xfe)))) {
          local_100[0] = 0x8000;
        }
        else {
          uVar3 = local_100[(int)param_5];
          if ((uVar3 & 0x80) == 0) {
            uVar3 = uVar3 & 0xffffff7f | 0x1000;
          }
          else {
            uVar3 = uVar3 & 0xffffff7f | 0x2000;
          }
LAB_006063f9:
          local_100[(int)param_5] = uVar3;
        }
      }
      else if ((local_100[(int)param_5] & 0x80) != 0) {
        uVar3 = st::machine_word_boundary_cast<uint>(local_100[(int)param_5] & 0xffffff7f | 0x100);
        goto LAB_006063f9;
      }
      local_5c = local_100[(int)param_5];
      if ((byte)local_5c < 0xb) {
        if ((byte)local_5c < 5) {
          local_2f = 1;
        }
        else {
          iVar7 = st::machine_word_boundary_cast<int>(this->field_001C * 0x41c64e6d + 0x3039);
          this->field_001C = iVar7;
          local_2f = (byte)((uint)iVar7 >> 0x10) & 1;
        }
      }
      else {
        local_2f = 0;
      }
      if (local_54 == 0) {
        local_54 = local_24;
      }
      else {
      }
      if (param_4 == 9) {
        local_54 = 4;
      }
      else if (param_4 == 0x15) {
        local_54 = 2;
      }
      uVar3 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
      this->field_001C = uVar3;
      local_40 = (uVar3 >> 0x10) % 0x169;
      switch(local_74) {
      case 0:
      case 4:
        if (((local_40 < 0x2e) || (0x13a < local_40)) || ((0x86 < local_40 && (local_40 < 0xe2)))) {
          uVar3 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
          this->field_001C = uVar3;
          uVar3 = (uVar3 >> 0x10) % (local_14 + 1U) >> 3;
          iVar6 = local_14 / 2;
        }
        else {
LAB_006064b4:
          iVar6 = this->field_001C;
LAB_00606606:
          uVar3 = iVar6 * 0x41c64e6d + 0x3039;
          this->field_001C = uVar3;
          iVar6 = 0x32;
          uVar3 = (uVar3 >> 0x10) % 0x65;
        }
        break;
      case 1:
      case 5:
        if ((0x5a < local_40) && ((local_40 < 0xb4 || (0x10e < local_40)))) {
LAB_006065f8:
          iVar6 = this->field_001C;
          goto LAB_00606606;
        }
        uVar3 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
        this->field_001C = uVar3;
        uVar3 = (uVar3 >> 0x10) % (local_14 + 1U) >> 3;
        iVar6 = local_14 / 2;
        break;
      case 2:
      case 6:
        if (((local_40 < 0x2d) || (0x87 < local_40)) && ((local_40 < 0xe1 || (0x13b < local_40))))
        goto LAB_006064b4;
        uVar3 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
        this->field_001C = uVar3;
        iVar6 = local_14 / 2 - ((uVar3 >> 0x10) % (local_14 + 1U) >> 3);
        goto switchD_00606490_default;
      case 3:
      case 7:
        if (((local_40 < 0x5a) || (0xb4 < local_40)) && ((local_40 < 0x10e || (0x168 < local_40))))
        goto LAB_006065f8;
        uVar3 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
        this->field_001C = uVar3;
        uVar3 = (uVar3 >> 0x10) % (local_14 + 1U) >> 3;
        iVar6 = local_14 / 2;
        break;
      default:
        goto switchD_00606490_default;
      }
      iVar6 = iVar6 - uVar3;
switchD_00606490_default:
      uVar3_mg10 = st::fn_006AFF50(local_40);
      uVar2 = st::fn_006AFF5B(local_40);
      local_4c = (int)(uVar2 * iVar6) / 10000 + param_2;
      local_50 = (int)(uVar3_mg10 * iVar6) / 10000 + param_1;
      uVar3 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
      this->field_001C = uVar3;
      local_48 = param_3;
      local_34 = uVar3 >> 0x10 & 7;
      uVar3 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
      this->field_001C = uVar3;
      if ((uVar3 & 0x30000) == 0) {
        uVar3 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
        this->field_001C = uVar3;
        local_44 = (uVar3 >> 0x10) % 0x15;
        iVar7 = 100;
      }
      else {
        uVar3 = uVar3 * 0x41c64e6d + 0x3039;
        this->field_001C = uVar3;
        local_44 = (uVar3 >> 0x10) % 0x1f;
        iVar7 = 0xf;
      }
      local_44 = iVar7 - local_44;
      switch(local_5c & 0xff) {
      case 0:
      case 1:
      case 2:
        uVar3 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
        this->field_001C = uVar3;
        local_38 = 0x82;
        local_3c = (uVar3 >> 0x10) % 3;
        break;
      case 3:
      case 4:
      case 5:
        local_38 = 0x8c;
        uVar3 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
        this->field_001C = uVar3;
        local_3c = (uVar3 >> 0x10 & 3) + 1;
        break;
      case 6:
      case 7:
      case 8:
      case 9:
        uVar3 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
        this->field_001C = uVar3;
        local_38 = 0x96;
        local_3c = (uVar3 >> 0x10) % 5;
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        local_38 = 0x9b;
        uVar3 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
        this->field_001C = uVar3;
        local_3c = (uVar3 >> 0x10 & 3) + 4;
      }
      if ((int)((local_44 ^ (int)local_44 >> 0x1f) - ((int)local_44 >> 0x1f)) < 10) {
        local_3c = local_3c + 2;
        local_48 = param_3 + 0x5a;
      }
      local_b0.arg0.ptr = local_70;
      st::fn_00405C9A((&this->field_0219)[(int)param_5],&local_b0);
      param_5 = (uint *)((int)param_5 + 1);
    } while ((int)param_5 < local_c);
  }
  return local_c;
}

