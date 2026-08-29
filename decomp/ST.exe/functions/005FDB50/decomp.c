#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\nick\to_DcBom.cpp
   Diagnostic line evidence: 317 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_005FDB50.
   Evidence: incoming_receiver_captures=1; receiver_accesses=9; incoming_edx_uses=0; calls=3;
   ecx_pointer_setup=3; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[8];
   expected_stack=8; receiver_family_members=1; adopt_untyped_existing_thiscall
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=005FD3A0 @ 005FD4CE -> killed on
   every CFG path | 00600750 @ 006007EC -> read as EAX on every CFG path | 00600750 @ 00600840 ->
   read as EAX on every CFG path */

int __thiscall
SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_005FDB50::FUN_005fdb50
          (RecoveredReceiver_005FDB50 *this,int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  STT3DSprC *this_00;
  VisibleClassTy *pVVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  RecoveredReceiver_005FDB50 *local_c;
  int local_8;

  if (param_2 < 0) {
    local_10 = this->field_0226;
    local_14 = 0;
  }
  else {
    local_10 = param_2 + 1;
    local_14 = param_2;
  }
  if (local_14 < local_10) {
    iVar8 = local_14 * 0x52;
    local_c = this;
    do {
      iVar5 = *(int *)(iVar8 + 0x39 + this->field_0233);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((((iVar5 != 4) && (iVar5 != 5)) &&
          (this_00 = *(STT3DSprC **)(iVar8 + this->field_0233 + 0x42), this_00 != nullptr))
         && (-1 < param_2 || iVar5 != 2)) {
        local_8 = iVar8;
        if ((iVar5 == 1) || (iVar5 == 2)) {
          /* ST_CALLSITE[005FDEC3]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
          iVar5 = STT3DSprC::Init(this_00,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
          if (iVar5 != 0) {
            RaiseInternalException
                      (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_DcBom.cpp",0x13d
                      );
            return 0xffff;
          }
          /* ST_CALLSITE[005FDEE1]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
          iVar5 = STT3DSprC::LoadSequence(this_00,0xd,PTR_00806774,"adcbo",CASE_1D);
          if (iVar5 != 0) {
            return 0xffff;
          }
          thunk_FUN_004ad380(this_00,0x5a,0x45);
          iVar5 = iVar8 + this->field_0233;
          local_18 = (int)STField<short>(iVar5,0x6);
          /* ST_CALLSITE[005FDF59]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
          STT3DSprC::sub_004AD3C0
                    (this_00,(float)local_18 * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)STField<short>(iVar5,0x8) * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)*(short *)(iVar8 + 10 + this->field_0233) * _DAT_007904f8 *
                     _DAT_007904f0 + _DAT_007904fc);
          /* ST_CALLSITE[005FDF6E]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
          STT3DSprC::StartShow(this_00,0xd,g_playSystem_00802A38->field_00E4);
          *(undefined1 *)(iVar8 + 0x41 + this->field_0233) = 1;
          pVVar3 = g_visibleClass_00802A88;
          if (g_visibleClass_00802A88 != nullptr) {
            iVar5 = iVar8 + this->field_0233;
            sVar2 = *(short *)(iVar8 + 10 + this->field_0233);
            iVar7 = STBiasedDiv16(sVar2, 200); /* exact signed 16-bit grid-index division */
            sVar2 = STField<short>(iVar5,0x8);
            iVar6 = STBiasedDiv16(sVar2, 0xc9); /* exact signed 16-bit grid-index division */
            sVar2 = STField<short>(iVar5,0x6);
            iVar5 = STBiasedDiv16(sVar2, 0xc9); /* exact signed 16-bit grid-index division */
            iVar8 = local_8;
            this = local_c;
            if ((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
                /* ST_CALLSITE[005FE055]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
                ((VisibleClassTy::sub_00558C00
                            (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar5,iVar6
                             ,&local_24,&local_28), iVar8 = local_8, this = local_c, -1 < iVar7 &&
                 ((((iVar7 < 5 && (-1 < local_24)) && (local_24 < pVVar3->field_0030)) &&
                  ((iVar5 = g_centeredOffsets5[iVar7] + local_28, -1 < iVar5 &&
                   (iVar5 < pVVar3->field_0034)))))))) && (pVVar3->field_004C != nullptr)) {
              bVar1 = pVVar3->field_004C[local_24 + iVar5 * pVVar3->field_0030];
joined_r0x005fe09b:
              iVar8 = local_8;
              this = local_c;
              if (bVar1 == 0) {
                /* ST_CALLSITE[005FE09F]: CALL 0x00403d0f; direct=00403D0F STT3DSprC::sub_004AD430 */
                STT3DSprC::sub_004AD430(this_00);
                *(undefined1 *)(local_8 + 0x41 + local_c->field_0233) = 0;
                iVar8 = local_8;
                this = local_c;
              }
            }
          }
        }
        else if (iVar5 == 3) {
          if (this_00 == nullptr) {
            return 0;
          }
          /* ST_CALLSITE[005FDBFA]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
          STT3DSprC::StopShow(this_00,0xd);
          thunk_FUN_004ad5e0(this_00);
          if (param_1 == 0) {
            thunk_FUN_004ad310(this_00);
          }
          else {
            uVar4 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar4;
            /* ST_CALLSITE[005FDC3D]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
            iVar5 = STT3DSprC::LoadSequence
                              (this_00,0xd,PTR_00806774,(&PTR_s_Expb24_007ce934)[uVar4 >> 0x10 & 1],
                               CASE_1D);
            if (iVar5 != 0) {
              return 0xffff;
            }
            /* ST_CALLSITE[005FDC5B]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
            iVar5 = STT3DSprC::LoadSequence(this_00,0xf,PTR_00806764,"bulb_n3",CASE_1D);
            if (iVar5 != 0) {
              return 0xffff;
            }
            /* ST_CALLSITE[005FDC7A]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
            iVar5 = STT3DSprC::LoadSequence(this_00,0xe,PTR_00806774,"expmask2",CASE_1D);
            if (iVar5 != 0) {
              return 0xffff;
            }
            /* ST_CALLSITE[005FDC98]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
            STT3DSprC::StartShow(this_00,0xe,g_playSystem_00802A38->field_00E4);
            *(undefined1 *)(iVar8 + 0x28 + this->field_0233) = 1;

            thunk_FUN_004ac700(this_00,'\x0f');
            /* ST_CALLSITE[005FDCC2]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
            STT3DSprC::StartShow(this_00,0xd,g_playSystem_00802A38->field_00E4);
            /* ST_CALLSITE[005FDCD2]: CALL 0x004044ee; direct=004044EE STT3DSprC::sub_004ACF20 */
            STT3DSprC::sub_004ACF20(this_00,PTR_008032b8,0x10);
            /* ST_CALLSITE[005FDCDB]: CALL 0x00403233; direct=00403233 STT3DSprC::sub_004ACFE0 */
            STT3DSprC::sub_004ACFE0(this_00,'\x0e');
            iVar5 = iVar8 + this->field_0233;
            local_18 = (int)STField<short>(iVar5,0x6);
            /* ST_CALLSITE[005FDD40]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
            STT3DSprC::sub_004AD3C0
                      (this_00,(float)local_18 * _DAT_007904f8 * _DAT_007904f0,
                       (float)(int)STField<short>(iVar5,0x8) * _DAT_007904f8 * _DAT_007904f0,
                       (float)(int)*(short *)(iVar8 + 10 + this->field_0233) * _DAT_007904f8 *
                       _DAT_007904f0 + _DAT_007904fc);
            *(undefined1 *)(iVar8 + 0x41 + this->field_0233) = 1;
            pVVar3 = g_visibleClass_00802A88;
            if (g_visibleClass_00802A88 != nullptr) {
              sVar2 = *(short *)(iVar8 + 10 + this->field_0233);
              iVar8 = iVar8 + this->field_0233;
              iVar5 = STBiasedDiv16(sVar2, 200); /* exact signed 16-bit grid-index division */
              sVar2 = STField<short>(iVar8,0x8);
              iVar7 = STBiasedDiv16(sVar2, 0xc9); /* exact signed 16-bit grid-index division */
              sVar2 = STField<short>(iVar8,0x6);
              iVar6 = STBiasedDiv16(sVar2, 0xc9); /* exact signed 16-bit grid-index division */
              iVar8 = local_8;
              this = local_c;
              if ((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
                  /* ST_CALLSITE[005FDE2F]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
                  ((VisibleClassTy::sub_00558C00
                              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar6,
                               iVar7,&local_1c,&local_20), iVar8 = local_8, this = local_c,
                   -1 < iVar5 &&
                   (((iVar5 < 5 && (-1 < local_1c)) && (local_1c < pVVar3->field_0030)))))) &&
                 (((iVar5 = g_centeredOffsets5[iVar5] + local_20, -1 < iVar5 &&
                   (iVar5 < pVVar3->field_0034)) && (pVVar3->field_004C != nullptr)))) {
                bVar1 = pVVar3->field_004C[local_1c + iVar5 * pVVar3->field_0030];
                goto joined_r0x005fe09b;
              }
            }
          }
        }
      }
      local_14 = local_14 + 1;
      iVar8 = iVar8 + 0x52;
    } while (local_14 < local_10);
  }
  return 0;
}

