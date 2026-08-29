#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::PlayScript

   [STSwitchEnumApplier] Switch target field_006D uses
   /SubmarineTitans/Recovered/Enums/MTaskTy_field_006DState. Cases: CASE_1=1;CASE_3=3;CASE_5=5 */

void __thiscall MTaskTy::PlayScript(MTaskTy *this)

{
  ushort **ppuVar1;
  char cVar2;
  MTaskTy_field_0074DArray *pMVar3;
  ushort *puVar4;
  UINT resourceId;
  byte bVar6;
  int local_EAX_54;
  ushort *local_EAX_241;
  ushort *puVar11;
  char *pcVar7;
  ushort *local_EAX_2012;
  ccFntTy *pcVar8;
  uint *puVar9;
  int local_EAX_2647;
  int local_EAX_2671;
  char *pcVar15_mg29;
  int iVar20;
  int local_EAX_3423;
  int local_EAX_3448;
  DArrayTy *local_EAX_3982;
  DArrayTy *local_EAX_4163;
  char *pcVar9_mg27;
  char *pcVar9_mg28;
  int uVar20;
  int pAVar10;
  RecoveredRecordView_005E10A0_0590A448 *pRVar10;
  int local_EAX_6030;
  DArrayTy *local_EAX_6198;
  int local_EAX_6428;
  int uVar30;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar11;
  DArrayTy *pDVar17;
  int iVar10;
  DArrayTy *pDVar12;
  int local_EAX_8751;
  dword dVar13;
  cMf32 *this_00;
  uint uVar14;
  MTaskTy *this_01;
  AnonShape_005E1330_47BFB53C *pAVar15;
  MTaskTy_field_0074Element *element_0074;
  byte *puVar16;
  byte *puVar17;
  int iVar18;
  SpriteClassTy *pSVar19;
  byte *pbVar20;
  char *pcVar21;
  void *slotStorage;
  uint *puVar22;
  int *piVar23;
  int *piVar24;
  byte *puVar25;
  uint uVar26;
  bool bVar27;
  ushort *puVar28;
  int iVar29;
  uint local_1268 [256];
  int local_e68 [140];
  CHAR local_c38 [260];
  uint local_b34 [4];
  int local_b24;
  int local_b20;
  uint local_b1c;
  int local_b18;
  int local_b14;
  int local_b10;
  uint local_afc;
  uint local_af8;
  uint local_af4;
  uint local_a84;
  uint local_a80;
  uint local_a7c;
  int local_a78 [4];
  uint local_a68;
  int local_a64;
  uint local_a18;
  uint local_a14;
  uint local_a10;
  uint local_968;
  uint local_964;
  uint local_8fc;
  int local_8f8 [4];
  int local_8e8;
  int local_8e4;
  uint local_890;
  uint local_77c;
  uint local_778;
  uint local_770;
  int local_76c;
  int local_768;
  int local_764;
  int local_760;
  uint local_75c;
  uint local_728;
  uint local_724;
  uint local_720;
  InternalExceptionFrame local_2bc;
  InternalExceptionFrame local_278;
  uint local_234 [4];
  uint local_224;
  uint local_220;
  uint local_21c;
  uint local_204;
  uint local_200;
  uint local_1fc;
  int *local_1ec;
  int local_1e8;
  SpriteClassTy local_1dc;
  char local_14b;
  uint local_14a;
  int local_146;
  int *local_142;
  uint local_13c;
  RecoveredRecord_006B4FA0_DAC3A217 *local_138 [4];
  int local_128;
  int local_124;
  int local_120;
  byte *local_110;
  byte local_10c;
  cTypingTy *local_10b;
  char local_107;
  uint local_106;
  uint *local_102;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  uint local_ec;
  int local_e8;
  uint local_e4 [2];
  byte local_db;
  byte local_da;
  byte local_d9;
  byte local_d8;
  byte local_d7;
  uint local_d6;
  uint uStack_d2;
  int iStack_ce;
  uint uStack_ca;
  uint uStack_c6;
  uint local_c2;
  uint local_be;
  int local_94;
  uint local_90;
  MTaskTy *local_8c;
  undefined4 *local_88;
  uint local_84;
  DArrayTy *local_80;
  uint local_7c;
  byte local_78 [5];
  uint local_73;
  byte local_6f;
  byte local_6d;
  byte local_6c;
  byte local_6b;
  uint local_6a;
  char local_66 [32];
  uint local_46;
  uint local_42;
  uint local_32;
  byte local_2a;
  byte local_29;
  DArrayTy *local_28;
  uint local_24;
  DArrayTy *local_20;
  UINT local_1c;
  RecoveredRecord_006B4FA0_DAC3A217 **local_18;
  AnonShape_005E1330_47BFB53C *local_14;
  byte local_d;
  SpriteClassTy *local_c;
  AnonShape_005E1330_1AE0EB1C *local_8;

  local_8 = (AnonShape_005E1330_1AE0EB1C *)0x5e133d;
  local_278.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_278;
  local_8c = this;

  local_EAX_54 = Library::MSVCRT::__setjmp3(local_278.jumpBuffer,0);
  if (local_EAX_54 != 0) {
    g_currentExceptionFrame = local_278.previous;

    local_EAX_8751 =
         ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",0x45f,0,local_EAX_54,
                            "%s","MTaskTy::PlayScript");
    if (local_EAX_8751 == 0) {
      RaiseInternalException(local_EAX_54,0,"E:\\__titans\\Start\\task_obj.cpp",0x45f);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  dVar13 = local_8c->field_0074->count;
  this_01 = local_8c;
  if ((int)local_8c->field_007C < (int)dVar13) {
    do {
      uVar26 = this_01->field_007C;
      if (uVar26 < dVar13) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        pAVar15 = (AnonShape_005E1330_47BFB53C *)
                  ((int)&this_01->field_0074->data->field_0000 +
                  this_01->field_0074->elementSize * uVar26);
      }
      else {
        pAVar15 = nullptr;
      }
      local_14 = pAVar15;
      if (((uint)(this_01->field_0069 - this_01->field_0061) <
           STField<uint>(pAVar15,0x1)) && (this_01->field_006D != CASE_5)) break;
      switch(static_cast<uint32_t>(STRawWord((char)*(int *)&pAVar15->field_0x0))) {
      case '\x01':
        if ((this_01->field_006E != '\x01') ||
           ((pAVar15->field_0xd != '\0' && (pAVar15->field_0xd != '\x01')))) {
          switch(pAVar15->field_0xd) {
          case 0:
            local_24 = (uint)STPiece<1,3>(local_24) << 8;
            break;
          case 1:
            local_24 = STReplaceLowByte((uint32_t)(local_24), (uint8_t)(1));
            break;
          case 2:
            local_24 = STReplaceLowByte((uint32_t)(local_24), (uint8_t)(2));
            break;
          case 3:
            local_24 = STReplaceLowByte((uint32_t)(local_24), (uint8_t)(3));
            break;
          case 4:
            local_24 = STReplaceLowByte((uint32_t)(local_24), (uint8_t)(4));
          }
          uVar26 = local_24 & 0xff;
          if (this_01->field_0291[uVar26] != 0) {
            FUN_006b3af0((int *)g_ddxContext_008075A8,this_01->field_02A5[uVar26]);
            StartSystemTy::sub_006E56B0(this_01->field_000C,this_01->field_0291[uVar26]);
            this_01->field_0291[uVar26] = 0;
          }
          local_8 = (AnonShape_005E1330_1AE0EB1C *)(&this_01->vtable + uVar26 * 3);
          FreeAndNull(&local_8->field_0653);
          if (pAVar15->field_0xe == '\x01') {
            local_18 = *(RecoveredRecord_006B4FA0_DAC3A217 ***)&pAVar15->field_0x17;
            local_84 = STField<uint>(pAVar15,0x1B);
            if ((int)local_18 < 0x91) {
              local_18 = (RecoveredRecord_006B4FA0_DAC3A217 **)0x91;
            }
            if ((int)local_84 < 0x28) {
              local_84 = 0x28;
            }
            iVar18 = 1;
            puVar28 = this_01->field_005D + 0x14;

            local_EAX_2647 = FUN_006b4fe0(this_01->field_005D);

            local_EAX_2671 =
                 FUN_006b50c0((int)local_18,local_84,(uint)this_01->field_005D[7],local_EAX_2647,
                              (undefined4 *)puVar28,iVar18);
            local_8->field_0653 = local_EAX_2671;
            local_8->field_0657 =
                 &this_01->field_0x91 + (uint)(pAVar15->field_000A == '\x01') * 0x100;
            local_8->field_065B = *(undefined4 *)&pAVar15->field_0x9;
            /* ST_CALLSITE[005E1DF9]: CALL 0x00405d1c; direct=00405D1C MTaskTy::CreateBut */
            uVar14 = CreateBut(this_01,1,1,*(uint *)&pAVar15->field_0xf,
                               STField<undefined4>(pAVar15,0x13),local_18,local_84,
                               uVar26 + 0x6200,uVar26 + 0x6212);
            this_01->field_0291[uVar26] = uVar14;
            puVar9 = this_01->field_02A5 + uVar26;

            Library::DKW::DDX::FUN_006b3640
                      ((int *)g_ddxContext_008075A8,this_01->field_02A5[uVar26],0xffffffff,
                       *(uint *)&pAVar15->field_0xf,STField<uint>(pAVar15,0x13));
            FUN_006b2800(g_ddxContext_008075A8,*puVar9,(uint)local_18,local_84);
            FUN_006b3020((int)g_ddxContext_008075A8,*puVar9,pAVar15->field_0005);

            Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*puVar9);
          }
        }
        break;
      case '\x02':
        if (this_01->field_006E != '\x01') {
          if (this_01->field_02B9 != 0) {
            puVar9 = &this_01->field_02BD;
            local_8 = (AnonShape_005E1330_1AE0EB1C *)0x4;
            do {
              FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar9);
              puVar9 = puVar9 + 1;
              local_8 = (AnonShape_005E1330_1AE0EB1C *)((int)&local_8[-1].field_065B + 3);
            } while (local_8 != nullptr);
            StartSystemTy::sub_006E56B0(this_01->field_000C,this_01->field_02B9);
            this_01->field_02B9 = 0;
          }
          slotStorage = &this_01->field_068F;
          local_8 = (AnonShape_005E1330_1AE0EB1C *)0x4;
          do {
            FreeAndNull(slotStorage);
            slotStorage = (void *)((int)slotStorage + 0xc);
            local_8 = (AnonShape_005E1330_1AE0EB1C *)((int)&local_8[-1].field_065B + 3);
          } while (local_8 != nullptr);
          local_8 = nullptr;
          if (pAVar15->field_0xd == '\x01') {
            local_8 = nullptr;
            memset(local_234, 0, 0x58); /* compiler bulk-zero initialization */
            iVar18 = 0;
            memset(local_e68, 0, 0x230); /* compiler bulk-zero initialization */
            bVar6 = 2;
            piVar24 = (int *)&pAVar15->field_0x16;
            iVar18 = 2;
            do {
              if (-1 < *piVar24) {
                bVar6 = bVar6 + 1;
              }
              piVar24 = piVar24 + 1;
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
            local_90 = STReplaceLowByte((uint32_t)(local_90), (uint8_t)(bVar6));
            local_80 = (DArrayTy *)(uint)bVar6;
            if (local_80 == (DArrayTy *)0x2) {
              if ((DAT_00807340 == 1) || (DAT_00807340 == 3)) {
                _DAT_00807340 = (uint)_DAT_00807341 << 8;
              }
            }
            else if ((local_80 == (DArrayTy *)0x3) && (DAT_00807340 == 3)) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _DAT_00807340 = CONCAT31(_DAT_00807341,1);
            }
            local_d = 0;
            if (bVar6 != 0) {
              local_88 = (undefined4 *)&pAVar15->field_0x9;
              local_c = nullptr;
              piVar24 = local_e68;
              pAVar15 = pAVar15 + 1;
              local_8 = (AnonShape_005E1330_1AE0EB1C *)&this_01->field_0x693;
              do {
                local_1c = 0x1f52;
                if (local_80 == (DArrayTy *)0x2) {
                  if (local_c == nullptr) {
                    local_1c = 0x1f47;
                    *piVar24 = 1;
                  }
                  else if (local_c == (SpriteClassTy *)0x1) {
                    local_1c = 0x1f49;
                    *piVar24 = 3;
                  }
                }
                else if (local_80 == (DArrayTy *)0x3) {
                  if (local_c == nullptr) {
                    local_1c = 0x1f47;
LAB_005e200a:
                    *piVar24 = (int)((int)&local_c->vtable + 1);
                  }
                  else if (local_c == (SpriteClassTy *)0x1) {
                    local_1c = 0x1f48;
                    *piVar24 = 2;
                  }
                  else {
                    if (local_c != (SpriteClassTy *)0x2) goto LAB_005e200a;
                    local_1c = 0x1f49;
                    *piVar24 = 3;
                  }
                }
                else {
                  switch(local_c) {
                  case 0:
                    local_1c = 0x1f47;
                    *piVar24 = (int)((int)&local_c->vtable + 1);
                    break;
                  case 0x1:
                    local_1c = 0x1f48;
                    *piVar24 = (int)((int)&local_c->vtable + 1);
                    break;
                  case 0x2:
                    local_1c = 0x1f49;
                    *piVar24 = (int)((int)&local_c->vtable + 1);
                    break;
                  case 0x3:
                  default:
                    local_1c = 0x1f52;
                    *piVar24 = (int)((int)&local_c->vtable + 1);
                  }
                }
                resourceId = local_1c;
                piVar24[1] = (uint)(local_d == DAT_00807340);
                piVar24[3] = *(int *)&((MTaskTy_field_0074Element *)(pAVar15 + -1))->field_000E;
                pcVar15_mg29 = LoadResourceString(resourceId,g_hINSTANCE_00807618);

                iVar20 = FUN_00711110(this_01->field_008D,pcVar15_mg29);
                iVar18 = 1;
                piVar24[5] = iVar20 + 0x1b;
                puVar4 = this_01->field_005D;
                piVar24[4] = *(uint *)pAVar15;
                piVar24[6] = 0x14;
                local_e8 = piVar24[5];
                puVar28 = puVar4 + 0x14;

                local_EAX_3423 = FUN_006b4fe0(puVar4);

                local_EAX_3448 =
                     FUN_006b50c0(local_e8,0x14,(uint)this_01->field_005D[7],local_EAX_3423,
                                  (undefined4 *)puVar28,iVar18);
                local_8[-1].field_065B = local_EAX_3448;
                puVar17 = &local_8->field_0xc;
                pAVar15 = (AnonShape_005E1330_47BFB53C *)&pAVar15->field_0x4;
                *(undefined1 **)local_8 =
                     &this_01->field_0x91 + (uint)(local_14->field_000A != '\0') * 0x100;
                piVar24 = piVar24 + 0x1c;
                *(undefined4 *)&local_8->field_0x4 = *local_88;
                local_d = local_d + 1;
                local_c = (SpriteClassTy *)((int)&local_c->vtable + 1);
                local_8 = (AnonShape_005E1330_1AE0EB1C *)puVar17;
              } while (local_d < (byte)local_90);
            }
            local_234[0] = 1;
            local_1ec = local_e68;
            local_234[1] = 1;
            local_224 = this_01->field_0008;
            local_220 = 2;
            local_200 = 2;
            local_1e8 = (_DAT_00807340 & 0xff) + 1;
            local_21c = 0x6205;
            local_1fc = 0x6217;
            local_204 = local_224;
            /* ST_CALLSITE[005E217E]: CALL dword ptr [EDX + 0x8] */
            (*this_01->field_000C->vtable->CreateObject)
                      ((SystemClassTy *)this_01->field_000C,5,&this_01->field_02B9,nullptr,
                       local_234,0);
            puVar9 = (uint *)(local_e68 + 3);
            puVar22 = &this_01->field_02BD;
            local_8 = (AnonShape_005E1330_1AE0EB1C *)0x4;
            do {

              Library::DKW::DDX::FUN_006b3640
                        ((int *)g_ddxContext_008075A8,*puVar22,0xffffffff,*puVar9,puVar9[1]);
              FUN_006b2800(g_ddxContext_008075A8,*puVar22,puVar9[2],puVar9[3]);
              FUN_006b3020((int)g_ddxContext_008075A8,*puVar22,local_14->field_0005);

              Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*puVar22);
              puVar9 = puVar9 + 0x1c;
              puVar22 = puVar22 + 1;
              local_8 = (AnonShape_005E1330_1AE0EB1C *)((int)&local_8[-1].field_065B + 3);
            } while (local_8 != nullptr);
          }
        }
        break;
      case '\x03':
        if (this_01->field_006E != '\x01') {
          if (this_01->field_02CD != 0) {
            StartSystemTy::sub_006E56B0(this_01->field_000C,this_01->field_02CD);
            this_01->field_02CD = 0;
            FUN_006b3af0((int *)g_ddxContext_008075A8,this_01->field_0484);
            if (this_01->field_02D5 != 0xffffffff) {
              FUN_006b3af0((int *)this_01->field_0319,this_01->field_02D5);
            }
            if (this_01->field_0366 != 0xffffffff) {
              FUN_006b3af0((int *)this_01->field_03AA,this_01->field_0366);
            }
            if (this_01->field_03F7 != 0xffffffff) {
              FUN_006b3af0((int *)this_01->field_043B,this_01->field_03F7);
            }
          }
          FreeAndNull(&this_01->field_06BF);
          if (pAVar15->field_0xd == '\x01') {
            memset(local_b34, 0, 0x878); /* compiler bulk-zero initialization */
            if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
              FUN_006b5570((DArrayTy *)g_startSystem_0081176C->field_0548);
            }
            /* ST_CALLSITE[005E22BE]: CALL 0x006b54f0; direct=006B54F0 Library::DKW::TBL::SArrayCreate; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/uint; signature=__stdcall;pointer:/uint;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint */
            local_EAX_3982 = (DArrayTy *)Library::DKW::TBL::SArrayCreate(nullptr,10,10);
            g_startSystem_0081176C->field_0548 = (uint *)local_EAX_3982;
            dVar13 = g_dArray_0080C4CB->elementSize;
            if (dVar13 != 0) {
              iVar18 = 0;
              if (0 < (int)dVar13) {
                if ((int)dVar13 < 1) {
                  pcVar7 = nullptr;
                  goto LAB_005e22f4;
                }
                do {
                  pcVar7 = *(char **)(g_dArray_0080C4CB->growCapacity + iVar18 * 4);
LAB_005e22f4:
                  thunk_FUN_005411a0((DArrayTy *)g_startSystem_0081176C->field_0548,pcVar7,
                                     "@ - %s");
                  iVar18 = iVar18 + 1;
                } while (iVar18 < (int)g_dArray_0080C4CB->elementSize);
              }
              local_20 = (DArrayTy *)
                         ccFntTy::FormIndentSarr
                                   (this_01->field_008D,
                                    (DArrayTy *)g_startSystem_0081176C->field_0548,
                                    " ,.;:!?/\\()[]{}",(uint *)&DAT_007c21ec,
                                    (*(int *)&pAVar15->field_0x16 - *(int *)&this_01->field_0x2f5) +
                                    -0x2d,0,0xffffffff,nullptr,1);
              if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
                FUN_006b5570((DArrayTy *)g_startSystem_0081176C->field_0548);
              }
              /* ST_CALLSITE[005E2373]: CALL 0x006b54f0; direct=006B54F0 Library::DKW::TBL::SArrayCreate; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/uint; signature=__stdcall;pointer:/uint;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint */
              local_EAX_4163 = (DArrayTy *)Library::DKW::TBL::SArrayCreate(nullptr,10,10);
              g_startSystem_0081176C->field_0548 = (uint *)local_EAX_4163;
              bVar6 = (this_01->field_06C7 != '\x01') - 1;
              local_ec = STReplaceLowByte((uint32_t)(local_ec), (uint8_t)(bVar6)) & 0xffffff02;
              uVar26 = bVar6 & 2;
              pcVar9_mg27 = LoadResourceString(0x2347,g_hINSTANCE_00807618);
              /* ST_CALLSITE[005E23C4]: CALL dword ptr [0x0085bde8] */
              wsprintfA(local_c38,"&%1d %s:",uVar26,pcVar9_mg27);

              Library::DKW::TBL::FUN_006b5aa0
                        ((DArrayTy *)g_startSystem_0081176C->field_0548,local_c38);
              /* ST_CALLSITE[005E23FE]: CALL dword ptr [0x0085bde8] */
              wsprintfA(local_c38,"&%1d %s",2 - uVar26,&CHAR_00h_0080c3c3);

              Library::DKW::TBL::FUN_006b5aa0
                        ((DArrayTy *)g_startSystem_0081176C->field_0548,local_c38);

              Library::DKW::TBL::FUN_006b5aa0
                        ((DArrayTy *)g_startSystem_0081176C->field_0548,&CHAR___007c3b5c);
              pcVar9_mg28 = LoadResourceString(0x2346,g_hINSTANCE_00807618);
              /* ST_CALLSITE[005E2455]: CALL dword ptr [0x0085bde8] */
              wsprintfA(local_c38,"&%1d %s:",uVar26,pcVar9_mg28);

              Library::DKW::TBL::FUN_006b5aa0
                        ((DArrayTy *)g_startSystem_0081176C->field_0548,local_c38);

              Library::DKW::TBL::FUN_006b5aa0
                        ((DArrayTy *)g_startSystem_0081176C->field_0548,&CHAR___007c3b5c);
              if (local_20 != nullptr) {
                if (local_20->elementSize != 0) {
                  ccFntTy::SepColorStrInSarr(this_01->field_008D,&local_20->flags,&local_20->flags);
                }
                iVar18 = 0;
                if (0 < (int)local_20->elementSize) {
                  if ((int)local_20->elementSize < 1) {
                    pcVar7 = nullptr;
                    goto LAB_005e24c5;
                  }
                  do {
                    pcVar7 = *(char **)(local_20->growCapacity + iVar18 * 4);
LAB_005e24c5:

                    Library::DKW::TBL::FUN_006b5aa0
                              ((DArrayTy *)g_startSystem_0081176C->field_0548,pcVar7);
                    iVar18 = iVar18 + 1;
                  } while (iVar18 < (int)local_20->elementSize);
                }
                FUN_006b5570(local_20);
              }
              local_f0 = *(int *)&pAVar15->field_0x16;
              uVar26 = pAVar15->field_001A;
              iVar18 = 1;
              puVar28 = this_01->field_005D + 0x14;

              uVar20 = FUN_006b4fe0(this_01->field_005D);
              /* ST_CALLSITE[005E251A]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_MTaskTy_06BF; signature=__stdcall;pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_MTaskTy_06BF;/int;/int;/int;/uint;pointer:/undefined4;/int */
              pAVar10 = (int)FUN_006b50c0(local_f0,uVar26,(uint)this_01->field_005D[7],uVar20,
                                          (undefined4 *)puVar28,iVar18);
              this_01->field_06BF = (AnonPointee_MTaskTy_06BF *)pAVar10;
              *(undefined1 **)&this_01->field_0x6c3 =
                   &this_01->field_0x91 + (uint)(pAVar15->field_000A != '\0') * 0x100;
              *(undefined4 *)&this_01->field_06C7 = *(undefined4 *)&pAVar15->field_0x9;
              local_b34[0] = 0;
              local_b34[1] = 2;
              local_b14 = *(int *)&pAVar15->field_0xe + 0xf;
              local_b34[2] = 1;
              local_b10 = STField<int>(pAVar15,0x12) + 0xf;
              pcVar8 = this_01->field_008D;
              local_b34[3] = g_startSystem_0081176C->field_0548[2];
              local_b24 = (*(int *)&pAVar15->field_0x16 - *(int *)&this_01->field_0x2f5) + -0x2d;
              if (pcVar8->field_00A0 != 0) {
                FUN_00710790((RecoveredRecordView_00710790_7768A573 *)pcVar8);
              }
              local_b20 = *(int *)&pcVar8->field_0x8a;
              local_b1c = 1;
              local_af4 = 0x6332;
              local_a84 = 4;
              local_a80 = 0;
              local_a78[0] = 0;
              local_afc = this_01->field_0008;
              local_b18 = (int)(local_14->field_001A - 0x1e) / *(int *)&pcVar8->field_0x8a;
              local_af8 = 2;
              local_a7c = 2;
              local_a78[1] = 2;
              local_a78[2] = local_b24 + 0xf + local_b14;
              this_01->field_037E = local_a78[2];
              local_a18 = this_01->field_0008;
              local_a78[3] = (local_14->field_0012 - *(int *)&this_01->field_0x38a) + -0x10 +
                             local_14->field_001A;
              this_01->field_0382 = local_a78[3];
              local_a68 = *(undefined4 *)&this_01->field_0x386;
              local_a64 = *(int *)&this_01->field_0x38a;
              local_968 = 500;
              local_964 = 0x32;
              local_a14 = 2;
              local_a10 = 0x6334;
              local_8fc = 2;
              piVar24 = local_a78;
              piVar23 = local_8f8;
              for (iVar18 = 0x5f; pAVar15 = local_14, iVar18 != 0; iVar18 = iVar18 + -1) {
                *piVar23 = *piVar24;
                piVar24 = piVar24 + 1;
                piVar23 = piVar23 + 1;
              }
              local_764 = *(int *)&this_01->field_0x417;
              local_8f8[2] = local_b24 + 0xf + local_b14;
              local_8e4 = *(int *)&this_01->field_0x2f9;
              this_01->field_02ED = local_8f8[2];
              local_8f8[3] = local_14->field_0012 + 0xf;
              local_890 = 0x6333;
              this_01->field_02F1 = local_8f8[3];
              local_8e8 = *(int *)&this_01->field_0x2f5;
              local_77c = 3;
              local_778 = 1;
              local_770 = 0;
              local_76c = (local_8e8 - local_764) / 2 + local_b24 + 0xf + local_b14;
              this_01->field_040F = local_76c;
              local_768 = local_14->field_0012 + 0x1e + local_8e4;
              this_01->field_0413 = local_768;
              local_728 = this_01->field_0008;
              local_760 = ((local_14->field_001A - local_8e4) - *(int *)&this_01->field_0x38a) +
                          -0x3c;
              local_75c = 0xe;
              local_724 = 2;
              local_720 = 0x6335;
              /* ST_CALLSITE[005E27CB]: CALL dword ptr [EAX + 0x8] */
              (*this_01->field_000C->vtable->CreateObject)
                        ((SystemClassTy *)this_01->field_000C,8,&this_01->field_02CD,nullptr,
                         local_b34,0);
              this_01->field_002D = 0x20;
              this_01->field_0031 = 1;
              FUN_006e6080(this_01,2,this_01->field_02CD,(undefined4 *)&this_01->field_0x1d);

              Library::DKW::DDX::FUN_006b3640
                        ((int *)g_ddxContext_008075A8,this_01->field_0484,0xffffffff,
                         *(uint *)&pAVar15->field_0xe,pAVar15->field_0012);
              FUN_006b2800(g_ddxContext_008075A8,this_01->field_0484,*(uint *)&pAVar15->field_0x16,
                           pAVar15->field_001A);
              FUN_006b3020((int)g_ddxContext_008075A8,this_01->field_0484,pAVar15->field_0005);

              Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,this_01->field_0484);
              if ((int)pAVar15->field_0005 < 1) {
                uVar26 = 0;
              }
              else {
                uVar26 = pAVar15->field_0005 - 1;
              }
              if (this_01->field_02D5 != 0xffffffff) {
                FUN_006b3020(this_01->field_0319,this_01->field_02D5,uVar26);
              }
              pAVar15 = local_14;
              *(uint *)&this_01->field_0x32e = uVar26;
              if ((int)local_14->field_0005 < 1) {
                uVar26 = 0;
              }
              else {
                uVar26 = local_14->field_0005 - 1;
              }
              if (this_01->field_0366 != 0xffffffff) {
                FUN_006b3020(this_01->field_03AA,this_01->field_0366,uVar26);
              }
              *(uint *)&this_01->field_0x3bf = uVar26;
              if ((int)pAVar15->field_0005 < 1) {
                uVar26 = 0;
              }
              else {
                uVar26 = pAVar15->field_0005 - 1;
              }
              if (this_01->field_03F7 != 0xffffffff) {
                FUN_006b3020(this_01->field_043B,this_01->field_03F7,uVar26);
              }
              *(uint *)&this_01->field_0x450 = uVar26;
              this_01->field_03FB = (uint)(this_01->field_06CA == '\x01');
              if (this_01->field_02D5 != 0xffffffff) {

                Library::DKW::DDX::FUN_006b34d0
                          ((uint *)this_01->field_0319,this_01->field_02D5,0xfffffffe,
                           this_01->field_02ED,this_01->field_02F1);
              }
              if (this_01->field_0366 != 0xffffffff) {

                Library::DKW::DDX::FUN_006b34d0
                          ((uint *)this_01->field_03AA,this_01->field_0366,0xfffffffe,
                           this_01->field_037E,this_01->field_0382);
              }
              if (this_01->field_03F7 != 0xffffffff) {

                Library::DKW::DDX::FUN_006b34d0
                          ((uint *)this_01->field_043B,this_01->field_03F7,0xfffffffe,
                           this_01->field_040F,this_01->field_0413);
              }
              if (this_01->field_03F7 != 0xffffffff) {

                Library::DKW::DDX::FUN_006b3730
                          ((uint *)this_01->field_043B,this_01->field_03F7,this_01->field_03FB,
                           this_01->field_040F,this_01->field_0413);
              }
            }
          }
        }
        break;
      case '\x05':
        cVar2 = pAVar15->field_0xe;
        if (cVar2 == '\0') {
          pDVar12 = this_01->field_064F;
        }
        else {
          pDVar12 = this_01->field_0647;
        }
        uVar26 = *(uint *)&pAVar15->field_0xf;
        if (uVar26 < pDVar12->count) {
          if (cVar2 == '\0') {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pRVar10 = (RecoveredRecordView_005E10A0_0590A448 *)
                      (this_01->field_064F->elementSize * uVar26 + (int)this_01->field_064F->data);
          }
          else {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pRVar10 = (RecoveredRecordView_005E10A0_0590A448 *)
                      (this_01->field_0647->elementSize * uVar26 + (int)this_01->field_0647->data);
          }
        }
        else {
          pRVar10 = nullptr;
        }
        if (pAVar15->field_0xd == '\x01') {
          if (((pRVar10 == nullptr) ||
              ((int)*(uint *)pRVar10 < 0)) ||
             (*(int *)&pRVar10->field_0x20 != STField<int>(pAVar15,0x14))) {
            /* ST_CALLSITE[005E2A34]: CALL 0x0040555b; direct=0040555B MTaskTy::TTaskItemClose */
            TTaskItemClose(this_01,pRVar10);
            iVar18 = STField<int>(pAVar15,0x14);
            if (iVar18 < (int)g_dArray_0080C4C7->elementSize) {
              local_8 = *(AnonShape_005E1330_1AE0EB1C **)
                         (g_dArray_0080C4C7->growCapacity + iVar18 * 4);
            }
            else {
              local_8 = nullptr;
            }
            if (local_8 != nullptr) {
              memset(&local_13c, 0, 0x3e); /* compiler bulk-zero initialization */
              if (pAVar15->field_0xe == '\0') {
                local_7c = local_7c & 0xffffff00;
                local_88 = (undefined4 *)((-(uint)(pAVar15->field_0x9 != '\x01') & 0xfffffffe) + 2);
                do {
                  local_fc = *(int *)&pAVar15[1].field_0x4;
                  iVar18 = *(undefined4 *)((int)&pAVar15[1].field_0005 + 3);
                  iVar29 = 1;
                  puVar28 = this_01->field_005D + 0x14;

                  uVar30 = FUN_006b4fe0(this_01->field_005D);
                  /* ST_CALLSITE[005E2CE6]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006B4FA0_DAC3A217; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006B4FA0_DAC3A217;/int;/int;/int;/uint;pointer:/undefined4;/int */
                  pRVar11 = FUN_006b50c0(local_fc,iVar18,(uint)this_01->field_005D[7],uVar30,
                                         (undefined4 *)puVar28,iVar29);
                  local_18 = local_138 + (local_7c & 0xff);
                  *local_18 = pRVar11;
                  local_28 = *(DArrayTy **)&pRVar11[1].field_0x4;
                  if (local_28 == nullptr) {
                    local_28 = (DArrayTy *)
                               (((uint)pRVar11->field_000E * *(int *)&pRVar11->field_0x4 + 0x1f >> 3
                                & 0x1ffffffc) * *(int *)&pRVar11->field_0x8);
                  }

                  puVar16 = STPointerBoundaryCast<byte *>(FUN_006b4fa0(pRVar11));
                  for (uVar26 = (uint)local_28 >> 2; uVar26 != 0; uVar26 = uVar26 - 1) {
                    *puVar16 = 0xffffffff;
                    puVar16 = (byte *)(puVar16 + 1);
                  }
                  for (uVar26 = (uint)local_28 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                    *(undefined1 *)puVar16 = 0xff;
                    puVar16 = (byte *)((int)puVar16 + 1);
                  }
                  /* ST_CALLSITE[005E2D4E]: CALL 0x00405a51; direct=00405A51 MTaskTy::PrepareTSurf */
                  PrepareTSurf(this_01,(RecoveredRecordView_005E11D0_93326EAB *)*local_18,
                               pAVar15->field_0x19,pAVar15->field_0xb);
                  if (pAVar15->field_0x19 != '\0') {
                    local_110 = &this_01->field_0x91 + (uint)(pAVar15->field_000A == '\x01') * 0x100
                    ;
                  }

                  ccFntTy::SetSurf(this_01->field_0089,(int)*local_18,0,0,0,0,0);
                  pDVar17 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);

                  Library::DKW::TBL::FUN_006b5aa0(pDVar17,(char *)local_8);
                  local_80 = (DArrayTy *)
                             ccFntTy::FormIndentSarr
                                       (this_01->field_0089,pDVar17," ,.;:!?/\\()[]{}",
                                        (uint *)&DAT_007c21ec,
                                        *(int *)&pAVar15[1].field_0x4 +
                                        *(int *)&pAVar15[1].field_0xc * -2,0,0xffffffff,nullptr,
                                        1);
                  FUN_006b5570(pDVar17);
                  pDVar12 = local_80;
                  if (local_80 != nullptr) {
                    puVar16 = (byte *)(local_88);
                    if ((char)local_7c != '\0') {
                      if ((char)local_7c == '\x01') {
                        puVar16 = (byte *)((int)local_88 + 1);
                      }
                      else {
                        puVar16 = (byte *)0x4;
                      }
                    }

                    ccFntTy::WrSarr(this_01->field_0089,(int)local_80,0,-1,
                                    *(int *)&pAVar15[1].field_0xc,*(int *)&pAVar15[1].field_0x10,
                                    puVar16);
                    FUN_006b5570(pDVar12);
                  }
                  bVar6 = (char)local_7c + 1;
                  local_7c = STReplaceLowByte((uint32_t)(local_7c), (uint8_t)(bVar6));
                } while (bVar6 < 3);

                FUN_006b2330(g_ddxContext_008075A8,&local_13c,pAVar15->field_0005,0x403db4,
                             *(uint *)&pAVar15[1].field_0x4,
                             *(undefined4 *)((int)&pAVar15[1].field_0005 + 3),
                             (ushort *)this_01->field_064F);
                uVar26 = *(uint *)&pAVar15->field_0xf;
                pDVar12 = this_01->field_064F;
              }
              else {
                local_106 = *(undefined4 *)&pAVar15->field_0x9;
                iVar29 = 1;
                local_107 = pAVar15->field_0x19;
                local_10c = pAVar15->field_0x18;
                local_f8 = *(int *)&pAVar15[1].field_0x4;
                iVar18 = *(undefined4 *)((int)&pAVar15[1].field_0005 + 3);
                puVar28 = this_01->field_005D + 0x14;
                local_f4 = (-(uint)(pAVar15->field_0x9 != '\x01') & 0xfffffffe) + 2;

                local_EAX_6030 = FUN_006b4fe0(this_01->field_005D);
                /* ST_CALLSITE[005E2AD6]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006B4FA0_DAC3A217; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006B4FA0_DAC3A217;/int;/int;/int;/uint;pointer:/undefined4;/int */
                local_138[0] = FUN_006b50c0(local_f8,iVar18,(uint)this_01->field_005D[7],
                                            local_EAX_6030,(undefined4 *)puVar28,iVar29);
                local_18 = *(RecoveredRecord_006B4FA0_DAC3A217 ***)&local_138[0][1].field_0x4;
                if (local_18 == nullptr) {
                  local_18 = (RecoveredRecord_006B4FA0_DAC3A217 **)
                             (((uint)local_138[0]->field_000E * *(int *)&local_138[0]->field_0x4 +
                               0x1f >> 3 & 0x1ffffffc) * *(int *)&local_138[0]->field_0x8);
                }

                puVar16 = STPointerBoundaryCast<byte *>(FUN_006b4fa0(local_138[0]));
                for (uVar26 = (uint)local_18 >> 2; uVar26 != 0; uVar26 = uVar26 - 1) {
                  *puVar16 = 0xffffffff;
                  puVar16 = (byte *)(puVar16 + 1);
                }
                for (uVar26 = (uint)local_18 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                  *(undefined1 *)puVar16 = 0xff;
                  puVar16 = (byte *)((int)puVar16 + 1);
                }
                if (pAVar15->field_0x19 != '\0') {
                  local_110 = &this_01->field_0x91 + (uint)(STPiece<1,1>(local_106) == '\x01') * 0x100;
                }

                ccFntTy::SetSurf(this_01->field_0089,(int)local_138[0],0,0,0,0,0);
                local_EAX_6198 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);

                Library::DKW::TBL::FUN_006b5aa0(local_EAX_6198,(char *)local_8);
                local_28 = (DArrayTy *)
                           ccFntTy::FormIndentSarr
                                     (this_01->field_0089,local_EAX_6198," ,.;:!?/\\()[]{}",
                                      (uint *)&DAT_007c21ec,
                                      *(int *)&pAVar15[1].field_0x4 +
                                      *(int *)&pAVar15[1].field_0xc * -2,0,0xffffffff,nullptr,1);
                FUN_006b5570(local_EAX_6198);
                pDVar12 = local_28;
                if (local_28 != nullptr) {
                  /* ST_CALLSITE[005E2BBF]: CALL 0x00713080; direct=00713080 ccFntTy::_SarrToTxt; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/uint; signature=__thiscall;pointer:/uint;pointer:/ccFntTy;pointer:/char;/int */
                  local_102 = ccFntTy::_SarrToTxt(this_01->field_0089,nullptr,(int)local_28);
                  if (local_102 != nullptr) {
                    local_10b = (cTypingTy *)Library::MSVCRT::FUN_0072e530(0xb4);
                    if (local_10b == nullptr) {
                      local_10b = nullptr;
                    }
                    else {
                      local_10b->field_0058 = 0;
                      local_10b->field_0088 = 0;
                    }
                    local_128 = *(int *)&pAVar15[1].field_0xc;
                    local_124 = *(int *)&pAVar15[1].field_0x10;

                    local_EAX_6428 =
                         cTypingTy::TypingInit
                                   (local_10b,local_102,this_01->field_0089,0,0,0,
                                    *(int *)&pAVar15[1].field_0x4 +
                                    *(int *)&pAVar15[1].field_0xc * -2,
                                    *(undefined4 *)((int)&pAVar15[1].field_0005 + 3) +
                                    *(int *)&pAVar15[1].field_0x10 * -2,0,0,local_f4,local_f4 + 1,4,
                                    0xff);
                    local_120 = local_EAX_6428 + 1;
                  }
                  FUN_006b5570(pDVar12);
                }

                FUN_006b2330(g_ddxContext_008075A8,&local_13c,pAVar15->field_0005,0x4041b0,
                             *(uint *)&pAVar15[1].field_0x4,
                             *(undefined4 *)((int)&pAVar15[1].field_0005 + 3),
                             (ushort *)this_01->field_0647);
                uVar26 = *(uint *)&pAVar15->field_0xf;
                pDVar12 = this_01->field_0647;
              }

              Library::DKW::TBL::DArrayPut(pDVar12,uVar26,&local_13c);

              Library::DKW::DDX::FUN_006b3640
                        ((int *)g_ddxContext_008075A8,local_13c,0,pAVar15->field_001A,
                         *(uint *)(pAVar15 + 1));
            }
          }
          else {
            if (cVar2 == '\0') {
              uVar26 = *(uint *)&pRVar10->field_0x10;
            }
            else {
              uVar26 = 0;
            }

            Library::DKW::DDX::FUN_006b3730
                      ((uint *)g_ddxContext_008075A8,*(uint *)pRVar10,uVar26,pAVar15->field_001A,
                       *(uint *)(pAVar15 + 1));
          }
        }
        else if ((pRVar10 != nullptr) && (-1 < *(int *)pRVar10)
                ) {
          if (this_01->field_006D == CASE_5) {
            /* ST_CALLSITE[005E2EB3]: CALL 0x0040555b; direct=0040555B MTaskTy::TTaskItemClose */
            TTaskItemClose(this_01,pRVar10);
          }
          else {
            if (cVar2 == '\0') {
              iVar18 = 1;
            }
            else {
              iVar18 = *(int *)&pRVar10->field_0x1c + -2;
            }
            *(int *)&pRVar10->field_0x10 = iVar18;
            *(undefined4 *)&pRVar10->field_0x28 = 2;
            *(undefined4 *)&pRVar10->field_0x24 = this_01->field_0069;

            FUN_006b35d0((int *)g_ddxContext_008075A8,*(uint *)pRVar10);
          }
        }
        break;
      case '\x06':
        if (this_01->field_006D != CASE_5) {
          puVar9 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                     (this_01->field_0070,&pAVar15->field_0xd,0,nullptr);
          if ((puVar9 != nullptr) ||
             (puVar9 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                         (g_cMf32_00806798,&pAVar15->field_0xd,0,nullptr),
             puVar9 != nullptr)) {
            SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0056A130::thunk_FUN_0056a130
                      ((RecoveredReceiver_0056A130 *)&g_sound,0,'\x03',-1,puVar9);
          }
        }
        break;
      case '\a':
        pDVar12 = this_01->field_064B;
        if (*(uint *)&pAVar15->field_0xe < pDVar12->count) {
          pSVar19 = DArrayAt<SpriteClassTy>(pDVar12, *(uint *)&pAVar15->field_0xe);
        }
        else {
          pSVar19 = nullptr;
        }
        local_c = pSVar19;
        if (pAVar15->field_0xd == '\x01') {
          SpriteClassTy::SpriteClassTy(&local_1dc);
          local_142 = nullptr;
          local_94 = 1;
          local_2bc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_2bc;

          iVar10 = Library::MSVCRT::__setjmp3(local_2bc.jumpBuffer,0);
          pSVar19 = local_c;
          pAVar15 = local_14;
          if (iVar10 == 0) {
            if (local_c != nullptr) {
              pbVar20 = &local_c->field_0065;
              if (pbVar20 != nullptr) {
                piVar24 = &local_14->field_0012;
                do {
                  bVar6 = *pbVar20;
                  bVar27 = bVar6 < (byte)*piVar24;
                  if (bVar6 != (byte)*piVar24) {
LAB_005e2ffb:
                    iVar18 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
                    goto LAB_005e3000;
                  }
                  if (bVar6 == 0) break;
                  bVar6 = pbVar20[1];
                  bVar27 = bVar6 < STField<byte>(piVar24,1);
                  if (bVar6 != STField<byte>(piVar24,1)) goto LAB_005e2ffb;
                  pbVar20 = pbVar20 + 2;
                  piVar24 = (int *)((int)piVar24 + 2);
                } while (bVar6 != 0);
                iVar18 = 0;
LAB_005e3000:
                if (iVar18 != 0) {

                  SpriteClassTy::CloseSprite(local_c);
                  if (*(int *)((int)&pSVar19[1].field_0008 + 1) != 0) {
                    FreeAndNull((void *)((int)&pSVar19[1].field_0008 + 1));
                  }
                  goto LAB_005e3030;
                }
              }
              local_94 = 0;
            }
LAB_005e3030:
            pSVar19 = local_c;
            this_01 = local_8c;
            if (local_94 == 0) {
              if (local_c == nullptr) {
                puVar16 = nullptr;
              }
              else {
                puVar16 = (byte *)(&local_c->field_0004);
              }
              puVar25 = (byte *)(&local_1dc.field_0004);
              memmove(puVar25, puVar16, 0x44); /* compiler REP MOVS byte copy */
              local_1dc.field_0048 = (uint *)pSVar19->field_0048;
              local_1dc.field_004C = pSVar19->field_004C;
              local_1dc.field_004D = pSVar19->field_004D;
              local_1dc.field_0051 = pSVar19->field_0051;
              local_1dc.field_0055 = pSVar19->field_0055;
              local_1dc.field_0059 = pSVar19->field_0059;
              local_1dc.field_005D = pSVar19->field_005D;
              local_1dc.field_0061 = pSVar19->field_0061;
              puVar17 = &local_1dc.field_0065;
              iVar18 = 0x20;
              do {
                *puVar17 = puVar17[(int)pSVar19 - (int)&local_1dc];
                puVar17 = puVar17 + 1;
                iVar18 = iVar18 + -1;
              } while (iVar18 != 0);
              local_1dc.field_0085 = pSVar19->field_0085;
              local_1dc.field_0089 = pSVar19->field_0089;
              local_1dc.field_008D = pSVar19->field_008D;
              pAVar15 = local_14;
            }
            else {

              SpriteClassTy::InitSprite
                        (&local_1dc,(int *)g_ddxContext_008075A8,pAVar15->field_0005,'\x1e',
                         nullptr,0,0);

              iVar18 = SpriteClassTy::SetImages
                                 (&local_1dc,this_01->field_0070,CASE_1E,0,
                                  (char *)&pAVar15->field_0012,0xffffffff,0);
              if (iVar18 != 0) {

                SpriteClassTy::SetImages
                          (&local_1dc,g_cMf32_00806798,CASE_1E,0,(char *)&pAVar15->field_0012,
                           0xffffffff,1);
              }
            }
            local_1dc.field_001C = *(uint *)((int)&pAVar15[1].field_0012 + 2);
            local_1dc.field_0020 = *(uint *)&pAVar15[1].field_0x18;
            cVar2 = *(char *)((int)&pAVar15[2].field_0012 + 1);
            if (cVar2 == '\0') {
              local_14b = '\0';
              local_1dc.field_0008 = *(int *)&pAVar15[2].field_0xe;
            }
            else if (cVar2 == '\x01') {
              local_1dc.field_0044 = this_01->field_0069;
              local_14b = ((char)pAVar15[2].field_0012 != '\0') + '\x01';
              local_1dc.field_0008 = *(int *)&pAVar15[2].field_0xe;
              local_1dc.field_0040 = *(int *)&pAVar15[2].field_000A;
            }
            else if (cVar2 == '\x02') {
              local_1dc.field_0044 = this_01->field_0069;
              local_14b = ((char)pAVar15[2].field_0012 != '\0') + '\x03';
              local_1dc.field_0008 = *(int *)&pAVar15[2].field_0xe;
              local_1dc.field_0040 = *(int *)&pAVar15[2].field_000A;
              local_14a = 0;
              local_146 = *(int *)((int)&pAVar15[2].field_0005 + 1);
              local_142 = FUN_006c81c0(*(int *)((int)&pAVar15[1].field_0012 + 2),
                                       *(int *)&pAVar15[1].field_0x18,
                                       *(int *)((int)&pAVar15[1].field_001A + 2),
                                       *(int *)&pAVar15[2].field_0x2,local_146);
              if (local_142 == nullptr) {
                local_14b = ((char)pAVar15[2].field_0012 != '\0') + '\x01';
              }
            }
            if (local_1dc.field_0004 != 0xffffffff) {

              Library::DKW::DDX::FUN_006b3730
                        (local_1dc.field_0048,local_1dc.field_0004,local_1dc.field_0008,
                         local_1dc.field_001C,local_1dc.field_0020);
            }

            Library::DKW::TBL::DArrayPut
                      (this_01->field_064B,*(uint *)&pAVar15->field_0xe,&local_1dc);
            g_currentExceptionFrame = local_2bc.previous;
          }
          else {
            g_currentExceptionFrame = local_2bc.previous;

            SpriteClassTy::CloseSprite(&local_1dc);
            this_01 = local_8c;
            if (local_142 != nullptr) {
              FreeAndNull(&local_142);
              this_01 = local_8c;
            }
          }
        }
        else if (pSVar19 != nullptr) {

          SpriteClassTy::CloseSprite(pSVar19);
          if (*(int *)((int)&pSVar19[1].field_0008 + 1) != 0) {
            FreeAndNull((void *)((int)&pSVar19[1].field_0008 + 1));
          }
        }
        break;
      case '\b':
        memset(local_e4, 0, 0x50); /* compiler bulk-zero initialization */
        local_da = 0;
        local_d9 = 1;
        local_d8 = 1;
        local_db = 1;
        STPiece<0,1>(local_e4[0]) = 1;
        local_d7 = 2;
        local_d6 = 0x26201;
        uStack_d2 = 0x22600;
        STPiece<1,3>(iStack_ce) = 0x91;
        STPiece<0,1>(iStack_ce) = 0;
        uStack_ca = 0x2800;
        uStack_c6 = uStack_c6 & 0xffffff00;

        Library::DKW::TBL::FUN_006b11d0(&this_01->field_0074->flags,uVar26 + 1,local_e4);
        local_d7 = 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_d6 = CONCAT31(0x2d,(undefined1)local_d6);
        uStack_d2 = 0x22600;
        STPiece<0,1>(iStack_ce) = 0;

        Library::DKW::TBL::FUN_006b11d0
                  (&this_01->field_0074->flags,this_01->field_007C + 1,local_e4);
        local_d7 = 0;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_d6 = CONCAT31(0x23,(undefined1)local_d6);
        uStack_d2 = 0x1f400;
        iStack_ce = (uint)STPiece<1,3>(iStack_ce) << 8;

        Library::DKW::TBL::FUN_006b11d0
                  (&this_01->field_0074->flags,this_01->field_007C + 1,local_e4);
        local_d9 = 0;
        local_d8 = 0;
        local_db = 0;
        local_da = 0;
        STPiece<0,1>(local_e4[0]) = 2;
        local_d7 = 1;
        local_d6 = 0x104;
        uStack_c6 = 0x226;
        uStack_d2 = 0x122;
        local_c2 = 0x23f;
        iStack_ce = 0x1a4;
        local_be = 0x226;

        Library::DKW::TBL::FUN_006b11d0
                  (&this_01->field_0074->flags,this_01->field_007C + 1,local_e4);
        uStack_d2 = 200;
        uStack_ca = 200;
        local_d9 = 0;
        local_d8 = 0;
        local_db = 0;
        local_da = 0;
        STPiece<0,1>(local_e4[0]) = 3;
        local_d7 = 1;
        local_d6 = 0x96;
        iStack_ce = 500;

        Library::DKW::TBL::FUN_006b11d0
                  (&this_01->field_0074->flags,this_01->field_007C + 1,local_e4);
        break;
      case '\t':
        ppuVar1 = &this_01->field_005D;
        if (this_01->field_005D != nullptr) {
          this_00 = g_cMf32_00806780;
          if ((this_01->field_0080 != '\x01') &&
             (this_00 = g_cMf32_00806798, this_01->field_0080 != '\x02')) {
            this_00 = this_01->field_0070;
          }
          cMf32::RecMemFree(this_00,(uint *)ppuVar1);
        }
        local_c = (SpriteClassTy *)&pAVar15->field_0xd;
        this_01->field_0080 = 0;
        local_EAX_241 = FUN_0070a9f0(this_01->field_0070,(char *)local_c,0,0);
        *ppuVar1 = local_EAX_241;
        if (local_EAX_241 == nullptr) {
          puVar11 = FUN_0070a9f0(g_cMf32_00806798,(char *)local_c,0,0);
          *ppuVar1 = puVar11;
          if (puVar11 == nullptr) {
            iVar18 = 1;
            bVar6 = 0;
            /* ST_CALLSITE[005E1AFC]: CALL 0x006f2c00; direct=006F2C00 FUN_006f2c00; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__cdecl;pointer:/char;pointer:/char;/int;/undefined4 */
            pcVar7 = FUN_006f2c00("TASK_BKG",1,(uint)DAT_0080874e);
            local_EAX_2012 = FUN_0070a9f0(g_cMf32_00806780,pcVar7,bVar6,iVar18);
            *ppuVar1 = local_EAX_2012;
            this_01->field_0080 = 1;
          }
          else {
            memset((void *)local_78, 0, 0x50); /* compiler bulk-zero initialization */
            local_6d = 1;
            local_6c = 1;
            local_6f = 1;
            STPiece<1,4>(local_78) = STField<undefined4>(pAVar15,0x1);
            local_73 = 0x7ffffff0;
            local_78[0] = 7;
            local_6b = 1;
            local_32 = 2;
            local_2a = 1;
            local_29 = 1;
            pSVar19 = local_c;
            pbVar20 = (byte *)PTR_s_DEFAULT_WS_ANIMATED_0079c224;
            do {
              bVar6 = *(byte *)&pSVar19->vtable;
              bVar27 = bVar6 < *pbVar20;
              if (bVar6 != *pbVar20) {
LAB_005e14be:
                iVar18 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
                goto LAB_005e14c3;
              }
              if (bVar6 == 0) break;
              bVar6 = *(byte *)((int)&pSVar19->vtable + 1);
              bVar27 = bVar6 < pbVar20[1];
              if (bVar6 != pbVar20[1]) goto LAB_005e14be;
              pSVar19 = (SpriteClassTy *)((int)&pSVar19->vtable + 2);
              pbVar20 = pbVar20 + 2;
            } while (bVar6 != 0);
            iVar18 = 0;
LAB_005e14c3:
            pSVar19 = local_c;
            pbVar20 = (byte *)PTR_s_DEFAULT_BO_ANIMATED_0079c228;
            if (iVar18 == 0) {
              uVar26 = 0xffffffff;
              pcVar7 = &CHAR_D_007cdc48;
              do {
                pcVar21 = pcVar7;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar7 + 1;
                cVar2 = *pcVar7;
                pcVar7 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf0;
              pcVar7 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar21 = pcVar21 + 4;
              }
              iVar18 = this_01->field_007C;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0;
              local_42 = 0;

              Library::DKW::TBL::FUN_006b11d0
                        (&this_01->field_0074->flags,iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar7 = "DEF_WS_ANI2";
              do {
                pcVar21 = pcVar7;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar7 + 1;
                cVar2 = *pcVar7;
                pcVar7 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf1;
              iVar18 = this_01->field_007C;
              pcVar7 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0;
              local_42 = 0x9c;

              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar7 = "DEF_WS_ANI3";
              do {
                pcVar21 = pcVar7;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar7 + 1;
                cVar2 = *pcVar7;
                pcVar7 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf2;
              iVar18 = this_01->field_007C;
              pcVar7 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x40;
              local_42 = 0x9c;

              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar18 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar26 = 0xffffffff;
              pcVar7 = &CHAR_D_007cdc18;
              do {
                pcVar21 = pcVar7;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar7 + 1;
                cVar2 = *pcVar7;
                pcVar7 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              iVar18 = this_01->field_007C;
              pcVar7 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x208;
              local_42 = 0;

              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar7 = &CHAR_D_007cdc08;
              do {
                pcVar21 = pcVar7;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar7 + 1;
                cVar2 = *pcVar7;
                pcVar7 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf4;
              iVar18 = this_01->field_007C;
              pcVar7 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x208;
              local_42 = 0x9c;

              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar7 = &CHAR_D_007cdbf8;
              do {
                pcVar21 = pcVar7;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar7 + 1;
                cVar2 = *pcVar7;
                pcVar7 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf5;
              iVar18 = this_01->field_007C;
              pcVar7 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x2df;
              local_42 = 0x9c;

              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar18 + 1,(undefined4 *)local_78);
              pSVar19 = local_c;
              pbVar20 = (byte *)PTR_s_DEFAULT_BO_ANIMATED_0079c228;
            }
            do {
              bVar6 = *(byte *)&pSVar19->vtable;
              bVar27 = bVar6 < *pbVar20;
              if (bVar6 != *pbVar20) {
LAB_005e16bc:
                iVar18 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
                goto LAB_005e16c1;
              }
              if (bVar6 == 0) break;
              bVar6 = *(byte *)((int)&pSVar19->vtable + 1);
              bVar27 = bVar6 < pbVar20[1];
              if (bVar6 != pbVar20[1]) goto LAB_005e16bc;
              pSVar19 = (SpriteClassTy *)((int)&pSVar19->vtable + 2);
              pbVar20 = pbVar20 + 2;
            } while (bVar6 != 0);
            iVar18 = 0;
LAB_005e16c1:
            pSVar19 = local_c;
            pbVar20 = (byte *)PTR_s_DEFAULT_SI_ANIMATED_0079c22c;
            if (iVar18 == 0) {
              uVar26 = 0xffffffff;
              pcVar7 = "DEF_BO_ANI1";
              do {
                pcVar21 = pcVar7;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar7 + 1;
                cVar2 = *pcVar7;
                pcVar7 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf0;
              pcVar7 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar21 = pcVar21 + 4;
              }
              iVar18 = this_01->field_007C;
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0xb0;
              local_42 = 0;

              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar7 = "DEF_BO_ANI2";
              do {
                pcVar21 = pcVar7;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar7 + 1;
                cVar2 = *pcVar7;
                pcVar7 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf1;
              iVar18 = this_01->field_007C;
              pcVar7 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0;
              local_42 = 0x2d;

              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar7 = "DEF_BO_ANI3";
              do {
                pcVar21 = pcVar7;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar7 + 1;
                cVar2 = *pcVar7;
                pcVar7 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf2;
              iVar18 = this_01->field_007C;
              pcVar7 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0xb0;
              local_42 = 0x6c;

              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar18 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar26 = 0xffffffff;
              pcVar7 = "DEF_BO_ANI4";
              do {
                pcVar21 = pcVar7;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar7 + 1;
                cVar2 = *pcVar7;
                pcVar7 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              iVar18 = this_01->field_007C;
              pcVar7 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0xdc;
              local_42 = 0x6c;

              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar7 = &CHAR_D_007cdba8;
              do {
                pcVar21 = pcVar7;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar7 + 1;
                cVar2 = *pcVar7;
                pcVar7 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf4;
              iVar18 = this_01->field_007C;
              pcVar7 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x1ce;
              local_42 = 0x6c;

              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar7 = &CHAR_D_007cdb98;
              do {
                pcVar21 = pcVar7;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar7 + 1;
                cVar2 = *pcVar7;
                pcVar7 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf5;
              iVar18 = this_01->field_007C;
              pcVar7 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x2a9;
              local_42 = 0x6c;

              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              local_6a = 0xf6;
              pcVar7 = &CHAR_D_007cdb88;
              do {
                pcVar21 = pcVar7;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar7 + 1;
                cVar2 = *pcVar7;
                pcVar7 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              iVar18 = this_01->field_007C;
              pcVar7 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x78;
              local_42 = 0x154;

              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar7 = "DEF_BO_ANI8";
              do {
                pcVar21 = pcVar7;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar7 + 1;
                cVar2 = *pcVar7;
                pcVar7 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf7;
              iVar18 = this_01->field_007C;
              pcVar7 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x78;
              local_42 = 0x1cb;

              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar18 + 1,(undefined4 *)local_78);
              pSVar19 = local_c;
              pbVar20 = (byte *)PTR_s_DEFAULT_SI_ANIMATED_0079c22c;
            }
            do {
              bVar6 = *(byte *)&pSVar19->vtable;
              bVar27 = bVar6 < *pbVar20;
              if (bVar6 != *pbVar20) {
LAB_005e1958:
                iVar18 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
                goto LAB_005e195d;
              }
              if (bVar6 == 0) break;
              bVar6 = *(byte *)((int)&pSVar19->vtable + 1);
              bVar27 = bVar6 < pbVar20[1];
              if (bVar6 != pbVar20[1]) goto LAB_005e1958;
              pSVar19 = (SpriteClassTy *)((int)&pSVar19->vtable + 2);
              pbVar20 = pbVar20 + 2;
            } while (bVar6 != 0);
            iVar18 = 0;
LAB_005e195d:
            if (iVar18 == 0) {
              uVar26 = 0xffffffff;
              pcVar7 = "DEF_SI_ANI1";
              do {
                pcVar21 = pcVar7;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar7 + 1;
                cVar2 = *pcVar7;
                pcVar7 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf0;
              pcVar7 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar21 = pcVar21 + 4;
              }
              iVar18 = this_01->field_007C;
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x8e;
              local_42 = 0x125;

              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar7 = "DEF_SI_ANI2";
              do {
                pcVar21 = pcVar7;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar7 + 1;
                cVar2 = *pcVar7;
                pcVar7 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf1;
              iVar18 = this_01->field_007C;
              pcVar7 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x103;
              local_42 = 0x10f;

              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar7 = "DEF_SI_ANI3";
              do {
                pcVar21 = pcVar7;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar7 + 1;
                cVar2 = *pcVar7;
                pcVar7 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf2;
              iVar18 = this_01->field_007C;
              pcVar7 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x103;
              local_42 = 0x15f;

              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar18 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar26 = 0xffffffff;
              pcVar7 = "DEF_SI_ANI4";
              do {
                pcVar21 = pcVar7;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar7 + 1;
                cVar2 = *pcVar7;
                pcVar7 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              iVar18 = this_01->field_007C;
              pcVar7 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0xd7;
              local_42 = 0x1a4;

              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar7 = "DEF_SI_ANI5";
              do {
                pcVar21 = pcVar7;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar7 + 1;
                cVar2 = *pcVar7;
                pcVar7 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf4;
              iVar18 = this_01->field_007C;
              pcVar7 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x27c;
              local_42 = 0x126;

              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar18 + 1,(undefined4 *)local_78);
            }
            this_01->field_0080 = 2;
          }
        }
        pMVar3 = this_01->field_0074;
        if ((uint)this_01->field_007C < pMVar3->count) {
          element_0074 = DArrayAt<MTaskTy_field_0074Element>(pMVar3, this_01->field_007C);
        }
        else {
          element_0074 = nullptr;
        }
        local_14 = element_0074;

        FUN_006bc360(this_01->field_005D,local_1268,nullptr);

        Library::Ourlib::PALETTE::FUN_00718780
                  ((int)local_1268,0,0x100,0x1a,0x10,(undefined4 *)&this_01->field_0x91);

        Library::Ourlib::PALETTE::FUN_00718780
                  ((int)local_1268,0,0x100,0x2e,0x10,(undefined4 *)&this_01->field_0x191);
        if (this_01->field_007C != 0) {
          /* ST_CALLSITE[005E1B9A]: CALL 0x00401d43; direct=00401D43 DarkScreen */
          DarkScreen(g_dDXContext_0080759C,1,0);
          /* ST_CALLSITE[005E1BA4]: CALL 0x00403670; direct=00403670 MTaskTy::PaintMTask */
          PaintMTask(this_01);
          thunk_FUN_0055ddf0((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                             this_01->field_005D,10,2);
        }
        if (this_01->field_0089 != nullptr) {
          ccFntTy::operator_delete((uint *)this_01->field_0089);
        }
        /* ST_CALLSITE[005E1BE8]: CALL 0x004042a5; direct=004042A5 thunk_FUN_005defe0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/int;pointer:/undefined;/WinDef.h/BYTE */
        pcVar8 = thunk_FUN_005defe0((int)this_01->field_005D,nullptr,DAT_00807dd9);
        this_01->field_0089 = pcVar8;
        pcVar8->field_0058 = 1;
        pcVar8->field_005C = 0;
        if (this_01->field_008D != nullptr) {
          ccFntTy::operator_delete((uint *)this_01->field_008D);
        }
        /* ST_CALLSITE[005E1C23]: CALL 0x00402306; direct=00402306 thunk_FUN_005df290; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/int;pointer:/undefined;/WinDef.h/BYTE */
        pcVar8 = thunk_FUN_005df290((int)this_01->field_005D,nullptr,DAT_00807dd9);
        this_01->field_008D = pcVar8;
        thunk_FUN_00568bc0(&g_sound,0);
        if ((STPiece<1,1>(DAT_00807300) & 8) != 0) {
          puVar9 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                     (this_01->field_0070,&element_0074[1].field_0xf,0,nullptr);
          this_01->field_0085 = puVar9;
          if (puVar9 == nullptr) {
            puVar9 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                       (g_cMf32_00806798,&element_0074[1].field_0xf,0,nullptr);
            this_01->field_0085 = puVar9;
            if (puVar9 == nullptr) {
              SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0056A130::thunk_FUN_0056a130
                        ((RecoveredReceiver_0056A130 *)&g_sound,0x14,'\x02',0,nullptr);
              break;
            }
          }
          SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0056A130::thunk_FUN_0056a130
                    ((RecoveredReceiver_0056A130 *)&g_sound,0,'\x02',0,puVar9);
        }
      }
      iVar18 = this_01->field_007C + 1;
      this_01->field_007C = iVar18;
      dVar13 = this_01->field_0074->count;
    } while (iVar18 < (int)dVar13);
  }
  if (this_01->field_007C == this_01->field_0074->count) {
    if ((this_01->field_006D == CASE_5) &&
       (pDVar12 = this_01->field_064B, pDVar12 != nullptr)) {
      uVar26 = 0;
      if (pDVar12->count != 0) {
        if (pDVar12->count == 0) {
          pSVar19 = nullptr;
          goto LAB_005e34e0;
        }
        do {
          pSVar19 = DArrayAt<SpriteClassTy>(pDVar12, uVar26);
LAB_005e34e0:
          if ((pSVar19->field_0004 != -1) &&
             ((*(char *)&pSVar19[1].vtable == '\x01' || (*(char *)&pSVar19[1].vtable == '\x03')))) {

            SpriteClassTy::CloseSprite(pSVar19);
            if (*(int *)((int)&pSVar19[1].field_0008 + 1) != 0) {
              FreeAndNull((void *)((int)&pSVar19[1].field_0008 + 1));
            }
          }
          pDVar12 = this_01->field_064B;
          uVar26 = uVar26 + 1;
        } while (uVar26 < pDVar12->count);
      }
    }
    this_01->field_006D = CASE_1;
  }
  g_currentExceptionFrame = local_278.previous;
  return;
}

