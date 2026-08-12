#include "../../pseudocode_runtime.h"


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
  dword dVar5;
  undefined4 uVar6;
  byte bVar8;
  int local_EAX_54;
  ushort *local_EAX_241;
  ushort *puVar11;
  LPSTR text;
  ushort *local_EAX_2012;
  ccFntTy *pcVar10;
  uint *puVar12;
  int local_EAX_2647;
  int local_EAX_2671;
  char *pcVar15_mg29;
  int iVar20;
  int local_EAX_3423;
  int local_EAX_3448;
  DArrayTy *local_EAX_3982;
  DArrayTy *local_EAX_4163;
  int uVar20;
  AnonPointee_MTaskTy_06BF *pAVar13;
  AnonShape_005E10A0_819783CC *pAVar14;
  char *pcVar15;
  int local_EAX_6030;
  DArrayTy *local_EAX_6198;
  DArrayTy *pDVar16;
  int local_EAX_6428;
  int uVar30;
  int *piVar17;
  DArrayTy *pDVar17;
  byte bVar9;
  int iVar10;
  int local_EAX_8751;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  MTaskTy *extraout_ECX;
  cMf32 *this_00;
  uint uVar18;
  MTaskTy *this_01;
  int *piVar19;
  MTaskTy_field_0074Element *element_0074;
  byte *pbVar20;
  byte *pbVar21;
  byte *puVar22;
  undefined1 *puVar23;
  int iVar24;
  SpriteClassTy *pSVar25;
  byte *pbVar26;
  char *pcVar27;
  uint *puVar28;
  uint uVar29;
  bool bVar30;
  undefined4 local_1268 [256];
  int local_e68 [140];
  DArrayTy local_c38 [8];
  uint local_b34 [4];
  int local_b24;
  int local_b20;
  undefined4 local_b1c;
  int local_b18;
  int local_b14;
  int local_b10;
  undefined4 local_afc;
  undefined4 local_af8;
  undefined4 local_af4;
  undefined4 local_a84;
  undefined4 local_a80;
  undefined4 local_a7c;
  int local_a78 [4];
  undefined4 local_a68;
  int local_a64;
  undefined4 local_a18;
  undefined4 local_a14;
  undefined4 local_a10;
  undefined4 local_968;
  undefined4 local_964;
  undefined4 local_8fc;
  int local_8f8 [4];
  int local_8e8;
  int local_8e4;
  undefined4 local_890;
  undefined4 local_77c;
  undefined4 local_778;
  undefined4 local_770;
  int local_76c;
  int local_768;
  int local_764;
  int local_760;
  undefined4 local_75c;
  undefined4 local_728;
  undefined4 local_724;
  undefined4 local_720;
  InternalExceptionFrame local_2bc;
  InternalExceptionFrame local_278;
  undefined4 local_234 [4];
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  int *local_1ec;
  int local_1e8;
  SpriteClassTy local_1dc;
  char local_14b;
  undefined4 local_14a;
  int local_146;
  int *local_142;
  uint local_13c;
  int *local_138 [4];
  int local_128;
  int local_124;
  int local_120;
  undefined1 *local_110;
  undefined1 local_10c;
  cTypingTy *local_10b;
  char local_107;
  undefined4 local_106;
  uint *local_102;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  uint local_ec;
  int local_e8;
  undefined4 local_e4 [2];
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined4 local_d6;
  undefined4 uStackY_d2;
  int iStackY_ce;
  undefined4 uStackY_ca;
  uint uStackY_c6;
  undefined4 local_c2;
  undefined4 local_be;
  int local_94;
  undefined4 local_90;
  MTaskTy *local_8c;
  int *local_88;
  uint local_84;
  DArrayTy *local_80;
  uint local_7c;
  undefined1 local_78 [5];
  undefined4 local_73;
  undefined1 local_6f;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined4 local_6a;
  char local_66 [30];
  undefined2 uStackY_48;
  undefined2 local_46;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  DDXContext_008075A8 *in_stack_ffffffdc;
  UINT resourceId;
  ushort *puVar31;
  byte *puVar32;
  HINSTANCE module;
  ccFntTy *pcVar33;
  int iVar34;
  void *pvVar35;
  void *pvVar36;
  void *slotStorage;

  Library::MSVCRT::FUN_0072da40();
  local_278.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_278;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  local_8c = extraout_ECX;
  local_EAX_54 = Library::MSVCRT::__setjmp3(local_278.jumpBuffer,0);
  if (local_EAX_54 != 0) {
    g_currentExceptionFrame = local_278.previous;
    local_EAX_8751 =
         ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",0x45f,0,local_EAX_54,
                            "%s");
    if (local_EAX_8751 == 0) {
      RaiseInternalException(local_EAX_54,0,"E:\\__titans\\Start\\task_obj.cpp",0x45f);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  uVar29 = local_8c->field_0074->count;
  this_01 = local_8c;
  if ((int)local_8c->field_007C < (int)uVar29) {
    do {
      uVar18 = this_01->field_007C;
      if (uVar18 < uVar29) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        piVar19 = (int *)((int)&this_01->field_0074->data->field_0000 +
                         this_01->field_0074->elementSize * uVar18);
      }
      else {
        piVar19 = nullptr;
      }
      if (((uint)(this_01->field_0069 - this_01->field_0061) < STField<uint>(piVar19,1)) &&
         (this_01->field_006D != CASE_5)) break;
      switch((char)*piVar19) {
      case '\x01':
        if ((this_01->field_006E != '\x01') ||
           ((STField<undefined1>(piVar19,0xd) != '\0' &&
            (STField<undefined1>(piVar19,0xd) != '\x01')))) {
          switch(STField<undefined1>(piVar19,0xd)) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          case 0:
            in_stack_ffffffdc = nullptr;
            break;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          case 1:
            in_stack_ffffffdc = (DDXContext_008075A8 *)0x1;
            break;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          case 2:
            in_stack_ffffffdc = (DDXContext_008075A8 *)0x2;
            break;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          case 3:
            in_stack_ffffffdc = (DDXContext_008075A8 *)0x3;
            break;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          case 4:
            in_stack_ffffffdc = (DDXContext_008075A8 *)0x4;
          }
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar29 = (uint)in_stack_ffffffdc & 0xff;
          if (this_01->field_0291[uVar29] != 0) {
            FUN_006b3af0((int *)g_ddxContext_008075A8,this_01->field_02A5[uVar29]);
            StartSystemTy::sub_006E56B0(this_01->field_000C,this_01->field_0291[uVar29]);
            this_01->field_0291[uVar29] = 0;
          }
          FreeAndNull(&this_01->field_0653 + uVar29 * 3);
          if (STField<undefined1>(piVar19,0xe) == '\x01') {
            local_84 = STField<uint>(piVar19,0x1b);
            if ((int)local_84 < 0x28) {
              local_84 = 0x28;
            }
            iVar24 = 1;
            puVar31 = this_01->field_005D + 0x14;
            local_EAX_2647 = FUN_006b4fe0((int)this_01->field_005D);
            local_EAX_2671 =
                 FUN_006b50c0((int)puVar31,local_84,(uint)this_01->field_005D[7],local_EAX_2647,
                              (undefined4 *)puVar31,iVar24);
            (&this_01->field_0653)[uVar29 * 3] = local_EAX_2671;
            *(undefined1 **)(&this_01->field_0x657 + uVar29 * 0xc) =
                 &this_01->field_0x91 + (uint)(STField<undefined1>(piVar19,10) == '\x01') * 0x100
            ;
            *(undefined4 *)(&this_01->field_0x65b + uVar29 * 0xc) =
                 STField<undefined4>(piVar19,9);
            uVar18 = CreateBut(this_01,1,1,STField<uint>(piVar19,0xf),
                               STField<undefined4>(piVar19,0x13),puVar31,local_84,uVar29 + 0x6200
                               ,uVar29 + 0x6212);
            this_01->field_0291[uVar29] = uVar18;
            uVar18 = STField<uint>(piVar19,0xf);
            puVar12 = this_01->field_02A5 + uVar29;
            Library::DKW::DDX::FUN_006b3640
                      ((int *)g_ddxContext_008075A8,this_01->field_02A5[uVar29],0xffffffff,uVar18,
                       STField<uint>(piVar19,0x13));
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            in_stack_ffffffdc = (DDXContext_008075A8 *)0x5e1e40;
            FUN_006b2800(g_ddxContext_008075A8,*puVar12,uVar18,local_84);
            FUN_006b3020((int)g_ddxContext_008075A8,*puVar12,STField<uint>(piVar19,5));
            Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*puVar12);
          }
        }
        break;
      case '\x02':
        if (this_01->field_006E != '\x01') {
          if (this_01->field_02B9 != 0) {
            puVar12 = &this_01->field_02BD;
            iVar24 = 4;
            do {
              FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar12);
              puVar12 = puVar12 + 1;
              iVar24 = iVar24 + -1;
            } while (iVar24 != 0);
            StartSystemTy::sub_006E56B0(this_01->field_000C,this_01->field_02B9);
            this_01->field_02B9 = 0;
          }
          pvVar35 = &this_01->field_068F;
          iVar24 = 4;
          do {
            FreeAndNull(pvVar35);
            pvVar35 = (void *)((int)pvVar35 + 0xc);
            iVar24 = iVar24 + -1;
          } while (iVar24 != 0);
          if (STField<undefined1>(piVar19,0xd) == '\x01') {
            memset(local_234, 0, 0x58); /* compiler bulk-zero initialization */
            iVar24 = 0;
            memset(local_e68, 0, 0x230); /* compiler bulk-zero initialization */
            bVar9 = 2;
            piVar17 = (int *)((int)piVar19 + 0x16);
            iVar24 = 2;
            do {
              if (-1 < *piVar17) {
                bVar9 = bVar9 + 1;
              }
              piVar17 = piVar17 + 1;
              iVar24 = iVar24 + -1;
            } while (iVar24 != 0);
            local_90 = STReplaceLowByte((uint32_t)(local_90), (uint8_t)(bVar9));
            local_80 = (DArrayTy *)(uint)bVar9;
            if (local_80 == (DArrayTy *)0x2) {
              if ((DAT_00807340 == 1) || (DAT_00807340 == 3)) {
                _DAT_00807340 = (uint)_DAT_00807341 << 8;
              }
            }
            else if ((local_80 == (DArrayTy *)0x3) && (DAT_00807340 == 3)) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _DAT_00807340 = CONCAT31(_DAT_00807341,1);
            }
            bVar8 = 0;
            if (bVar9 != 0) {
              local_88 = (int *)((int)piVar19 + 9);
              iVar24 = 0;
              piVar17 = local_e68;
              puVar12 = (uint *)((int)piVar19 + 0x1e);
              piVar19 = (int *)&this_01->field_0x693;
              do {
                resourceId = 0x1f52;
                if (local_80 == (DArrayTy *)0x2) {
                  if (iVar24 == 0) {
                    resourceId = 0x1f47;
                    *piVar17 = 1;
                  }
                  else if (iVar24 == 1) {
                    resourceId = 0x1f49;
                    *piVar17 = 3;
                  }
                }
                else if (local_80 == (DArrayTy *)0x3) {
                  if (iVar24 == 0) {
                    resourceId = 0x1f47;
LAB_005e200a:
                    *piVar17 = iVar24 + 1;
                  }
                  else if (iVar24 == 1) {
                    resourceId = 0x1f48;
                    *piVar17 = 2;
                  }
                  else {
                    if (iVar24 != 2) goto LAB_005e200a;
                    resourceId = 0x1f49;
                    *piVar17 = 3;
                  }
                }
                else {
                  switch(iVar24) {
                  case 0:
                    resourceId = 0x1f47;
                    *piVar17 = iVar24 + 1;
                    break;
                  case 1:
                    resourceId = 0x1f48;
                    *piVar17 = iVar24 + 1;
                    break;
                  case 2:
                    resourceId = 0x1f49;
                    *piVar17 = iVar24 + 1;
                    break;
                  case 3:
                  default:
                    resourceId = 0x1f52;
                    *piVar17 = iVar24 + 1;
                  }
                }
                piVar17[1] = (uint)(bVar8 == DAT_00807340);
                module = g_hINSTANCE_00807618;
                piVar17[3] = puVar12[-4];
                pcVar15_mg29 = LoadResourceString(resourceId,module);
                iVar20 = FUN_00711110(this_01->field_008D,pcVar15_mg29);
                iVar34 = 1;
                piVar17[5] = iVar20 + 0x1b;
                puVar4 = this_01->field_005D;
                piVar17[4] = *puVar12;
                piVar17[6] = 0x14;
                local_e8 = piVar17[5];
                puVar31 = puVar4 + 0x14;
                local_EAX_3423 = FUN_006b4fe0((int)puVar4);
                local_EAX_3448 =
                     FUN_006b50c0(local_e8,0x14,(uint)this_01->field_005D[7],local_EAX_3423,
                                  (undefined4 *)puVar31,iVar34);
                piVar19[-1] = local_EAX_3448;
                puVar12 = puVar12 + 1;
                *piVar19 = (int)(&this_01->field_0x91 +
                                (uint)(*(char *)(iVar34 + 10) != '\0') * 0x100);
                piVar17 = piVar17 + 0x1c;
                piVar19[1] = *local_88;
                bVar8 = bVar8 + 1;
                iVar24 = iVar24 + 1;
                piVar19 = piVar19 + 3;
              } while (bVar8 < (byte)local_90);
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
            (*this_01->field_000C->vtable->CreateObject)
                      ((SystemClassTy *)this_01->field_000C,5,&this_01->field_02B9,nullptr,
                       local_234,0);
            puVar12 = (uint *)(local_e68 + 3);
            puVar28 = &this_01->field_02BD;
            iVar24 = 4;
            do {
              Library::DKW::DDX::FUN_006b3640
                        ((int *)g_ddxContext_008075A8,*puVar28,0xffffffff,*puVar12,puVar12[1]);
              uVar29 = puVar12[3];
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              in_stack_ffffffdc = (DDXContext_008075A8 *)0x5e21c3;
              FUN_006b2800(g_ddxContext_008075A8,*puVar28,puVar12[2],uVar29);
              FUN_006b3020((int)g_ddxContext_008075A8,*puVar28,*(uint *)(uVar29 + 5));
              Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*puVar28);
              puVar12 = puVar12 + 0x1c;
              puVar28 = puVar28 + 1;
              iVar24 = iVar24 + -1;
            } while (iVar24 != 0);
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
          if (STField<undefined1>(piVar19,0xd) == '\x01') {
            memset(local_b34, 0, 0x878); /* compiler bulk-zero initialization */
            if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
              FUN_006b5570((DArrayTy *)g_startSystem_0081176C->field_0548);
            }
            local_EAX_3982 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
            g_startSystem_0081176C->field_0548 = &local_EAX_3982->flags;
            dVar5 = g_dArray_0080C4CB->elementSize;
            if (dVar5 != 0) {
              iVar24 = 0;
              if (0 < (int)dVar5) {
                if ((int)dVar5 < 1) {
                  pcVar15 = nullptr;
                  goto LAB_005e22f4;
                }
                do {
                  pcVar15 = *(char **)(g_dArray_0080C4CB->growCapacity + iVar24 * 4);
LAB_005e22f4:
                  thunk_FUN_005411a0((DArrayTy *)g_startSystem_0081176C->field_0548,pcVar15,
                                     "@ - %s");
                  iVar24 = iVar24 + 1;
                } while (iVar24 < (int)g_dArray_0080C4CB->elementSize);
              }
              ccFntTy::FormIndentSarr
                        (this_01->field_008D,(DArrayTy *)g_startSystem_0081176C->field_0548,
                         " ,.;:!?/\\()[]{}",(uint *)&DAT_007c21ec,
                         (STField<int>(piVar19,0x16) - *(int *)&this_01->field_0x2f5) + -0x2d,0,
                         0xffffffff,nullptr,1);
              if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
                FUN_006b5570((DArrayTy *)g_startSystem_0081176C->field_0548);
              }
              local_EAX_4163 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
              g_startSystem_0081176C->field_0548 = &local_EAX_4163->flags;
              local_ec = STReplaceLowByte((uint32_t)(local_ec), (uint8_t)((this_01->field_06C7 != '\x01') + -1)) & 0xffffff02;
              LoadResourceString(0x2347,g_hINSTANCE_00807618);
              wsprintfA((LPSTR)local_c38,"&%1d %s:");
              Library::DKW::TBL::FUN_006b5aa0
                        ((DArrayTy *)g_startSystem_0081176C->field_0548,(char *)local_c38);
              wsprintfA((LPSTR)local_c38,"&%1d %s");
              Library::DKW::TBL::FUN_006b5aa0
                        ((DArrayTy *)g_startSystem_0081176C->field_0548,(char *)local_c38);
              Library::DKW::TBL::FUN_006b5aa0
                        ((DArrayTy *)g_startSystem_0081176C->field_0548,&CHAR___007c3b5c);
              LoadResourceString(0x2346,g_hINSTANCE_00807618);
              pDVar16 = local_c38;
              wsprintfA((LPSTR)pDVar16,"&%1d %s:");
              Library::DKW::TBL::FUN_006b5aa0
                        ((DArrayTy *)g_startSystem_0081176C->field_0548,(char *)local_c38);
              Library::DKW::TBL::FUN_006b5aa0
                        ((DArrayTy *)g_startSystem_0081176C->field_0548,&CHAR___007c3b5c);
              if (pDVar16 != nullptr) {
                if (pDVar16->elementSize != 0) {
                  ccFntTy::SepColorStrInSarr(this_01->field_008D,&pDVar16->flags,&pDVar16->flags);
                }
                iVar24 = 0;
                if (0 < (int)pDVar16->elementSize) {
                  if ((int)pDVar16->elementSize < 1) {
                    pcVar15 = nullptr;
                    goto LAB_005e24c5;
                  }
                  do {
                    pcVar15 = *(char **)(pDVar16->growCapacity + iVar24 * 4);
LAB_005e24c5:
                    Library::DKW::TBL::FUN_006b5aa0
                              ((DArrayTy *)g_startSystem_0081176C->field_0548,pcVar15);
                    iVar24 = iVar24 + 1;
                  } while (iVar24 < (int)pDVar16->elementSize);
                }
                FUN_006b5570(pDVar16);
              }
              local_f0 = STField<int>(piVar19,0x16);
              uVar29 = STField<uint>(piVar19,0x1a);
              pcVar33 = (ccFntTy *)0x1;
              puVar31 = this_01->field_005D + 0x14;
              uVar20 = FUN_006b4fe0((int)this_01->field_005D);
              pAVar13 = (AnonPointee_MTaskTy_06BF *)
                        FUN_006b50c0(local_f0,uVar29,(uint)this_01->field_005D[7],uVar20,
                                     (undefined4 *)puVar31,(int)pcVar33);
              this_01->field_06BF = pAVar13;
              *(undefined1 **)&this_01->field_0x6c3 =
                   &this_01->field_0x91 + (uint)(STField<undefined1>(piVar19,10) != '\0') * 0x100
              ;
              uVar6 = STField<undefined4>(piVar19,9);
              this_01->field_06C7 = (char)uVar6;
              this_01->field_0x6c8 = (char)((uint)uVar6 >> 8);
              this_01->field_06C9 = (char)((uint)uVar6 >> 0x10);
              this_01->field_06CA = (char)((uint)uVar6 >> 0x18);
              local_b34[0] = 0;
              local_b34[1] = 2;
              local_b14 = STField<int>(piVar19,0xe) + 0xf;
              local_b34[2] = 1;
              local_b10 = STField<int>(piVar19,0x12) + 0xf;
              pcVar10 = this_01->field_008D;
              local_b34[3] = g_startSystem_0081176C->field_0548[2];
              local_b24 = (STField<int>(piVar19,0x16) - *(int *)&this_01->field_0x2f5) + -0x2d;
              if (pcVar10->field_00A0 != 0) {
                pcVar33 = pcVar10;
                FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar10);
              }
              local_b20 = *(int *)&pcVar10->field_0x8a;
              local_b1c = 1;
              local_af4 = 0x6332;
              local_a84 = 4;
              local_a80 = 0;
              local_a78[0] = 0;
              local_afc = this_01->field_0008;
              local_b18 = (*(int *)&pcVar33->field_0x1a + -0x1e) / *(int *)&pcVar10->field_0x8a;
              local_af8 = 2;
              local_a7c = 2;
              local_a78[1] = 2;
              local_a78[2] = local_b24 + 0xf + local_b14;
              this_01->field_037E = local_a78[2];
              local_a18 = this_01->field_0008;
              local_a78[3] = (*(int *)&pcVar33->field_0x12 - *(int *)&this_01->field_0x38a) + -0x10
                             + *(int *)&pcVar33->field_0x1a;
              this_01->field_0382 = local_a78[3];
              local_a68 = *(undefined4 *)&this_01->field_0x386;
              local_a64 = *(int *)&this_01->field_0x38a;
              local_968 = 500;
              local_964 = 0x32;
              local_a14 = 2;
              local_a10 = 0x6334;
              local_8fc = 2;
              piVar19 = local_a78;
              piVar17 = local_8f8;
              memmove(piVar17, piVar19, 0x17c); /* compiler REP MOVS byte copy */
              piVar19 = piVar19 + 0x5f;
              local_764 = *(int *)&this_01->field_0x417;
              local_8f8[2] = local_b24 + 0xf + local_b14;
              local_8e4 = *(int *)&this_01->field_0x2f9;
              this_01->field_02ED = local_8f8[2];
              local_8f8[3] = *(int *)&pcVar33->field_0x12 + 0xf;
              local_890 = 0x6333;
              this_01->field_02F1 = local_8f8[3];
              local_8e8 = *(int *)&this_01->field_0x2f5;
              local_77c = 3;
              local_778 = 1;
              local_770 = 0;
              local_76c = (local_8e8 - local_764) / 2 + local_b24 + 0xf + local_b14;
              this_01->field_040F = local_76c;
              local_768 = *(int *)&pcVar33->field_0x12 + 0x1e + local_8e4;
              this_01->field_0413 = local_768;
              local_728 = this_01->field_0008;
              local_760 = ((*(int *)&pcVar33->field_0x1a - local_8e4) -
                          *(int *)&this_01->field_0x38a) + -0x3c;
              local_75c = 0xe;
              local_724 = 2;
              local_720 = 0x6335;
              (*this_01->field_000C->vtable->CreateObject)
                        ((SystemClassTy *)this_01->field_000C,8,&this_01->field_02CD,nullptr,
                         local_b34,0);
              this_01->field_002D = 0x20;
              this_01->field_0031 = 1;
              FUN_006e6080(this_01,2,this_01->field_02CD,(undefined4 *)&this_01->field_0x1d);
              Library::DKW::DDX::FUN_006b3640
                        ((int *)g_ddxContext_008075A8,this_01->field_0484,0xffffffff,
                         *(uint *)&pcVar33->field_0xe,*(uint *)&pcVar33->field_0x12);
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              in_stack_ffffffdc = (DDXContext_008075A8 *)0x5e2823;
              FUN_006b2800(g_ddxContext_008075A8,this_01->field_0484,*(uint *)&pcVar33->field_0x16,
                           *(uint *)&pcVar33->field_0x1a);
              FUN_006b3020((int)g_ddxContext_008075A8,this_01->field_0484,
                           *(uint *)((int)&pcVar33->field_0004 + 1));
              uVar29 = this_01->field_0484;
              Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar29);
              iVar24 = *(int *)((int)&pcVar33->field_0004 + 1);
              if (iVar24 < 1) {
                uVar18 = 0;
              }
              else {
                uVar18 = iVar24 - 1;
              }
              if (this_01->field_02D5 != 0xffffffff) {
                uVar29 = uVar18;
                FUN_006b3020(this_01->field_0319,this_01->field_02D5,uVar18);
              }
              *(uint *)&this_01->field_0x32e = uVar18;
              if (*(int *)(uVar29 + 5) < 1) {
                uVar18 = 0;
              }
              else {
                uVar18 = *(int *)(uVar29 + 5) - 1;
              }
              if (this_01->field_0366 != 0xffffffff) {
                FUN_006b3020(this_01->field_03AA,this_01->field_0366,uVar18);
              }
              *(uint *)&this_01->field_0x3bf = uVar18;
              if (*(int *)(uVar29 + 5) < 1) {
                uVar29 = 0;
              }
              else {
                uVar29 = *(int *)(uVar29 + 5) - 1;
              }
              if (this_01->field_03F7 != 0xffffffff) {
                FUN_006b3020(this_01->field_043B,this_01->field_03F7,uVar29);
              }
              *(uint *)&this_01->field_0x450 = uVar29;
              this_01->field_03FB = (uint)(this_01->field_06CA == '\x01');
              if (this_01->field_02D5 != 0xffffffff) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                in_stack_ffffffdc = (DDXContext_008075A8 *)this_01->field_0319;
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                Library::DKW::DDX::FUN_006b34d0
                          ((uint *)in_stack_ffffffdc,this_01->field_02D5,0xfffffffe,
                           this_01->field_02ED,this_01->field_02F1);
              }
              if (this_01->field_0366 != 0xffffffff) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                in_stack_ffffffdc = (DDXContext_008075A8 *)this_01->field_03AA;
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                Library::DKW::DDX::FUN_006b34d0
                          ((uint *)in_stack_ffffffdc,this_01->field_0366,0xfffffffe,
                           this_01->field_037E,this_01->field_0382);
              }
              if (this_01->field_03F7 != 0xffffffff) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                in_stack_ffffffdc = (DDXContext_008075A8 *)this_01->field_043B;
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                Library::DKW::DDX::FUN_006b34d0
                          ((uint *)in_stack_ffffffdc,this_01->field_03F7,0xfffffffe,
                           this_01->field_040F,this_01->field_0413);
              }
              if (this_01->field_03F7 != 0xffffffff) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                in_stack_ffffffdc = (DDXContext_008075A8 *)this_01->field_043B;
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                Library::DKW::DDX::FUN_006b3730
                          ((uint *)in_stack_ffffffdc,this_01->field_03F7,this_01->field_03FB,
                           this_01->field_040F,this_01->field_0413);
              }
            }
          }
        }
        break;
      case '\x05':
        cVar2 = STField<undefined1>(piVar19,0xe);
        if (cVar2 == '\0') {
          pDVar16 = this_01->field_064F;
        }
        else {
          pDVar16 = this_01->field_0647;
        }
        uVar29 = STField<uint>(piVar19,0xf);
        if (uVar29 < pDVar16->count) {
          if (cVar2 == '\0') {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pAVar14 = (AnonShape_005E10A0_819783CC *)
                      (this_01->field_064F->elementSize * uVar29 + (int)this_01->field_064F->data);
          }
          else {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pAVar14 = (AnonShape_005E10A0_819783CC *)
                      (this_01->field_0647->elementSize * uVar29 + (int)this_01->field_0647->data);
          }
        }
        else {
          pAVar14 = nullptr;
        }
        if (STField<undefined1>(piVar19,0xd) == '\x01') {
          if (((pAVar14 == nullptr) || ((int)*(uint *)pAVar14 < 0)) ||
             (*(int *)&pAVar14->field_0x20 != piVar19[5])) {
            TTaskItemClose(this_01,pAVar14);
            if (piVar19[5] < (int)g_dArray_0080C4C7->elementSize) {
              pcVar15 = *(char **)(g_dArray_0080C4C7->growCapacity + piVar19[5] * 4);
            }
            else {
              pcVar15 = nullptr;
            }
            if (pcVar15 != nullptr) {
              memset(&local_13c, 0, 0x3e); /* compiler bulk-zero initialization */
              if (STField<undefined1>(piVar19,0xe) == '\0') {
                local_7c = local_7c & 0xffffff00;
                local_88 = (int *)((-(uint)(STField<undefined1>(piVar19,9) != '\x01') &
                                   0xfffffffe) + 2);
                do {
                  local_fc = STField<int>(piVar19,0x22);
                  iVar24 = STField<int>(piVar19,0x26);
                  iVar34 = 1;
                  puVar31 = this_01->field_005D + 0x14;
                  uVar30 = FUN_006b4fe0((int)this_01->field_005D);
                  piVar17 = (int *)FUN_006b50c0(local_fc,iVar24,(uint)this_01->field_005D[7],uVar30,
                                                (undefined4 *)puVar31,iVar34);
                  local_138[local_7c & 0xff] = piVar17;
                  uVar29 = piVar17[5];
                  if (uVar29 == 0) {
                    uVar29 = ((uint)STField<ushort>(piVar17,0xe) * piVar17[1] + 0x1f >> 3 &
                             0x1ffffffc) * piVar17[2];
                  }
                  puVar32 = (byte *)0x5e2d28;
                  puVar22 = (byte *)FUN_006b4fa0(piVar17);
                  for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                    *puVar22 = 0xffffffff;
                    puVar22 = (byte *)(puVar22 + 1);
                  }
                  for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                    *(undefined1 *)puVar22 = 0xff;
                    puVar22 = (byte *)((int)puVar22 + 1);
                  }
                  piVar17 = (int *)(uint)(byte)STField<char>(piVar19,0x19);
                  PrepareTSurf(this_01,(AnonShape_005E11D0_D0F8BE03 *)*puVar32,
                               STField<char>(piVar19,0x19),STField<char>(piVar19,0xb));
                  if (STField<char>(piVar19,0x19) != '\0') {
                    local_110 = &this_01->field_0x91 +
                                (uint)(STField<undefined1>(piVar19,10) == '\x01') * 0x100;
                  }
                  ccFntTy::SetSurf(this_01->field_0089,*piVar17,0,0,0,0,0);
                  pDVar17 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
                  Library::DKW::TBL::FUN_006b5aa0(pDVar17,pcVar15);
                  local_80 = (DArrayTy *)
                             ccFntTy::FormIndentSarr
                                       (this_01->field_0089,pDVar17," ,.;:!?/\\()[]{}",
                                        (uint *)&DAT_007c21ec,
                                        STField<int>(piVar19,0x22) +
                                        STField<int>(piVar19,0x2a) * -2,0,0xffffffff,nullptr,
                                        1);
                  FUN_006b5570(pDVar17);
                  pDVar16 = local_80;
                  if (local_80 != nullptr) {
                    piVar17 = local_88;
                    if ((char)local_7c != '\0') {
                      if ((char)local_7c == '\x01') {
                        piVar17 = (int *)((int)local_88 + 1);
                      }
                      else {
                        piVar17 = (int *)0x4;
                      }
                    }
                    ccFntTy::WrSarr(this_01->field_0089,(int)local_80,0,-1,
                                    STField<int>(piVar19,0x2a),STField<int>(piVar19,0x2e),
                                    piVar17);
                    FUN_006b5570(pDVar16);
                  }
                  bVar9 = (char)local_7c + 1;
                  local_7c = STReplaceLowByte((uint32_t)(local_7c), (uint8_t)(bVar9));
                } while (bVar9 < 3);
                FUN_006b2330(g_ddxContext_008075A8,&local_13c,STField<uint>(piVar19,5),0x403db4,
                             STField<int>(piVar19,0x22),STField<uint>(piVar19,0x26),
                             (ushort *)this_01->field_064F);
                uVar29 = STField<uint>(piVar19,0xf);
                pDVar16 = this_01->field_064F;
              }
              else {
                local_106 = STField<undefined4>(piVar19,9);
                iVar34 = 1;
                local_107 = STField<char>(piVar19,0x19);
                local_10c = *(undefined1 *)(piVar19 + 6);
                local_f8 = STField<int>(piVar19,0x22);
                iVar24 = STField<int>(piVar19,0x26);
                puVar31 = this_01->field_005D + 0x14;
                local_f4 = (-(uint)(STField<undefined1>(piVar19,9) != '\x01') & 0xfffffffe) + 2;
                local_EAX_6030 = FUN_006b4fe0((int)this_01->field_005D);
                local_138[0] = (int *)FUN_006b50c0(local_f8,iVar24,(uint)this_01->field_005D[7],
                                                   local_EAX_6030,(undefined4 *)puVar31,iVar34);
                uVar18 = 0x5e2b09;
                puVar22 = (byte *)FUN_006b4fa0(local_138[0]);
                for (uVar29 = uVar18 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
                  *puVar22 = 0xffffffff;
                  puVar22 = (byte *)(puVar22 + 1);
                }
                for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *(undefined1 *)puVar22 = 0xff;
                  puVar22 = (byte *)((int)puVar22 + 1);
                }
                if (STField<char>(piVar19,0x19) != '\0') {
                  local_110 = &this_01->field_0x91 + (uint)(STPiece<1,1>(local_106) == '\x01') * 0x100;
                }
                ccFntTy::SetSurf(this_01->field_0089,(int)local_138[0],0,0,0,0,0);
                local_EAX_6198 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
                Library::DKW::TBL::FUN_006b5aa0(local_EAX_6198,pcVar15);
                pDVar16 = (DArrayTy *)
                          ccFntTy::FormIndentSarr
                                    (this_01->field_0089,local_EAX_6198," ,.;:!?/\\()[]{}",
                                     (uint *)&DAT_007c21ec,
                                     STField<int>(piVar19,0x22) +
                                     STField<int>(piVar19,0x2a) * -2,0,0xffffffff,nullptr,1);
                FUN_006b5570(local_EAX_6198);
                if (pDVar16 != nullptr) {
                  local_102 = (uint *)ccFntTy::_SarrToTxt(this_01->field_0089,nullptr,
                                                          (int)pDVar16);
                  if (local_102 != nullptr) {
                    local_10b = (cTypingTy *)Library::MSVCRT::FUN_0072e530(0xb4);
                    if (local_10b == nullptr) {
                      local_10b = nullptr;
                    }
                    else {
                      local_10b->field_0058 = 0;
                      local_10b->field_0088 = 0;
                    }
                    local_128 = STField<int>(piVar19,0x2a);
                    local_124 = STField<int>(piVar19,0x2e);
                    uStackY_48 = 0x2c51;
                    local_46 = 0x5e;
                    local_EAX_6428 =
                         cTypingTy::TypingInit
                                   (local_10b,local_102,this_01->field_0089,0,0,0,
                                    STField<int>(piVar19,0x22) +
                                    STField<int>(piVar19,0x2a) * -2,
                                    STField<int>(piVar19,0x26) +
                                    STField<int>(piVar19,0x2e) * -2,0,0,local_f4,local_f4 + 1,4,
                                    0xff);
                    local_120 = local_EAX_6428 + 1;
                  }
                  FUN_006b5570(pDVar16);
                }
                FUN_006b2330(g_ddxContext_008075A8,&local_13c,STField<uint>(piVar19,5),0x4041b0,
                             STField<int>(piVar19,0x22),STField<uint>(piVar19,0x26),
                             (ushort *)this_01->field_0647);
                uVar29 = STField<uint>(piVar19,0xf);
                pDVar16 = this_01->field_0647;
              }
              Library::DKW::TBL::DArrayPut(pDVar16,uVar29,&local_13c);
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              in_stack_ffffffdc = g_ddxContext_008075A8;
              Library::DKW::DDX::FUN_006b3640
                        ((int *)g_ddxContext_008075A8,local_13c,0,STField<uint>(piVar19,0x1a),
                         STField<uint>(piVar19,0x1e));
            }
          }
          else {
            if (cVar2 == '\0') {
              uVar29 = *(uint *)&pAVar14->field_0x10;
            }
            else {
              uVar29 = 0;
            }
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            in_stack_ffffffdc = g_ddxContext_008075A8;
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)g_ddxContext_008075A8,*(uint *)pAVar14,uVar29,
                       STField<uint>(piVar19,0x1a),STField<uint>(piVar19,0x1e));
          }
        }
        else if ((pAVar14 != nullptr) && (-1 < *(int *)pAVar14)) {
          if (this_01->field_006D == CASE_5) {
            TTaskItemClose(this_01,pAVar14);
          }
          else {
            if (cVar2 == '\0') {
              iVar24 = 1;
            }
            else {
              iVar24 = *(int *)&pAVar14->field_0x1c + -2;
            }
            *(int *)&pAVar14->field_0x10 = iVar24;
            *(undefined4 *)&pAVar14->field_0x28 = 2;
            *(undefined4 *)&pAVar14->field_0x24 = this_01->field_0069;
            FUN_006b35d0((int *)g_ddxContext_008075A8,*(uint *)pAVar14);
          }
        }
        break;
      case '\x06':
        if (this_01->field_006D != CASE_5) {
          puVar12 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                      (this_01->field_0070,(char *)((int)piVar19 + 0xd),0,
                                       nullptr);
          if (puVar12 == nullptr) {
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            in_stack_ffffffdc = (DDXContext_008075A8 *)0x5e2f3a;
            puVar12 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                        (g_cMf32_00806798,(char *)((int)piVar19 + 0xd),0,
                                         nullptr);
            if (puVar12 == nullptr) break;
          }
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          in_stack_ffffffdc = (DDXContext_008075A8 *)0x5e2f24;
          thunk_FUN_0056a130(&g_sound,0,'\x03',-1,puVar12);
        }
        break;
      case '\a':
        pDVar16 = this_01->field_064B;
        if (STField<uint>(piVar19,0xe) < pDVar16->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar16, STField<uint>(piVar19,0xe)) (runtime stride) */
          pSVar25 = (SpriteClassTy *)
                    (pDVar16->elementSize * STField<uint>(piVar19,0xe) + (int)pDVar16->data);
        }
        else {
          pSVar25 = nullptr;
        }
        if (STField<undefined1>(piVar19,0xd) == '\x01') {
          SpriteClassTy::SpriteClassTy(&local_1dc);
          pvVar35 = nullptr;
          local_142 = nullptr;
          local_94 = 1;
          local_2bc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_2bc;
          iVar10 = Library::MSVCRT::__setjmp3(local_2bc.jumpBuffer,0);
          if (iVar10 == 0) {
            pvVar36 = pvVar35;
            if (pSVar25 != nullptr) {
              pbVar21 = &pSVar25->field_0065;
              if (pbVar21 != nullptr) {
                pbVar20 = (byte *)((int)pvVar35 + 0x12);
                do {
                  bVar9 = *pbVar21;
                  bVar30 = bVar9 < *pbVar20;
                  if (bVar9 != *pbVar20) {
LAB_005e2ffb:
                    iVar24 = (1 - (uint)bVar30) - (uint)(bVar30 != 0);
                    goto LAB_005e3000;
                  }
                  if (bVar9 == 0) break;
                  bVar9 = pbVar21[1];
                  bVar30 = bVar9 < pbVar20[1];
                  if (bVar9 != pbVar20[1]) goto LAB_005e2ffb;
                  pbVar21 = pbVar21 + 2;
                  pbVar20 = pbVar20 + 2;
                } while (bVar9 != 0);
                iVar24 = 0;
LAB_005e3000:
                if (iVar24 != 0) {
                  pvVar36 = (void *)0x5e300e;
                  SpriteClassTy::CloseSprite(pSVar25);
                  slotStorage = (void *)((int)&pSVar25[1].field_0008 + 1);
                  if (*(int *)((int)&pSVar25[1].field_0008 + 1) != 0) {
                    FreeAndNull(slotStorage);
                    pvVar36 = slotStorage;
                  }
                  goto LAB_005e3030;
                }
              }
              local_94 = 0;
            }
LAB_005e3030:
            this_01 = local_8c;
            if (local_94 == 0) {
              if (pSVar25 == nullptr) {
                puVar22 = nullptr;
              }
              else {
                puVar22 = (byte *)(&pSVar25->field_0004);
              }
              puVar32 = (byte *)(&local_1dc.field_0004);
              pvVar35 = pvVar36;
              memmove(puVar32, puVar22, 0x44); /* compiler REP MOVS byte copy */
              local_1dc.field_0048 = (DDXContext_008075A8 *)pSVar25->field_0048;
              local_1dc.field_004C = pSVar25->field_004C;
              local_1dc.field_004D = pSVar25->field_004D;
              local_1dc.field_0051 = pSVar25->field_0051;
              local_1dc.field_0055 = pSVar25->field_0055;
              local_1dc.field_0059 = pSVar25->field_0059;
              local_1dc.field_005D = pSVar25->field_005D;
              local_1dc.field_0061 = pSVar25->field_0061;
              puVar23 = &local_1dc.field_0065;
              iVar24 = 0x20;
              do {
                *puVar23 = puVar23[(int)pSVar25 - (int)&local_1dc];
                puVar23 = puVar23 + 1;
                iVar24 = iVar24 + -1;
              } while (iVar24 != 0);
              local_1dc.field_0085 = pSVar25->field_0085;
              local_1dc.field_0089 = pSVar25->field_0089;
              local_1dc.field_008D = pSVar25->field_008D;
            }
            else {
              SpriteClassTy::InitSprite
                        (&local_1dc,(int *)g_ddxContext_008075A8,STField<uint>(pvVar35,5),'\x1e',
                         nullptr,0,0);
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              in_stack_ffffffdc = (DDXContext_008075A8 *)0x1e;
              iVar24 = SpriteClassTy::SetImages
                                 (&local_1dc,this_01->field_0070,CASE_1E,0,
                                  (char *)((int)pvVar35 + 0x12),0xffffffff,0);
              if (iVar24 != 0) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                in_stack_ffffffdc = (DDXContext_008075A8 *)0x1e;
                SpriteClassTy::SetImages
                          (&local_1dc,g_cMf32_00806798,CASE_1E,0,(char *)((int)pvVar35 + 0x12),
                           0xffffffff,1);
              }
            }
            local_1dc.field_001C = STField<uint>(pvVar35,0x32);
            local_1dc.field_0020 = STField<uint>(pvVar35,0x36);
            cVar2 = STField<char>(pvVar35,0x4f);
            if (cVar2 == '\0') {
              local_14b = '\0';
              local_1dc.field_0008 = STField<uint>(pvVar35,0x4a);
            }
            else if (cVar2 == '\x01') {
              local_1dc.field_0044 = this_01->field_0069;
              local_14b = (STField<char>(pvVar35,0x4e) != '\0') + '\x01';
              local_1dc.field_0008 = STField<uint>(pvVar35,0x4a);
              local_1dc.field_0040 = STField<undefined4>(pvVar35,0x46);
            }
            else if (cVar2 == '\x02') {
              local_1dc.field_0044 = this_01->field_0069;
              local_14b = (STField<char>(pvVar35,0x4e) != '\0') + '\x03';
              local_1dc.field_0008 = STField<uint>(pvVar35,0x4a);
              local_1dc.field_0040 = STField<undefined4>(pvVar35,0x46);
              local_14a = 0;
              local_146 = STField<int>(pvVar35,0x42);
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              in_stack_ffffffdc = STField<DDXContext_008075A8 *>(pvVar35,0x32);
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              local_142 = FUN_006c81c0((int)in_stack_ffffffdc,STField<int>(pvVar35,0x36),
                                       STField<int>(pvVar35,0x3a),STField<int>(pvVar35,0x3e),
                                       local_146);
              if (local_142 == nullptr) {
                local_14b = (STField<char>(pvVar35,0x4e) != '\0') + '\x01';
              }
            }
            if (local_1dc.field_0004 != 0xffffffff) {
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              in_stack_ffffffdc = local_1dc.field_0048;
              Library::DKW::DDX::FUN_006b3730
                        ((uint *)local_1dc.field_0048,local_1dc.field_0004,local_1dc.field_0008,
                         local_1dc.field_001C,local_1dc.field_0020);
            }
            Library::DKW::TBL::DArrayPut
                      (this_01->field_064B,STField<uint>(pvVar35,0xe),&local_1dc);
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
        else if (pSVar25 != nullptr) {
          SpriteClassTy::CloseSprite(pSVar25);
          if (*(int *)((int)&pSVar25[1].field_0008 + 1) != 0) {
            FreeAndNull((void *)((int)&pSVar25[1].field_0008 + 1));
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
        uStackY_d2 = 0x22600;
        STPiece<1,3>(iStackY_ce) = 0x91;
        STPiece<0,1>(iStackY_ce) = 0;
        uStackY_ca = 0x2800;
        uStackY_c6 = uStackY_c6 & 0xffffff00;
        Library::DKW::TBL::FUN_006b11d0(&this_01->field_0074->flags,uVar18 + 1,local_e4);
        local_d7 = 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_d6 = CONCAT31(0x2d,(undefined1)local_d6);
        uStackY_d2 = 0x22600;
        STPiece<0,1>(iStackY_ce) = 0;
        Library::DKW::TBL::FUN_006b11d0
                  (&this_01->field_0074->flags,this_01->field_007C + 1,local_e4);
        local_d7 = 0;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_d6 = CONCAT31(0x23,(undefined1)local_d6);
        uStackY_d2 = 0x1f400;
        iStackY_ce = (uint)STPiece<1,3>(iStackY_ce) << 8;
        Library::DKW::TBL::FUN_006b11d0
                  (&this_01->field_0074->flags,this_01->field_007C + 1,local_e4);
        local_d9 = 0;
        local_d8 = 0;
        local_db = 0;
        local_da = 0;
        STPiece<0,1>(local_e4[0]) = 2;
        local_d7 = 1;
        local_d6 = 0x104;
        uStackY_c6 = 0x226;
        uStackY_d2 = 0x122;
        local_c2 = 0x23f;
        iStackY_ce = 0x1a4;
        local_be = 0x226;
        Library::DKW::TBL::FUN_006b11d0
                  (&this_01->field_0074->flags,this_01->field_007C + 1,local_e4);
        uStackY_d2 = 200;
        uStackY_ca = 200;
        local_d9 = 0;
        local_d8 = 0;
        local_db = 0;
        local_da = 0;
        STPiece<0,1>(local_e4[0]) = 3;
        local_d7 = 1;
        local_d6 = 0x96;
        iStackY_ce = 500;
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
        pbVar21 = (byte *)((int)piVar19 + 0xd);
        this_01->field_0080 = 0;
        local_EAX_241 = FUN_0070a9f0(this_01->field_0070,(char *)pbVar21,0,0);
        *ppuVar1 = local_EAX_241;
        if (local_EAX_241 == nullptr) {
          puVar11 = FUN_0070a9f0(g_cMf32_00806798,(char *)pbVar21,0,0);
          *ppuVar1 = puVar11;
          if (puVar11 == nullptr) {
            iVar24 = 1;
            bVar9 = 0;
            text = FUN_006f2c00("TASK_BKG",1,(uint)DAT_0080874e);
            local_EAX_2012 = FUN_0070a9f0(g_cMf32_00806780,text,bVar9,iVar24);
            *ppuVar1 = local_EAX_2012;
            this_01->field_0080 = 1;
          }
          else {
            memset((void *)local_78, 0, 0x50); /* compiler bulk-zero initialization */
            local_6d = 1;
            local_6c = 1;
            local_6f = 1;
            STPiece<1,4>(local_78) = STField<undefined4>(piVar19,1);
            local_73 = 0x7ffffff0;
            local_78[0] = 7;
            local_6b = 1;
            pbVar20 = pbVar21;
            pbVar26 = (byte *)PTR_s_DEFAULT_WS_ANIMATED_0079c224;
            do {
              bVar9 = *pbVar20;
              bVar30 = bVar9 < *pbVar26;
              if (bVar9 != *pbVar26) {
LAB_005e14be:
                iVar24 = (1 - (uint)bVar30) - (uint)(bVar30 != 0);
                goto LAB_005e14c3;
              }
              if (bVar9 == 0) break;
              bVar9 = pbVar20[1];
              bVar30 = bVar9 < pbVar26[1];
              if (bVar9 != pbVar26[1]) goto LAB_005e14be;
              pbVar20 = pbVar20 + 2;
              pbVar26 = pbVar26 + 2;
            } while (bVar9 != 0);
            iVar24 = 0;
LAB_005e14c3:
            pbVar20 = pbVar21;
            pbVar26 = (byte *)PTR_s_DEFAULT_BO_ANIMATED_0079c228;
            if (iVar24 == 0) {
              uVar29 = 0xffffffff;
              pcVar15 = &CHAR_D_007cdc48;
              do {
                pcVar27 = pcVar15;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar27 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar27;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              local_6a = 0xf0;
              pcVar15 = pcVar27 + -uVar29;
              pcVar27 = local_66;
              for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar27 = pcVar27 + 4;
              }
              iVar24 = this_01->field_007C;
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar27 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0;
              Library::DKW::TBL::FUN_006b11d0
                        (&this_01->field_0074->flags,iVar24 + 1,(undefined4 *)local_78);
              uVar29 = 0xffffffff;
              pcVar15 = "DEF_WS_ANI2";
              do {
                pcVar27 = pcVar15;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar27 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar27;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              local_6a = 0xf1;
              iVar24 = this_01->field_007C;
              pcVar15 = pcVar27 + -uVar29;
              pcVar27 = local_66;
              for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar27 = pcVar27 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar27 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar24 + 1,(undefined4 *)local_78);
              uVar29 = 0xffffffff;
              pcVar15 = "DEF_WS_ANI3";
              do {
                pcVar27 = pcVar15;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar27 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar27;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              local_6a = 0xf2;
              iVar24 = this_01->field_007C;
              pcVar15 = pcVar27 + -uVar29;
              pcVar27 = local_66;
              for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar27 = pcVar27 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar27 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x40;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar24 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar29 = 0xffffffff;
              pcVar15 = &CHAR_D_007cdc18;
              do {
                pcVar27 = pcVar15;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar27 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar27;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              iVar24 = this_01->field_007C;
              pcVar15 = pcVar27 + -uVar29;
              pcVar27 = local_66;
              for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar27 = pcVar27 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar27 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x208;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar24 + 1,(undefined4 *)local_78);
              uVar29 = 0xffffffff;
              pcVar15 = &CHAR_D_007cdc08;
              do {
                pcVar27 = pcVar15;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar27 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar27;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              local_6a = 0xf4;
              iVar24 = this_01->field_007C;
              pcVar15 = pcVar27 + -uVar29;
              pcVar27 = local_66;
              for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar27 = pcVar27 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar27 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x208;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar24 + 1,(undefined4 *)local_78);
              uVar29 = 0xffffffff;
              pcVar15 = &CHAR_D_007cdbf8;
              do {
                pcVar27 = pcVar15;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar27 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar27;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              local_6a = 0xf5;
              iVar24 = this_01->field_007C;
              pcVar15 = pcVar27 + -uVar29;
              pcVar27 = local_66;
              for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar27 = pcVar27 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar27 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x2df;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar24 + 1,(undefined4 *)local_78);
              pbVar26 = (byte *)PTR_s_DEFAULT_BO_ANIMATED_0079c228;
            }
            do {
              bVar9 = *pbVar20;
              bVar30 = bVar9 < *pbVar26;
              if (bVar9 != *pbVar26) {
LAB_005e16bc:
                iVar24 = (1 - (uint)bVar30) - (uint)(bVar30 != 0);
                goto LAB_005e16c1;
              }
              if (bVar9 == 0) break;
              bVar9 = pbVar20[1];
              bVar30 = bVar9 < pbVar26[1];
              if (bVar9 != pbVar26[1]) goto LAB_005e16bc;
              pbVar20 = pbVar20 + 2;
              pbVar26 = pbVar26 + 2;
            } while (bVar9 != 0);
            iVar24 = 0;
LAB_005e16c1:
            pbVar20 = (byte *)PTR_s_DEFAULT_SI_ANIMATED_0079c22c;
            if (iVar24 == 0) {
              uVar29 = 0xffffffff;
              pcVar15 = "DEF_BO_ANI1";
              do {
                pcVar27 = pcVar15;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar27 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar27;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              local_6a = 0xf0;
              pcVar15 = pcVar27 + -uVar29;
              pcVar27 = local_66;
              for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar27 = pcVar27 + 4;
              }
              iVar24 = this_01->field_007C;
              pMVar3 = this_01->field_0074;
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar27 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0xb0;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar24 + 1,(undefined4 *)local_78);
              uVar29 = 0xffffffff;
              pcVar15 = "DEF_BO_ANI2";
              do {
                pcVar27 = pcVar15;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar27 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar27;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              local_6a = 0xf1;
              iVar24 = this_01->field_007C;
              pcVar15 = pcVar27 + -uVar29;
              pcVar27 = local_66;
              for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar27 = pcVar27 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar27 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar24 + 1,(undefined4 *)local_78);
              uVar29 = 0xffffffff;
              pcVar15 = "DEF_BO_ANI3";
              do {
                pcVar27 = pcVar15;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar27 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar27;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              local_6a = 0xf2;
              iVar24 = this_01->field_007C;
              pcVar15 = pcVar27 + -uVar29;
              pcVar27 = local_66;
              for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar27 = pcVar27 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar27 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0xb0;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar24 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar29 = 0xffffffff;
              pcVar15 = "DEF_BO_ANI4";
              do {
                pcVar27 = pcVar15;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar27 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar27;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              iVar24 = this_01->field_007C;
              pcVar15 = pcVar27 + -uVar29;
              pcVar27 = local_66;
              for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar27 = pcVar27 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar27 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0xdc;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar24 + 1,(undefined4 *)local_78);
              uVar29 = 0xffffffff;
              pcVar15 = &CHAR_D_007cdba8;
              do {
                pcVar27 = pcVar15;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar27 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar27;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              local_6a = 0xf4;
              iVar24 = this_01->field_007C;
              pcVar15 = pcVar27 + -uVar29;
              pcVar27 = local_66;
              for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar27 = pcVar27 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar27 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x1ce;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar24 + 1,(undefined4 *)local_78);
              uVar29 = 0xffffffff;
              pcVar15 = &CHAR_D_007cdb98;
              do {
                pcVar27 = pcVar15;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar27 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar27;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              local_6a = 0xf5;
              iVar24 = this_01->field_007C;
              pcVar15 = pcVar27 + -uVar29;
              pcVar27 = local_66;
              for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar27 = pcVar27 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar27 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x2a9;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar24 + 1,(undefined4 *)local_78);
              uVar29 = 0xffffffff;
              local_6a = 0xf6;
              pcVar15 = &CHAR_D_007cdb88;
              do {
                pcVar27 = pcVar15;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar27 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar27;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              iVar24 = this_01->field_007C;
              pcVar15 = pcVar27 + -uVar29;
              pcVar27 = local_66;
              for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar27 = pcVar27 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar27 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x78;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar24 + 1,(undefined4 *)local_78);
              uVar29 = 0xffffffff;
              pcVar15 = "DEF_BO_ANI8";
              do {
                pcVar27 = pcVar15;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar27 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar27;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              local_6a = 0xf7;
              iVar24 = this_01->field_007C;
              pcVar15 = pcVar27 + -uVar29;
              pcVar27 = local_66;
              for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar27 = pcVar27 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar27 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x78;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar24 + 1,(undefined4 *)local_78);
              pbVar20 = (byte *)PTR_s_DEFAULT_SI_ANIMATED_0079c22c;
            }
            do {
              bVar9 = *pbVar21;
              bVar30 = bVar9 < *pbVar20;
              if (bVar9 != *pbVar20) {
LAB_005e1958:
                iVar24 = (1 - (uint)bVar30) - (uint)(bVar30 != 0);
                goto LAB_005e195d;
              }
              if (bVar9 == 0) break;
              bVar9 = pbVar21[1];
              bVar30 = bVar9 < pbVar20[1];
              if (bVar9 != pbVar20[1]) goto LAB_005e1958;
              pbVar21 = pbVar21 + 2;
              pbVar20 = pbVar20 + 2;
            } while (bVar9 != 0);
            iVar24 = 0;
LAB_005e195d:
            if (iVar24 == 0) {
              uVar29 = 0xffffffff;
              pcVar15 = "DEF_SI_ANI1";
              do {
                pcVar27 = pcVar15;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar27 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar27;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              local_6a = 0xf0;
              pcVar15 = pcVar27 + -uVar29;
              pcVar27 = local_66;
              for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar27 = pcVar27 + 4;
              }
              iVar24 = this_01->field_007C;
              pMVar3 = this_01->field_0074;
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar27 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x8e;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar24 + 1,(undefined4 *)local_78);
              uVar29 = 0xffffffff;
              pcVar15 = "DEF_SI_ANI2";
              do {
                pcVar27 = pcVar15;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar27 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar27;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              local_6a = 0xf1;
              iVar24 = this_01->field_007C;
              pcVar15 = pcVar27 + -uVar29;
              pcVar27 = local_66;
              for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar27 = pcVar27 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar27 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x103;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar24 + 1,(undefined4 *)local_78);
              uVar29 = 0xffffffff;
              pcVar15 = "DEF_SI_ANI3";
              do {
                pcVar27 = pcVar15;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar27 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar27;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              local_6a = 0xf2;
              iVar24 = this_01->field_007C;
              pcVar15 = pcVar27 + -uVar29;
              pcVar27 = local_66;
              for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar27 = pcVar27 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar27 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x103;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar24 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar29 = 0xffffffff;
              pcVar15 = "DEF_SI_ANI4";
              do {
                pcVar27 = pcVar15;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar27 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar27;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              iVar24 = this_01->field_007C;
              pcVar15 = pcVar27 + -uVar29;
              pcVar27 = local_66;
              for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar27 = pcVar27 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar27 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0xd7;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar24 + 1,(undefined4 *)local_78);
              uVar29 = 0xffffffff;
              pcVar15 = "DEF_SI_ANI5";
              do {
                pcVar27 = pcVar15;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar27 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar27;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              local_6a = 0xf4;
              iVar24 = this_01->field_007C;
              pcVar15 = pcVar27 + -uVar29;
              pcVar27 = local_66;
              for (uVar18 = uVar29 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar27 = pcVar27 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar27 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x27c;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar24 + 1,(undefined4 *)local_78);
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
        FUN_006bc360(this_01->field_005D,local_1268,element_0074);
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffdc = nullptr;
        Library::Ourlib::PALETTE::FUN_00718780
                  ((int)local_1268,0,0x100,0x1a,0x10,(undefined4 *)&this_01->field_0x91);
        Library::Ourlib::PALETTE::FUN_00718780
                  ((int)local_1268,0,0x100,0x2e,0x10,(undefined4 *)&this_01->field_0x191);
        if (this_01->field_007C != 0) {
          DarkScreen(g_dDXContext_0080759C,1,0);
          PaintMTask(this_01);
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          in_stack_ffffffdc = g_ddxContext_008075A8;
          thunk_FUN_0055ddf0((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                             this_01->field_005D,10,2);
        }
        if (this_01->field_0089 != nullptr) {
          ccFntTy::operator_delete((uint *)this_01->field_0089);
        }
        pcVar10 = (ccFntTy *)
                  thunk_FUN_005defe0((int)this_01->field_005D,nullptr,DAT_00807dd9);
        this_01->field_0089 = pcVar10;
        pcVar10->field_0058 = 1;
        pcVar10->field_005C = 0;
        if (this_01->field_008D != nullptr) {
          ccFntTy::operator_delete((uint *)this_01->field_008D);
        }
        pcVar10 = (ccFntTy *)
                  thunk_FUN_005df290((int)this_01->field_005D,nullptr,DAT_00807dd9);
        this_01->field_008D = pcVar10;
        thunk_FUN_00568bc0(&g_sound,0);
        if ((STPiece<1,1>(DAT_00807300) & 8) != 0) {
          puVar12 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                      (this_01->field_0070,(char *)((int)element_0074 + 0x2d),0,
                                       nullptr);
          this_01->field_0085 = puVar12;
          if (puVar12 == nullptr) {
            puVar12 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                        (g_cMf32_00806798,(char *)((int)element_0074 + 0x2d),0,
                                         nullptr);
            this_01->field_0085 = puVar12;
            if (puVar12 == nullptr) {
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              in_stack_ffffffdc = (DDXContext_008075A8 *)0x5e1cab;
              thunk_FUN_0056a130(&g_sound,0x14,'\x02',0,nullptr);
              break;
            }
          }
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          in_stack_ffffffdc = (DDXContext_008075A8 *)0x5e1c94;
          thunk_FUN_0056a130(&g_sound,0,'\x02',0,puVar12);
        }
      }
      iVar24 = this_01->field_007C + 1;
      this_01->field_007C = iVar24;
      uVar29 = this_01->field_0074->count;
    } while (iVar24 < (int)uVar29);
  }
  if (this_01->field_007C == this_01->field_0074->count) {
    if ((this_01->field_006D == CASE_5) &&
       (pDVar16 = this_01->field_064B, pDVar16 != nullptr)) {
      uVar29 = 0;
      if (pDVar16->count != 0) {
        if (pDVar16->count == 0) {
          pSVar25 = nullptr;
          goto LAB_005e34e0;
        }
        do {
          pSVar25 = DArrayAt<SpriteClassTy>(pDVar16, uVar29);
LAB_005e34e0:
          if ((pSVar25->field_0004 != -1) &&
             ((*(char *)&pSVar25[1].vtable == '\x01' || (*(char *)&pSVar25[1].vtable == '\x03')))) {
            SpriteClassTy::CloseSprite(pSVar25);
            if (*(int *)((int)&pSVar25[1].field_0008 + 1) != 0) {
              FreeAndNull((void *)((int)&pSVar25[1].field_0008 + 1));
            }
          }
          pDVar16 = this_01->field_064B;
          uVar29 = uVar29 + 1;
        } while (uVar29 < pDVar16->count);
      }
    }
    this_01->field_006D = CASE_1;
  }
  g_currentExceptionFrame = local_278.previous;
  return;
}

