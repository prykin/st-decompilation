#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [ST_RECOVERY:ai_event_get_message_v1]
   Source: E:\__titans\ai\ai_event.cpp
   Handles an STMessage for AiEventClassTy. Maps the external message ID to an internal AI event
   trigger, finds matching event records, evaluates their conditions, and interprets their action
   lists.

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401BE0|00652810; family_names=AiEventClassTy::GetMessage; ret4=2;
   direct_offsets={10:0,14:0,18:100,1c:5}
   [STTypeBootstrapApplier] Retired legacy curated identity; name=AiEventClassTy::GetMessage.
   Evidence: semantic leaf retained by an independent recovery tag
   [STTypeBootstrapApplier] Normalized signature, return, and explicit parameter provenance to
   ANALYSIS after heuristic identity retirement. Evidence: legacy signature/parameter source
   priority survived curated identity retirement */

void __thiscall AiEventClassTy::GetMessage(AiEventClassTy *this,STMessage *message)

{
  byte bVar1;
  AnonShape_006B7830_769CA2DF *pAVar2;
  PlayPanelTy *pPVar3;
  ST3DSMAPContext *pSVar4;
  AiEventClassTy *this_00;
  char cVar5;
  short sVar6;
  int local_EAX_52;
  uint uVar7;
  int iVar7;
  int local_EAX_327;
  char *pcVar8_mg40;
  short *psVar8;
  int local_EAX_488;
  char *pcVar8_mg3F;
  char *pcVar8_mg39;
  char *pcVar8_mg38;
  char *pcVar8_mg37;
  byte *puVar9;
  int iVar37_mgC4;
  char *pcVar8_mg36;
  char *pcVar8_mg35;
  int iVar37_mgBE;
  AiPlrClassTy *pAVar10;
  char *pcVar8_mg34;
  char *pcVar8_mg33;
  char *pcVar8_mg32;
  int local_EAX_2959;
  int iVar37_mgF4;
  int local_EAX_3277;
  int local_EAX_3358;
  int local_EAX_3452;
  int local_EAX_3527;
  int local_EAX_3643;
  int local_EAX_3752;
  int local_EAX_3857;
  int local_EAX_3907;
  int local_EAX_4002;
  int local_EAX_4052;
  int local_EAX_4139;
  int local_EAX_4219;
  int local_EAX_4307;
  int local_EAX_4445;
  int iVar11;
  int iVar37_mgDF;
  int local_EAX_4850;
  int iVar37_mgD7;
  char *pcVar8_mg3A;
  int iVar37_mgD3;
  uint *puVar12;
  char *pcVar8_mg31;
  char *pcVar8_mg30;
  int local_EAX_5500;
  int local_EAX_5668;
  int local_EAX_5904;
  int local_EAX_5961;
  int local_EAX_6159;
  int local_EAX_6230;
  int local_EAX_6287;
  int local_EAX_6392;
  int local_EAX_6449;
  int local_EAX_6742;
  int local_EAX_6799;
  int local_EAX_6856;
  int local_EAX_6968;
  int local_EAX_7118;
  int local_EAX_7204;
  int local_EAX_7261;
  int local_EAX_7336;
  int local_EAX_7431;
  int local_EAX_7569;
  int local_EAX_7731;
  int iVar37_mg118;
  int local_EAX_8204;
  int local_EAX_8314;
  int local_EAX_8446;
  uint *puVar13;
  int local_EAX_8597;
  char *pcVar8_mg3E;
  int local_EAX_11843;
  int local_EAX_11892;
  int local_EAX_11906;
  int local_EAX_12115;
  STGroupBoatC *pSVar14;
  int local_EAX_12727;
  char *pcVar8_mg3D;
  dword dVar15;
  dword *pdVar16;
  DArrayTy *pDVar17;
  ushort *puVar18;
  int local_EAX_13452;
  char *pcVar8_mg3C;
  int local_EAX_13781;
  char *pcVar8_mg2F;
  char *pcVar8_mg3B;
  int local_EAX_14486;
  int local_EAX_14928;
  char *pcVar8_mg2E;
  int iVar37_mg9E;
  char *pcVar8_mg2D;
  int iVar37_mg97;
  char *pcVar8_mg2C;
  int iVar37_mg94;
  char *pcVar8_mg2B;
  int iVar37_mg8B;
  char *pcVar8_mg28;
  char *pcVar8_mg27;
  char *pcVar8_mg26;
  int iVar37_mg88;
  AnonShape_00679600_B8E418A8 *pAVar19;
  char *pcVar8_mg2A;
  int local_EAX_17905;
  int iVar37_mg85;
  char *pcVar8_mg29;
  char *pcVar8_mg25;
  char *pcVar8_mg24;
  int local_EAX_18546;
  char *pcVar8_mg22;
  int local_EAX_18755;
  AnonShape_0065DA10_8B0AA883 *pAVar20;
  char *pcVar8_mg21;
  int local_EAX_18964;
  char *pcVar8_mg20;
  int local_EAX_19222;
  int local_EAX_19384;
  int local_EAX_19546;
  char *pcVar8_mg1F;
  int local_EAX_19855;
  char *pcVar8_mg1E;
  char *pcVar8_mg1D;
  char *pcVar8_mg1B;
  int local_EAX_20759;
  char *pcVar8_mg1C;
  char *pcVar8_mg19;
  int local_EAX_21479;
  char *pcVar8_mg18;
  char *pcVar8_mg17;
  int local_EAX_22002;
  char *pcVar8_mg16;
  int local_EAX_22325;
  char *pcVar8_mg15;
  int local_EAX_22663;
  char *pcVar8_mg14;
  int local_EAX_22928;
  char *pcVar8_mgE;
  char *pcVar8_mgD;
  char *pcVar8_mgC;
  char *pcVar8_mgB;
  char *pcVar8_mgA;
  int local_EAX_24571;
  char *pcVar8_mg9;
  char *pcVar8_mg8;
  char *pcVar8_mg13;
  int local_EAX_25481;
  char *pcVar21;
  char *pcVar8_mg11;
  int local_EAX_25882;
  char *pcVar8_mg10;
  int local_EAX_26279;
  char *pcVar8_mgF;
  int local_EAX_26593;
  char *pcVar8_mg7;
  int iVar36;
  char *pcVar8_mg1;
  int local_EAX_27539;
  char *pcVar8_mg6;
  int local_EAX_27909;
  char *pcVar8_mg5;
  int local_EAX_28249;
  char *pcVar8_mg4;
  int local_EAX_28574;
  char *pcVar8_mg3;
  AiFltClassTy *pAVar22;
  char *pcVar8_mg0;
  char *pcVar8_mg23;
  short sVar23;
  CPanelTy *pCVar24;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_00;
  short sVar25;
  ushort uVar29;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;
  uint uVar26;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  DArrayTy *extraout_EDX_01;
  DArrayTy *pDVar27;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_02;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_03;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_04;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_05;
  uint uVar28;
  AnonShape_00652810_4F58F813 *pAVar30;
  AnonNested_00652810_000F_9CE8027E *pAVar31;
  STFishC *pSVar32;
  uint uVar33;
  uint **ppuVar35;
  bool bVar36;
  int iVar37;
  AiFltClassTyVTable *pAVar38;
  byte local_484 [256];
  byte local_384 [256];
  InternalExceptionFrame local_284;
  uint local_240 [2];
  undefined1 local_237;
  uint **local_236;
  uint *local_20c;
  undefined2 local_208;
  undefined2 local_206;
  undefined4 local_204;
  undefined2 local_200;
  int local_1fe;
  undefined2 local_1f6;
  undefined2 local_1f4;
  undefined2 local_1f2;
  undefined1 local_1f0;
  char local_1ef [15];
  uint local_1e0;
  undefined1 local_1ce;
  undefined4 local_1c0 [4];
  int local_1b0;
  undefined4 local_1a0;
  uint local_19c;
  int local_198;
  int local_194;
  DArrayTy *local_190;
  DArrayTy *local_18c;
  AiEventClassTy *local_188;
  uint *local_184;
  DArrayTy *local_180;
  void *local_17c;
  AnonShape_00652810_4F58F813 *local_178;
  int local_174;
  DArrayTy *local_170;
  uint local_16c;
  DArrayTy *pDStack_164;
  DArrayTy *local_160;
  DArrayTy *local_15c;
  uint *local_158;
  byte *local_154;
  byte *local_150;
  char *local_14c;
  char *local_148;
  DArrayTy *local_144;
  uint local_140;
  int local_13c;
  char *local_138;
  int local_134;
  char local_9c;
  uint local_68 [2];
  undefined1 local_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 local_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined2 local_4e;
  undefined1 uStack_4c;
  char cStack_4b;
  undefined4 local_4a;
  undefined2 local_3b;
  int local_39;
  uint output_values_neg_34 [8];
  uint local_14;
  AiFltClassTy *local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;

  local_180 = nullptr;
  local_198 = 0;
  if ((g_allPlayers_007FA174 != nullptr) &&
     /* ST_CALLSITE[00652844]: CALL 0x0040371a; direct=0040371A AiEventClassTy::sub_0065BD70 */
     (local_188 = this, local_EAX_52 = sub_0065BD70(this,message,0), -1 < local_EAX_52)) {
    local_194 = local_EAX_52;
    /* ST_CALLSITE[0065285D]: CALL dword ptr [EDX + 0x18] */
    uVar7 = this->vfunc_18();
    this->field_052B = uVar7;
    if ((local_EAX_52 != 0x456) ||
       ((g_playSystem_00802A38->field_00E4 % 0x19 == this->field_00D2 ||
        (g_playSystem_00802A38->field_00E4 == 1)))) {
      local_19c = this->field_04E2[2];
      local_284.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_284;
      iVar7 = Library::MSVCRT::__setjmp3(local_284.jumpBuffer,0);
      this_00 = local_188;
      if (iVar7 == 0) {
        local_14 = 0;
        pDVar17 = local_188->field_04EE;
        bVar36 = pDVar17->count != 0;
        if (0 < (int)pDVar17->count) {
          do {
            if (bVar36) {
              pAVar30 = DArrayAt<AnonShape_00652810_4F58F813>(pDVar17, local_14);
            }
            else {
              pAVar30 = nullptr;
            }
            local_178 = pAVar30;
            if (*(char *)pAVar30 == '\0') {
              if (*(int *)&pAVar30->field_0x5 == local_194) {
                if (local_198 == 0) {
                  /* ST_CALLSITE[00652933]: CALL 0x0040371a; direct=0040371A AiEventClassTy::sub_0065BD70 */
                  sub_0065BD70(this_00,message,1);
                  local_198 = 1;
                }
                local_EAX_327 =
                     SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                     thunk_FUN_00672440((AnonReceiver_0064A970 *)this_00,
                                        (AnonShape_00683780_11EA4E23 *)&this_00->field_04FA,
                                        (int)*(short *)&pAVar30->field_0x9,(short *)&local_16c);
                uVar33 = local_14;
                if (local_EAX_327 < 0) {
                  iVar37 = this_00->field_0084;
                  pcVar8_mg40 = &this_00->field_0004;
                }
                else {
                  if (local_9c == '\b') {
                    if (pDStack_164 != nullptr) {
                      *(char *)pAVar30 = '\x01';
                      pAVar30->field_000B = 0;
                      pAVar31 = pAVar30->field_000F;
                      local_170 = nullptr;
                      local_174 = 0;
                      pDVar17 = pAVar31->field_000C;
                      if (0 < (int)pDVar17) {
                        do {
                          if (local_170 < pDVar17) {
                            psVar8 = (short *)(pAVar31->field_0008 * (int)local_170 +
                                              pAVar31->field_001C);
                          }
                          else {
                            psVar8 = nullptr;
                          }
                          local_EAX_488 =
                               SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                               thunk_FUN_00672440((AnonReceiver_0064A970 *)this_00,
                                                  (AnonShape_00683780_11EA4E23 *)
                                                  &this_00->field_04FA,(int)*psVar8,
                                                  (short *)&local_16c);
                          if (local_EAX_488 < 0) {
                            thunk_FUN_0064d0e0(this_00,local_EAX_488,&this_00->field_0004,local_14,
                                               -1);
                            goto cf_common_join_00659A73;
                          }
                          if (local_EAX_488 != 0x19) {
                            local_174 = 0;
                          }
                          if (0x593 < local_EAX_488) {
                            if (0x5c8 < local_EAX_488) {
                              if (local_EAX_488 < 0x76d) {
                                if (local_EAX_488 != 0x76c) {
                                  switch(local_EAX_488) {
                                  case 0x5dc:
                                    iVar37 = thunk_FUN_00651010((short *)&local_16c);
                                    if (iVar37 != 0) {
                                      /* ST_CALLSITE[00656FFE]: CALL dword ptr [EAX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[00657023]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            thunk_FUN_0064e300(*puVar12,(char *)local_15c,
                                                               (ushort)local_158,(char)local_154,
                                                               (ushort)local_150,(char)local_14c,
                                                               (uint)local_148);
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5dd:
                                    local_EAX_18546 = thunk_FUN_00651120((int)&local_16c);
                                    if (local_EAX_18546 != 0) {
                                      /* ST_CALLSITE[00657096]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[006570BB]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            if (pSVar14 == nullptr) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&CHAR_00h_008016a0,
                                                                 local_14,*puVar12);
                                            }
                                            else {
                                              pAVar20 = (AnonShape_0065DA10_8B0AA883 *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (pAVar20 == nullptr) {
                                                uVar33 = *puVar12;
                                                uVar28 = local_14;
                                                pcVar8_mg22 = thunk_FUN_00674af0(local_EAX_488);
                                                thunk_FUN_0064d0e0(this_00,-0xab,pcVar8_mg22,uVar28,
                                                                   uVar33);
                                              }
                                              else {
                                                /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                                                thunk_FUN_0065d630(pAVar20,extraout_EDX_04);
                                              }
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5de:
                                    local_EAX_18755 = thunk_FUN_00651160((int)&local_16c);
                                    if (local_EAX_18755 != 0) {
                                      /* ST_CALLSITE[00657167]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[0065718C]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            if (pSVar14 == nullptr) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&CHAR_00h_008016a0,
                                                                 local_14,*puVar12);
                                            }
                                            else {
                                              pAVar20 = (AnonShape_0065DA10_8B0AA883 *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (pAVar20 == nullptr) {
                                                uVar33 = *puVar12;
                                                uVar28 = local_14;
                                                pcVar8_mg21 = thunk_FUN_00674af0(local_EAX_488);
                                                thunk_FUN_0064d0e0(this_00,-0xab,pcVar8_mg21,uVar28,
                                                                   uVar33);
                                              }
                                              else {
                                                /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                                                thunk_FUN_0065e6c0(pAVar20,extraout_EDX_05);
                                              }
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5df:
                                    local_EAX_18964 = thunk_FUN_00651160((int)&local_16c);
                                    if (local_EAX_18964 != 0) {
                                      /* ST_CALLSITE[00657238]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_8 = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[0065725D]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_8) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            if (pSVar14 == nullptr) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&CHAR_00h_008016a0,
                                                                 local_14,*puVar12);
                                            }
                                            else {
                                              local_17c = (void *)thunk_FUN_00423300((int)pSVar14);
                                              if (local_17c == nullptr) {
                                                uVar33 = *puVar12;
                                                uVar28 = local_14;
                                                pcVar8_mg20 = thunk_FUN_00674af0(local_EAX_488);
                                                thunk_FUN_0064d0e0(this_00,-0xab,pcVar8_mg20,uVar28,
                                                                   uVar33);
                                              }
                                              else {
                                                /* ST_CALLSITE[006572DC]: CALL 0x00404da9; direct=00404DA9 _GetStaffGrpExch */
                                                pDVar17 = (DArrayTy *)_GetStaffGrpExch(*puVar12);
                                                if (pDVar17 != nullptr) {
                                                  thunk_FUN_0065d940(local_17c,pDVar17,0);
                                                  DArrayDestroy(pDVar17);
                                                }
                                              }
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_8 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                          } while (local_8 != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e0:
                                    local_EAX_19222 = thunk_FUN_006511a0((int)&local_16c);
                                    if (local_EAX_19222 != 0) {
                                      /* ST_CALLSITE[0065733A]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[0065735F]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            if (pSVar14 == nullptr) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&CHAR_00h_008016a0,
                                                                 local_14,*puVar12);
                                            }
                                            else {
                                              thunk_FUN_00424530(pSVar14,(uint)local_158);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e1:
                                    local_EAX_19384 = thunk_FUN_006511a0((int)&local_16c);
                                    if (local_EAX_19384 != 0) {
                                      /* ST_CALLSITE[006573DC]: CALL dword ptr [EAX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[00657401]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            if (pSVar14 == nullptr) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&CHAR_00h_008016a0,
                                                                 local_14,*puVar12);
                                            }
                                            else {
                                              thunk_FUN_00424620(pSVar14,(uint)local_158);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e2:
                                    local_EAX_19546 = thunk_FUN_006511e0((int)&local_16c);
                                    if (local_EAX_19546 != 0) {
                                      /* ST_CALLSITE[0065747E]: CALL dword ptr [EAX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[006574A3]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            if (pSVar14 == nullptr) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&CHAR_00h_008016a0,
                                                                 local_14,*puVar12);
                                            }
                                            else {
                                              local_17c = (void *)thunk_FUN_00423300((int)pSVar14);
                                              if (local_17c == nullptr) {
                                                uVar33 = *puVar12;
                                                uVar28 = local_14;
                                                pcVar8_mg1F = thunk_FUN_00674af0(local_EAX_488);
                                                thunk_FUN_0064d0e0(this_00,-0xab,pcVar8_mg1F,uVar28,
                                                                   uVar33);
                                              }
                                              else {
                                                pAVar10 = nullptr;
                                                local_8 = nullptr;
                                                if (g_allPlayers_007FA174 != nullptr) {
                                                  pAVar10 = thunk_FUN_004357f0((char)*puVar12);
                                                }
                                                if (pAVar10 != nullptr) {
                                                  local_8 = (DArrayTy *)
                                                            thunk_FUN_00678ef0(pAVar10,(byte *)
                                                  local_158);
                                                }
                                                if (local_8 == nullptr) {
                                                  thunk_FUN_0064d0e0(this_00,-4,(char *)local_158,
                                                                     local_14,*puVar12);
                                                }
                                                else {
                                                  thunk_FUN_0068e690(local_8,(int)local_17c);
                                                }
                                              }
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e3:
                                    local_EAX_19855 = thunk_FUN_00651250((int)&local_16c);
                                    if (local_EAX_19855 != 0) {
                                      /* ST_CALLSITE[006575B3]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[006575D8]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            if (pSVar14 == nullptr) {
                                              thunk_FUN_0064d0e0(this_00,-0xaa,&CHAR_00h_008016a0,
                                                                 local_14,*puVar12);
                                            }
                                            else {
                                              iVar37 = thunk_FUN_00423300((int)pSVar14);
                                              if (iVar37 == 0) {
                                                uVar33 = *puVar12;
                                                uVar28 = local_14;
                                                pcVar8_mg1E = thunk_FUN_00674af0(local_EAX_488);
                                                thunk_FUN_0064d0e0(this_00,-0xab,pcVar8_mg1E,uVar28,
                                                                   uVar33);
                                              }
                                              else {
                                                thunk_FUN_0065d600(iVar37);
                                              }
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e4:
                                    iVar37 = thunk_FUN_00651290((short *)&local_16c);
                                    if (iVar37 != 0) {
                                      /* ST_CALLSITE[00657684]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[006576A9]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg1D = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_006577ae:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg1D,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar22 == nullptr) ||
                                                  (pAVar22->field_007B == 1)) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg1D = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_006577ae;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              uStack_59 = SUB41(local_14c,0);
                                              local_58 = (undefined1)((uint)local_14c >> 8);
                                              local_60 = STPiece<0,1>(local_158);
                                              iVar37 = (int)local_144 * 0x19;
                                              uStack_5b = SUB41(local_150,0);
                                              uStack_5a = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 1;
                                              uStack_57 = SUB41(local_148,0);
                                              uStack_56 = (undefined1)((uint)local_148 >> 8);
                                              uStack_55 = (undefined1)((uint)local_148 >> 0x10);
                                              uStack_54 = (undefined1)((uint)local_148 >> 0x18);
                                              uStack_53 = (undefined1)iVar37;
                                              uStack_52 = (undefined1)((uint)iVar37 >> 8);
                                              uStack_51 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_50 = (undefined1)((uint)iVar37 >> 0x18);
                                              iVar37 = local_140 * 0x19;
                                              uStack_4f = (undefined1)iVar37;
                                              local_4e = (undefined2)((uint)iVar37 >> 8);
                                              uStack_4c = (undefined1)((uint)iVar37 >> 0x18);
                                              /* ST_CALLSITE[00657791]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e5:
                                    local_EAX_20759 = thunk_FUN_006514d0((short *)&local_16c);
                                    if (local_EAX_20759 != 0) {
                                      /* ST_CALLSITE[0065793B]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[00657960]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg1C = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_00657a41:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg1C,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar22 == nullptr) ||
                                                  (pAVar22->field_007B == 1)) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg1C = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_00657a41;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              uStack_59 = SUB41(local_14c,0);
                                              local_58 = (undefined1)((uint)local_14c >> 8);
                                              local_60 = STPiece<0,1>(local_158);
                                              iVar37 = (int)local_148 * 0x19;
                                              uStack_5b = SUB41(local_150,0);
                                              uStack_5a = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 2;
                                              uStack_57 = (undefined1)iVar37;
                                              uStack_56 = (undefined1)((uint)iVar37 >> 8);
                                              uStack_55 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_54 = (undefined1)((uint)iVar37 >> 0x18);
                                              /* ST_CALLSITE[00657A24]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e6:
                                    iVar37 = thunk_FUN_006513c0((short *)&local_16c);
                                    if (iVar37 != 0) {
                                      /* ST_CALLSITE[006577EB]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[00657810]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg1B = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_006578fe:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg1B,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar22 == nullptr) ||
                                                  (pAVar22->field_007B == 1)) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg1B = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_006578fe;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              local_60 = STPiece<0,1>(local_158);
                                              uStack_59 = SUB41(local_14c,0);
                                              local_58 = (undefined1)((uint)local_14c >> 8);
                                              uStack_5b = SUB41(local_150,0);
                                              uStack_5a = (undefined1)((uint)local_150 >> 8);
                                              uStack_53 = SUB41(local_148,0);
                                              uStack_52 = (undefined1)((uint)local_148 >> 8);
                                              uStack_51 = (undefined1)((uint)local_148 >> 0x10);
                                              uStack_50 = (undefined1)((uint)local_148 >> 0x18);
                                              iVar37 = (int)local_144 * 0x19;
                                              local_68[0] = 3;
                                              uStack_57 = (undefined1)iVar37;
                                              uStack_56 = (undefined1)((uint)iVar37 >> 8);
                                              uStack_55 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_54 = (undefined1)((uint)iVar37 >> 0x18);
                                              /* ST_CALLSITE[006578E1]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e7:
                                    iVar37 = thunk_FUN_006515b0((
                                                  RecoveredRecord_AiEventClassTy_006515B0 *)
                                                  &local_16c);
                                    if (iVar37 != 0) {
                                      /* ST_CALLSITE[00657A7E]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[00657AA3]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg19 = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_00657bce:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg19,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if ((pAVar22 == nullptr) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg19 = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_00657bce;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              uVar33 = (uint)local_158 & 0x3fffffff;
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_60 = (undefined1)uVar33;
                                              uStack_5f = (undefined1)(uVar33 >> 8);
                                              uStack_5e = (undefined1)(uVar33 >> 0x10);
                                              uStack_5d = (undefined1)(uVar33 >> 0x18);
                                              uVar33 = (uint)local_154 & 0x3fffffff;
                                              uStack_54 = SUB41(local_14c,0);
                                              uStack_53 = (undefined1)((uint)local_14c >> 8);
                                              uStack_5c = (undefined1)uVar33;
                                              uStack_5b = (undefined1)(uVar33 >> 8);
                                              uStack_5a = (undefined1)(uVar33 >> 0x10);
                                              uStack_59 = (undefined1)(uVar33 >> 0x18);
                                              uVar33 = (uint)local_150 & 0x3fffffff;
                                              local_4e = (undefined2)local_140;
                                              local_58 = (undefined1)uVar33;
                                              uStack_57 = (undefined1)(uVar33 >> 8);
                                              uStack_56 = (undefined1)(uVar33 >> 0x10);
                                              uStack_55 = (undefined1)(uVar33 >> 0x18);
                                              uStack_52 = SUB41(local_148,0);
                                              uStack_51 = (undefined1)((uint)local_148 >> 8);
                                              local_68[0] = 4;
                                              uStack_50 = SUB41(local_144,0);
                                              uStack_4f = (undefined1)((uint)local_144 >> 8);
                                              uStack_4c = (undefined1)local_13c;
                                              pcVar21 = local_138;
                                              if (local_138 == nullptr) {
                                                pcVar21 = &CHAR_00h_008016a0;
                                              }
                                              Library::MSVCRT::_strncpy(&cStack_4b,pcVar21,0xe);
                                              /* ST_CALLSITE[00657BB1]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e8:
                                    local_EAX_21479 = thunk_FUN_00651730((int)&local_16c);
                                    if (local_EAX_21479 != 0) {
                                      /* ST_CALLSITE[00657C0B]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[00657C30]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg18 = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_00657ccf:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg18,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if ((pAVar22 == nullptr) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg18 = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_00657ccf;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_68[0] = 5;
                                              /* ST_CALLSITE[00657CB2]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5e9:
                                    iVar37 = thunk_FUN_00651770((AnonShape_00651770_8F77396F *)
                                                                &local_16c);
                                    if (iVar37 != 0) {
                                      /* ST_CALLSITE[00657D0C]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[00657D31]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg17 = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_00657dd9:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg17,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if ((pAVar22 == nullptr) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg17 = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_00657dd9;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_60 = STPiece<0,1>(local_158);
                                              local_68[0] = 6;
                                              /* ST_CALLSITE[00657DBC]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5ea:
                                    local_EAX_22002 = thunk_FUN_006517c0((short *)&local_16c);
                                    if (local_EAX_22002 != 0) {
                                      /* ST_CALLSITE[00657E16]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[00657E3B]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg16 = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_00657f1c:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg16,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar22 == nullptr) ||
                                                  (pAVar22->field_007B == 1)) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg16 = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_00657f1c;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              uStack_59 = SUB41(local_14c,0);
                                              local_58 = (undefined1)((uint)local_14c >> 8);
                                              local_60 = STPiece<0,1>(local_158);
                                              iVar37 = (int)local_148 * 0x19;
                                              uStack_5b = SUB41(local_150,0);
                                              uStack_5a = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 7;
                                              uStack_57 = (undefined1)iVar37;
                                              uStack_56 = (undefined1)((uint)iVar37 >> 8);
                                              uStack_55 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_54 = (undefined1)((uint)iVar37 >> 0x18);
                                              /* ST_CALLSITE[00657EFF]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5eb:
                                    local_EAX_22325 = thunk_FUN_00651880((int)&local_16c);
                                    if (local_EAX_22325 != 0) {
                                      /* ST_CALLSITE[00657F59]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[00657F7E]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg15 = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_0065806e:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg15,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar22 == nullptr) ||
                                                  (pAVar22->field_007B == 1)) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg15 = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_0065806e;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_60 = SUB41(local_158,0);
                                              uStack_5f = (undefined1)((uint)local_158 >> 8);
                                              uStack_5c = SUB41(local_150,0);
                                              uStack_5b = (undefined1)((uint)local_150 >> 8);
                                              uStack_5e = SUB41(local_154,0);
                                              uStack_5d = (undefined1)((uint)local_154 >> 8);
                                              local_58 = SUB41(local_148,0);
                                              uStack_57 = (undefined1)((uint)local_148 >> 8);
                                              uStack_5a = SUB41(local_14c,0);
                                              uStack_59 = (undefined1)((uint)local_14c >> 8);
                                              local_68[0] = 8;
                                              uStack_56 = SUB41(local_144,0);
                                              uStack_55 = (undefined1)((uint)local_144 >> 8);
                                              /* ST_CALLSITE[00658051]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5ec:
                                    local_EAX_22663 = thunk_FUN_006518c0((int)&local_16c);
                                    if (local_EAX_22663 != 0) {
                                      /* ST_CALLSITE[006580AB]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[006580D0]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg14 = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_00658177:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg14,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar22 == nullptr) ||
                                                  (pAVar22->field_007B == 1)) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg14 = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_00658177;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_68[0] = 9;
                                              /* ST_CALLSITE[0065815A]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5ed:
                                    iVar37 = thunk_FUN_00651df0((short *)&local_16c);
                                    if (iVar37 != 0) {
                                      /* ST_CALLSITE[00658A3B]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[00658A60]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg13 = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_00658b70:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg13,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar22 == nullptr) ||
                                                  (pAVar22->field_007B == 1)) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg13 = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_00658b70;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5e = SUB41(local_154,0);
                                              uStack_5d = (undefined1)((uint)local_154 >> 8);
                                              uStack_50 = SUB41(local_14c,0);
                                              uStack_4f = (undefined1)((uint)local_14c >> 8);
                                              local_4e = (undefined2)((uint)local_14c >> 0x10);
                                              local_60 = SUB41(local_158,0);
                                              uStack_5f = (undefined1)((uint)local_158 >> 8);
                                              iVar37 = (int)local_148 * 0x19;
                                              uStack_5c = SUB41(local_150,0);
                                              uStack_5b = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0x34;
                                              uStack_5a = (undefined1)iVar37;
                                              uStack_59 = (undefined1)((uint)iVar37 >> 8);
                                              local_58 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_57 = (undefined1)((uint)iVar37 >> 0x18);
                                              uStack_54 = (undefined1)local_140;
                                              uStack_53 = (undefined1)(local_140 >> 8);
                                              uStack_56 = SUB41(local_144,0);
                                              uStack_55 = (undefined1)((uint)local_144 >> 8);
                                              uStack_52 = (undefined1)local_13c;
                                              uStack_51 = (undefined1)((uint)local_13c >> 8);
                                              /* ST_CALLSITE[00658B53]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5ee:
                                    local_EAX_25481 =
                                         thunk_FUN_00651ed0((RecoveredRecord_AiEventClassTy_00651ED0
                                                             *)&local_16c);
                                    if (local_EAX_25481 != 0) {
                                      /* ST_CALLSITE[00658BAD]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[00658BD2]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg11 = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_00658d01:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg11,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar22 == nullptr) ||
                                                  (pAVar22->field_007B == 1)) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg11 = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_00658d01;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_58 = SUB41(local_158,0);
                                              uStack_57 = (undefined1)((uint)local_158 >> 8);
                                              uStack_56 = (undefined1)((uint)local_158 >> 0x10);
                                              uStack_55 = (undefined1)((uint)local_158 >> 0x18);
                                              uStack_4c = SUB41(local_14c,0);
                                              cStack_4b = (char)((uint)local_14c >> 8);
                                              local_68[0] = 0x32;
                                              uStack_50 = SUB41(local_154,0);
                                              uStack_4f = (undefined1)((uint)local_154 >> 8);
                                              local_4e = (undefined2)((uint)local_154 >> 0x10);
                                              uStack_54 = SUB41(local_150,0);
                                              uStack_53 = (undefined1)((uint)local_150 >> 8);
                                              uStack_52 = (undefined1)((uint)local_150 >> 0x10);
                                              uStack_51 = (undefined1)((uint)local_150 >> 0x18);
                                              pcVar21 = local_148;
                                              if (local_148 == nullptr) {
                                                pcVar21 = &CHAR_00h_008016a0;
                                              }
                                              Library::MSVCRT::_strncpy
                                                        ((char *)&local_4a,pcVar21,0xe);
                                              uStack_5b = (undefined1)(local_140 >> 8);
                                              uStack_5c = 0;
                                              uStack_5a = 0;
                                              uStack_59 = 0;
                                              local_3b = STPiece<0,2>(local_144);
                                              local_39 = local_13c * 0x19;
                                              local_60 = (undefined1)local_140;
                                              uStack_5f = 0;
                                              uStack_5e = 0;
                                              uStack_5d = 0;
                                              /* ST_CALLSITE[00658CE4]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5ef:
                                    local_EAX_25882 = thunk_FUN_00652030((short *)&local_16c);
                                    if (local_EAX_25882 != 0) {
                                      /* ST_CALLSITE[00658D3E]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[00658D63]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg10 = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_00658e8e:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg10,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar22 == nullptr) ||
                                                  (pAVar22->field_007B == 1)) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg10 = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_00658e8e;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_58 = SUB41(local_158,0);
                                              uStack_57 = (undefined1)((uint)local_158 >> 8);
                                              uStack_56 = SUB41(local_154,0);
                                              uStack_55 = (undefined1)((uint)local_154 >> 8);
                                              uStack_54 = SUB41(local_150,0);
                                              uStack_53 = (undefined1)((uint)local_150 >> 8);
                                              uStack_52 = SUB41(local_14c,0);
                                              uStack_51 = (undefined1)((uint)local_14c >> 8);
                                              uStack_50 = SUB41(local_148,0);
                                              uStack_4f = (undefined1)((uint)local_148 >> 8);
                                              local_4e = STPiece<0,2>(local_144);
                                              uStack_4c = (undefined1)local_140;
                                              cStack_4b = (char)(local_140 >> 8);
                                              uStack_5b = (undefined1)((uint)local_13c >> 8);
                                              uStack_5c = 0;
                                              uStack_5a = 0;
                                              uStack_59 = 0;
                                              local_60 = (undefined1)local_13c;
                                              uStack_5f = 0;
                                              uStack_5e = 0;
                                              uStack_5d = 0;
                                              local_4a = (int)local_138 * 0x19;
                                              local_68[0] = 0x33;
                                              /* ST_CALLSITE[00658E71]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f0:
                                    local_EAX_26279 = thunk_FUN_00652100((short *)&local_16c);
                                    if (local_EAX_26279 != 0) {
                                      /* ST_CALLSITE[00658ECB]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[00658EF0]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mgF = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_00658fc8:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mgF,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar22 == nullptr) ||
                                                  (pAVar22->field_007B == 1)) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mgF = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_00658fc8;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5a = SUB41(local_154,0);
                                              uStack_59 = (undefined1)((uint)local_154 >> 8);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              local_60 = SUB41(local_150,0);
                                              uStack_5f = (undefined1)((uint)local_150 >> 8);
                                              uStack_5e = (undefined1)((uint)local_150 >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_150 >> 0x18);
                                              iVar37 = (int)local_14c * 0x19;
                                              local_68[0] = 0x35;
                                              local_58 = (undefined1)iVar37;
                                              uStack_57 = (undefined1)((uint)iVar37 >> 8);
                                              uStack_56 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_55 = (undefined1)((uint)iVar37 >> 0x18);
                                              /* ST_CALLSITE[00658FAB]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f1:
                                    local_EAX_22928 = thunk_FUN_00651900((short *)&local_16c);
                                    if (local_EAX_22928 != 0) {
                                      /* ST_CALLSITE[006581B4]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[006581D9]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mgE = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_006582b3:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mgE,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if ((pAVar22 == nullptr) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mgE = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_006582b3;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_60 = STPiece<0,1>(local_158);
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = SUB41(local_150,0);
                                              uStack_5c = (undefined1)((uint)local_150 >> 8);
                                              uStack_5b = SUB41(local_14c,0);
                                              uStack_5a = (undefined1)((uint)local_14c >> 8);
                                              uStack_59 = (undefined1)((uint)local_14c >> 0x10);
                                              local_58 = (undefined1)((uint)local_14c >> 0x18);
                                              uStack_57 = SUB41(local_148,0);
                                              uStack_56 = (undefined1)((uint)local_148 >> 8);
                                              uStack_55 = (undefined1)((uint)local_148 >> 0x10);
                                              uStack_54 = (undefined1)((uint)local_148 >> 0x18);
                                              local_68[0] = 10;
                                              uStack_53 = 0;
                                              uStack_52 = 0;
                                              uStack_51 = 0;
                                              uStack_50 = 0;
                                              /* ST_CALLSITE[00658296]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f2:
                                    iVar37 = thunk_FUN_006519e0((short *)&local_16c);
                                    if (iVar37 != 0) {
                                      /* ST_CALLSITE[006582F0]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[00658315]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mgD = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_00658416:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mgD,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (pAVar22 == nullptr) {
                                                uVar28 = *puVar12;
                                                pcVar8_mgD = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_00658416;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5b = SUB41(local_14c,0);
                                              uStack_5a = (undefined1)((uint)local_14c >> 8);
                                              local_60 = STPiece<0,1>(local_158);
                                              iVar37 = (int)local_144 * 0x19;
                                              uStack_5d = SUB41(local_150,0);
                                              uStack_5c = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0xb;
                                              uStack_4f = SUB41(local_148,0);
                                              local_4e = (undefined2)((uint)local_148 >> 8);
                                              uStack_4c = (undefined1)((uint)local_148 >> 0x18);
                                              uStack_59 = (undefined1)iVar37;
                                              local_58 = (undefined1)((uint)iVar37 >> 8);
                                              uStack_57 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_56 = (undefined1)((uint)iVar37 >> 0x18);
                                              uStack_55 = (undefined1)local_140;
                                              uStack_54 = (undefined1)(local_140 >> 8);
                                              uStack_53 = (undefined1)local_13c;
                                              uStack_52 = (undefined1)((uint)local_13c >> 8);
                                              uStack_51 = SUB41(local_138,0);
                                              uStack_50 = (undefined1)((uint)local_138 >> 8);
                                              /* ST_CALLSITE[006583F9]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f3:
                                    iVar37 = thunk_FUN_00651b40((short *)&local_16c);
                                    if (iVar37 != 0) {
                                      /* ST_CALLSITE[00658453]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[00658478]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mgC = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_00658543:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mgC,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar22 == nullptr) ||
                                                  (pAVar22->field_007B == 1)) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mgC = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_00658543;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              local_60 = STPiece<0,1>(local_158);
                                              local_68[0] = 0xc;
                                              iVar37 = (int)local_150 * 0x19;
                                              uStack_5b = (undefined1)iVar37;
                                              uStack_5a = (undefined1)((uint)iVar37 >> 8);
                                              uStack_59 = (undefined1)((uint)iVar37 >> 0x10);
                                              local_58 = (undefined1)((uint)iVar37 >> 0x18);
                                              /* ST_CALLSITE[00658526]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f4:
                                    iVar37 = thunk_FUN_00651bd0((short *)&local_16c);
                                    if (iVar37 != 0) {
                                      /* ST_CALLSITE[00658580]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[006585A5]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mgB = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_00658670:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mgB,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar22 == nullptr) ||
                                                  (pAVar22->field_007B == 1)) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mgB = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_00658670;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              local_60 = STPiece<0,1>(local_158);
                                              local_68[0] = 0xd;
                                              iVar37 = (int)local_150 * 0x19;
                                              uStack_5b = (undefined1)iVar37;
                                              uStack_5a = (undefined1)((uint)iVar37 >> 8);
                                              uStack_59 = (undefined1)((uint)iVar37 >> 0x10);
                                              local_58 = (undefined1)((uint)iVar37 >> 0x18);
                                              /* ST_CALLSITE[00658653]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f5:
                                    iVar37 = thunk_FUN_00651cd0((short *)&local_16c);
                                    if (iVar37 != 0) {
                                      /* ST_CALLSITE[006586AD]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[006586D2]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mgA = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_006587e2:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mgA,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar22 == nullptr) ||
                                                  (pAVar22->field_007B == 1)) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mgA = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_006587e2;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5e = SUB41(local_154,0);
                                              uStack_5d = (undefined1)((uint)local_154 >> 8);
                                              uStack_50 = SUB41(local_14c,0);
                                              uStack_4f = (undefined1)((uint)local_14c >> 8);
                                              local_4e = (undefined2)((uint)local_14c >> 0x10);
                                              local_60 = SUB41(local_158,0);
                                              uStack_5f = (undefined1)((uint)local_158 >> 8);
                                              iVar37 = (int)local_148 * 0x19;
                                              uStack_5c = SUB41(local_150,0);
                                              uStack_5b = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0xe;
                                              uStack_5a = (undefined1)iVar37;
                                              uStack_59 = (undefined1)((uint)iVar37 >> 8);
                                              local_58 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_57 = (undefined1)((uint)iVar37 >> 0x18);
                                              uStack_54 = (undefined1)local_140;
                                              uStack_53 = (undefined1)(local_140 >> 8);
                                              uStack_56 = SUB41(local_144,0);
                                              uStack_55 = (undefined1)((uint)local_144 >> 8);
                                              uStack_52 = (undefined1)local_13c;
                                              uStack_51 = (undefined1)((uint)local_13c >> 8);
                                              /* ST_CALLSITE[006587C5]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f6:
                                    local_EAX_24571 = thunk_FUN_00651db0((int)&local_16c);
                                    if (local_EAX_24571 != 0) {
                                      /* ST_CALLSITE[0065881F]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[00658844]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg9 = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_006588eb:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg9,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar22 == nullptr) ||
                                                  (pAVar22->field_007B == 1)) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg9 = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_006588eb;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_68[0] = 0xf;
                                              /* ST_CALLSITE[006588CE]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f7:
                                    iVar37 = thunk_FUN_00651c60((short *)&local_16c);
                                    if (iVar37 != 0) {
                                      /* ST_CALLSITE[00658928]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[0065894D]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg8 = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_006589fe:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg8,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if ((pAVar22 == nullptr) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg8 = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_006589fe;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_60 = STPiece<0,1>(local_158);
                                              local_68[0] = 0x10;
                                              uStack_5f = SUB41(local_154,0);
                                              uStack_5e = (undefined1)((uint)local_154 >> 8);
                                              uStack_5d = (undefined1)((uint)local_154 >> 0x10);
                                              uStack_5c = (undefined1)((uint)local_154 >> 0x18);
                                              /* ST_CALLSITE[006589E1]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f8:
                                    local_EAX_26593 = thunk_FUN_006521c0((short *)&local_16c);
                                    if (local_EAX_26593 != 0) {
                                      /* ST_CALLSITE[00659005]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[0065902A]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg7 = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_00659143:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg7,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar22 == nullptr) ||
                                                  (pAVar22->field_007B == 1)) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg7 = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_00659143;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_58 = SUB41(local_154,0);
                                              uStack_57 = (undefined1)((uint)local_154 >> 8);
                                              uStack_54 = SUB41(local_14c,0);
                                              uStack_53 = (undefined1)((uint)local_14c >> 8);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              uStack_5a = (undefined1)((uint)local_158 >> 0x10);
                                              uStack_59 = (undefined1)((uint)local_158 >> 0x18);
                                              uStack_50 = SUB41(local_144,0);
                                              uStack_4f = (undefined1)((uint)local_144 >> 8);
                                              uStack_56 = SUB41(local_150,0);
                                              uStack_55 = (undefined1)((uint)local_150 >> 8);
                                              local_60 = (undefined1)local_13c;
                                              uStack_5f = (undefined1)((uint)local_13c >> 8);
                                              uStack_5e = (undefined1)((uint)local_13c >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_13c >> 0x18);
                                              uStack_52 = SUB41(local_148,0);
                                              uStack_51 = (undefined1)((uint)local_148 >> 8);
                                              iVar37 = (int)local_138 * 0x19;
                                              local_4e = (undefined2)local_140;
                                              local_68[0] = 0x36;
                                              uStack_4c = (undefined1)iVar37;
                                              cStack_4b = (char)((uint)iVar37 >> 8);
                                              STPiece<0,2>(local_4a) = (undefined2)((uint)iVar37 >> 0x10);
                                              /* ST_CALLSITE[00659126]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5f9:
                                    local_EAX_27539 =
                                         thunk_FUN_00652460((RecoveredRecord_AiEventClassTy_00652460
                                                             *)&local_16c);
                                    if (local_EAX_27539 != 0) {
                                      /* ST_CALLSITE[006593B7]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[006593DC]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg6 = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_006594ec:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg6,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar22 == nullptr) ||
                                                  (pAVar22->field_007B == 1)) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg6 = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_006594ec;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5a = SUB41(local_154,0);
                                              uStack_59 = (undefined1)((uint)local_154 >> 8);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              uStack_56 = SUB41(local_14c,0);
                                              uStack_55 = (undefined1)((uint)local_14c >> 8);
                                              local_58 = SUB41(local_150,0);
                                              uStack_57 = (undefined1)((uint)local_150 >> 8);
                                              uStack_52 = SUB41(local_144,0);
                                              uStack_51 = (undefined1)((uint)local_144 >> 8);
                                              uStack_54 = SUB41(local_148,0);
                                              uStack_53 = (undefined1)((uint)local_148 >> 8);
                                              local_60 = (undefined1)local_140;
                                              uStack_5f = (undefined1)(local_140 >> 8);
                                              uStack_5e = (undefined1)(local_140 >> 0x10);
                                              uStack_5d = (undefined1)(local_140 >> 0x18);
                                              iVar37 = local_13c * 0x19;
                                              local_68[0] = 0x37;
                                              uStack_50 = (undefined1)iVar37;
                                              uStack_4f = (undefined1)((uint)iVar37 >> 8);
                                              local_4e = (undefined2)((uint)iVar37 >> 0x10);
                                              /* ST_CALLSITE[006594CF]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5fa:
                                    local_EAX_27909 = thunk_FUN_00652540((short *)&local_16c);
                                    if (local_EAX_27909 != 0) {
                                      /* ST_CALLSITE[00659529]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[0065954E]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg5 = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_00659640:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg5,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar22 == nullptr) ||
                                                  (pAVar22->field_007B == 1)) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg5 = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_00659640;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5a = SUB41(local_154,0);
                                              uStack_59 = (undefined1)((uint)local_154 >> 8);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              uStack_56 = SUB41(local_14c,0);
                                              uStack_55 = (undefined1)((uint)local_14c >> 8);
                                              local_58 = SUB41(local_150,0);
                                              uStack_57 = (undefined1)((uint)local_150 >> 8);
                                              local_60 = SUB41(local_148,0);
                                              uStack_5f = (undefined1)((uint)local_148 >> 8);
                                              uStack_5e = (undefined1)((uint)local_148 >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_148 >> 0x18);
                                              iVar37 = (int)local_144 * 0x19;
                                              local_68[0] = 0x38;
                                              uStack_54 = (undefined1)iVar37;
                                              uStack_53 = (undefined1)((uint)iVar37 >> 8);
                                              uStack_52 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_51 = (undefined1)((uint)iVar37 >> 0x18);
                                              /* ST_CALLSITE[00659623]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5fb:
                                    local_EAX_28249 =
                                         thunk_FUN_006525e0((AnonShape_006525E0_52237033 *)
                                                            &local_16c);
                                    if (local_EAX_28249 != 0) {
                                      /* ST_CALLSITE[0065967D]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[006596A2]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg4 = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_00659785:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg4,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar22 == nullptr) ||
                                                  (pAVar22->field_007B == 1)) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg4 = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_00659785;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5a = SUB41(local_154,0);
                                              uStack_59 = (undefined1)((uint)local_154 >> 8);
                                              local_60 = SUB41(local_14c,0);
                                              uStack_5f = (undefined1)((uint)local_14c >> 8);
                                              uStack_5e = (undefined1)((uint)local_14c >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_14c >> 0x18);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              iVar37 = (int)local_148 * 0x19;
                                              local_58 = SUB41(local_150,0);
                                              uStack_57 = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0x39;
                                              uStack_56 = (undefined1)iVar37;
                                              uStack_55 = (undefined1)((uint)iVar37 >> 8);
                                              uStack_54 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_53 = (undefined1)((uint)iVar37 >> 0x18);
                                              /* ST_CALLSITE[00659768]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5fc:
                                    local_EAX_28574 =
                                         thunk_FUN_00652670((AnonShape_00652670_DFEA616F *)
                                                            &local_16c);
                                    if (local_EAX_28574 != 0) {
                                      /* ST_CALLSITE[006597C2]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[006597E7]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg3 = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_006598ca:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg3,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if (((pAVar22 == nullptr) ||
                                                  (pAVar22->field_007B == 1)) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg3 = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_006598ca;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              uStack_5a = SUB41(local_154,0);
                                              uStack_59 = (undefined1)((uint)local_154 >> 8);
                                              local_60 = SUB41(local_14c,0);
                                              uStack_5f = (undefined1)((uint)local_14c >> 8);
                                              uStack_5e = (undefined1)((uint)local_14c >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_14c >> 0x18);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              iVar37 = (int)local_148 * 0x19;
                                              local_58 = SUB41(local_150,0);
                                              uStack_57 = (undefined1)((uint)local_150 >> 8);
                                              local_68[0] = 0x3a;
                                              uStack_56 = (undefined1)iVar37;
                                              uStack_55 = (undefined1)((uint)iVar37 >> 8);
                                              uStack_54 = (undefined1)((uint)iVar37 >> 0x10);
                                              uStack_53 = (undefined1)((uint)iVar37 >> 0x18);
                                              /* ST_CALLSITE[006598AD]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5fd:
                                    iVar36 = thunk_FUN_00652300((
                                                  RecoveredRecord_AiEventClassTy_00652300 *)
                                                  &local_16c);
                                    if (iVar36 != 0) {
                                      /* ST_CALLSITE[00659180]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[006591A5]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg1 = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_0065937a:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg1,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              uVar28 = local_140;
                                              if ((pAVar22 == nullptr) ||
                                                 (pAVar22->field_007B == -0x8000)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg1 = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_0065937a;
                                              }
                                              ppuVar35 = &local_20c;
                                              for (iVar37 = 0x12; puVar13 = local_158, iVar37 != 0;
                                                  iVar37 = iVar37 + -1) {
                                                *ppuVar35 = nullptr;
                                                ppuVar35 = ppuVar35 + 1;
                                              }
                                              *(undefined2 *)ppuVar35 = 0;
                                              local_20c = puVar13;
                                              local_208 = 0xffff;
                                              local_206 = 0x5622;
                                              local_204 = 0xfffffff0;
                                              local_200 = 0xfffe;
                                              if (-1 < (int)uVar28) {
                                                local_200 = (undefined2)uVar28;
                                              }
                                              local_1fe = (int)local_138 * 0x19;
                                              local_1f6 = STPiece<0,2>(local_154);
                                              local_1f4 = STPiece<0,2>(local_150);
                                              local_1f2 = STPiece<0,2>(local_14c);
                                              if (((int)local_148 < 0) ||
                                                 (pcVar21 = local_148, 7 < (int)local_148)) {
                                                bVar1 = pAVar22->field_0081;
                                                pcVar21 = (char *)(uint)bVar1;
                                                if (((char)bVar1 < '\0') || ('\a' < (char)bVar1)) {
                                                  pcVar21 = (char *)(uint)(byte)pAVar22->field_0024;
                                                }
                                              }
                                              local_1f0 = SUB41(pcVar21,0);
                                              if (local_144 != nullptr) {
                                                Library::MSVCRT::_strncpy
                                                          (local_1ef,(char *)local_144,0xe);
                                                uVar28 = local_140;
                                              }
                                              if ((((local_20c == (uint *)0xdd) ||
                                                   (local_20c == (uint *)0xde)) ||
                                                  (local_20c == (uint *)0xe2)) ||
                                                 (local_20c == (uint *)0xdc)) {
                                                bVar1 = 1;
                                              }
                                              else {
                                                bVar1 = 0;
                                              }
                                              local_1e0 = -(uint)bVar1 & uVar28;
                                              puVar13 = local_240;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_236 = &local_20c;
                                              local_1ce = 1;
                                              local_240[0] = 0x68;
                                              local_237 = 1;
                                              /* ST_CALLSITE[0065935D]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_240);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  case 0x5fe:
                                    iVar37 = thunk_FUN_00652700((
                                                  RecoveredRecord_AiEventClassTy_00652700 *)
                                                  &local_16c);
                                    if (iVar37 != 0) {
                                      /* ST_CALLSITE[00659907]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  /* ST_CALLSITE[0065992C]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                        if (0 < (int)local_c) {
                                          puVar12 = output_values_neg_34;
                                          do {
                                            pSVar14 = thunk_FUN_0042b760((char)*puVar12,
                                                                         (ushort)local_15c);
                                            uVar33 = local_14;
                                            if (pSVar14 == nullptr) {
                                              uVar28 = *puVar12;
                                              pcVar8_mg0 = &CHAR_00h_008016a0;
                                              iVar37 = -0xaa;
LAB_00659a1c:
                                              thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg0,uVar33,
                                                                 uVar28);
                                            }
                                            else {
                                              pAVar22 = (AiFltClassTy *)
                                                        thunk_FUN_00423300((int)pSVar14);
                                              if ((pAVar22 == nullptr) ||
                                                 (pAVar22->field_007B != 1)) {
                                                uVar28 = *puVar12;
                                                pcVar8_mg0 = thunk_FUN_00674af0(local_EAX_488);
                                                iVar37 = -0xab;
                                                goto LAB_00659a1c;
                                              }
                                              puVar13 = local_68;
                                              for (iVar37 = 0xd; iVar37 != 0; iVar37 = iVar37 + -1)
                                              {
                                                *puVar13 = 0;
                                                puVar13 = puVar13 + 1;
                                              }
                                              local_68[1] = g_playSystem_00802A38->field_00E4;
                                              local_58 = SUB41(local_154,0);
                                              uStack_57 = (undefined1)((uint)local_154 >> 8);
                                              uStack_54 = SUB41(local_14c,0);
                                              uStack_53 = (undefined1)((uint)local_14c >> 8);
                                              uStack_5c = SUB41(local_158,0);
                                              uStack_5b = (undefined1)((uint)local_158 >> 8);
                                              uStack_5a = (undefined1)((uint)local_158 >> 0x10);
                                              uStack_59 = (undefined1)((uint)local_158 >> 0x18);
                                              local_60 = SUB41(local_144,0);
                                              uStack_5f = (undefined1)((uint)local_144 >> 8);
                                              uStack_5e = (undefined1)((uint)local_144 >> 0x10);
                                              uStack_5d = (undefined1)((uint)local_144 >> 0x18);
                                              uStack_56 = SUB41(local_150,0);
                                              uStack_55 = (undefined1)((uint)local_150 >> 8);
                                              iVar37 = local_140 * 0x19;
                                              uStack_52 = SUB41(local_148,0);
                                              uStack_51 = (undefined1)((uint)local_148 >> 8);
                                              uStack_50 = (undefined1)((uint)local_148 >> 0x10);
                                              uStack_4f = (undefined1)((uint)local_148 >> 0x18);
                                              local_68[0] = 0x3b;
                                              local_4e = (undefined2)iVar37;
                                              uStack_4c = (undefined1)((uint)iVar37 >> 0x10);
                                              cStack_4b = (char)((uint)iVar37 >> 0x18);
                                              /* ST_CALLSITE[006599FF]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                                              AiFltClassTy::GetAiMess(pAVar22,local_68);
                                            }
                                            puVar12 = puVar12 + 1;
                                            local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                          } while (local_c != nullptr);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    break;
                                  default:
                                    goto cf_common_join_00659A73;
                                  }
                                  goto cf_common_join_00652A99;
                                }
                                iVar37 = thunk_FUN_006527d0((int)&local_16c);
                                if (iVar37 == 0) {
                                  iVar37 = -1;
                                  uVar33 = local_14;
                                  pcVar8_mg23 = thunk_FUN_00674af0(0x76c);
                                  thunk_FUN_0064d0e0(this_00,-0x7d,pcVar8_mg23,uVar33,iVar37);
                                }
                                else {
                                  DAT_0080c51e = pDStack_164;
                                }
                              }
                              goto cf_common_join_00659A73;
                            }
                            if (local_EAX_488 == 0x5c8) {
                              iVar37 = thunk_FUN_00650ad0((int)&local_16c);
                              if (iVar37 == 0) {
                                iVar37 = -1;
                                uVar33 = local_14;
                                pcVar8_mg25 = thunk_FUN_00674af0(0x5c8);
                                thunk_FUN_0064d0e0(this_00,-0x7d,pcVar8_mg25,uVar33,iVar37);
                              }
                              else {
                                /* ST_CALLSITE[00656EFD]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 == 8) && (pDStack_164 == (DArrayTy *)0x9)) {
                                  iVar37 = -1;
                                  uVar33 = local_14;
                                  pcVar8_mg24 = thunk_FUN_00674af0(0x5c8);
                                  thunk_FUN_0064d0e0(this_00,-0x7d,pcVar8_mg24,uVar33,iVar37);
                                }
                                else {
                                  local_c = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            /* ST_CALLSITE[00656F3A]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                            AnonReceiver_0064A970::sub_00668F50
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    pDVar17 = local_15c;
                                    do {
                                      puVar9 = (undefined1 *)0xffffffff;
                                      if (((int)pDVar17 < 1) || (0x28 < (int)pDVar17)) {
                                        bVar36 = false;
                                      }
                                      else {
                                        bVar36 = true;
                                      }
                                      if (bVar36) {
                                        puVar9 = (undefined1 *)((int)&pDVar17[2].flags + 1);
                                      }
                                      if (((int)pDVar17 < 0x32) || (0x73 < (int)pDVar17)) {
                                        bVar36 = false;
                                      }
                                      else {
                                        bVar36 = true;
                                      }
                                      if (bVar36) {
                                        puVar9 = (undefined1 *)((int)&pDVar17[-2].count + 2);
                                      }
                                      if (-1 < (int)puVar9) {
                                        thunk_FUN_004e6080(*puVar12,(int)puVar9,local_158);
                                        pDVar17 = local_15c;
                                      }
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                }
                              }
                              goto cf_common_join_00659A73;
                            }
                            switch(local_EAX_488) {
                            case 0x594:
                              iVar37 = thunk_FUN_0064feb0((int)&local_16c);
                              if (iVar37 == 0) break;
                              if (local_160 != nullptr) {
                                /* ST_CALLSITE[00655EE1]: CALL 0x00402932; direct=00402932 _EnumArt */
                                _EnumArt(0,(byte *)pDStack_164,0,0,0,-1,-1,-1,thunk_FUN_0064dd70,
                                         local_160);
                              }
                              goto cf_common_join_00659A73;
                            case 0x595:
                              iVar37 = thunk_FUN_0064fef0((short *)&local_16c);
                              if (iVar37 == 0) break;
                              if (((pDStack_164 == (DArrayTy *)0xdd) ||
                                  (pDStack_164 == (DArrayTy *)0xde)) ||
                                 (pDStack_164 == (DArrayTy *)0xe0)) {
                                bVar36 = true;
                              }
                              else {
                                bVar36 = false;
                              }
                              if (bVar36) {
                                local_18c = local_160;
                                local_190 = local_15c;
                                local_184 = local_158;
                                local_EAX_14486 =
                                     thunk_FUN_004b1cf0((int)pDStack_164,(int *)&local_18c,
                                                        (int *)&local_190,(int *)&local_184);
                                if (local_EAX_14486 == 0) goto LAB_00655f4c;
                                thunk_FUN_00580450(local_18c,local_190,local_184,pDStack_164,
                                                   local_154);
                              }
                              goto cf_common_join_00659A73;
                            case 0x596:
                              iVar37 = thunk_FUN_0064ff70((RecoveredRecord_AiEventClassTy_0064FF70 *
                                                          )&local_16c);
                              if (iVar37 == 0) break;
                              DAT_008118fc = 0;
                              /* ST_CALLSITE[0065614B]: CALL 0x00404142; direct=00404142 _EnumRCField */
                              _EnumRCField((short)pDStack_164,(short)local_160,(short)local_15c,
                                           (short)local_158,(short)local_154,(short)local_150,
                                           (short)local_14c,thunk_FUN_0064e260,&local_148);
                              goto cf_common_join_00659A73;
                            case 0x597:
                              iVar37 = thunk_FUN_00650090((RecoveredRecord_AiEventClassTy_00650090 *
                                                          )&local_16c);
                              if (iVar37 == 0) break;
                              /* ST_CALLSITE[006561BC]: CALL 0x00404142; direct=00404142 _EnumRCField */
                              _EnumRCField((short)local_15c,(short)local_158,(short)local_154,
                                           (short)local_150,(short)local_14c,(short)local_148,
                                           (short)local_144,thunk_FUN_0064e290,
                                           (int)local_160 << 0x10 | (uint)pDStack_164 & 0xffff);
                              goto cf_common_join_00659A73;
                            case 0x598:
                              iVar37 = thunk_FUN_006501a0((RecoveredRecord_AiEventClassTy_006501A0 *
                                                          )&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[00655F3F]: CALL 0x0040341d; direct=0040341D AiEventClassTy::_CreateDest */
                                local_EAX_13781 =
                                     _CreateDest(this_00,(short)pDStack_164,(short)local_160,
                                                 (short)local_15c,(short)local_158,(short)local_154,
                                                 (char *)local_150,local_14c,local_148);
                                goto LAB_00655f44;
                              }
                              break;
                            case 0x599:
                              iVar37 = thunk_FUN_00650240((RecoveredRecord_AiEventClassTy_00650240 *
                                                          )&local_16c);
                              if (iVar37 == 0) break;
                              DAT_008118fc = 0;
                              /* ST_CALLSITE[00655FCC]: CALL 0x004013f2; direct=004013F2 _EnumDest */
                              _EnumDest((byte *)local_160,(char)pDStack_164,(short)local_15c,
                                        (short)local_158,(short)local_154,(short)local_150,
                                        (short)local_14c,(short)local_148,thunk_FUN_0064df30,
                                        &local_144);
                              goto cf_common_join_00659A73;
                            case 0x59a:
                              iVar37 = thunk_FUN_00650370((int)&local_16c);
                              if (iVar37 == 0) break;
                              if (local_160 != nullptr) {
                                /* ST_CALLSITE[00656019]: CALL 0x004013f2; direct=004013F2 _EnumDest */
                                _EnumDest((byte *)pDStack_164,-1,0,0,0,-1,-1,-1,thunk_FUN_0064df70,
                                          local_160);
                              }
                              goto cf_common_join_00659A73;
                            case 0x59b:
                              iVar37 = thunk_FUN_006503b0((short *)&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[006561E4]: CALL dword ptr [EAX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  local_c = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            /* ST_CALLSITE[00656209]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                            AnonReceiver_0064A970::sub_00668F50
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    local_8 = (DArrayTy *)output_values_neg_34;
                                    do {
                                      /* ST_CALLSITE[00656260]: CALL 0x0040434a; direct=0040434A AiEventClassTy::_CreateMine */
                                      local_EAX_14928 =
                                           _CreateMine(this_00,(ushort)local_8->flags,
                                                       (short)local_15c,(int)local_158,
                                                       (int)local_154,local_150,(ushort)local_14c,
                                                       local_148,local_144,local_140);
                                      if (local_EAX_14928 != 0) {
                                        dVar15 = local_8->flags;
                                        uVar33 = local_14;
                                        pcVar8_mg2E = thunk_FUN_00674af0(local_EAX_488);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar8_mg2E,uVar33,dVar15);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x59c:
                              iVar37 = thunk_FUN_00650480((RecoveredRecord_AiEventClassTy_00650480 *
                                                          )&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[006562B5]: CALL dword ptr [EAX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  local_c = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            /* ST_CALLSITE[006562DA]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                            AnonReceiver_0064A970::sub_00668F50
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      DAT_008118fc = 0;
                                      /* ST_CALLSITE[00656345]: CALL 0x00403675; direct=00403675 _EnumMines */
                                      _EnumMines(*puVar12,(short)local_15c,(char)local_158,local_154
                                                 ,(short)local_150,(short)local_14c,(short)local_148
                                                 ,(short)local_144,(short)local_140,(short)local_13c
                                                 ,thunk_FUN_0064e1f0,&local_138);
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x59d:
                              iVar37 = thunk_FUN_00650600((RecoveredRecord_AiEventClassTy_00650600 *
                                                          )&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[00656379]: CALL dword ptr [EAX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  local_c = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            /* ST_CALLSITE[0065639E]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                            AnonReceiver_0064A970::sub_00668F50
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      DAT_008118fc = 0;
                                      /* ST_CALLSITE[00656409]: CALL 0x00403675; direct=00403675 _EnumMines */
                                      _EnumMines(*puVar12,(short)local_158,(char)local_154,local_150
                                                 ,(short)local_14c,(short)local_148,(short)local_144
                                                 ,(short)local_140,(short)local_13c,(short)local_138
                                                 ,thunk_FUN_0064e230,local_15c);
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            default:
                              goto cf_common_join_00659A73;
                            case 0x5aa:
                              iVar37 = thunk_FUN_00650760((short *)&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[0065643D]: CALL dword ptr [EAX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  local_c = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            /* ST_CALLSITE[00656462]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                            AnonReceiver_0064A970::sub_00668F50
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      thunk_FUN_004e76e0(*puVar12,&local_15c->flags,(byte)local_158);
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5ab:
                              iVar37 = thunk_FUN_00650760((short *)&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[006564BD]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  local_c = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            /* ST_CALLSITE[006564E2]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                            AnonReceiver_0064A970::sub_00668F50
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      thunk_FUN_004e7980((uint *)*puVar12,(int)local_15c,
                                                         (byte)local_158);
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5ac:
                              iVar37 = thunk_FUN_00650820((short *)&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[00656621]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  /* ST_CALLSITE[00656646]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                  iVar37_mg9E = SubmarineTitans::Recovered::HiddenThis::
                                                AnonReceiver_0064A970::sub_00668F50
                                                          ((AnonReceiver_0064A970 *)this_00,
                                                           (char *)pDStack_164,(uint)local_160,
                                                           output_values_neg_34);
                                  if (0 < iVar37_mg9E) {
                                    local_8 = (DArrayTy *)output_values_neg_34;
                                    do {
                                      pAVar10 = thunk_FUN_004357f0((char)local_8->flags);
                                      if (pAVar10 == nullptr) {
                                        dVar15 = local_8->flags;
                                        uVar33 = local_14;
                                        pcVar8_mg2D = thunk_FUN_00674af0(local_EAX_488);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar8_mg2D,uVar33,dVar15);
                                      }
                                      else {
                                        /* ST_CALLSITE[0065668A]: CALL 0x00402e37; direct=00402E37 AiPlrClassTy::SetTech */
                                        AiPlrClassTy::SetTech
                                                  (pAVar10,(int)local_15c,(int)local_158,
                                                   (int)local_154,-1);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      iVar37_mg9E = iVar37_mg9E + -1;
                                    } while (iVar37_mg9E != 0);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5ad:
                              iVar37 = thunk_FUN_006508c0((short *)&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[006566DD]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  local_c = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            /* ST_CALLSITE[00656702]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                            AnonReceiver_0064A970::sub_00668F50
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      thunk_FUN_004e6310((byte *)*puVar12,(uint)local_15c,
                                                         (uint)local_158);
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5ae:
                              iVar37 = thunk_FUN_006509e0((int)&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[006567E4]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  local_c = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            /* ST_CALLSITE[00656809]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                            AnonReceiver_0064A970::sub_00668F50
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      thunk_FUN_004e75f0(*puVar12);
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5af:
                              iVar37 = thunk_FUN_00650a20((AnonShape_00650A20_4A198923 *)&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[00656856]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  /* ST_CALLSITE[0065687B]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                  iVar37_mg97 = SubmarineTitans::Recovered::HiddenThis::
                                                AnonReceiver_0064A970::sub_00668F50
                                                          ((AnonReceiver_0064A970 *)this_00,
                                                           (char *)pDStack_164,(uint)local_160,
                                                           output_values_neg_34);
                                  if (0 < iVar37_mg97) {
                                    local_8 = (DArrayTy *)output_values_neg_34;
                                    do {
                                      pAVar10 = thunk_FUN_004357f0((char)local_8->flags);
                                      if (pAVar10 == nullptr) {
                                        dVar15 = local_8->flags;
                                        uVar33 = local_14;
                                        pcVar8_mg2C = thunk_FUN_00674af0(local_EAX_488);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar8_mg2C,uVar33,dVar15);
                                      }
                                      else {
                                        thunk_FUN_0067b210(pAVar10,(int)local_15c,(int)local_158);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      iVar37_mg97 = iVar37_mg97 + -1;
                                    } while (iVar37_mg97 != 0);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b0:
                              iVar37 = thunk_FUN_00650a90((int)&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[00656909]: CALL dword ptr [EAX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  /* ST_CALLSITE[0065692E]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                  iVar37_mg94 = SubmarineTitans::Recovered::HiddenThis::
                                                AnonReceiver_0064A970::sub_00668F50
                                                          ((AnonReceiver_0064A970 *)this_00,
                                                           (char *)pDStack_164,(uint)local_160,
                                                           output_values_neg_34);
                                  if (0 < iVar37_mg94) {
                                    local_8 = (DArrayTy *)output_values_neg_34;
                                    do {
                                      pAVar10 = thunk_FUN_004357f0((char)local_8->flags);
                                      if (pAVar10 == nullptr) {
                                        dVar15 = local_8->flags;
                                        uVar33 = local_14;
                                        pcVar8_mg2B = thunk_FUN_00674af0(local_EAX_488);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar8_mg2B,uVar33,dVar15);
                                      }
                                      else {
                                        thunk_FUN_0067b260((int)pAVar10);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      iVar37_mg94 = iVar37_mg94 + -1;
                                    } while (iVar37_mg94 != 0);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b1:
                              iVar37 = thunk_FUN_006507e0((int)&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[0065653D]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  local_c = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            /* ST_CALLSITE[00656562]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                            AnonReceiver_0064A970::sub_00668F50
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      thunk_FUN_004e7d70(*puVar12);
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b2:
                              iVar37 = thunk_FUN_006507e0((int)&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[006565AF]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  local_c = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            /* ST_CALLSITE[006565D4]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                            AnonReceiver_0064A970::sub_00668F50
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      thunk_FUN_004e7e10((uint *)*puVar12);
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b3:
                              iVar37 = thunk_FUN_00650940((short *)&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[0065675D]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  local_c = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            /* ST_CALLSITE[00656782]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                            AnonReceiver_0064A970::sub_00668F50
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      thunk_FUN_004e7390((byte *)*puVar12,(uint)local_15c,
                                                         (uint)local_158,(int)local_154);
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b4:
                              iVar37 = thunk_FUN_00650b10((RecoveredRecord_AiEventClassTy_00650B10 *
                                                          )&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[006569AE]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  /* ST_CALLSITE[006569D3]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                  iVar37_mg8B = SubmarineTitans::Recovered::HiddenThis::
                                                AnonReceiver_0064A970::sub_00668F50
                                                          ((AnonReceiver_0064A970 *)this_00,
                                                           (char *)pDStack_164,(uint)local_160,
                                                           output_values_neg_34);
                                  if (0 < iVar37_mg8B) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      local_c = (DArrayTy *)0xffffffff;
                                      if (g_allPlayers_007FA174 == nullptr) {
                                        pAVar10 = nullptr;
                                      }
                                      else {
                                        pAVar10 = thunk_FUN_004357f0((char)*puVar12);
                                      }
                                      if (pAVar10 != nullptr) {
                                        local_c = (DArrayTy *)
                                                  SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_00678E00::thunk_FUN_00679120
                                                            ((AnonReceiver_00678E00 *)pAVar10,
                                                             (byte *)local_15c,(int)local_158,
                                                             (int)local_154,(int)local_150);
                                      }
                                      if ((int)local_c < 0) {
                                        thunk_FUN_0064d0e0(this_00,-4,(char *)local_15c,local_14,
                                                           *puVar12);
                                      }
                                      puVar12 = puVar12 + 1;
                                      iVar37_mg8B = iVar37_mg8B + -1;
                                    } while (iVar37_mg8B != 0);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b5:
                              iVar37 = thunk_FUN_00650f50((int)&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[00656D50]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  /* ST_CALLSITE[00656D75]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                  iVar37_mg88 = SubmarineTitans::Recovered::HiddenThis::
                                                AnonReceiver_0064A970::sub_00668F50
                                                          ((AnonReceiver_0064A970 *)this_00,
                                                           (char *)pDStack_164,(uint)local_160,
                                                           output_values_neg_34);
                                  if (0 < iVar37_mg88) {
                                    local_8 = (DArrayTy *)output_values_neg_34;
                                    do {
                                      if (g_allPlayers_007FA174 == nullptr) {
                                        pAVar19 = nullptr;
                                      }
                                      else {
                                        pAVar19 = (AnonShape_00679600_B8E418A8 *)
                                                  thunk_FUN_004357f0((char)local_8->flags);
                                      }
                                      if (pAVar19 == nullptr) {
                                        dVar15 = local_8->flags;
                                        uVar33 = local_14;
                                        pcVar8_mg2A = thunk_FUN_00674af0(local_EAX_488);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar8_mg2A,uVar33,dVar15);
                                      }
                                      else {
                                        pAVar19->field_0644 = (char)local_15c;
                                        pAVar19->field_0640 = local_158;
                                        thunk_FUN_00679600(pAVar19);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      iVar37_mg88 = iVar37_mg88 + -1;
                                    } while (iVar37_mg88 != 0);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b6:
                              local_EAX_17905 = thunk_FUN_00650f90((short *)&local_16c);
                              if (local_EAX_17905 != 0) {
                                /* ST_CALLSITE[00656E15]: CALL dword ptr [EAX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  /* ST_CALLSITE[00656E3A]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                  iVar37_mg85 = SubmarineTitans::Recovered::HiddenThis::
                                                AnonReceiver_0064A970::sub_00668F50
                                                          ((AnonReceiver_0064A970 *)this_00,
                                                           (char *)pDStack_164,(uint)local_160,
                                                           output_values_neg_34);
                                  if (0 < iVar37_mg85) {
                                    local_8 = (DArrayTy *)output_values_neg_34;
                                    do {
                                      if (g_allPlayers_007FA174 == nullptr) {
                                        pAVar10 = nullptr;
                                      }
                                      else {
                                        pAVar10 = thunk_FUN_004357f0((char)local_8->flags);
                                      }
                                      if (pAVar10 == nullptr) {
                                        dVar15 = local_8->flags;
                                        uVar33 = local_14;
                                        pcVar8_mg29 = thunk_FUN_00674af0(local_EAX_488);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar8_mg29,uVar33,dVar15);
                                      }
                                      else {
                                        thunk_FUN_0065bd20(pAVar10,(byte)local_15c,(ushort)local_158
                                                           ,(ushort)local_154,(ushort)local_150,
                                                           local_14c);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      iVar37_mg85 = iVar37_mg85 + -1;
                                    } while (iVar37_mg85 != 0);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b7:
                              iVar37 = thunk_FUN_00650bd0((RecoveredRecord_AiEventClassTy_00650BD0 *
                                                          )&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[00656A74]: CALL dword ptr [EAX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  local_8 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            /* ST_CALLSITE[00656A99]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                            AnonReceiver_0064A970::sub_00668F50
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_8) {
                                    local_10 = (AiFltClassTy *)output_values_neg_34;
                                    do {
                                      pDVar17 = (DArrayTy *)
                                                thunk_FUN_00677290(local_10->vtable,(uint)local_15c,
                                                                   (char)local_158,(short)local_154,
                                                                   (short)local_150,(short)local_14c
                                                                   ,(short)local_148,
                                                                   (short)local_144,(short)local_140
                                                                   ,1);
                                      if (pDVar17 == nullptr) {
                                        pAVar38 = local_10->vtable;
                                        uVar33 = local_14;
                                        pcVar8_mg28 = thunk_FUN_00674af0(local_EAX_488);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar8_mg28,uVar33,
                                                           (int)pAVar38);
                                      }
                                      else {
                                        thunk_FUN_00675dc0((uint)local_10->vtable,pDVar17);
                                        DArrayDestroy(pDVar17);
                                      }
                                      local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                      local_8 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                    } while (local_8 != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b8:
                              iVar37 = thunk_FUN_00650cf0((RecoveredRecord_AiEventClassTy_00650CF0 *
                                                          )&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[00656B68]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  local_8 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            /* ST_CALLSITE[00656B8D]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                            AnonReceiver_0064A970::sub_00668F50
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_8) {
                                    local_10 = (AiFltClassTy *)output_values_neg_34;
                                    do {
                                      pDVar17 = (DArrayTy *)
                                                thunk_FUN_006773b0(local_10->vtable,(uint)local_15c,
                                                                   (char)local_158,(short)local_154,
                                                                   (short)local_150,(short)local_14c
                                                                   ,(short)local_148,
                                                                   (short)local_144,(short)local_140
                                                                   ,1);
                                      if (pDVar17 == nullptr) {
                                        pAVar38 = local_10->vtable;
                                        uVar33 = local_14;
                                        pcVar8_mg27 = thunk_FUN_00674af0(local_EAX_488);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar8_mg27,uVar33,
                                                           (int)pAVar38);
                                      }
                                      else {
                                        thunk_FUN_00675dc0((uint)local_10->vtable,pDVar17);
                                        DArrayDestroy(pDVar17);
                                      }
                                      local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                      local_8 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                    } while (local_8 != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                              break;
                            case 0x5b9:
                              iVar37 = thunk_FUN_00650e10((RecoveredRecord_AiEventClassTy_00650E10 *
                                                          )&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[00656C5C]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  local_8 = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            /* ST_CALLSITE[00656C81]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                            AnonReceiver_0064A970::sub_00668F50
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_8) {
                                    local_10 = (AiFltClassTy *)output_values_neg_34;
                                    do {
                                      pDVar17 = (DArrayTy *)
                                                thunk_FUN_006774c0(local_10->vtable,
                                                                   (byte *)local_15c,(char)local_158
                                                                   ,(short)local_154,
                                                                   (short)local_150,(short)local_14c
                                                                   ,(short)local_148,
                                                                   (short)local_144,(short)local_140
                                                                   ,1);
                                      if (pDVar17 == nullptr) {
                                        pAVar38 = local_10->vtable;
                                        uVar33 = local_14;
                                        pcVar8_mg26 = thunk_FUN_00674af0(local_EAX_488);
                                        thunk_FUN_0064d0e0(this_00,-0xab,pcVar8_mg26,uVar33,
                                                           (int)pAVar38);
                                      }
                                      else {
                                        thunk_FUN_00675dc0((uint)local_10->vtable,pDVar17);
                                        DArrayDestroy(pDVar17);
                                      }
                                      local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                      local_8 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                    } while (local_8 != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                            }
                            goto cf_common_join_00652A99;
                          }
                          if (local_EAX_488 == 0x593) {
                            iVar37 = thunk_FUN_0064fd80((RecoveredRecord_AiEventClassTy_0064FD80 *)
                                                        &local_16c);
                            if (iVar37 == 0) {
                              iVar37 = -1;
                              uVar33 = local_14;
                              pcVar8_mg2F = thunk_FUN_00674af0(0x593);
                              thunk_FUN_0064d0e0(this_00,-0x7d,pcVar8_mg2F,uVar33,iVar37);
                            }
                            else {
                              DAT_008118fc = 0;
                              /* ST_CALLSITE[00655E6C]: CALL 0x00402932; direct=00402932 _EnumArt */
                              _EnumArt((short)pDStack_164,(byte *)local_160,(short)local_15c,
                                       (short)local_158,(short)local_154,(short)local_150,
                                       (short)local_14c,(short)local_148,thunk_FUN_0064dd30,
                                       &local_144);
                            }
                            goto cf_common_join_00659A73;
                          }
                          if (local_EAX_488 < 0x54e) {
                            if (local_EAX_488 == 0x54d) {
                              iVar37 = thunk_FUN_0064ef10((int)&local_16c);
                              if (iVar37 == 0) {
                                iVar37 = -1;
                                uVar33 = local_14;
                                pcVar8_mg31 = thunk_FUN_00674af0(0x54d);
                                thunk_FUN_0064d0e0(this_00,-0x7d,pcVar8_mg31,uVar33,iVar37);
                              }
                              else {
                                /* ST_CALLSITE[00653D4F]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 == 8) && (pDStack_164 == (DArrayTy *)0x9)) {
                                  iVar37 = -1;
                                  uVar33 = local_14;
                                  pcVar8_mg30 = thunk_FUN_00674af0(0x54d);
                                  thunk_FUN_0064d0e0(this_00,-0x7d,pcVar8_mg30,uVar33,iVar37);
                                }
                                else {
                                  /* ST_CALLSITE[00653D8C]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                  local_EAX_5500 =
                                       SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970
                                       ::sub_00668F50((AnonReceiver_0064A970 *)this_00,
                                                      (char *)pDStack_164,(uint)local_160,
                                                      output_values_neg_34);
                                  iVar37 = 0;
                                  if (0 < local_EAX_5500) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      if (*puVar12 == (uint)DAT_0080874d) {
                                        if (g_opticClass_007FB2A0 != nullptr) {
                                          thunk_FUN_004aaf60((int)local_15c);
                                        }
                                        break;
                                      }
                                      iVar37 = iVar37 + 1;
                                      puVar12 = puVar12 + 1;
                                    } while (iVar37 < local_EAX_5500);
                                  }
                                }
                              }
                              goto cf_common_join_00659A73;
                            }
                            if (local_EAX_488 < 0x51b) {
                              if (local_EAX_488 == 0x51a) {
                                iVar37 = thunk_FUN_0064e960((int)&local_16c);
                                if (iVar37 == 0) {
                                  iVar37 = -1;
                                  uVar33 = local_14;
                                  pcVar8_mg32 = thunk_FUN_00674af0(0x51a);
                                  thunk_FUN_0064d0e0(this_00,-0x7d,pcVar8_mg32,uVar33,iVar37);
                                }
                                else {
                                  this_00->field_052F[(int)pDStack_164] = (uint)local_160;
                                }
                                goto cf_common_join_00659A73;
                              }
                              if (0x3e < local_EAX_488) {
                                if (local_EAX_488 < 0x517) {
                                  if (local_EAX_488 == 0x516) {
                                    iVar37 = thunk_FUN_0064e7c0((short *)&local_16c);
                                    if (iVar37 == 0) {
                                      iVar37 = -1;
                                      uVar33 = local_14;
                                      pcVar8_mg37 = thunk_FUN_00674af0(0x516);
                                      thunk_FUN_0064d0e0(this_00,-0x7d,pcVar8_mg37,uVar33,iVar37);
                                    }
                                    else {
                                      if (pDStack_164 == (DArrayTy *)0x9) {
                                        /* ST_CALLSITE[00652FD4]: CALL dword ptr [EDX + 0x18] */
                                        iVar37 = this_00->vfunc_18();
                                        if (iVar37 == 8) {
                                          pDVar17 = local_15c;
                                          if ((int)local_15c <= (int)local_158) {
                                            do {
                                              puVar9 = (undefined1 *)
                                                       thunk_FUN_0064e510(this_00,(int)pDVar17);
                                              if (puVar9 != nullptr) {
                                                *puVar9 = 0;
                                              }
                                              pDVar17 = (DArrayTy *)((int)&pDVar17->flags + 1);
                                            } while ((int)pDVar17 <= (int)local_158);
                                          }
                                          goto cf_common_join_00659A73;
                                        }
                                      }
                                      /* ST_CALLSITE[00653023]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                      iVar37_mgC4 = SubmarineTitans::Recovered::HiddenThis::
                                                    AnonReceiver_0064A970::sub_00668F50
                                                              ((AnonReceiver_0064A970 *)this_00,
                                                               (char *)pDStack_164,(uint)local_160,
                                                               output_values_neg_34);
                                      if (0 < iVar37_mgC4) {
                                        local_8 = (DArrayTy *)output_values_neg_34;
                                        do {
                                          if (g_allPlayers_007FA174 == nullptr) {
                                            local_10 = nullptr;
                                          }
                                          else {
                                            local_10 = (AiFltClassTy *)
                                                       thunk_FUN_004357f0((char)local_8->flags);
                                          }
                                          pDVar17 = local_15c;
                                          if ((int)local_15c <= (int)local_158) {
                                            do {
                                              if (local_10 != nullptr) {
                                                puVar9 = (undefined1 *)
                                                         thunk_FUN_0064e510(&local_10->field_001C,
                                                                            (int)pDVar17);
                                                if (puVar9 != nullptr) {
                                                  *puVar9 = 0;
                                                }
                                              }
                                              pDVar17 = (DArrayTy *)((int)&pDVar17->flags + 1);
                                            } while ((int)pDVar17 <= (int)local_158);
                                          }
                                          local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                          iVar37_mgC4 = iVar37_mgC4 + -1;
                                        } while (iVar37_mgC4 != 0);
                                      }
                                    }
                                  }
                                  else if (local_EAX_488 == 0x42) {
                                    iVar37 = thunk_FUN_0064e700((int)&local_16c);
                                    if (iVar37 == 0) {
                                      iVar37 = -1;
                                      uVar33 = local_14;
                                      pcVar8_mg38 = thunk_FUN_00674af0(0x42);
                                      thunk_FUN_0064d0e0(this_00,-0x7d,pcVar8_mg38,uVar33,iVar37);
                                    }
                                    else {
                                      pDVar17 = local_160;
                                      if (pDStack_164 == nullptr)
                                      goto cf_continue_loop_00659A80;
                                    }
                                  }
                                  else if (local_EAX_488 == 0x322) {
                                    local_174 = 1;
                                  }
                                  else if (local_EAX_488 == 0x515) {
                                    iVar37 = thunk_FUN_0064e780((short *)&local_16c);
                                    if (iVar37 == 0) {
                                      iVar37 = -1;
                                      uVar33 = local_14;
                                      pcVar8_mg39 = thunk_FUN_00674af0(0x515);
                                      thunk_FUN_0064d0e0(this_00,-0x7d,pcVar8_mg39,uVar33,iVar37);
                                    }
                                    else if (pDStack_164 == nullptr) {
                                      *(undefined1 *)local_178 = 0;
                                      local_178->field_000B = 0;
                                    }
                                    else {
                                      *(undefined1 *)local_178 = 1;
                                      local_178->field_000B = pDStack_164;
                                    }
                                  }
                                }
                                else if (local_EAX_488 == 0x517) {
                                  iVar37 = thunk_FUN_0064e830((short *)&local_16c);
                                  if (iVar37 == 0) {
                                    iVar37 = -1;
                                    uVar33 = local_14;
                                    pcVar8_mg33 = thunk_FUN_00674af0(0x517);
                                    thunk_FUN_0064d0e0(this_00,-0x7d,pcVar8_mg33,uVar33,iVar37);
                                  }
                                  else {
                                    if (pDStack_164 == (DArrayTy *)0x9) {
                                      /* ST_CALLSITE[0065321C]: CALL dword ptr [EDX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if (iVar37 == 8) {
                                        pDVar17 = local_15c;
                                        if ((int)local_15c <= (int)local_158) {
                                          do {
                                            puVar9 = (undefined1 *)
                                                     thunk_FUN_0064e510(this_00,(int)pDVar17);
                                            if (puVar9 != nullptr) {
                                              *puVar9 = 1;
                                              *(byte **)(puVar9 + 0xb) = local_154;
                                            }
                                            pDVar17 = (DArrayTy *)((int)&pDVar17->flags + 1);
                                          } while ((int)pDVar17 <= (int)local_158);
                                        }
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    local_c = (DArrayTy *)
                                              SubmarineTitans::Recovered::HiddenThis::
                                              /* ST_CALLSITE[00653274]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                              AnonReceiver_0064A970::sub_00668F50
                                                        ((AnonReceiver_0064A970 *)this_00,
                                                         (char *)pDStack_164,(uint)local_160,
                                                         output_values_neg_34);
                                    if (0 < (int)local_c) {
                                      local_8 = (DArrayTy *)output_values_neg_34;
                                      do {
                                        if (g_allPlayers_007FA174 == nullptr) {
                                          local_10 = nullptr;
                                        }
                                        else {
                                          local_10 = (AiFltClassTy *)
                                                     thunk_FUN_004357f0((char)local_8->flags);
                                        }
                                        pDVar17 = local_15c;
                                        if ((int)local_15c <= (int)local_158) {
                                          do {
                                            if (local_10 != nullptr) {
                                              puVar9 = (undefined1 *)
                                                       thunk_FUN_0064e510(&local_10->field_001C,
                                                                          (int)pDVar17);
                                              if (puVar9 != nullptr) {
                                                *puVar9 = 1;
                                                *(byte **)(puVar9 + 0xb) = local_154;
                                              }
                                            }
                                            pDVar17 = (DArrayTy *)((int)&pDVar17->flags + 1);
                                          } while ((int)pDVar17 <= (int)local_158);
                                        }
                                        local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                        local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                      } while (local_c != nullptr);
                                    }
                                  }
                                }
                                else if (local_EAX_488 == 0x518) {
                                  iVar37 = thunk_FUN_0064e8c0((int)&local_16c);
                                  if (iVar37 == 0) {
                                    iVar37 = -1;
                                    uVar33 = local_14;
                                    pcVar8_mg35 = thunk_FUN_00674af0(0x518);
                                    thunk_FUN_0064d0e0(this_00,-0x7d,pcVar8_mg35,uVar33,iVar37);
                                  }
                                  else {
                                    if (pDStack_164 == (DArrayTy *)0x9) {
                                      /* ST_CALLSITE[0065313E]: CALL dword ptr [EAX + 0x18] */
                                      iVar37 = this_00->vfunc_18();
                                      if (iVar37 == 8) {
                                        *(uint **)(&this_00->field_0xde + (int)local_15c * 4) =
                                             local_158;
                                        goto cf_common_join_00659A73;
                                      }
                                    }
                                    /* ST_CALLSITE[00653172]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                    iVar37_mgBE = SubmarineTitans::Recovered::HiddenThis::
                                                  AnonReceiver_0064A970::sub_00668F50
                                                            ((AnonReceiver_0064A970 *)this_00,
                                                             (char *)pDStack_164,(uint)local_160,
                                                             output_values_neg_34);
                                    if (0 < iVar37_mgBE) {
                                      puVar12 = output_values_neg_34;
                                      do {
                                        if (g_allPlayers_007FA174 == nullptr) {
                                          pAVar10 = nullptr;
                                        }
                                        else {
                                          pAVar10 = thunk_FUN_004357f0((char)*puVar12);
                                        }
                                        if (pAVar10 == nullptr) {
                                          uVar33 = *puVar12;
                                          uVar28 = local_14;
                                          pcVar8_mg34 = thunk_FUN_00674af0(0x518);
                                          thunk_FUN_0064d0e0(this_00,-0xab,pcVar8_mg34,uVar28,uVar33
                                                            );
                                        }
                                        else {
                                          *(uint **)(&pAVar10->field_0xfa + (int)local_15c * 4) =
                                               local_158;
                                        }
                                        puVar12 = puVar12 + 1;
                                        iVar37_mgBE = iVar37_mgBE + -1;
                                      } while (iVar37_mgBE != 0);
                                    }
                                  }
                                }
                                else if (local_EAX_488 == 0x519) {
                                  iVar37 = thunk_FUN_0064e910((int)&local_16c);
                                  if (iVar37 == 0) {
                                    iVar37 = -1;
                                    uVar33 = local_14;
                                    pcVar8_mg36 = thunk_FUN_00674af0(0x519);
                                    thunk_FUN_0064d0e0(this_00,-0x7d,pcVar8_mg36,uVar33,iVar37);
                                  }
                                  else {
                                    (&DAT_0080e43b)[(int)pDStack_164] = local_160;
                                  }
                                }
                                goto cf_common_join_00659A73;
                              }
                              if (local_EAX_488 == 0x3e) {
switchD_00652b42_switchD:
                                switch(static_cast<uint32_t>(STRawWord(local_15c))) {
                                case 0:
                                  iVar37 = thunk_FUN_0064ea10((int)&local_16c);
                                  if (iVar37 == 0) goto cf_common_join_00652A99;
                                  switch(local_EAX_488) {
                                  case 2:
                                    *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4) =
                                         (int)&local_160->flags +
                                         *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4);
                                    break;
                                  case 5:
                                    *(DArrayTy **)(&this_00->field_0xde + (int)pDStack_164 * 4) =
                                         local_160;
                                    break;
                                  case 0x17:
                                    if (local_160 == nullptr) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&CHAR_00h_008016a0,local_14,
                                                         -1);
                                    }
                                    else {
                                      *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4) =
                                           *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4) /
                                           (int)local_160;
                                    }
                                    break;
                                  case 0x2d:
                                    if (local_160 == nullptr) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&CHAR_00h_008016a0,local_14,
                                                         -1);
                                    }
                                    else {
                                      *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4) =
                                           *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4) %
                                           (int)local_160;
                                    }
                                    break;
                                  case 0x31:
                                    *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4) =
                                         *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4) *
                                         (int)local_160;
                                    break;
                                  case 0x3e:
                                    *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4) =
                                         *(int *)(&this_00->field_0xde + (int)pDStack_164 * 4) -
                                         (int)local_160;
                                  }
                                  break;
                                case 0x1:
                                  iVar37 = thunk_FUN_0064ea10((int)&local_16c);
                                  if (iVar37 == 0) goto cf_common_join_00652A99;
                                  switch(local_EAX_488) {
                                  case 2:
                                    (&DAT_0080e43b)[(int)pDStack_164] =
                                         (int)&local_160->flags + (&DAT_0080e43b)[(int)pDStack_164];
                                    break;
                                  case 5:
                                    (&DAT_0080e43b)[(int)pDStack_164] = local_160;
                                    break;
                                  case 0x17:
                                    if (local_160 == nullptr) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&CHAR_00h_008016a0,local_14,
                                                         -1);
                                    }
                                    else {
                                      (&DAT_0080e43b)[(int)pDStack_164] =
                                           (int)(&DAT_0080e43b)[(int)pDStack_164] / (int)local_160;
                                    }
                                    break;
                                  case 0x2d:
                                    if (local_160 == nullptr) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&CHAR_00h_008016a0,local_14,
                                                         -1);
                                    }
                                    else {
                                      (&DAT_0080e43b)[(int)pDStack_164] =
                                           (int)(&DAT_0080e43b)[(int)pDStack_164] % (int)local_160;
                                    }
                                    break;
                                  case 0x31:
                                    (&DAT_0080e43b)[(int)pDStack_164] =
                                         (&DAT_0080e43b)[(int)pDStack_164] * (int)local_160;
                                    break;
                                  case 0x3e:
                                    (&DAT_0080e43b)[(int)pDStack_164] =
                                         (&DAT_0080e43b)[(int)pDStack_164] - (int)local_160;
                                  }
                                  break;
                                case 0x2:
                                  iVar37 = thunk_FUN_0064ea60((int)&local_16c);
                                  if (iVar37 == 0) goto cf_common_join_00652A99;
                                  switch(local_EAX_488) {
                                  case 2:
                                    this_00->field_052F[(int)pDStack_164] =
                                         (int)&local_160->flags +
                                         this_00->field_052F[(int)pDStack_164];
                                    break;
                                  case 5:
                                    this_00->field_052F[(int)pDStack_164] = (uint)local_160;
                                    break;
                                  case 0x17:
                                    if (local_160 == nullptr) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&CHAR_00h_008016a0,local_14,
                                                         -1);
                                    }
                                    else {
                                      this_00->field_052F[(int)pDStack_164] =
                                           (int)this_00->field_052F[(int)pDStack_164] /
                                           (int)local_160;
                                    }
                                    break;
                                  case 0x2d:
                                    if (local_160 == nullptr) {
                                      thunk_FUN_0064d0e0(this_00,-0x67,&CHAR_00h_008016a0,local_14,
                                                         -1);
                                    }
                                    else {
                                      this_00->field_052F[(int)pDStack_164] =
                                           (int)this_00->field_052F[(int)pDStack_164] %
                                           (int)local_160;
                                    }
                                    break;
                                  case 0x31:
                                    this_00->field_052F[(int)pDStack_164] =
                                         this_00->field_052F[(int)pDStack_164] * (int)local_160;
                                    break;
                                  case 0x3e:
                                    this_00->field_052F[(int)pDStack_164] =
                                         this_00->field_052F[(int)pDStack_164] - (int)local_160;
                                  }
                                  break;
                                case 0x3:
                                  iVar37 = thunk_FUN_0064eaa0((int)&local_16c);
                                  if (iVar37 == 0) goto cf_common_join_00652A99;
                                  if (local_EAX_488 == 5) {
                                    Library::DKW::TBL::FUN_006b6020
                                              (this_00->field_05B3,(uint)pDStack_164,
                                               (char *)local_160);
                                  }
                                }
                                goto cf_common_join_00659A73;
                              }
                              switch(local_EAX_488) {
                              case 2:
                              case 5:
                              case 0x17:
                              case 0x2d:
                              case 0x31:
                                goto switchD_00652b42_switchD;
                              case 0x19:
                                iVar37 = thunk_FUN_0064e6c0((int)&local_16c);
                                if (iVar37 == 0) goto cf_common_join_00652A99;
                                if (local_174 != 0) {
                                  local_174 = 0;
                                  local_170 = pDStack_164;
                                  pDVar17 = local_170;
                                  goto cf_continue_loop_00659A80;
                                }
                                local_174 = 0;
                                break;
                              case 0x21:
                                iVar37 = thunk_FUN_0064e740((int)&local_16c);
                                pDVar17 = pDStack_164;
                                if (iVar37 == 0) goto cf_common_join_00652A99;
                                goto cf_continue_loop_00659A80;
                              case 0x23:
                                iVar37 = thunk_FUN_0064e680((int)&local_16c);
                                if (iVar37 == 0) goto cf_common_join_00652A99;
                                if (pDStack_164 == nullptr) {
                                  local_170 = local_160;
                                  pDVar17 = local_170;
                                  goto cf_continue_loop_00659A80;
                                }
                              }
                              goto cf_common_join_00659A73;
                            }
                            switch(static_cast<uint32_t>(STRawWord(local_EAX_488))) {
                            case 0x51b:
                              iVar37 = thunk_FUN_0064e9a0((int)&local_16c);
                              if (iVar37 == 0) goto cf_common_join_00652A99;
                              Library::DKW::TBL::FUN_006b6020
                                        (this_00->field_05B3,(uint)pDStack_164,(char *)local_160);
                              break;
                            case 0x528:
                              local_EAX_2959 = thunk_FUN_0064eb20((int)&local_16c);
                              if (local_EAX_2959 != 0) {
                                /* ST_CALLSITE[006533B3]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  local_c = (DArrayTy *)
                                            SubmarineTitans::Recovered::HiddenThis::
                                            /* ST_CALLSITE[006533D8]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                            AnonReceiver_0064A970::sub_00668F50
                                                      ((AnonReceiver_0064A970 *)this_00,
                                                       (char *)pDStack_164,(uint)local_160,
                                                       output_values_neg_34);
                                  if (0 < (int)local_c) {
                                    puVar12 = output_values_neg_34;
                                    pCVar24 = g_cPanel_00801688;
                                    do {
                                      if (pCVar24 != nullptr) {
                                        /* ST_CALLSITE[00653401]: CALL 0x00401410; direct=00401410 CPanelTy::sub_004F9120 */
                                        CPanelTy::sub_004F9120
                                                  (pCVar24,(byte)*puVar12,'\x01',local_15c);
                                        pCVar24 = g_cPanel_00801688;
                                      }
                                      puVar12 = puVar12 + 1;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x529:
                              iVar37 = thunk_FUN_0064eb60((int)&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[00653438]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  /* ST_CALLSITE[0065345D]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                  iVar37_mgF4 = SubmarineTitans::Recovered::HiddenThis::
                                                AnonReceiver_0064A970::sub_00668F50
                                                          ((AnonReceiver_0064A970 *)this_00,
                                                           (char *)pDStack_164,(uint)local_160,
                                                           output_values_neg_34);
                                  if (0 < iVar37_mgF4) {
                                    puVar12 = output_values_neg_34;
                                    pCVar24 = g_cPanel_00801688;
                                    do {
                                      if (pCVar24 != nullptr) {
                                        /* ST_CALLSITE[00653481]: CALL 0x00401410; direct=00401410 CPanelTy::sub_004F9120 */
                                        CPanelTy::sub_004F9120(pCVar24,(byte)*puVar12,'\0',0);
                                        pCVar24 = g_cPanel_00801688;
                                      }
                                      puVar12 = puVar12 + 1;
                                      iVar37_mgF4 = iVar37_mgF4 + -1;
                                    } while (iVar37_mgF4 != 0);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x52a:
                              iVar37 = thunk_FUN_0064eba0((int)&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[006534B8]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  /* ST_CALLSITE[006534DD]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                  local_EAX_3277 =
                                       SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970
                                       ::sub_00668F50((AnonReceiver_0064A970 *)this_00,
                                                      (char *)pDStack_164,(uint)local_160,
                                                      output_values_neg_34);
                                  iVar37 = 0;
                                  if (0 < local_EAX_3277) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      if (*puVar12 == (uint)DAT_0080874d) {
                                        if (g_cPanel_00801688 != nullptr) {
                                          thunk_FUN_004f9260((char)local_15c);
                                        }
                                        break;
                                      }
                                      iVar37 = iVar37 + 1;
                                      puVar12 = puVar12 + 1;
                                    } while (iVar37 < local_EAX_3277);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x532:
                              local_EAX_3358 = thunk_FUN_0064ebe0((int)&local_16c);
                              if (local_EAX_3358 == 0) goto cf_common_join_00652A99;
                              if (g_popUp_008016D8 != nullptr) {
                                if (pDStack_164 == (DArrayTy *)0x9) {
                                  /* ST_CALLSITE[00653558]: CALL dword ptr [EDX + 0x18] */
                                  iVar37 = this_00->vfunc_18();
                                  if (iVar37 == 8) {
                                    thunk_FUN_0052d320(g_popUp_008016D8,(char *)local_15c,8);
                                    break;
                                  }
                                }
                                /* ST_CALLSITE[0065358C]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                local_EAX_3452 =
                                     SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                                     sub_00668F50((AnonReceiver_0064A970 *)this_00,
                                                  (char *)pDStack_164,(uint)local_160,
                                                  output_values_neg_34);
                                iVar37 = 0;
                                if (0 < local_EAX_3452) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      thunk_FUN_0052d320(g_popUp_008016D8,(char *)local_15c,8);
                                      break;
                                    }
                                    iVar37 = iVar37 + 1;
                                    puVar12 = puVar12 + 1;
                                  } while (iVar37 < local_EAX_3452);
                                }
                              }
                              break;
                            case 0x533:
                              local_EAX_3527 = thunk_FUN_0064ec30((int)&local_16c);
                              if (local_EAX_3527 == 0) goto cf_common_join_00652A99;
                              if (pDStack_164 == (DArrayTy *)0x9) {
                                /* ST_CALLSITE[006535F4]: CALL dword ptr [EAX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if (iVar37 == 8) {
                                  if (g_helpString_00801694 != nullptr) {
                                    /* ST_CALLSITE[0065362D]: CALL 0x00402045; direct=00402045 HelpStringTy::sub_0051FAC0 */
                                    HelpStringTy::sub_0051FAC0
                                              (g_helpString_00801694,(char *)local_154,2,
                                               (char)local_158,(int)local_15c * 1000);
                                  }
                                  break;
                                }
                              }
                              /* ST_CALLSITE[0065364B]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                              local_EAX_3643 =
                                   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                                   sub_00668F50((AnonReceiver_0064A970 *)this_00,(char *)pDStack_164
                                                ,(uint)local_160,output_values_neg_34);
                              iVar37 = 0;
                              if (0 < local_EAX_3643) {
                                puVar12 = output_values_neg_34;
                                do {
                                  if (*puVar12 == (uint)DAT_0080874d) {
                                    if (g_helpString_00801694 != nullptr) {
                                      /* ST_CALLSITE[006536A7]: CALL 0x00402045; direct=00402045 HelpStringTy::sub_0051FAC0 */
                                      HelpStringTy::sub_0051FAC0
                                                (g_helpString_00801694,(char *)local_154,2,
                                                 (char)local_158,(int)local_15c * 1000);
                                    }
                                    break;
                                  }
                                  iVar37 = iVar37 + 1;
                                  puVar12 = puVar12 + 1;
                                } while (iVar37 < local_EAX_3643);
                              }
                              break;
                            case 0x534:
                              local_EAX_3752 =
                                   thunk_FUN_0064ec80((AnonShape_0064EC80_53C284F2 *)&local_16c);
                              if (local_EAX_3752 == 0) goto cf_common_join_00652A99;
                              if (pDStack_164 == (DArrayTy *)0x9) {
                                /* ST_CALLSITE[006536D5]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if (iVar37 == 8) {
LAB_006536dd:
                                  if (g_cPanel_00801688 != nullptr) {
                                    /* ST_CALLSITE[00653703]: CALL 0x00403152; direct=00403152 CPanelTy::OutText */
                                    CPanelTy::OutText(g_cPanel_00801688,(int)local_158,
                                                      (int)(local_154 + (1 - (int)local_158)),
                                                      local_15c);
                                  }
                                  break;
                                }
                              }
                              /* ST_CALLSITE[00653721]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                              local_EAX_3857 =
                                   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                                   sub_00668F50((AnonReceiver_0064A970 *)this_00,(char *)pDStack_164
                                                ,(uint)local_160,output_values_neg_34);
                              iVar37 = 0;
                              if (0 < local_EAX_3857) {
                                puVar12 = output_values_neg_34;
                                do {
                                  if (*puVar12 == (uint)DAT_0080874d) goto LAB_006536dd;
                                  iVar37 = iVar37 + 1;
                                  puVar12 = puVar12 + 1;
                                } while (iVar37 < local_EAX_3857);
                              }
                              break;
                            case 0x535:
                              local_EAX_3907 = thunk_FUN_0064ecd0((int)&local_16c);
                              if (local_EAX_3907 == 0) goto cf_common_join_00652A99;
                              if (pDStack_164 == (DArrayTy *)0x9) {
                                /* ST_CALLSITE[00653770]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if (iVar37 == 8) {
LAB_00653778:
                                  if (g_cPanel_00801688 != nullptr) {
                                    /* ST_CALLSITE[00653794]: CALL 0x0040195b; direct=0040195B CPanelTy::OutText */
                                    CPanelTy::OutText(g_cPanel_00801688,(char *)local_158,local_15c);
                                  }
                                  break;
                                }
                              }
                              /* ST_CALLSITE[006537B2]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                              local_EAX_4002 =
                                   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                                   sub_00668F50((AnonReceiver_0064A970 *)this_00,(char *)pDStack_164
                                                ,(uint)local_160,output_values_neg_34);
                              iVar37 = 0;
                              if (0 < local_EAX_4002) {
                                puVar12 = output_values_neg_34;
                                do {
                                  if (*puVar12 == (uint)DAT_0080874d) goto LAB_00653778;
                                  iVar37 = iVar37 + 1;
                                  puVar12 = puVar12 + 1;
                                } while (iVar37 < local_EAX_4002);
                              }
                              break;
                            case 0x536:
                              local_EAX_4052 = thunk_FUN_0064ed20((int)&local_16c);
                              if (local_EAX_4052 == 0) goto cf_common_join_00652A99;
                              if (pDStack_164 == (DArrayTy *)0x9) {
                                /* ST_CALLSITE[00653801]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if (iVar37 == 8) {
                                  /* ST_CALLSITE[0065381D]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
                                  SoundClassTy::PlaySound
                                            ((SoundClassTy *)&g_sound,SOUND_MODE_12,
                                             (char *)local_15c,0,nullptr,0);
                                  break;
                                }
                              }
                              /* ST_CALLSITE[0065383B]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                              local_EAX_4139 =
                                   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                                   sub_00668F50((AnonReceiver_0064A970 *)this_00,(char *)pDStack_164
                                                ,(uint)local_160,output_values_neg_34);
                              iVar37 = 0;
                              if (0 < local_EAX_4139) {
                                puVar12 = output_values_neg_34;
                                do {
                                  if (*puVar12 == (uint)DAT_0080874d) {
                                    /* ST_CALLSITE[0065387A]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
                                    SoundClassTy::PlaySound
                                              ((SoundClassTy *)&g_sound,SOUND_MODE_12,
                                               (char *)local_15c,0,nullptr,0);
                                    break;
                                  }
                                  iVar37 = iVar37 + 1;
                                  puVar12 = puVar12 + 1;
                                } while (iVar37 < local_EAX_4139);
                              }
                              break;
                            case 0x537:
                              local_EAX_4219 = thunk_FUN_0064ed70((int)&local_16c);
                              if (local_EAX_4219 == 0) goto cf_common_join_00652A99;
                              if (pDStack_164 == (DArrayTy *)0x9) {
                                /* ST_CALLSITE[006538A8]: CALL dword ptr [EAX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if (iVar37 == 8) {
                                  if (g_cPanel_00801688 != nullptr) {
                                    /* ST_CALLSITE[006538C5]: CALL 0x00402c1b; direct=00402C1B CPanelTy::PlayBriefing */
                                    CPanelTy::PlayBriefing(g_cPanel_00801688,(char *)local_15c);
                                  }
                                  break;
                                }
                              }
                              /* ST_CALLSITE[006538E3]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                              local_EAX_4307 =
                                   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                                   sub_00668F50((AnonReceiver_0064A970 *)this_00,(char *)pDStack_164
                                                ,(uint)local_160,output_values_neg_34);
                              iVar37 = 0;
                              if (0 < local_EAX_4307) {
                                puVar12 = output_values_neg_34;
                                do {
                                  if (*puVar12 == (uint)DAT_0080874d) {
                                    if (g_cPanel_00801688 != nullptr) {
                                      /* ST_CALLSITE[00653923]: CALL 0x00402c1b; direct=00402C1B CPanelTy::PlayBriefing */
                                      CPanelTy::PlayBriefing(g_cPanel_00801688,(char *)local_15c);
                                    }
                                    break;
                                  }
                                  iVar37 = iVar37 + 1;
                                  puVar12 = puVar12 + 1;
                                } while (iVar37 < local_EAX_4307);
                              }
                              break;
                            case 0x546:
                              iVar37 = thunk_FUN_0064edc0((int)&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[00653948]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  /* ST_CALLSITE[0065396D]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                  local_EAX_4445 =
                                       SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970
                                       ::sub_00668F50((AnonReceiver_0064A970 *)this_00,
                                                      (char *)pDStack_164,(uint)local_160,
                                                      output_values_neg_34);
                                  iVar37 = 0;
                                  if (0 < local_EAX_4445) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      if (*puVar12 == (uint)DAT_0080874d) {
                                        if (g_visibleClass_00802A88 != nullptr) {
                                          if ((int)local_14c < 0) {
                                            iVar11 = -0x10;
                                          }
                                          else {
                                            iVar11 = (int)local_14c * 0x19;
                                          }
                                          /* ST_CALLSITE[006539DF]: CALL 0x00401fd2; direct=00401FD2 VisibleClassTy::VisHoleCreate */
                                          VisibleClassTy::VisHoleCreate
                                                    (g_visibleClass_00802A88,(int)local_15c,
                                                     (int)local_158,local_154,
                                                     output_values_neg_34[iVar37],local_150,iVar11);
                                        }
                                        break;
                                      }
                                      iVar37 = iVar37 + 1;
                                      puVar12 = puVar12 + 1;
                                    } while (iVar37 < local_EAX_4445);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x547:
                            case 0x548:
                              iVar37 = thunk_FUN_0064ee00((int)&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[00653A04]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  /* ST_CALLSITE[00653A29]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                  iVar37_mgDF = SubmarineTitans::Recovered::HiddenThis::
                                                AnonReceiver_0064A970::sub_00668F50
                                                          ((AnonReceiver_0064A970 *)this_00,
                                                           (char *)pDStack_164,(uint)local_160,
                                                           output_values_neg_34);
                                  iVar37 = 0;
                                  if (0 < iVar37_mgDF) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      if (*puVar12 == (uint)DAT_0080874d) {
                                        if (g_visibleClass_00802A88 == nullptr) break;
                                        if (g_visibleClass_00802A88->field_0114 == 0) {
                                          g_visibleClass_00802A88->field_00F8 = 0;
                                        }
                                        else {
                                          g_visibleClass_00802A88->field_00F8 =
                                               (uint)(local_EAX_488 == 0x547);
                                          pSVar4 = g_sT3DSMAPContext_00807598;
                                          if ((local_EAX_488 == 0x547) != 0) {
                                            g_sT3DSMAPContext_00807598->field_0466 = 1;
                                            pSVar4->field_02D8 = 1;
                                            break;
                                          }
                                        }
                                        pSVar4 = g_sT3DSMAPContext_00807598;
                                        g_sT3DSMAPContext_00807598->field_0466 = 0;
                                        pSVar4->field_02D8 = 1;
                                        break;
                                      }
                                      iVar37 = iVar37 + 1;
                                      puVar12 = puVar12 + 1;
                                    } while (iVar37 < iVar37_mgDF);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x549:
                              iVar37 = thunk_FUN_0064ee40((short *)&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[00653ADD]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  /* ST_CALLSITE[00653B02]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                  local_EAX_4850 =
                                       SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970
                                       ::sub_00668F50((AnonReceiver_0064A970 *)this_00,
                                                      (char *)pDStack_164,(uint)local_160,
                                                      output_values_neg_34);
                                  iVar37 = 0;
                                  if (0 < local_EAX_4850) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      if (*puVar12 == (uint)DAT_0080874d) {
                                        if (g_opticClass_007FB2A0 != nullptr) {
                                          thunk_FUN_004ab530((int)local_154,&local_15c->flags,
                                                             (int)local_158);
                                        }
                                        break;
                                      }
                                      iVar37 = iVar37 + 1;
                                      puVar12 = puVar12 + 1;
                                    } while (iVar37 < local_EAX_4850);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x54a:
                              iVar37 = thunk_FUN_0064ee90((int)&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[00653B75]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  /* ST_CALLSITE[00653B9A]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                  iVar37_mgD7 = SubmarineTitans::Recovered::HiddenThis::
                                                AnonReceiver_0064A970::sub_00668F50
                                                          ((AnonReceiver_0064A970 *)this_00,
                                                           (char *)pDStack_164,(uint)local_160,
                                                           output_values_neg_34);
                                  iVar37 = 0;
                                  if (0 < iVar37_mgD7) {
                                    puVar12 = output_values_neg_34;
LAB_00653bb7:
                                    if (*puVar12 != (uint)DAT_0080874d) goto code_r0x00653bbb;
                                    if (g_opticClass_007FB2A0 != nullptr) {
                                      memset(local_1c0, 0, 0x20); /* compiler bulk-zero initialization */
                                      switch(local_15c) {
                                      case 0:
                                        local_1b0 = 0x104;
                                        break;
                                      case 0x1:
                                        local_1b0 = 0x105;
                                        break;
                                      case 0x2:
                                        local_1b0 = 0x106;
                                        break;
                                      case 0x3:
                                        local_1b0 = 0x107;
                                        break;
                                      default:
                                        iVar37 = -1;
                                        uVar33 = local_14;
                                        pcVar8_mg3A = thunk_FUN_00674af0(local_EAX_488);
                                        thunk_FUN_0064d0e0(this_00,-0x7d,pcVar8_mg3A,uVar33,iVar37);
                                        goto cf_common_join_00659A73;
                                      }
                                      /* ST_CALLSITE[00653C37]: CALL dword ptr [EAX + 0x30] */
                                      (*this_00->vtable->vfunc_30)(3,0x100,local_1c0);
                                    }
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            case 0x54b:
                            case 0x54c:
                              iVar37 = thunk_FUN_0064eed0((int)&local_16c);
                              if (iVar37 != 0) {
                                /* ST_CALLSITE[00653C7B]: CALL dword ptr [EDX + 0x18] */
                                iVar37 = this_00->vfunc_18();
                                if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                  /* ST_CALLSITE[00653CA0]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                  iVar37_mgD3 = SubmarineTitans::Recovered::HiddenThis::
                                                AnonReceiver_0064A970::sub_00668F50
                                                          ((AnonReceiver_0064A970 *)this_00,
                                                           (char *)pDStack_164,(uint)local_160,
                                                           output_values_neg_34);
                                  iVar37 = 0;
                                  if (0 < iVar37_mgD3) {
                                    puVar12 = output_values_neg_34;
                                    do {
                                      if (*puVar12 == (uint)DAT_0080874d) {
                                        if (g_opticClass_007FB2A0 != nullptr) {
                                          memset(local_1c0, 0, 0x20); /* compiler bulk-zero initialization */
                                          iVar37 = 0;
                                          local_1b0 = (local_EAX_488 != 0x54b) + 0x100;
                                          /* ST_CALLSITE[00653D11]: CALL dword ptr [EDX + 0x30] */
                                          (*this_00->vtable->vfunc_30)(3,0x100,local_1c0);
                                        }
                                        break;
                                      }
                                      iVar37 = iVar37 + 1;
                                      puVar12 = puVar12 + 1;
                                    } while (iVar37 < iVar37_mgD3);
                                  }
                                  break;
                                }
                              }
                              goto cf_common_join_00652A99;
                            }
                            goto cf_common_join_00659A73;
                          }
                          switch(static_cast<uint32_t>(STRawWord(local_EAX_488))) {
                          case 0x54e:
                            iVar37 = thunk_FUN_0064ef50((int)&local_16c);
                            if (iVar37 != 0) {
                              /* ST_CALLSITE[00653E0F]: CALL dword ptr [EAX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                /* ST_CALLSITE[00653E34]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                local_EAX_5668 =
                                     SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                                     sub_00668F50((AnonReceiver_0064A970 *)this_00,
                                                  (char *)pDStack_164,(uint)local_160,
                                                  output_values_neg_34);
                                iVar37 = 0;
                                if (0 < local_EAX_5668) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      thunk_FUN_0052af90((byte)local_15c,(int)local_158,
                                                         (int)local_154);
                                      break;
                                    }
                                    iVar37 = iVar37 + 1;
                                    puVar12 = puVar12 + 1;
                                  } while (iVar37 < local_EAX_5668);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          default:
                            goto cf_common_join_00659A73;
                          case 0x55a:
                            iVar37 = thunk_FUN_0064f080((int)&local_16c);
                            if (iVar37 != 0) {
                              /* ST_CALLSITE[00653E9C]: CALL dword ptr [EDX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                local_c = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          /* ST_CALLSITE[00653EC1]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                          AnonReceiver_0064A970::sub_00668F50
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)local_c) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    uVar33 = *puVar12;
                                    (&DAT_00809950)[uVar33] =
                                         (local_15c != (DArrayTy *)0x1) + '\x01';
                                    if (uVar33 == DAT_0080874d) {
                                      DAT_0080c522 = (uint)(local_15c == (DArrayTy *)0x1);
                                    }
                                    puVar12 = puVar12 + 1;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x55b:
                            local_EAX_5904 = thunk_FUN_0064f0c0((int)&local_16c);
                            if (local_EAX_5904 != 0) {
                              /* ST_CALLSITE[00653F34]: CALL dword ptr [EDX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                /* ST_CALLSITE[00653F59]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                local_EAX_5961 =
                                     SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                                     sub_00668F50((AnonReceiver_0064A970 *)this_00,
                                                  (char *)pDStack_164,(uint)local_160,
                                                  output_values_neg_34);
                                iVar37 = 0;
                                if (0 < local_EAX_5961) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      if (((char)local_15c->flags != '\0') &&
                                         (((char)DAT_008087a0 == '\x03' ||
                                          ((char)DAT_008087a0 == '\b')))) {
                                        Library::MSVCRT::FUN_0072e730
                                                  ((byte *)&CHAR_00h_0080ef1e,nullptr,local_384,
                                                   nullptr,nullptr);
                                        Library::MSVCRT::__makepath
                                                  (&DAT_0080c632,nullptr,(char *)local_384,
                                                   (char *)local_15c,nullptr);
                                      }
                                      break;
                                    }
                                    iVar37 = iVar37 + 1;
                                    puVar12 = puVar12 + 1;
                                  } while (iVar37 < local_EAX_5961);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x55c:
                            iVar37 = thunk_FUN_0064f110((short *)&local_16c);
                            if (iVar37 != 0) {
                              /* ST_CALLSITE[00653FFA]: CALL dword ptr [EDX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                /* ST_CALLSITE[0065401F]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                local_EAX_6159 =
                                     SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                                     sub_00668F50((AnonReceiver_0064A970 *)this_00,
                                                  (char *)pDStack_164,(uint)local_160,
                                                  output_values_neg_34);
                                iVar37 = 0;
                                if (0 < local_EAX_6159) {
                                  do {
                                    (&DAT_0080c947)[iVar37] = local_158;
                                    if (output_values_neg_34[iVar37] == (uint)DAT_0080874d) {
                                      DAT_0080e301 = (char)local_15c;
                                    }
                                    iVar37 = iVar37 + 1;
                                  } while (iVar37 < local_EAX_6159);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x55d:
                            local_EAX_6230 = thunk_FUN_0064f160((int)&local_16c);
                            if (local_EAX_6230 != 0) {
                              /* ST_CALLSITE[0065407A]: CALL dword ptr [EDX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                /* ST_CALLSITE[0065409F]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                local_EAX_6287 =
                                     SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                                     sub_00668F50((AnonReceiver_0064A970 *)this_00,
                                                  (char *)pDStack_164,(uint)local_160,
                                                  output_values_neg_34);
                                iVar37 = 0;
                                if (0 < local_EAX_6287) {
                                  puVar12 = output_values_neg_34;
LAB_006540b9:
                                  if (*puVar12 != (uint)DAT_0080874d) goto code_r0x006540bd;
                                  DAT_0080e300 = (char)local_15c;
                                  memset(&DAT_0080e303, 0, 0x20); /* compiler bulk-zero initialization */
                                  Library::MSVCRT::_strncpy
                                            ((char *)&DAT_0080e303,(char *)local_158,0x1f);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x55e:
                            local_EAX_6392 =
                                 thunk_FUN_0064f1b0((RecoveredRecord_AiEventClassTy_0064F1B0 *)
                                                    &local_16c);
                            if (local_EAX_6392 != 0) {
                              /* ST_CALLSITE[0065411C]: CALL dword ptr [EAX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                /* ST_CALLSITE[00654141]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                local_EAX_6449 =
                                     SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                                     sub_00668F50((AnonReceiver_0064A970 *)this_00,
                                                  (char *)pDStack_164,(uint)local_160,
                                                  output_values_neg_34);
                                iVar37 = 0;
                                if (0 < local_EAX_6449) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      DAT_0080e302 = (char)local_15c;
                                      DAT_0080e429 = (char)local_154;
                                      DAT_0080e428 = STPiece<0,1>(local_14c);
                                      DAT_0080e427 = STPiece<0,1>(local_150);
                                      _DAT_0080e432 = local_140;
                                      _DAT_0080e42a = local_148;
                                      _DAT_0080e42e = local_144;
                                      _DAT_0080e436 = local_13c;
                                      DAT_0080e43a = STPiece<0,1>(local_138);
                                      if ((char)DAT_008087a0 == '\x03') {
                                        Library::MSVCRT::FUN_0072e730
                                                  ((byte *)&CHAR_00h_0080ef1e,nullptr,local_484,
                                                   nullptr,nullptr);
                                        Library::MSVCRT::__makepath
                                                  ((char *)&DAT_0080f33a,nullptr,
                                                   (char *)local_484,(char *)local_158,nullptr);
                                        /* ST_CALLSITE[00654251]: CALL dword ptr [0x0085bde8] */
                                        wsprintfA(&DAT_0080e323,"%s%s",&CHAR_00h_00807784,
                                                  &DAT_0080f33a);
                                      }
                                      else if ((char)DAT_008087a0 == '\b') {
                                        /* ST_CALLSITE[006541FC]: CALL dword ptr [0x0085bde8] */
                                        wsprintfA(&DAT_0080e323,"%s%s",&CHAR_00h_00807784,
                                                  local_158);
                                      }
                                      break;
                                    }
                                    iVar37 = iVar37 + 1;
                                    puVar12 = puVar12 + 1;
                                  } while (iVar37 < local_EAX_6449);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x55f:
                            local_EAX_6742 =
                                 thunk_FUN_0064ef90((AnonShape_0064EF90_4909407D *)&local_16c);
                            if (local_EAX_6742 != 0) {
                              /* ST_CALLSITE[0065427A]: CALL dword ptr [EDX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                /* ST_CALLSITE[0065429F]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                local_EAX_6799 =
                                     SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                                     sub_00668F50((AnonReceiver_0064A970 *)this_00,
                                                  (char *)pDStack_164,(uint)local_160,
                                                  output_values_neg_34);
                                iVar37 = 0;
                                if (0 < local_EAX_6799) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      local_EAX_6856 =
                                           Library::DKW::TBL::FUN_006b5aa0
                                                     (g_dArray_0080C4CB,(char *)local_158);
                                      if (g_optPanel_008016DC != nullptr) {
                                        /* ST_CALLSITE[006542E9]: CALL 0x00401587; direct=00401587 OptPanelTy::UpdateObjectives */
                                        OptPanelTy::UpdateObjectives(g_optPanel_008016DC);
                                      }
                                      if (-1 < local_EAX_6856) {
                                        *(int *)(&this_00->field_0xde + (int)local_15c * 4) =
                                             local_EAX_6856;
                                      }
                                      break;
                                    }
                                    iVar37 = iVar37 + 1;
                                    puVar12 = puVar12 + 1;
                                  } while (iVar37 < local_EAX_6799);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x560:
                            iVar37 = thunk_FUN_0064f000((int)&local_16c);
                            if (iVar37 != 0) {
                              /* ST_CALLSITE[00654323]: CALL dword ptr [EDX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                /* ST_CALLSITE[00654348]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                local_EAX_6968 =
                                     SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                                     sub_00668F50((AnonReceiver_0064A970 *)this_00,
                                                  (char *)pDStack_164,(uint)local_160,
                                                  output_values_neg_34);
                                iVar37 = 0;
                                if (0 < local_EAX_6968) {
                                  puVar12 = output_values_neg_34;
LAB_00654362:
                                  if (*puVar12 != (uint)DAT_0080874d) goto code_r0x00654366;
                                  FUN_006c87c0(g_dArray_0080C4CB,(uint)local_15c);
LAB_00654386:
                                  if (g_optPanel_008016DC != nullptr) {
                                    /* ST_CALLSITE[00654394]: CALL 0x00401587; direct=00401587 OptPanelTy::UpdateObjectives */
                                    OptPanelTy::UpdateObjectives(g_optPanel_008016DC);
                                  }
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x561:
                            iVar37 = thunk_FUN_0064f040((int)&local_16c);
                            if (iVar37 != 0) {
                              /* ST_CALLSITE[006543B9]: CALL dword ptr [EAX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                /* ST_CALLSITE[006543DE]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                local_EAX_7118 =
                                     SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                                     sub_00668F50((AnonReceiver_0064A970 *)this_00,
                                                  (char *)pDStack_164,(uint)local_160,
                                                  output_values_neg_34);
                                iVar37 = 0;
                                if (0 < local_EAX_7118) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      if (g_dArray_0080C4CB != nullptr) {
                                        FUN_006b5570(g_dArray_0080C4CB);
                                      }
                                      g_dArray_0080C4CB =
                                           Library::DKW::TBL::SArrayCreate(nullptr,10,10);
                                      goto LAB_00654386;
                                    }
                                    iVar37 = iVar37 + 1;
                                    puVar12 = puVar12 + 1;
                                  } while (iVar37 < local_EAX_7118);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x562:
                            local_EAX_7204 =
                                 thunk_FUN_0064ef90((AnonShape_0064EF90_4909407D *)&local_16c);
                            if (local_EAX_7204 != 0) {
                              /* ST_CALLSITE[00654448]: CALL dword ptr [EDX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                /* ST_CALLSITE[0065446D]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                local_EAX_7261 =
                                     SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                                     sub_00668F50((AnonReceiver_0064A970 *)this_00,
                                                  (char *)pDStack_164,(uint)local_160,
                                                  output_values_neg_34);
                                iVar37 = 0;
                                if (0 < local_EAX_7261) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      if (g_dArray_0080C4C7 == nullptr) {
                                        g_dArray_0080C4C7 =
                                             Library::DKW::TBL::SArrayCreate(nullptr,10,10);
                                      }
                                      local_EAX_7336 =
                                           Library::DKW::TBL::FUN_006b5aa0
                                                     (g_dArray_0080C4C7,(char *)local_158);
                                      if (-1 < local_EAX_7336) {
                                        *(int *)(&this_00->field_0xde + (int)local_15c * 4) =
                                             local_EAX_7336;
                                      }
                                      break;
                                    }
                                    iVar37 = iVar37 + 1;
                                    puVar12 = puVar12 + 1;
                                  } while (iVar37 < local_EAX_7261);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x563:
                            iVar37 = thunk_FUN_0064f000((int)&local_16c);
                            if (iVar37 != 0) {
                              /* ST_CALLSITE[006544F2]: CALL dword ptr [EDX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                /* ST_CALLSITE[00654517]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                local_EAX_7431 =
                                     SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                                     sub_00668F50((AnonReceiver_0064A970 *)this_00,
                                                  (char *)pDStack_164,(uint)local_160,
                                                  output_values_neg_34);
                                iVar37 = 0;
                                if (0 < local_EAX_7431) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      if (g_dArray_0080C4C7 != nullptr) {
                                        FUN_006c87c0(g_dArray_0080C4C7,(uint)local_15c);
                                      }
                                      break;
                                    }
                                    iVar37 = iVar37 + 1;
                                    puVar12 = puVar12 + 1;
                                  } while (iVar37 < local_EAX_7431);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x564:
                            iVar37 = thunk_FUN_0064f040((int)&local_16c);
                            if (iVar37 != 0) {
                              /* ST_CALLSITE[0065457C]: CALL dword ptr [EAX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                /* ST_CALLSITE[006545A1]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                local_EAX_7569 =
                                     SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                                     sub_00668F50((AnonReceiver_0064A970 *)this_00,
                                                  (char *)pDStack_164,(uint)local_160,
                                                  output_values_neg_34);
                                iVar37 = 0;
                                if (0 < local_EAX_7569) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      if (g_dArray_0080C4C7 != nullptr) {
                                        FUN_006b5570(g_dArray_0080C4C7);
                                      }
                                      g_dArray_0080C4C7 =
                                           Library::DKW::TBL::SArrayCreate(nullptr,10,10);
                                      break;
                                    }
                                    iVar37 = iVar37 + 1;
                                    puVar12 = puVar12 + 1;
                                  } while (iVar37 < local_EAX_7569);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x565:
                          case 0x566:
                            iVar37 = thunk_FUN_0064f320((int)&local_16c);
                            if (iVar37 != 0) {
                              /* ST_CALLSITE[0065460B]: CALL dword ptr [EDX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if (((iVar37 != 8) ||
                                  ((local_15c != (DArrayTy *)0x9 && (pDStack_164 != (DArrayTy *)0x9)
                                   ))) && (local_15c != (DArrayTy *)0xff)) {
                                /* ST_CALLSITE[00654643]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                local_EAX_7731 =
                                     SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                                     sub_00668F50((AnonReceiver_0064A970 *)this_00,(char *)local_15c
                                                  ,0,output_values_neg_34);
                                uVar33 = output_values_neg_34[0];
                                if (local_EAX_7731 == 1) {
                                  /* ST_CALLSITE[0065466B]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                  iVar37_mg118 = SubmarineTitans::Recovered::HiddenThis::
                                                 AnonReceiver_0064A970::sub_00668F50
                                                           ((AnonReceiver_0064A970 *)this_00,
                                                            (char *)pDStack_164,(uint)local_160,
                                                            output_values_neg_34);
                                  if (0 < iVar37_mg118) {
                                    puVar12 = output_values_neg_34;
                                    local_1a0 = STReplaceLowByte((uint32_t)(local_1a0), (uint8_t)(local_EAX_488 == 0x565));
                                    iVar37 = iVar37_mg118;
                                    do {
                                      thunk_FUN_0056a8d0(&DAT_00807620,(byte)*puVar12,(byte)uVar33,
                                                         (char)local_1a0);
                                      puVar12 = puVar12 + 1;
                                      iVar37 = iVar37 + -1;
                                    } while (iVar37 != 0);
                                  }
                                  pPVar3 = g_playPanel_008016E4;
                                  if ((g_playPanel_008016E4 != nullptr) &&
                                     (iVar37_mg118 != 0)) {
                                    local_8 = (DArrayTy *)&g_playPanel_008016E4->field_0181;
                                    g_playPanel_008016E4->field_0028 = 5;
                                    local_c = (DArrayTy *)0x8;
                                    do {
                                      if (local_8->flags != 0) {
                                        FUN_006e6080(pPVar3,2,local_8->flags,
                                                     (undefined4 *)&pPVar3->field_0x18);
                                      }
                                      local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    } while (local_c != nullptr);
                                  }
                                  goto cf_common_join_00659A73;
                                }
                              }
                            }
                            break;
                          case 0x567:
                            iVar37 = thunk_FUN_0064f360((int)&local_16c);
                            if (iVar37 != 0) {
                              /* ST_CALLSITE[00654727]: CALL dword ptr [EAX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                pDVar17 = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          /* ST_CALLSITE[0065474C]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                          AnonReceiver_0064A970::sub_00668F50
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)pDVar17) {
                                  puVar12 = output_values_neg_34;
                                  local_c = pDVar17;
                                  do {
                                    thunk_FUN_0056aa00(&DAT_00807620,(byte)*puVar12,(char)local_15c);
                                    puVar12 = puVar12 + 1;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                pPVar3 = g_playPanel_008016E4;
                                if ((g_playPanel_008016E4 != nullptr) &&
                                   (pDVar17 != nullptr)) {
                                  local_8 = (DArrayTy *)&g_playPanel_008016E4->field_0181;
                                  g_playPanel_008016E4->field_0028 = 5;
                                  local_c = (DArrayTy *)0x8;
                                  do {
                                    if (local_8->flags != 0) {
                                      FUN_006e6080(pPVar3,2,local_8->flags,
                                                   (undefined4 *)&pPVar3->field_0x18);
                                    }
                                    local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x568:
                            iVar37 = thunk_FUN_0064f3b0((int)&local_16c);
                            if (iVar37 != 0) {
                              /* ST_CALLSITE[006547F7]: CALL dword ptr [EDX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                /* ST_CALLSITE[0065481C]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                local_EAX_8204 =
                                     SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                                     sub_00668F50((AnonReceiver_0064A970 *)this_00,
                                                  (char *)pDStack_164,(uint)local_160,
                                                  output_values_neg_34);
                                iVar37 = 0;
                                if (0 < local_EAX_8204) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      DAT_00808790 = 1;
                                      break;
                                    }
                                    iVar37 = iVar37 + 1;
                                    puVar12 = puVar12 + 1;
                                  } while (iVar37 < local_EAX_8204);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x56a:
                            iVar37 = thunk_FUN_0064f3f0((int)&local_16c);
                            if (iVar37 == 0) break;
                            thunk_FUN_0056abc0(&DAT_00807620,(char *)pDStack_164);
                            goto cf_common_join_00659A73;
                          case 0x578:
                            local_EAX_8314 = thunk_FUN_0064f430((int)&local_16c);
                            if (local_EAX_8314 != 0) {
                              /* ST_CALLSITE[0065489E]: CALL dword ptr [EAX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                local_c = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          /* ST_CALLSITE[006548C3]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                          AnonReceiver_0064A970::sub_00668F50
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)local_c) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    pDVar17 = local_15c;
                                    if ((int)local_15c < 0) {
                                      pDVar17 = (DArrayTy *)(DAT_00808a90 >> 8 & 0xff);
                                    }
                                    thunk_FUN_004d86a0(*puVar12,(int)pDVar17);
                                    puVar12 = puVar12 + 1;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x579:
                            local_EAX_8446 = thunk_FUN_0064f470((int)&local_16c);
                            if (local_EAX_8446 != 0) {
                              /* ST_CALLSITE[00654922]: CALL dword ptr [EDX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                local_c = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          /* ST_CALLSITE[00654947]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                          AnonReceiver_0064A970::sub_00668F50
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)local_c) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    pDVar17 = local_15c;
                                    if ((int)local_15c < 0) {
                                      pDVar17 = (DArrayTy *)(DAT_00808a90 >> 0x10 & 0xff);
                                    }
                                    puVar13 = local_158;
                                    if ((int)local_158 < 0) {
                                      puVar13 = (uint *)(DAT_00808a90 >> 0x18);
                                    }
                                    thunk_FUN_004e51b0((int *)*puVar12,&pDVar17->flags,puVar13);
                                    puVar12 = puVar12 + 1;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x57a:
                            local_EAX_8597 = thunk_FUN_0064f4c0((int)&local_16c);
                            if (local_EAX_8597 == 0) break;
                            pDVar17 = pDStack_164;
                            if ((int)pDStack_164 < 0) {
                              pDVar17 = (DArrayTy *)(DAT_00808a90 & 0xff);
                            }
                            thunk_FUN_004d8760((int)pDVar17);
                            goto cf_common_join_00659A73;
                          case 0x57b:
                            iVar37 = thunk_FUN_0064f500((RecoveredRecord_AiEventClassTy_0064F500 *)
                                                        &local_16c);
                            if (iVar37 != 0) {
                              /* ST_CALLSITE[006549F5]: CALL dword ptr [EAX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                local_8 = local_15c;
                                if ((int)local_15c < 0) {
                                  local_8 = (DArrayTy *)(uint)DAT_00808a9b;
                                }
                                local_c = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          /* ST_CALLSITE[00654A32]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                          AnonReceiver_0064A970::sub_00668F50
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)local_c) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    uVar33 = *puVar12;
                                    bVar1 = g_bulkInitializedRecords_008087C7[uVar33].field_0021;
                                    uVar29 = (undefined2)((uint)local_150 >> 0x10);
                                    if (bVar1 == 1) {
                                      if ((int)local_8 < 3) {
                                        if (local_8 == (DArrayTy *)0x2) {
                                          /* ST_CALLSITE[0065520D]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                          __CreateObjPl(this_00,CONCAT22(uVar29,(short)*puVar12),0xc
                                                        ,(int)local_158,(int)local_154,
                                                        (int)local_150,0xfffe,0xffffffff,nullptr
                                                        ,100,1,0,0);
                                          /* ST_CALLSITE[00655242]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12)),1,
                                                        (int)local_158,(int)local_154,(int)local_150
                                                        ,0xfffe,0xffffffff,nullptr,100,1,0,0);
                                          /* ST_CALLSITE[00655277]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12)),1,
                                                        (int)local_158,(int)local_154,(int)local_150
                                                        ,0xfffe,0xffffffff,nullptr,100,1,0,0);
                                          /* ST_CALLSITE[006552AC]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12)),2,
                                                        (int)local_158,(int)local_154,(int)local_150
                                                        ,0xfffe,0xffffffff,nullptr,100,1,0,0);
                                          /* ST_CALLSITE[006552E1]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12)),3,
                                                        (int)local_158,(int)local_154,(int)local_150
                                                        ,0xfffe,0xffffffff,nullptr,100,1,0,0);
                                          /* ST_CALLSITE[00655316]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12)),6,
                                                        (int)local_158,(int)local_154,(int)local_150
                                                        ,0xfffe,0xffffffff,nullptr,100,1,0,0);
                                        }
                                        else if (local_8 == nullptr) {
                                          /* ST_CALLSITE[006551D3]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                          __CreateObjPl(this_00,CONCAT22(uVar29,(short)*puVar12),0xc
                                                        ,(int)local_158,(int)local_154,
                                                        (int)local_150,0xfffe,0xffffffff,nullptr
                                                        ,100,1,0,0);
                                        }
                                        else {
                                          if (local_8 != (DArrayTy *)0x1) goto LAB_00655324;
                                          /* ST_CALLSITE[006550FA]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                          __CreateObjPl(this_00,CONCAT22(uVar29,(short)*puVar12),0xc
                                                        ,(int)local_158,(int)local_154,
                                                        (int)local_150,0xfffe,0xffffffff,nullptr
                                                        ,100,1,0,0);
                                          /* ST_CALLSITE[0065512F]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12)),1,
                                                        (int)local_158,(int)local_154,(int)local_150
                                                        ,0xfffe,0xffffffff,nullptr,100,1,0,0);
                                          /* ST_CALLSITE[00655164]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12)),1,
                                                        (int)local_158,(int)local_154,(int)local_150
                                                        ,0xfffe,0xffffffff,nullptr,100,1,0,0);
                                          /* ST_CALLSITE[00655199]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                          __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12)),2,
                                                        (int)local_158,(int)local_154,(int)local_150
                                                        ,0xfffe,0xffffffff,nullptr,100,1,0,0);
                                        }
                                      }
                                      else {
joined_r0x00655322:
                                        if (local_8 != (DArrayTy *)0xff) {
LAB_00655324:
                                          uVar28 = local_14;
                                          pcVar8_mg3E = thunk_FUN_00674af0(local_EAX_488);
                                          thunk_FUN_0064d0e0(this_00,-0x7d,pcVar8_mg3E,uVar28,uVar33
                                                            );
                                        }
                                      }
                                    }
                                    else if (bVar1 == 2) {
                                      if (2 < (int)local_8) goto joined_r0x00655322;
                                      if (local_8 == (DArrayTy *)0x2) {
                                        /* ST_CALLSITE[00654F85]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                        __CreateObjPl(this_00,CONCAT22(uVar29,(short)*puVar12),0x18,
                                                      (int)local_158,(int)local_154,(int)local_150,
                                                      0xfffe,0xffffffff,nullptr,100,1,0,0);
                                        /* ST_CALLSITE[00654FBA]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0xd,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654FEF]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0xd,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00655024]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0xe,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00655059]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0xf,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[0065508E]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x12,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                      }
                                      else if (local_8 == nullptr) {
                                        /* ST_CALLSITE[00654F4B]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                        __CreateObjPl(this_00,CONCAT22(uVar29,(short)*puVar12),0x18,
                                                      (int)local_158,(int)local_154,(int)local_150,
                                                      0xfffe,0xffffffff,nullptr,100,1,0,0);
                                      }
                                      else {
                                        if (local_8 != (DArrayTy *)0x1) goto LAB_00655324;
                                        /* ST_CALLSITE[00654E72]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                        __CreateObjPl(this_00,CONCAT22(uVar29,(short)*puVar12),0x18,
                                                      (int)local_158,(int)local_154,(int)local_150,
                                                      0xfffe,0xffffffff,nullptr,100,1,0,0);
                                        /* ST_CALLSITE[00654EA7]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0xd,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654EDC]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0xd,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654F11]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0xe,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                      }
                                    }
                                    else if (bVar1 == 3) {
                                      if (2 < (int)local_8) goto joined_r0x00655322;
                                      if (local_8 == (DArrayTy *)0x2) {
                                        /* ST_CALLSITE[00654CA3]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                        __CreateObjPl(this_00,CONCAT22(uVar29,(short)*puVar12),0x19,
                                                      (int)local_158,(int)local_154,(int)local_150,
                                                      0xfffe,0xffffffff,nullptr,100,1,0,0);
                                        /* ST_CALLSITE[00654CD8]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x19,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654D0D]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x19,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654D42]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x1e,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654D77]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x1e,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654DAC]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x1e,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654DE1]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x20,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654E16]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x22,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                      }
                                      else if (local_8 == nullptr) {
                                        /* ST_CALLSITE[00654BFF]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                        __CreateObjPl(this_00,CONCAT22(uVar29,(short)*puVar12),0x19,
                                                      (int)local_158,(int)local_154,(int)local_150,
                                                      0xfffe,0xffffffff,nullptr,100,1,0,0);
                                        /* ST_CALLSITE[00654C34]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x19,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654C69]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x19,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                      }
                                      else {
                                        if (local_8 != (DArrayTy *)0x1) goto LAB_00655324;
                                        /* ST_CALLSITE[00654ABC]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                        __CreateObjPl(this_00,CONCAT22(uVar29,(short)*puVar12),0x19,
                                                      (int)local_158,(int)local_154,(int)local_150,
                                                      0xfffe,0xffffffff,nullptr,100,1,0,0);
                                        /* ST_CALLSITE[00654AF1]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x19,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654B26]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x19,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654B5B]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x1e,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654B90]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x1e,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                        /* ST_CALLSITE[00654BC5]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                        __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_150), (uint16_t)((short)*puVar12))
                                                      ,0x1e,(int)local_158,(int)local_154,
                                                      (int)local_150,0xfffe,0xffffffff,nullptr,
                                                      100,1,0,0);
                                      }
                                    }
                                    puVar12 = puVar12 + 1;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x582:
                            iVar37 = thunk_FUN_0064f5a0((int)&local_16c);
                            if (iVar37 != 0) {
                              /* ST_CALLSITE[0065536C]: CALL dword ptr [EDX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                local_c = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          /* ST_CALLSITE[00655391]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                          AnonReceiver_0064A970::sub_00668F50
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)local_c) {
                                  puVar12 = output_values_neg_34;
                                  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                                  uVar7 = extraout_ECX;
                                  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                                  uVar26 = extraout_EDX;
                                  do {
                                    switch(local_15c) {
                                    case 0xdc:
                                      if (local_158 == nullptr) {
                                        thunk_FUN_004d88b0((char)*puVar12,local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        thunk_FUN_004d8800((char)*puVar12,(int)local_154);
                                      }
                                      else {
                                        thunk_FUN_004d87b0((char)*puVar12,(int)local_154);
                                      }
                                      break;
                                    case 0xdd:
                                      if (local_158 == nullptr) {
                                        thunk_FUN_004d89f0((char)*puVar12,local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        thunk_FUN_004d8940((char)*puVar12,(int)local_154);
                                      }
                                      else {
                                        thunk_FUN_004d88f0((char)*puVar12,(int)local_154);
                                      }
                                      break;
                                    case 0xde:
                                      if (local_158 == nullptr) {
                                        thunk_FUN_004d8b30((char)*puVar12,local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        thunk_FUN_004d8a80((char)*puVar12,(int)local_154);
                                      }
                                      else {
                                        thunk_FUN_004d8a30((char)*puVar12,(int)local_154);
                                      }
                                      break;
                                    case 0xdf:
                                      if (local_158 == nullptr) {
                                        thunk_FUN_004b7140(STReplaceLowByte((uint32_t)(uVar26), (uint8_t)((char)*puVar12)),(int)local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        thunk_FUN_004b70d0(STReplaceLowByte((uint32_t)(local_158), (uint8_t)((char)*puVar12)),(int)local_154);
                                      }
                                      else {
                                        thunk_FUN_004b7080(STReplaceLowByte((uint32_t)(uVar7), (uint8_t)((char)*puVar12)),(int)local_154);
                                      }
                                      break;
                                    case 0xe2:
                                      if (local_158 == nullptr) {
                                        thunk_FUN_004e4440(*puVar12,local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        thunk_FUN_004e43c0(*puVar12,(int)local_154);
                                      }
                                      else {
                                        thunk_FUN_004e4380(*puVar12,(int)local_154);
                                      }
                                      break;
                                    case 0xe3:
                                      if (local_158 == nullptr) {
                                        thunk_FUN_004e41f0(*puVar12,local_154);
                                      }
                                      else if ((int)local_158 < 1) {
                                        thunk_FUN_004e4330(*puVar12,(int)local_154);
                                      }
                                      else {
                                        thunk_FUN_004e4270(*puVar12,(int)local_154);
                                      }
                                    }
                                    if (*puVar12 == (uint)DAT_0080874d) {
                                      thunk_FUN_004d8b70((char)*puVar12);
                                    }
                                    thunk_FUN_004d78e0((char)*puVar12);
                                    puVar12 = puVar12 + 1;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                                    uVar7 = extraout_ECX_00;
                                    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                                    uVar26 = extraout_EDX_00;
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x583:
                            iVar37 = thunk_FUN_0064f5e0((int)&local_16c);
                            pDVar17 = local_160;
                            if (iVar37 == 0) break;
                            if (pDStack_164 == nullptr) {
                              thunk_FUN_004d8320(local_160);
                              goto cf_common_join_00659A73;
                            }
                            if ((int)pDStack_164 < 1) {
                              local_EAX_11892 = thunk_FUN_004d82b0(0);
                              if ((int)pDVar17 < local_EAX_11892) {
                                local_EAX_11906 = thunk_FUN_004d82b0(0);
                                iVar37 = local_EAX_11906 - (int)pDVar17;
                                goto LAB_0065565b;
                              }
                            }
                            else {
                              local_EAX_11843 = thunk_FUN_004d82b0(0);
                              iVar37 = (int)&pDVar17->flags + local_EAX_11843;
LAB_0065565b:
                              thunk_FUN_004d8320(iVar37);
                            }
                            thunk_FUN_004d82b0(0);
                            goto cf_common_join_00659A73;
                          case 0x584:
                            iVar37 = thunk_FUN_0064f620((short *)&local_16c);
                            if (iVar37 == 0) break;
                            thunk_FUN_0064e5c0((char)pDStack_164,(short)local_160,(short)local_15c,
                                               local_158,(int)local_154);
                            goto cf_common_join_00659A73;
                          case 0x585:
                            iVar37 = thunk_FUN_0064f6e0();
                            if (iVar37 == 0) break;
                            DAT_00808794 = thunk_FUN_0056f930((AnonShape_0056F930_C6277D80 *)
                                                              &DAT_00807620);
                            goto cf_common_join_00659A73;
                          case 0x58c:
                            iVar37 = thunk_FUN_0064f700((short *)&local_16c);
                            if (iVar37 == 0) break;
                            pSVar32 = nullptr;
                            sVar25 = (short)local_160;
                            sVar23 = (short)local_15c;
                            sVar6 = (short)local_158;
                            if (local_154 == nullptr) {
                              if ((((sVar25 < 0) || (g_worldGrid.sizeX <= sVar25)) ||
                                  ((sVar23 < 0 || ((g_worldGrid.sizeY <= sVar23 || (sVar6 < 0))))))
                                 || (g_worldGrid.sizeZ <= sVar6)) {
LAB_00655871:
                                pSVar32 = nullptr;
                              }
                              else {
                                pSVar32 = (STFishC *)
                                          STGridAt3D(g_worldGrid, sVar25, sVar23, sVar6).
                                          objects[0];
                              }
                            }
                            else if (local_154 == (byte *)0x1) {
                              if (((((sVar25 < 0) || (g_worldGrid.sizeX <= sVar25)) || (sVar23 < 0))
                                  || ((g_worldGrid.sizeY <= sVar23 || (sVar6 < 0)))) ||
                                 (g_worldGrid.sizeZ <= sVar6)) goto LAB_00655871;
                              pSVar32 = (STFishC *)
                                        STGridAt3D(g_worldGrid, sVar25, sVar23, sVar6).objects
                                        [1];
                            }
                            else if (local_154 == (byte *)0x2) {
                              /* ST_CALLSITE[00655763]: CALL 0x004013f2; direct=004013F2 _EnumDest */
                              local_EAX_12115 =
                                   _EnumDest(nullptr,-1,sVar25,sVar23,sVar6,1,1,1,
                                             thunk_FUN_00678890,0);
                              if ((local_EAX_12115 == -1) && (g_fish_00811984 != nullptr)) {
                                pSVar32 = g_fish_00811984;
                              }
                            }
                            if ((pSVar32 != nullptr) && (pDStack_164 != nullptr)) {
                              /* ST_CALLSITE[0065588E]: CALL dword ptr [EDX + 0x70] */
                              (*pSVar32->vtable->vfunc_70)(pDStack_164);
                            }
                            goto cf_common_join_00659A73;
                          case 0x58d:
                            iVar37 = thunk_FUN_0064f780((RecoveredRecord_AiEventClassTy_0064F780 *)
                                                        &local_16c);
                            if (iVar37 != 0) {
                              /* ST_CALLSITE[006558B1]: CALL dword ptr [EDX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                local_8 = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          /* ST_CALLSITE[006558D6]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                          AnonReceiver_0064A970::sub_00668F50
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)local_8) {
                                  local_10 = (AiFltClassTy *)output_values_neg_34;
                                  do {
                                    local_c = local_144;
                                    uVar33 = local_14;
                                    if ((int)local_144 < 0) {
                                      local_c = (DArrayTy *)0xfffe;
LAB_00655972:
                                      /* ST_CALLSITE[006559C7]: CALL 0x00403c15; direct=00403C15 AiEventClassTy::__CreateObjPl */
                                      local_EAX_12727 =
                                           __CreateObjPl(this_00,STReplaceLowWord((uint32_t)(local_158), (uint16_t)(*(undefined2 *) &local_10->vtable)),
                                                         (short)local_15c,(int)local_158,
                                                         (int)local_154,(int)local_150,(uint)local_c
                                                         ,(uint)local_14c,local_148,local_140,
                                                         local_13c,(int)local_138,local_134);
                                      if (local_EAX_12727 != 0) {
LAB_006559d0:
                                        pAVar38 = local_10->vtable;
LAB_006559d6:
                                        pcVar8_mg3D = thunk_FUN_00674af0(local_EAX_488);
                                        iVar37 = -0xab;
                                        goto LAB_006559e3;
                                      }
                                    }
                                    else {
                                      if ((int)local_144 < 1) goto LAB_00655972;
                                      pSVar14 = thunk_FUN_0042b760(*(char *)&local_10->vtable,
                                                                   (ushort)local_144);
                                      if (pSVar14 != nullptr) {
                                        iVar37 = thunk_FUN_00423300((int)pSVar14);
                                        if (iVar37 != 0) {
                                          if (((int)local_15c < 0x32) || (0x73 < (int)local_15c)) {
                                            bVar36 = false;
                                          }
                                          else {
                                            bVar36 = true;
                                          }
                                          if (((!bVar36) || (STField<short>(iVar37,0x7B) == 1)) &&
                                             (STField<short>(iVar37,0x7B) != -0x8000))
                                          goto LAB_00655972;
                                          goto LAB_006559d0;
                                        }
                                        pAVar38 = local_10->vtable;
                                        goto LAB_006559d6;
                                      }
                                      pAVar38 = local_10->vtable;
                                      pcVar8_mg3D = &CHAR_00h_008016a0;
                                      iVar37 = -0xaa;
LAB_006559e3:
                                      thunk_FUN_0064d0e0(this_00,iVar37,pcVar8_mg3D,uVar33,
                                                         (int)pAVar38);
                                    }
                                    local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                    local_8 = (DArrayTy *)((int)&local_8[-1].data + 3);
                                  } while (local_8 != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x58e:
                            iVar37 = thunk_FUN_0064f900((short *)&local_16c);
                            if (iVar37 != 0) {
                              /* ST_CALLSITE[00655A20]: CALL dword ptr [EDX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                local_c = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          /* ST_CALLSITE[00655A45]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                          AnonReceiver_0064A970::sub_00668F50
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)local_c) {
                                  local_10 = (AiFltClassTy *)output_values_neg_34;
                                  do {
                                    /* ST_CALLSITE[00655A61]: CALL 0x00404da9; direct=00404DA9 _GetStaffGrpExch */
                                    pDVar17 = (DArrayTy *)_GetStaffGrpExch(local_10->vtable);
                                    if (pDVar17 != nullptr) {
                                      uVar33 = 0;
                                      dVar15 = pDVar17->count;
                                      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                                      pDVar27 = extraout_EDX_01;
                                      if (0 < (int)dVar15) {
                                        do {
                                          if (uVar33 < dVar15) {
                                            pDVar27 = pDVar17->data;
                                            pdVar16 = (dword *)((int)&pDVar27->flags +
                                                               pDVar17->elementSize * uVar33);
                                          }
                                          else {
                                            pdVar16 = nullptr;
                                          }
                                          /* ST_CALLSITE[00655AAC]: CALL 0x0040387d; direct=0040387D STAllPlayersC::DestroyObjectMsg */
                                          STAllPlayersC::DestroyObjectMsg
                                                    (g_allPlayers_007FA174,
                                                     *(char *)&local_10->vtable,
                                                     STReplaceLowWord((uint32_t)(pDVar27), (uint16_t)((short)*pdVar16)),CASE_1,local_15c);
                                          uVar33 = uVar33 + 1;
                                          dVar15 = pDVar17->count;
                                          pDVar27 = pDVar17;
                                        } while ((int)uVar33 < (int)dVar15);
                                      }
                                      DArrayDestroy(pDVar17);
                                    }
                                    local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x58f:
                            iVar37 = thunk_FUN_0064f950((RecoveredRecord_AiEventClassTy_0064F950 *)
                                                        &local_16c);
                            if (iVar37 != 0) {
                              /* ST_CALLSITE[00655AF7]: CALL dword ptr [EDX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                local_c = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          /* ST_CALLSITE[00655B1C]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                          AnonReceiver_0064A970::sub_00668F50
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)local_c) {
                                  local_10 = (AiFltClassTy *)output_values_neg_34;
                                  do {
                                    if ((char)local_154 == '\b') {
                                      cVar5 = *(char *)&local_10->vtable;
                                    }
                                    else if (((char)local_154 < '\0') ||
                                            (cVar5 = (char)local_154, '\b' < (char)local_154)) {
                                      cVar5 = -1;
                                    }
                                    pDVar17 = (DArrayTy *)
                                              thunk_FUN_006775e0(local_10->vtable,(uint)local_158,
                                                                 (uint)local_15c,local_150,cVar5,
                                                                 (short)local_14c,(short)local_148,
                                                                 (short)local_144,(short)local_140,
                                                                 (short)local_13c,(short)local_138,1
                                                                );
                                    if (pDVar17 != nullptr) {
                                      uVar33 = 0;
                                      if (0 < (int)pDVar17->count) {
                                        bVar36 = pDVar17->count != 0;
                                        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                                        uVar7 = extraout_EDX_02;
                                        do {
                                          if (bVar36) {
                                            puVar18 = DArrayAt<undefined2>(pDVar17, uVar33);
                                          }
                                          else {
                                            puVar18 = nullptr;
                                          }
                                          /* ST_CALLSITE[00655BDB]: CALL 0x0040387d; direct=0040387D STAllPlayersC::DestroyObjectMsg */
                                          STAllPlayersC::DestroyObjectMsg
                                                    (g_allPlayers_007FA174,
                                                     *(char *)&local_10->vtable,
                                                     STReplaceLowWord((uint32_t)(uVar7), (uint16_t)(*puVar18))
                                                     ,CASE_1,local_134);
                                          uVar33 = uVar33 + 1;
                                          bVar36 = uVar33 < pDVar17->count;
                                          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                                          uVar7 = extraout_EDX_03;
                                        } while ((int)uVar33 < (int)pDVar17->count);
                                      }
                                      DArrayDestroy(pDVar17);
                                    }
                                    local_10 = (AiFltClassTy *)&local_10->field_0x4;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x590:
                            iVar37 = thunk_FUN_0064fb00((short *)&local_16c);
                            if (iVar37 != 0) {
                              /* ST_CALLSITE[00655C27]: CALL dword ptr [EAX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                local_c = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          /* ST_CALLSITE[00655C4C]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                          AnonReceiver_0064A970::sub_00668F50
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)local_c) {
                                  local_8 = (DArrayTy *)output_values_neg_34;
                                  do {
                                    /* ST_CALLSITE[00655C9C]: CALL 0x00401b27; direct=00401B27 AiEventClassTy::_CreateRCCont */
                                    local_EAX_13452 =
                                         _CreateRCCont(this_00,(ushort)local_8->flags,
                                                       (short)local_15c,(int)local_158,
                                                       (int)local_154,local_150,local_14c,local_148,
                                                       (int)local_144);
                                    if (local_EAX_13452 != 0) {
                                      dVar15 = local_8->flags;
                                      uVar33 = local_14;
                                      pcVar8_mg3C = thunk_FUN_00674af0(local_EAX_488);
                                      thunk_FUN_0064d0e0(this_00,-0xab,pcVar8_mg3C,uVar33,dVar15);
                                    }
                                    local_8 = (DArrayTy *)&local_8->iteratorIndex;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x591:
                            iVar37 = thunk_FUN_0064fb80((RecoveredRecord_AiEventClassTy_0064FB80 *)
                                                        &local_16c);
                            if (iVar37 != 0) {
                              /* ST_CALLSITE[00655CF1]: CALL dword ptr [EDX + 0x18] */
                              iVar37 = this_00->vfunc_18();
                              if ((iVar37 != 8) || (pDStack_164 != (DArrayTy *)0x9)) {
                                local_c = (DArrayTy *)
                                          SubmarineTitans::Recovered::HiddenThis::
                                          /* ST_CALLSITE[00655D16]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
                                          AnonReceiver_0064A970::sub_00668F50
                                                    ((AnonReceiver_0064A970 *)this_00,
                                                     (char *)pDStack_164,(uint)local_160,
                                                     output_values_neg_34);
                                if (0 < (int)local_c) {
                                  puVar12 = output_values_neg_34;
                                  do {
                                    DAT_008118fc = 0;
                                    /* ST_CALLSITE[00655D7B]: CALL 0x00403882; direct=00403882 _EnumRCCont */
                                    _EnumRCCont((short)*puVar12,(short)local_15c,(byte *)local_158,
                                                (short)local_154,(short)local_150,(short)local_14c,
                                                (short)local_148,(short)local_144,(short)local_140,
                                                thunk_FUN_0064dac0,&local_13c);
                                    puVar12 = puVar12 + 1;
                                    local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
                                  } while (local_c != nullptr);
                                }
                                goto cf_common_join_00659A73;
                              }
                            }
                            break;
                          case 0x592:
                            iVar37 = thunk_FUN_0064fce0((short *)&local_16c);
                            if (iVar37 == 0) break;
                            /* ST_CALLSITE[00655DE5]: CALL 0x00402ba8; direct=00402BA8 AiEventClassTy::_CreateArt */
                            local_EAX_13781 =
                                 _CreateArt(this_00,(short)pDStack_164,(short)local_160,
                                            (int)local_15c,(int)local_158,local_154,
                                            (char *)local_150,local_14c,local_148);
LAB_00655f44:
                            if (local_EAX_13781 != 0) {
LAB_00655f4c:
                              iVar37 = -1;
                              uVar33 = local_14;
                              pcVar8_mg3B = thunk_FUN_00674af0(local_EAX_488);
                              thunk_FUN_0064d0e0(this_00,-0xab,pcVar8_mg3B,uVar33,iVar37);
                            }
                            goto cf_common_join_00659A73;
                          }
cf_common_join_00652A99:
                          iVar37 = -1;
                          uVar33 = local_14;
                          pcVar8_mg3F = thunk_FUN_00674af0(local_EAX_488);
                          thunk_FUN_0064d0e0(this_00,-0x7d,pcVar8_mg3F,uVar33,iVar37);
cf_common_join_00659A73:
                          pDVar17 = (DArrayTy *)((int)&local_170->flags + 1);
cf_continue_loop_00659A80:
                          local_170 = pDVar17;
                          pAVar31 = local_178->field_000F;
                          pDVar17 = pAVar31->field_000C;
                        } while ((int)local_170 < (int)pDVar17);
                      }
                    }
                    goto LAB_00659aae;
                  }
                  iVar37 = -1;
                  pcVar8_mg40 = thunk_FUN_00674af0(local_EAX_327);
                  local_EAX_327 = -0x7d;
                }
                thunk_FUN_0064d0e0(this_00,local_EAX_327,pcVar8_mg40,uVar33,iVar37);
                *(char *)pAVar30 = '\x01';
                pAVar30->field_000B = 0;
              }
            }
            else if (pAVar30->field_000B != 0) {
              if (pAVar30->field_000B == 1) {
                *(char *)pAVar30 = '\0';
              }
              pAVar30->field_000B = pAVar30->field_000B + -1;
            }
LAB_00659aae:
            pDVar17 = this_00->field_04EE;
            local_14 = local_14 + 1;
            bVar36 = local_14 < pDVar17->count;
          } while ((int)local_14 < (int)pDVar17->count);
        }
        uVar33 = local_19c;
        pAVar2 = (AnonShape_006B7830_769CA2DF *)this_00->field_04E2;
        iVar37 = pAVar2->field_0008;
        while ((int)uVar33 < iVar37) {
          FUN_006b7830(pAVar2,iVar37 - 1);
          pAVar2 = (AnonShape_006B7830_769CA2DF *)this_00->field_04E2;
          iVar37 = pAVar2->field_0008;
        }
        if (local_194 == 0x456) {
          this_00->field_00D6 = this_00->field_00D6 + 1;
        }
        g_currentExceptionFrame = local_284.previous;
        return;
      }
      g_currentExceptionFrame = local_284.previous;
      if (local_180 != nullptr) {
        DArrayDestroy(local_180);
      }
      local_180 = nullptr;
      thunk_FUN_0064d0e0(local_188,iVar7,&CHAR_00h_008016a0,local_14,-1);
    }
  }
  return;
code_r0x00653bbb:
  iVar37 = iVar37 + 1;
  puVar12 = puVar12 + 1;
  if (iVar37_mgD7 <= iVar37) goto cf_common_join_00659A73;
  goto LAB_00653bb7;
code_r0x00654366:
  iVar37 = iVar37 + 1;
  puVar12 = puVar12 + 1;
  if (local_EAX_6968 <= iVar37) goto cf_common_join_00659A73;
  goto LAB_00654362;
code_r0x006540bd:
  iVar37 = iVar37 + 1;
  puVar12 = puVar12 + 1;
  if (local_EAX_6287 <= iVar37) goto cf_common_join_00659A73;
  goto LAB_006540b9;
}

