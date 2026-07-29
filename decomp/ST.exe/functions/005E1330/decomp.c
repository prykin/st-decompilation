#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::PlayScript */

void __thiscall MTaskTy::PlayScript(MTaskTy *this)

{
  cMf32 **ppcVar1;
  char cVar2;
  MTaskTy_field_0074DArray *pMVar3;
  dword dVar4;
  code *pcVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  cMf32 *pcVar9;
  LPSTR text;
  ccFntTy *pcVar10;
  uint *puVar11;
  int local_EAX_2647;
  undefined4 uVar12;
  int local_EAX_3423;
  int uVar20;
  AnonPointee_MTaskTy_06BF *pAVar13;
  AnonShape_005E10A0_819783CC *pAVar14;
  char *pcVar15;
  int local_EAX_6030;
  DArrayTy *pDVar16;
  DArrayTy *pDVar17;
  int uVar30;
  int *piVar18;
  int iVar19;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  MTaskTy *extraout_ECX;
  uint uVar21;
  MTaskTy *this_00;
  int *piVar22;
  MTaskTy_field_0074Element *element_0074;
  byte *pbVar23;
  byte *pbVar24;
  undefined4 *puVar25;
  undefined1 *puVar26;
  SpriteClassTy *pSVar27;
  byte *pbVar28;
  char *pcVar29;
  uint *puVar30;
  uint uVar31;
  bool bVar32;
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
  undefined4 *puVar33;
  HINSTANCE module;
  int iVar34;
  ccFntTy *pcVar35;
  void **ppvVar36;
  void **ppvVar37;
  void **value;

  Library::MSVCRT::FUN_0072da40();
  local_278.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_278;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  local_8c = extraout_ECX;
  iVar8 = Library::MSVCRT::__setjmp3(local_278.jumpBuffer,0);
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_278.previous;
    iVar19 = ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",0x45f,0,iVar8,
                                "%s");
    if (iVar19 == 0) {
      RaiseInternalException(iVar8,0,"E:\\__titans\\Start\\task_obj.cpp",0x45f);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  uVar31 = local_8c->field_0074->count;
  this_00 = local_8c;
  if ((int)local_8c->field_007C < (int)uVar31) {
    do {
      uVar21 = this_00->field_007C;
      if (uVar21 < uVar31) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        piVar22 = (int *)((int)&this_00->field_0074->data->field_0000 +
                         this_00->field_0074->elementSize * uVar21);
      }
      else {
        piVar22 = (int *)0x0;
      }
      if (((uint)(this_00->field_0069 - this_00->field_0061) < *(uint *)((int)piVar22 + 1)) &&
         (this_00->field_006D != '\x05')) break;
      switch((char)*piVar22) {
      case '\x01':
        if ((this_00->field_006E != '\x01') ||
           ((*(undefined1 *)((int)piVar22 + 0xd) != '\0' &&
            (*(undefined1 *)((int)piVar22 + 0xd) != '\x01')))) {
          switch(*(undefined1 *)((int)piVar22 + 0xd)) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          case 0:
            in_stack_ffffffdc = (DDXContext_008075A8 *)0x0;
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
          uVar31 = (uint)in_stack_ffffffdc & 0xff;
          if (this_00->field_0291[uVar31] != 0) {
            FUN_006b3af0((int *)g_ddxContext_008075A8,this_00->field_02A5[uVar31]);
            StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0291[uVar31]);
            this_00->field_0291[uVar31] = 0;
          }
          FreeAndNull((void **)(&this_00->field_0653 + uVar31 * 3));
          if (*(undefined1 *)((int)piVar22 + 0xe) == '\x01') {
            local_84 = *(uint *)((int)piVar22 + 0x1b);
            if ((int)local_84 < 0x28) {
              local_84 = 0x28;
            }
            iVar8 = 1;
            puVar26 = &this_00->field_005D->field_0x28;
            local_EAX_2647 = FUN_006b4fe0((int)this_00->field_005D);
            uVar12 = FUN_006b50c0((int)puVar26,local_84,
                                  (uint)*(ushort *)&this_00->field_005D->field_0xe,local_EAX_2647,
                                  (undefined4 *)puVar26,iVar8);
            (&this_00->field_0653)[uVar31 * 3] = uVar12;
            *(undefined1 **)(&this_00->field_0x657 + uVar31 * 0xc) =
                 &this_00->field_0x91 + (uint)(*(undefined1 *)((int)piVar22 + 10) == '\x01') * 0x100
            ;
            *(undefined4 *)(&this_00->field_0x65b + uVar31 * 0xc) =
                 *(undefined4 *)((int)piVar22 + 9);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            uVar21 = CreateBut(this_00,1,1,*(uint *)((int)piVar22 + 0xf),
                               *(undefined4 *)((int)piVar22 + 0x13),puVar26,local_84,uVar31 + 0x6200
                               ,uVar31 + 0x6212);
            this_00->field_0291[uVar31] = uVar21;
            uVar21 = *(uint *)((int)piVar22 + 0xf);
            puVar11 = this_00->field_02A5 + uVar31;
            Library::DKW::DDX::FUN_006b3640
                      ((int *)g_ddxContext_008075A8,this_00->field_02A5[uVar31],0xffffffff,uVar21,
                       *(uint *)((int)piVar22 + 0x13));
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            in_stack_ffffffdc = (DDXContext_008075A8 *)0x5e1e40;
            FUN_006b2800(g_ddxContext_008075A8,*puVar11,uVar21,local_84);
            FUN_006b3020((int)g_ddxContext_008075A8,*puVar11,*(uint *)((int)piVar22 + 5));
            Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*puVar11);
          }
        }
        break;
      case '\x02':
        if (this_00->field_006E != '\x01') {
          if (this_00->field_02B9 != 0) {
            puVar11 = this_00->field_02BD;
            iVar8 = 4;
            do {
              FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar11);
              puVar11 = puVar11 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
            StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_02B9);
            this_00->field_02B9 = 0;
          }
          ppvVar36 = (void **)&this_00->field_0x68f;
          iVar8 = 4;
          do {
            FreeAndNull(ppvVar36);
            ppvVar36 = ppvVar36 + 3;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          if (*(undefined1 *)((int)piVar22 + 0xd) == '\x01') {
            memset(local_234, 0, 0x58); /* compiler bulk-zero initialization */
            iVar8 = 0;
            memset(local_e68, 0, 0x230); /* compiler bulk-zero initialization */
            bVar7 = 2;
            piVar18 = (int *)((int)piVar22 + 0x16);
            iVar8 = 2;
            do {
              if (-1 < *piVar18) {
                bVar7 = bVar7 + 1;
              }
              piVar18 = piVar18 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_90 = CONCAT31((int3)((uint)local_90 >> 8),bVar7);
            local_80 = (DArrayTy *)(uint)bVar7;
            if (local_80 == (DArrayTy *)0x2) {
              if ((DAT_00807340 == 1) || (DAT_00807340 == 3)) {
                _DAT_00807340 = (uint)_DAT_00807341 << 8;
              }
            }
            else if ((local_80 == (DArrayTy *)0x3) && (DAT_00807340 == 3)) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _DAT_00807340 = CONCAT31(_DAT_00807341,1);
            }
            bVar6 = 0;
            if (bVar7 != 0) {
              local_88 = (int *)((int)piVar22 + 9);
              iVar8 = 0;
              piVar18 = local_e68;
              puVar11 = (uint *)((int)piVar22 + 0x1e);
              piVar22 = (int *)&this_00->field_0x693;
              do {
                resourceId = 0x1f52;
                if (local_80 == (DArrayTy *)0x2) {
                  if (iVar8 == 0) {
                    resourceId = 0x1f47;
                    *piVar18 = 1;
                  }
                  else if (iVar8 == 1) {
                    resourceId = 0x1f49;
                    *piVar18 = 3;
                  }
                }
                else if (local_80 == (DArrayTy *)0x3) {
                  if (iVar8 == 0) {
                    resourceId = 0x1f47;
LAB_005e200a:
                    *piVar18 = iVar8 + 1;
                  }
                  else if (iVar8 == 1) {
                    resourceId = 0x1f48;
                    *piVar18 = 2;
                  }
                  else {
                    if (iVar8 != 2) goto LAB_005e200a;
                    resourceId = 0x1f49;
                    *piVar18 = 3;
                  }
                }
                else {
                  switch(iVar8) {
                  case 0:
                    resourceId = 0x1f47;
                    *piVar18 = iVar8 + 1;
                    break;
                  case 1:
                    resourceId = 0x1f48;
                    *piVar18 = iVar8 + 1;
                    break;
                  case 2:
                    resourceId = 0x1f49;
                    *piVar18 = iVar8 + 1;
                    break;
                  case 3:
                  default:
                    resourceId = 0x1f52;
                    *piVar18 = iVar8 + 1;
                  }
                }
                piVar18[1] = (uint)(bVar6 == DAT_00807340);
                module = g_module_00807618;
                piVar18[3] = puVar11[-4];
                pcVar15 = LoadResourceString(resourceId,module);
                iVar19 = FUN_00711110(this_00->field_008D,pcVar15);
                iVar34 = 1;
                piVar18[5] = iVar19 + 0x1b;
                pcVar9 = this_00->field_005D;
                piVar18[4] = *puVar11;
                piVar18[6] = 0x14;
                local_e8 = piVar18[5];
                puVar25 = (undefined4 *)&pcVar9->field_0x28;
                local_EAX_3423 = FUN_006b4fe0((int)pcVar9);
                iVar19 = FUN_006b50c0(local_e8,0x14,(uint)*(ushort *)&this_00->field_005D->field_0xe
                                      ,local_EAX_3423,puVar25,iVar34);
                piVar22[-1] = iVar19;
                puVar11 = puVar11 + 1;
                *piVar22 = (int)(&this_00->field_0x91 +
                                (uint)(*(char *)(iVar34 + 10) != '\0') * 0x100);
                piVar18 = piVar18 + 0x1c;
                piVar22[1] = *local_88;
                bVar6 = bVar6 + 1;
                iVar8 = iVar8 + 1;
                piVar22 = piVar22 + 3;
              } while (bVar6 < (byte)local_90);
            }
            local_234[0] = 1;
            local_1ec = local_e68;
            local_234[1] = 1;
            local_224 = this_00->field_0008;
            local_220 = 2;
            local_200 = 2;
            local_1e8 = (_DAT_00807340 & 0xff) + 1;
            local_21c = 0x6205;
            local_1fc = 0x6217;
            local_204 = local_224;
            (*this_00->field_000C->vtable->CreateObject)
                      ((SystemClassTy *)this_00->field_000C,5,&this_00->field_02B9,(int *)0x0,
                       local_234,0);
            puVar11 = (uint *)(local_e68 + 3);
            puVar30 = this_00->field_02BD;
            iVar8 = 4;
            do {
              Library::DKW::DDX::FUN_006b3640
                        ((int *)g_ddxContext_008075A8,*puVar30,0xffffffff,*puVar11,puVar11[1]);
              uVar31 = puVar11[3];
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              in_stack_ffffffdc = (DDXContext_008075A8 *)0x5e21c3;
              FUN_006b2800(g_ddxContext_008075A8,*puVar30,puVar11[2],uVar31);
              FUN_006b3020((int)g_ddxContext_008075A8,*puVar30,*(uint *)(uVar31 + 5));
              Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*puVar30);
              puVar11 = puVar11 + 0x1c;
              puVar30 = puVar30 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
        }
        break;
      case '\x03':
        if (this_00->field_006E != '\x01') {
          if (this_00->field_02CD != 0) {
            StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_02CD);
            this_00->field_02CD = 0;
            FUN_006b3af0((int *)g_ddxContext_008075A8,this_00->field_0484);
            if (this_00->field_02D5 != 0xffffffff) {
              FUN_006b3af0((int *)this_00->field_0319,this_00->field_02D5);
            }
            if (this_00->field_0366 != 0xffffffff) {
              FUN_006b3af0((int *)this_00->field_03AA,this_00->field_0366);
            }
            if (this_00->field_03F7 != 0xffffffff) {
              FUN_006b3af0((int *)this_00->field_043B,this_00->field_03F7);
            }
          }
          FreeAndNull(&this_00->field_06BF);
          if (*(undefined1 *)((int)piVar22 + 0xd) == '\x01') {
            memset(local_b34, 0, 0x878); /* compiler bulk-zero initialization */
            if ((DArrayTy *)g_startSystem_0081176C->field_0548 != (DArrayTy *)0x0) {
              FUN_006b5570((DArrayTy *)g_startSystem_0081176C->field_0548);
            }
            pDVar16 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
            g_startSystem_0081176C->field_0548 = &pDVar16->flags;
            dVar4 = g_dArray_0080C4CB->elementSize;
            if (dVar4 != 0) {
              iVar8 = 0;
              if (0 < (int)dVar4) {
                if ((int)dVar4 < 1) {
                  pcVar15 = (char *)0x0;
                  goto LAB_005e22f4;
                }
                do {
                  pcVar15 = *(char **)(g_dArray_0080C4CB->growCapacity + iVar8 * 4);
LAB_005e22f4:
                  thunk_FUN_005411a0((DArrayTy *)g_startSystem_0081176C->field_0548,pcVar15,
                                     "@ - %s");
                  iVar8 = iVar8 + 1;
                } while (iVar8 < (int)g_dArray_0080C4CB->elementSize);
              }
              ccFntTy::FormIndentSarr
                        (this_00->field_008D,(DArrayTy *)g_startSystem_0081176C->field_0548,
                         " ,.;:!?/\\()[]{}",(uint *)&DAT_007c21ec,
                         /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                         (*(int *)((int)piVar22 + 0x16) - *(int *)&this_00->field_0x2f5) + -0x2d,0,
                         0xffffffff,(char *)0x0,1);
              if ((DArrayTy *)g_startSystem_0081176C->field_0548 != (DArrayTy *)0x0) {
                FUN_006b5570((DArrayTy *)g_startSystem_0081176C->field_0548);
              }
              pDVar16 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
              g_startSystem_0081176C->field_0548 = &pDVar16->flags;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_ec = CONCAT31(local_ec._1_3_,(this_00->field_06C7 != '\x01') + -1) & 0xffffff02;
              LoadResourceString(0x2347,g_module_00807618);
              wsprintfA((LPSTR)local_c38,"&%1d %s:");
              Library::DKW::TBL::FUN_006b5aa0(g_startSystem_0081176C->field_0548,(char *)local_c38);
              wsprintfA((LPSTR)local_c38,"&%1d %s");
              Library::DKW::TBL::FUN_006b5aa0(g_startSystem_0081176C->field_0548,(char *)local_c38);
              Library::DKW::TBL::FUN_006b5aa0(g_startSystem_0081176C->field_0548,&DAT_007c3b5c);
              LoadResourceString(0x2346,g_module_00807618);
              pDVar16 = local_c38;
              wsprintfA((LPSTR)pDVar16,"&%1d %s:");
              Library::DKW::TBL::FUN_006b5aa0(g_startSystem_0081176C->field_0548,(char *)local_c38);
              Library::DKW::TBL::FUN_006b5aa0(g_startSystem_0081176C->field_0548,&DAT_007c3b5c);
              if (pDVar16 != (DArrayTy *)0x0) {
                if (pDVar16->elementSize != 0) {
                  ccFntTy::SepColorStrInSarr(this_00->field_008D,&pDVar16->flags,&pDVar16->flags);
                }
                iVar8 = 0;
                if (0 < (int)pDVar16->elementSize) {
                  if ((int)pDVar16->elementSize < 1) {
                    pcVar15 = (char *)0x0;
                    goto LAB_005e24c5;
                  }
                  do {
                    pcVar15 = *(char **)(pDVar16->growCapacity + iVar8 * 4);
LAB_005e24c5:
                    Library::DKW::TBL::FUN_006b5aa0(g_startSystem_0081176C->field_0548,pcVar15);
                    iVar8 = iVar8 + 1;
                  } while (iVar8 < (int)pDVar16->elementSize);
                }
                FUN_006b5570(pDVar16);
              }
              local_f0 = *(int *)((int)piVar22 + 0x16);
              uVar31 = *(uint *)((int)piVar22 + 0x1a);
              pcVar35 = (ccFntTy *)0x1;
              puVar25 = (undefined4 *)&this_00->field_005D->field_0x28;
              uVar20 = FUN_006b4fe0((int)this_00->field_005D);
              pAVar13 = (AnonPointee_MTaskTy_06BF *)
                        FUN_006b50c0(local_f0,uVar31,
                                     (uint)*(ushort *)&this_00->field_005D->field_0xe,uVar20,puVar25
                                     ,(int)pcVar35);
              this_00->field_06BF = pAVar13;
              *(undefined1 **)&this_00->field_0x6c3 =
                   &this_00->field_0x91 + (uint)(*(undefined1 *)((int)piVar22 + 10) != '\0') * 0x100
              ;
              uVar12 = *(undefined4 *)((int)piVar22 + 9);
              this_00->field_06C7 = (char)uVar12;
              this_00->field_0x6c8 = (char)((uint)uVar12 >> 8);
              this_00->field_06C9 = (char)((uint)uVar12 >> 0x10);
              this_00->field_06CA = (char)((uint)uVar12 >> 0x18);
              local_b34[0] = 0;
              local_b34[1] = 2;
              local_b14 = *(int *)((int)piVar22 + 0xe) + 0xf;
              local_b34[2] = 1;
              local_b10 = *(int *)((int)piVar22 + 0x12) + 0xf;
              pcVar10 = this_00->field_008D;
              local_b34[3] = g_startSystem_0081176C->field_0548[2];
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_b24 = (*(int *)((int)piVar22 + 0x16) - *(int *)&this_00->field_0x2f5) + -0x2d;
              if (pcVar10->field_00A0 != 0) {
                pcVar35 = pcVar10;
                FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar10);
              }
              local_b20 = *(int *)&pcVar10->field_0x8a;
              local_b1c = 1;
              local_af4 = 0x6332;
              local_a84 = 4;
              local_a80 = 0;
              local_a78[0] = 0;
              local_afc = this_00->field_0008;
              local_b18 = (*(int *)&pcVar35->field_0x1a + -0x1e) / *(int *)&pcVar10->field_0x8a;
              local_af8 = 2;
              local_a7c = 2;
              local_a78[1] = 2;
              local_a78[2] = local_b24 + 0xf + local_b14;
              this_00->field_037E = local_a78[2];
              local_a18 = this_00->field_0008;
              local_a78[3] = (*(int *)&pcVar35->field_0x12 - *(int *)&this_00->field_0x38a) + -0x10
                             + *(int *)&pcVar35->field_0x1a;
              this_00->field_0382 = local_a78[3];
              local_a68 = *(undefined4 *)&this_00->field_0x386;
              local_a64 = *(int *)&this_00->field_0x38a;
              local_968 = 500;
              local_964 = 0x32;
              local_a14 = 2;
              local_a10 = 0x6334;
              local_8fc = 2;
              piVar22 = local_a78;
              piVar18 = local_8f8;
              for (iVar8 = 0x5f; iVar8 != 0; iVar8 = iVar8 + -1) {
                *piVar18 = *piVar22;
                piVar22 = piVar22 + 1;
                piVar18 = piVar18 + 1;
              }
              local_764 = *(int *)&this_00->field_0x417;
              local_8f8[2] = local_b24 + 0xf + local_b14;
              local_8e4 = *(int *)&this_00->field_0x2f9;
              this_00->field_02ED = local_8f8[2];
              local_8f8[3] = *(int *)&pcVar35->field_0x12 + 0xf;
              local_890 = 0x6333;
              this_00->field_02F1 = local_8f8[3];
              local_8e8 = *(int *)&this_00->field_0x2f5;
              local_77c = 3;
              local_778 = 1;
              local_770 = 0;
              local_76c = (local_8e8 - local_764) / 2 + local_b24 + 0xf + local_b14;
              this_00->field_040F = local_76c;
              local_768 = *(int *)&pcVar35->field_0x12 + 0x1e + local_8e4;
              this_00->field_0413 = local_768;
              local_728 = this_00->field_0008;
              local_760 = ((*(int *)&pcVar35->field_0x1a - local_8e4) -
                          *(int *)&this_00->field_0x38a) + -0x3c;
              local_75c = 0xe;
              local_724 = 2;
              local_720 = 0x6335;
              (*this_00->field_000C->vtable->CreateObject)
                        ((SystemClassTy *)this_00->field_000C,8,&this_00->field_02CD,(int *)0x0,
                         local_b34,0);
              this_00->field_002D = 0x20;
              this_00->field_0031 = 1;
              FUN_006e6080(this_00,2,this_00->field_02CD,(undefined4 *)&this_00->field_0x1d);
              Library::DKW::DDX::FUN_006b3640
                        ((int *)g_ddxContext_008075A8,this_00->field_0484,0xffffffff,
                         *(uint *)&pcVar35->field_0xe,*(uint *)&pcVar35->field_0x12);
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              in_stack_ffffffdc = (DDXContext_008075A8 *)0x5e2823;
              FUN_006b2800(g_ddxContext_008075A8,this_00->field_0484,*(uint *)&pcVar35->field_0x16,
                           *(uint *)&pcVar35->field_0x1a);
              FUN_006b3020((int)g_ddxContext_008075A8,this_00->field_0484,
                           *(uint *)((int)&pcVar35->field_0004 + 1));
              uVar31 = this_00->field_0484;
              Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar31);
              iVar8 = *(int *)((int)&pcVar35->field_0004 + 1);
              if (iVar8 < 1) {
                uVar21 = 0;
              }
              else {
                uVar21 = iVar8 - 1;
              }
              if (this_00->field_02D5 != 0xffffffff) {
                uVar31 = uVar21;
                FUN_006b3020(this_00->field_0319,this_00->field_02D5,uVar21);
              }
              *(uint *)&this_00->field_0x32e = uVar21;
              if (*(int *)(uVar31 + 5) < 1) {
                uVar21 = 0;
              }
              else {
                uVar21 = *(int *)(uVar31 + 5) - 1;
              }
              if (this_00->field_0366 != 0xffffffff) {
                FUN_006b3020(this_00->field_03AA,this_00->field_0366,uVar21);
              }
              *(uint *)&this_00->field_0x3bf = uVar21;
              if (*(int *)(uVar31 + 5) < 1) {
                uVar31 = 0;
              }
              else {
                uVar31 = *(int *)(uVar31 + 5) - 1;
              }
              if (this_00->field_03F7 != 0xffffffff) {
                FUN_006b3020(this_00->field_043B,this_00->field_03F7,uVar31);
              }
              *(uint *)&this_00->field_0x450 = uVar31;
              this_00->field_03FB = (uint)(this_00->field_06CA == '\x01');
              if (this_00->field_02D5 != 0xffffffff) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                in_stack_ffffffdc = (DDXContext_008075A8 *)this_00->field_0319;
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                Library::DKW::DDX::FUN_006b34d0
                          ((uint *)in_stack_ffffffdc,this_00->field_02D5,0xfffffffe,
                           this_00->field_02ED,this_00->field_02F1);
              }
              if (this_00->field_0366 != 0xffffffff) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                in_stack_ffffffdc = (DDXContext_008075A8 *)this_00->field_03AA;
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                Library::DKW::DDX::FUN_006b34d0
                          ((uint *)in_stack_ffffffdc,this_00->field_0366,0xfffffffe,
                           this_00->field_037E,this_00->field_0382);
              }
              if (this_00->field_03F7 != 0xffffffff) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                in_stack_ffffffdc = (DDXContext_008075A8 *)this_00->field_043B;
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                Library::DKW::DDX::FUN_006b34d0
                          ((uint *)in_stack_ffffffdc,this_00->field_03F7,0xfffffffe,
                           this_00->field_040F,this_00->field_0413);
              }
              if (this_00->field_03F7 != 0xffffffff) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                in_stack_ffffffdc = (DDXContext_008075A8 *)this_00->field_043B;
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                Library::DKW::DDX::FUN_006b3730
                          ((uint *)in_stack_ffffffdc,this_00->field_03F7,this_00->field_03FB,
                           this_00->field_040F,this_00->field_0413);
              }
            }
          }
        }
        break;
      case '\x05':
        cVar2 = *(undefined1 *)((int)piVar22 + 0xe);
        if (cVar2 == '\0') {
          pDVar16 = this_00->field_064F;
        }
        else {
          pDVar16 = this_00->field_0647;
        }
        uVar31 = *(uint *)((int)piVar22 + 0xf);
        if (uVar31 < pDVar16->count) {
          if (cVar2 == '\0') {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pAVar14 = (AnonShape_005E10A0_819783CC *)
                      (this_00->field_064F->elementSize * uVar31 + (int)this_00->field_064F->data);
          }
          else {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pAVar14 = (AnonShape_005E10A0_819783CC *)
                      (this_00->field_0647->elementSize * uVar31 + (int)this_00->field_0647->data);
          }
        }
        else {
          pAVar14 = (AnonShape_005E10A0_819783CC *)0x0;
        }
        if (*(undefined1 *)((int)piVar22 + 0xd) == '\x01') {
          if (((pAVar14 == (AnonShape_005E10A0_819783CC *)0x0) || ((int)*(uint *)pAVar14 < 0)) ||
             (*(int *)&pAVar14->field_0x20 != piVar22[5])) {
            TTaskItemClose(this_00,pAVar14);
            if (piVar22[5] < (int)g_dArray_0080C4C7->elementSize) {
              pcVar15 = *(char **)(g_dArray_0080C4C7->growCapacity + piVar22[5] * 4);
            }
            else {
              pcVar15 = (char *)0x0;
            }
            if (pcVar15 != (char *)0x0) {
              memset(&local_13c, 0, 0x3e); /* compiler bulk-zero initialization */
              if (*(undefined1 *)((int)piVar22 + 0xe) == '\0') {
                local_7c = local_7c & 0xffffff00;
                local_88 = (int *)((-(uint)(*(undefined1 *)((int)piVar22 + 9) != '\x01') &
                                   0xfffffffe) + 2);
                do {
                  local_fc = *(int *)((int)piVar22 + 0x22);
                  iVar8 = *(int *)((int)piVar22 + 0x26);
                  iVar19 = 1;
                  puVar25 = (undefined4 *)&this_00->field_005D->field_0x28;
                  uVar30 = FUN_006b4fe0((int)this_00->field_005D);
                  piVar18 = (int *)FUN_006b50c0(local_fc,iVar8,
                                                (uint)*(ushort *)&this_00->field_005D->field_0xe,
                                                uVar30,puVar25,iVar19);
                  local_138[local_7c & 0xff] = piVar18;
                  uVar31 = piVar18[5];
                  if (uVar31 == 0) {
                    uVar31 = ((uint)*(ushort *)((int)piVar18 + 0xe) * piVar18[1] + 0x1f >> 3 &
                             0x1ffffffc) * piVar18[2];
                  }
                  puVar33 = (undefined4 *)0x5e2d28;
                  puVar25 = (undefined4 *)FUN_006b4fa0(piVar18);
                  for (uVar21 = uVar31 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                    *puVar25 = 0xffffffff;
                    puVar25 = puVar25 + 1;
                  }
                  for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                    *(undefined1 *)puVar25 = 0xff;
                    puVar25 = (undefined4 *)((int)puVar25 + 1);
                  }
                  piVar18 = (int *)(uint)(byte)*(char *)((int)piVar22 + 0x19);
                  PrepareTSurf(this_00,(AnonShape_005E11D0_D0F8BE03 *)*puVar33,
                               *(char *)((int)piVar22 + 0x19),*(char *)((int)piVar22 + 0xb));
                  if (*(char *)((int)piVar22 + 0x19) != '\0') {
                    local_110 = &this_00->field_0x91 +
                                (uint)(*(undefined1 *)((int)piVar22 + 10) == '\x01') * 0x100;
                  }
                  ccFntTy::SetSurf(this_00->field_0089,*piVar18,0,0,0,0,0);
                  pDVar16 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,1,1);
                  Library::DKW::TBL::FUN_006b5aa0(&pDVar16->flags,pcVar15);
                  local_80 = (DArrayTy *)
                             ccFntTy::FormIndentSarr
                                       (this_00->field_0089,pDVar16," ,.;:!?/\\()[]{}",
                                        (uint *)&DAT_007c21ec,
                                        *(int *)((int)piVar22 + 0x22) +
                                        *(int *)((int)piVar22 + 0x2a) * -2,0,0xffffffff,(char *)0x0,
                                        1);
                  FUN_006b5570(pDVar16);
                  pDVar16 = local_80;
                  if (local_80 != (DArrayTy *)0x0) {
                    piVar18 = local_88;
                    if ((char)local_7c != '\0') {
                      if ((char)local_7c == '\x01') {
                        piVar18 = (int *)((int)local_88 + 1);
                      }
                      else {
                        piVar18 = (int *)0x4;
                      }
                    }
                    ccFntTy::WrSarr(this_00->field_0089,(int)local_80,0,-1,
                                    *(int *)((int)piVar22 + 0x2a),*(int *)((int)piVar22 + 0x2e),
                                    piVar18);
                    FUN_006b5570(pDVar16);
                  }
                  bVar7 = (char)local_7c + 1;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_7c = CONCAT31(local_7c._1_3_,bVar7);
                } while (bVar7 < 3);
                FUN_006b2330(g_ddxContext_008075A8,&local_13c,*(uint *)((int)piVar22 + 5),0x403db4,
                             *(int *)((int)piVar22 + 0x22),*(uint *)((int)piVar22 + 0x26),
                             (ushort *)this_00->field_064F);
                uVar31 = *(uint *)((int)piVar22 + 0xf);
                pDVar16 = this_00->field_064F;
              }
              else {
                local_106 = *(undefined4 *)((int)piVar22 + 9);
                iVar19 = 1;
                local_107 = *(char *)((int)piVar22 + 0x19);
                local_10c = *(undefined1 *)(piVar22 + 6);
                local_f8 = *(int *)((int)piVar22 + 0x22);
                iVar8 = *(int *)((int)piVar22 + 0x26);
                puVar25 = (undefined4 *)&this_00->field_005D->field_0x28;
                local_f4 = (-(uint)(*(undefined1 *)((int)piVar22 + 9) != '\x01') & 0xfffffffe) + 2;
                local_EAX_6030 = FUN_006b4fe0((int)this_00->field_005D);
                local_138[0] = (int *)FUN_006b50c0(local_f8,iVar8,
                                                   (uint)*(ushort *)&this_00->field_005D->field_0xe,
                                                   local_EAX_6030,puVar25,iVar19);
                uVar21 = 0x5e2b09;
                puVar25 = (undefined4 *)FUN_006b4fa0(local_138[0]);
                for (uVar31 = uVar21 >> 2; uVar31 != 0; uVar31 = uVar31 - 1) {
                  *puVar25 = 0xffffffff;
                  puVar25 = puVar25 + 1;
                }
                for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                  *(undefined1 *)puVar25 = 0xff;
                  puVar25 = (undefined4 *)((int)puVar25 + 1);
                }
                if (*(char *)((int)piVar22 + 0x19) != '\0') {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_110 = &this_00->field_0x91 + (uint)(local_106._1_1_ == '\x01') * 0x100;
                }
                ccFntTy::SetSurf(this_00->field_0089,(int)local_138[0],0,0,0,0,0);
                pDVar16 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,1,1);
                Library::DKW::TBL::FUN_006b5aa0(&pDVar16->flags,pcVar15);
                pDVar17 = (DArrayTy *)
                          ccFntTy::FormIndentSarr
                                    (this_00->field_0089,pDVar16," ,.;:!?/\\()[]{}",
                                     (uint *)&DAT_007c21ec,
                                     *(int *)((int)piVar22 + 0x22) +
                                     *(int *)((int)piVar22 + 0x2a) * -2,0,0xffffffff,(char *)0x0,1);
                FUN_006b5570(pDVar16);
                if (pDVar17 != (DArrayTy *)0x0) {
                  local_102 = (uint *)ccFntTy::_SarrToTxt(this_00->field_0089,(char *)0x0,
                                                          (int)pDVar17);
                  if (local_102 != (uint *)0x0) {
                    local_10b = (cTypingTy *)Library::MSVCRT::FUN_0072e530(0xb4);
                    if (local_10b == (cTypingTy *)0x0) {
                      local_10b = (cTypingTy *)0x0;
                    }
                    else {
                      local_10b->field_0058 = 0;
                      local_10b->field_0088 = 0;
                    }
                    local_128 = *(int *)((int)piVar22 + 0x2a);
                    local_124 = *(int *)((int)piVar22 + 0x2e);
                    uStackY_48 = 0x2c51;
                    local_46 = 0x5e;
                    local_120 = cTypingTy::TypingInit
                                          (local_10b,local_102,this_00->field_0089,0,0,0,
                                           *(int *)((int)piVar22 + 0x22) +
                                           *(int *)((int)piVar22 + 0x2a) * -2,
                                           *(int *)((int)piVar22 + 0x26) +
                                           *(int *)((int)piVar22 + 0x2e) * -2,0,0,local_f4,
                                           local_f4 + 1,4,0xff);
                    local_120 = local_120 + 1;
                  }
                  FUN_006b5570(pDVar17);
                }
                FUN_006b2330(g_ddxContext_008075A8,&local_13c,*(uint *)((int)piVar22 + 5),0x4041b0,
                             *(int *)((int)piVar22 + 0x22),*(uint *)((int)piVar22 + 0x26),
                             (ushort *)this_00->field_0647);
                uVar31 = *(uint *)((int)piVar22 + 0xf);
                pDVar16 = this_00->field_0647;
              }
              Library::DKW::TBL::FUN_006ae140(&pDVar16->flags,uVar31,&local_13c);
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              in_stack_ffffffdc = g_ddxContext_008075A8;
              Library::DKW::DDX::FUN_006b3640
                        ((int *)g_ddxContext_008075A8,local_13c,0,*(uint *)((int)piVar22 + 0x1a),
                         *(uint *)((int)piVar22 + 0x1e));
            }
          }
          else {
            if (cVar2 == '\0') {
              uVar31 = *(uint *)&pAVar14->field_0x10;
            }
            else {
              uVar31 = 0;
            }
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            in_stack_ffffffdc = g_ddxContext_008075A8;
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)g_ddxContext_008075A8,*(uint *)pAVar14,uVar31,
                       *(uint *)((int)piVar22 + 0x1a),*(uint *)((int)piVar22 + 0x1e));
          }
        }
        else if ((pAVar14 != (AnonShape_005E10A0_819783CC *)0x0) && (-1 < *(int *)pAVar14)) {
          if (this_00->field_006D == '\x05') {
            TTaskItemClose(this_00,pAVar14);
          }
          else {
            if (cVar2 == '\0') {
              iVar8 = 1;
            }
            else {
              iVar8 = *(int *)&pAVar14->field_0x1c + -2;
            }
            *(int *)&pAVar14->field_0x10 = iVar8;
            *(undefined4 *)&pAVar14->field_0x28 = 2;
            *(undefined4 *)&pAVar14->field_0x24 = this_00->field_0069;
            FUN_006b35d0((int *)g_ddxContext_008075A8,*(uint *)pAVar14);
          }
        }
        break;
      case '\x06':
        if (this_00->field_006D != '\x05') {
          puVar11 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                      (this_00->field_0070,(char *)((int)piVar22 + 0xd),0,
                                       (ushort *)0x0);
          if (puVar11 == (uint *)0x0) {
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            in_stack_ffffffdc = (DDXContext_008075A8 *)0x5e2f3a;
            puVar11 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                        (g_cMf32_00806798,(char *)((int)piVar22 + 0xd),0,
                                         (ushort *)0x0);
            if (puVar11 == (uint *)0x0) break;
          }
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          in_stack_ffffffdc = (DDXContext_008075A8 *)0x5e2f24;
          thunk_FUN_0056a130(&g_sound,0,'\x03',-1,puVar11);
        }
        break;
      case '\a':
        pDVar16 = this_00->field_064B;
        if (*(uint *)((int)piVar22 + 0xe) < pDVar16->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pSVar27 = (SpriteClassTy *)
                    (pDVar16->elementSize * *(uint *)((int)piVar22 + 0xe) + (int)pDVar16->data);
        }
        else {
          pSVar27 = (SpriteClassTy *)0x0;
        }
        if (*(undefined1 *)((int)piVar22 + 0xd) == '\x01') {
          SpriteClassTy::SpriteClassTy(&local_1dc);
          ppvVar36 = (void **)0x0;
          local_142 = (int *)0x0;
          local_94 = 1;
          local_2bc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_2bc;
          iVar8 = Library::MSVCRT::__setjmp3(local_2bc.jumpBuffer,0);
          if (iVar8 == 0) {
            ppvVar37 = ppvVar36;
            if (pSVar27 != (SpriteClassTy *)0x0) {
              pbVar24 = &pSVar27->field_0065;
              if (pbVar24 != (undefined1 *)0x0) {
                pbVar23 = (byte *)((int)ppvVar36 + 0x12);
                do {
                  bVar7 = *pbVar24;
                  bVar32 = bVar7 < *pbVar23;
                  if (bVar7 != *pbVar23) {
LAB_005e2ffb:
                    iVar8 = (1 - (uint)bVar32) - (uint)(bVar32 != 0);
                    goto LAB_005e3000;
                  }
                  if (bVar7 == 0) break;
                  bVar7 = pbVar24[1];
                  bVar32 = bVar7 < pbVar23[1];
                  if (bVar7 != pbVar23[1]) goto LAB_005e2ffb;
                  pbVar24 = pbVar24 + 2;
                  pbVar23 = pbVar23 + 2;
                } while (bVar7 != 0);
                iVar8 = 0;
LAB_005e3000:
                if (iVar8 != 0) {
                  ppvVar37 = (void **)0x5e300e;
                  SpriteClassTy::CloseSprite(pSVar27);
                  value = (void **)((int)&pSVar27[1].field_0008 + 1);
                  if (*(int *)((int)&pSVar27[1].field_0008 + 1) != 0) {
                    FreeAndNull(value);
                    ppvVar37 = value;
                  }
                  goto LAB_005e3030;
                }
              }
              local_94 = 0;
            }
LAB_005e3030:
            this_00 = local_8c;
            if (local_94 == 0) {
              if (pSVar27 == (SpriteClassTy *)0x0) {
                puVar25 = (undefined4 *)0x0;
              }
              else {
                puVar25 = &pSVar27->field_0004;
              }
              puVar33 = &local_1dc.field_0004;
              ppvVar36 = ppvVar37;
              for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar33 = *puVar25;
                puVar25 = puVar25 + 1;
                puVar33 = puVar33 + 1;
              }
              local_1dc.field_0048 = (DDXContext_008075A8 *)pSVar27->field_0048;
              local_1dc.field_004C = pSVar27->field_004C;
              local_1dc.field_004D = pSVar27->field_004D;
              local_1dc.field_0051 = pSVar27->field_0051;
              local_1dc.field_0055 = pSVar27->field_0055;
              local_1dc.field_0059 = pSVar27->field_0059;
              local_1dc.field_005D = pSVar27->field_005D;
              local_1dc.field_0061 = pSVar27->field_0061;
              puVar26 = &local_1dc.field_0065;
              iVar8 = 0x20;
              do {
                *puVar26 = puVar26[(int)pSVar27 - (int)&local_1dc];
                puVar26 = puVar26 + 1;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
              local_1dc.field_0085 = pSVar27->field_0085;
              local_1dc.field_0089 = pSVar27->field_0089;
              local_1dc.field_008D = pSVar27->field_008D;
            }
            else {
              SpriteClassTy::InitSprite
                        (&local_1dc,(int *)g_ddxContext_008075A8,*(uint *)((int)ppvVar36 + 5),'\x1e'
                         ,(undefined4 *)0x0,0,0);
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              in_stack_ffffffdc = (DDXContext_008075A8 *)0x1e;
              iVar8 = SpriteClassTy::SetImages
                                (&local_1dc,this_00->field_0070,CASE_1E,0,
                                 (char *)((int)ppvVar36 + 0x12),0xffffffff,0);
              if (iVar8 != 0) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                in_stack_ffffffdc = (DDXContext_008075A8 *)0x1e;
                SpriteClassTy::SetImages
                          (&local_1dc,g_cMf32_00806798,CASE_1E,0,(char *)((int)ppvVar36 + 0x12),
                           0xffffffff,1);
              }
            }
            local_1dc.field_001C = *(uint *)((int)ppvVar36 + 0x32);
            local_1dc.field_0020 = *(uint *)((int)ppvVar36 + 0x36);
            cVar2 = *(char *)((int)ppvVar36 + 0x4f);
            if (cVar2 == '\0') {
              local_14b = '\0';
              local_1dc.field_0008 = *(uint *)((int)ppvVar36 + 0x4a);
            }
            else if (cVar2 == '\x01') {
              local_1dc.field_0044 = this_00->field_0069;
              local_14b = (*(char *)((int)ppvVar36 + 0x4e) != '\0') + '\x01';
              local_1dc.field_0008 = *(uint *)((int)ppvVar36 + 0x4a);
              local_1dc.field_0040 = *(undefined4 *)((int)ppvVar36 + 0x46);
            }
            else if (cVar2 == '\x02') {
              local_1dc.field_0044 = this_00->field_0069;
              local_14b = (*(char *)((int)ppvVar36 + 0x4e) != '\0') + '\x03';
              local_1dc.field_0008 = *(uint *)((int)ppvVar36 + 0x4a);
              local_1dc.field_0040 = *(undefined4 *)((int)ppvVar36 + 0x46);
              local_14a = 0;
              local_146 = *(int *)((int)ppvVar36 + 0x42);
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              in_stack_ffffffdc = *(DDXContext_008075A8 **)((int)ppvVar36 + 0x32);
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              local_142 = FUN_006c81c0((int)in_stack_ffffffdc,*(int *)((int)ppvVar36 + 0x36),
                                       *(int *)((int)ppvVar36 + 0x3a),*(int *)((int)ppvVar36 + 0x3e)
                                       ,local_146);
              if (local_142 == (int *)0x0) {
                local_14b = (*(char *)((int)ppvVar36 + 0x4e) != '\0') + '\x01';
              }
            }
            if (local_1dc.field_0004 != 0xffffffff) {
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              in_stack_ffffffdc = local_1dc.field_0048;
              Library::DKW::DDX::FUN_006b3730
                        ((uint *)local_1dc.field_0048,local_1dc.field_0004,local_1dc.field_0008,
                         local_1dc.field_001C,local_1dc.field_0020);
            }
            Library::DKW::TBL::FUN_006ae140
                      (&this_00->field_064B->flags,*(uint *)((int)ppvVar36 + 0xe),&local_1dc.vtable);
            g_currentExceptionFrame = local_2bc.previous;
          }
          else {
            g_currentExceptionFrame = local_2bc.previous;
            SpriteClassTy::CloseSprite(&local_1dc);
            this_00 = local_8c;
            if (local_142 != (int *)0x0) {
              FreeAndNull(&local_142);
              this_00 = local_8c;
            }
          }
        }
        else if (pSVar27 != (SpriteClassTy *)0x0) {
          SpriteClassTy::CloseSprite(pSVar27);
          if (*(int *)((int)&pSVar27[1].field_0008 + 1) != 0) {
            FreeAndNull((void **)((int)&pSVar27[1].field_0008 + 1));
          }
        }
        break;
      case '\b':
        memset(local_e4, 0, 0x50); /* compiler bulk-zero initialization */
        local_da = 0;
        local_d9 = 1;
        local_d8 = 1;
        local_db = 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_e4[0]._0_1_ = 1;
        local_d7 = 2;
        local_d6 = 0x26201;
        uStackY_d2 = 0x22600;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iStackY_ce._1_3_ = 0x91;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iStackY_ce._0_1_ = 0;
        uStackY_ca = 0x2800;
        uStackY_c6 = uStackY_c6 & 0xffffff00;
        Library::DKW::TBL::FUN_006b11d0(&this_00->field_0074->flags,uVar21 + 1,local_e4);
        local_d7 = 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_d6 = CONCAT31(0x2d,(undefined1)local_d6);
        uStackY_d2 = 0x22600;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iStackY_ce._0_1_ = 0;
        Library::DKW::TBL::FUN_006b11d0
                  (&this_00->field_0074->flags,this_00->field_007C + 1,local_e4);
        local_d7 = 0;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_d6 = CONCAT31(0x23,(undefined1)local_d6);
        uStackY_d2 = 0x1f400;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iStackY_ce = (uint)iStackY_ce._1_3_ << 8;
        Library::DKW::TBL::FUN_006b11d0
                  (&this_00->field_0074->flags,this_00->field_007C + 1,local_e4);
        local_d9 = 0;
        local_d8 = 0;
        local_db = 0;
        local_da = 0;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_e4[0]._0_1_ = 2;
        local_d7 = 1;
        local_d6 = 0x104;
        uStackY_c6 = 0x226;
        uStackY_d2 = 0x122;
        local_c2 = 0x23f;
        iStackY_ce = 0x1a4;
        local_be = 0x226;
        Library::DKW::TBL::FUN_006b11d0
                  (&this_00->field_0074->flags,this_00->field_007C + 1,local_e4);
        uStackY_d2 = 200;
        uStackY_ca = 200;
        local_d9 = 0;
        local_d8 = 0;
        local_db = 0;
        local_da = 0;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_e4[0]._0_1_ = 3;
        local_d7 = 1;
        local_d6 = 0x96;
        iStackY_ce = 500;
        Library::DKW::TBL::FUN_006b11d0
                  (&this_00->field_0074->flags,this_00->field_007C + 1,local_e4);
        break;
      case '\t':
        ppcVar1 = &this_00->field_005D;
        if (this_00->field_005D != (cMf32 *)0x0) {
          pcVar9 = g_cMf32_00806780;
          if ((this_00->field_0080 != '\x01') &&
             (pcVar9 = g_cMf32_00806798, this_00->field_0080 != '\x02')) {
            pcVar9 = this_00->field_0070;
          }
          cMf32::RecMemFree(pcVar9,(uint *)ppcVar1);
        }
        pbVar24 = (byte *)((int)piVar22 + 0xd);
        this_00->field_0080 = 0;
        pcVar9 = (cMf32 *)FUN_0070a9f0(this_00->field_0070,(char *)pbVar24,0,0);
        *ppcVar1 = pcVar9;
        if (pcVar9 == (cMf32 *)0x0) {
          pcVar9 = (cMf32 *)FUN_0070a9f0(g_cMf32_00806798,(char *)pbVar24,0,0);
          *ppcVar1 = pcVar9;
          if (pcVar9 == (cMf32 *)0x0) {
            iVar8 = 1;
            bVar7 = 0;
            text = FUN_006f2c00("TASK_BKG",1,(uint)DAT_0080874e);
            pcVar9 = (cMf32 *)FUN_0070a9f0(g_cMf32_00806780,text,bVar7,iVar8);
            *ppcVar1 = pcVar9;
            this_00->field_0080 = 1;
          }
          else {
            memset((void *)local_78, 0, 0x50); /* compiler bulk-zero initialization */
            local_6d = 1;
            local_6c = 1;
            local_6f = 1;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_78._1_4_ = *(undefined4 *)((int)piVar22 + 1);
            local_73 = 0x7ffffff0;
            local_78[0] = 7;
            local_6b = 1;
            pbVar23 = pbVar24;
            pbVar28 = PTR_s_DEFAULT_WS_ANIMATED_0079c224;
            do {
              bVar7 = *pbVar23;
              bVar32 = bVar7 < *pbVar28;
              if (bVar7 != *pbVar28) {
LAB_005e14be:
                iVar8 = (1 - (uint)bVar32) - (uint)(bVar32 != 0);
                goto LAB_005e14c3;
              }
              if (bVar7 == 0) break;
              bVar7 = pbVar23[1];
              bVar32 = bVar7 < pbVar28[1];
              if (bVar7 != pbVar28[1]) goto LAB_005e14be;
              pbVar23 = pbVar23 + 2;
              pbVar28 = pbVar28 + 2;
            } while (bVar7 != 0);
            iVar8 = 0;
LAB_005e14c3:
            pbVar23 = pbVar24;
            pbVar28 = PTR_s_DEFAULT_BO_ANIMATED_0079c228;
            if (iVar8 == 0) {
              uVar31 = 0xffffffff;
              pcVar15 = &DAT_007cdc48;
              do {
                pcVar29 = pcVar15;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar29 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar29;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              local_6a = 0xf0;
              pcVar15 = pcVar29 + -uVar31;
              pcVar29 = local_66;
              for (uVar21 = uVar31 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar29 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar29 = pcVar29 + 4;
              }
              iVar8 = this_00->field_007C;
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar29 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar29 = pcVar29 + 1;
              }
              local_46 = 0;
              Library::DKW::TBL::FUN_006b11d0
                        (&this_00->field_0074->flags,iVar8 + 1,(undefined4 *)local_78);
              uVar31 = 0xffffffff;
              pcVar15 = "DEF_WS_ANI2";
              do {
                pcVar29 = pcVar15;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar29 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar29;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              local_6a = 0xf1;
              iVar8 = this_00->field_007C;
              pcVar15 = pcVar29 + -uVar31;
              pcVar29 = local_66;
              for (uVar21 = uVar31 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar29 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar29 = pcVar29 + 4;
              }
              pMVar3 = this_00->field_0074;
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar29 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar29 = pcVar29 + 1;
              }
              local_46 = 0;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar8 + 1,(undefined4 *)local_78);
              uVar31 = 0xffffffff;
              pcVar15 = "DEF_WS_ANI3";
              do {
                pcVar29 = pcVar15;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar29 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar29;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              local_6a = 0xf2;
              iVar8 = this_00->field_007C;
              pcVar15 = pcVar29 + -uVar31;
              pcVar29 = local_66;
              for (uVar21 = uVar31 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar29 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar29 = pcVar29 + 4;
              }
              pMVar3 = this_00->field_0074;
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar29 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar29 = pcVar29 + 1;
              }
              local_46 = 0x40;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar8 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar31 = 0xffffffff;
              pcVar15 = &DAT_007cdc18;
              do {
                pcVar29 = pcVar15;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar29 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar29;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              iVar8 = this_00->field_007C;
              pcVar15 = pcVar29 + -uVar31;
              pcVar29 = local_66;
              for (uVar21 = uVar31 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar29 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar29 = pcVar29 + 4;
              }
              pMVar3 = this_00->field_0074;
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar29 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar29 = pcVar29 + 1;
              }
              local_46 = 0x208;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar8 + 1,(undefined4 *)local_78);
              uVar31 = 0xffffffff;
              pcVar15 = &DAT_007cdc08;
              do {
                pcVar29 = pcVar15;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar29 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar29;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              local_6a = 0xf4;
              iVar8 = this_00->field_007C;
              pcVar15 = pcVar29 + -uVar31;
              pcVar29 = local_66;
              for (uVar21 = uVar31 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar29 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar29 = pcVar29 + 4;
              }
              pMVar3 = this_00->field_0074;
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar29 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar29 = pcVar29 + 1;
              }
              local_46 = 0x208;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar8 + 1,(undefined4 *)local_78);
              uVar31 = 0xffffffff;
              pcVar15 = &DAT_007cdbf8;
              do {
                pcVar29 = pcVar15;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar29 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar29;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              local_6a = 0xf5;
              iVar8 = this_00->field_007C;
              pcVar15 = pcVar29 + -uVar31;
              pcVar29 = local_66;
              for (uVar21 = uVar31 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar29 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar29 = pcVar29 + 4;
              }
              pMVar3 = this_00->field_0074;
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar29 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar29 = pcVar29 + 1;
              }
              local_46 = 0x2df;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar8 + 1,(undefined4 *)local_78);
              pbVar28 = PTR_s_DEFAULT_BO_ANIMATED_0079c228;
            }
            do {
              bVar7 = *pbVar23;
              bVar32 = bVar7 < *pbVar28;
              if (bVar7 != *pbVar28) {
LAB_005e16bc:
                iVar8 = (1 - (uint)bVar32) - (uint)(bVar32 != 0);
                goto LAB_005e16c1;
              }
              if (bVar7 == 0) break;
              bVar7 = pbVar23[1];
              bVar32 = bVar7 < pbVar28[1];
              if (bVar7 != pbVar28[1]) goto LAB_005e16bc;
              pbVar23 = pbVar23 + 2;
              pbVar28 = pbVar28 + 2;
            } while (bVar7 != 0);
            iVar8 = 0;
LAB_005e16c1:
            pbVar23 = PTR_s_DEFAULT_SI_ANIMATED_0079c22c;
            if (iVar8 == 0) {
              uVar31 = 0xffffffff;
              pcVar15 = "DEF_BO_ANI1";
              do {
                pcVar29 = pcVar15;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar29 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar29;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              local_6a = 0xf0;
              pcVar15 = pcVar29 + -uVar31;
              pcVar29 = local_66;
              for (uVar21 = uVar31 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar29 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar29 = pcVar29 + 4;
              }
              iVar8 = this_00->field_007C;
              pMVar3 = this_00->field_0074;
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar29 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar29 = pcVar29 + 1;
              }
              local_46 = 0xb0;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar8 + 1,(undefined4 *)local_78);
              uVar31 = 0xffffffff;
              pcVar15 = "DEF_BO_ANI2";
              do {
                pcVar29 = pcVar15;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar29 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar29;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              local_6a = 0xf1;
              iVar8 = this_00->field_007C;
              pcVar15 = pcVar29 + -uVar31;
              pcVar29 = local_66;
              for (uVar21 = uVar31 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar29 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar29 = pcVar29 + 4;
              }
              pMVar3 = this_00->field_0074;
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar29 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar29 = pcVar29 + 1;
              }
              local_46 = 0;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar8 + 1,(undefined4 *)local_78);
              uVar31 = 0xffffffff;
              pcVar15 = "DEF_BO_ANI3";
              do {
                pcVar29 = pcVar15;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar29 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar29;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              local_6a = 0xf2;
              iVar8 = this_00->field_007C;
              pcVar15 = pcVar29 + -uVar31;
              pcVar29 = local_66;
              for (uVar21 = uVar31 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar29 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar29 = pcVar29 + 4;
              }
              pMVar3 = this_00->field_0074;
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar29 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar29 = pcVar29 + 1;
              }
              local_46 = 0xb0;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar8 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar31 = 0xffffffff;
              pcVar15 = "DEF_BO_ANI4";
              do {
                pcVar29 = pcVar15;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar29 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar29;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              iVar8 = this_00->field_007C;
              pcVar15 = pcVar29 + -uVar31;
              pcVar29 = local_66;
              for (uVar21 = uVar31 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar29 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar29 = pcVar29 + 4;
              }
              pMVar3 = this_00->field_0074;
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar29 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar29 = pcVar29 + 1;
              }
              local_46 = 0xdc;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar8 + 1,(undefined4 *)local_78);
              uVar31 = 0xffffffff;
              pcVar15 = &DAT_007cdba8;
              do {
                pcVar29 = pcVar15;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar29 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar29;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              local_6a = 0xf4;
              iVar8 = this_00->field_007C;
              pcVar15 = pcVar29 + -uVar31;
              pcVar29 = local_66;
              for (uVar21 = uVar31 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar29 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar29 = pcVar29 + 4;
              }
              pMVar3 = this_00->field_0074;
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar29 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar29 = pcVar29 + 1;
              }
              local_46 = 0x1ce;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar8 + 1,(undefined4 *)local_78);
              uVar31 = 0xffffffff;
              pcVar15 = &DAT_007cdb98;
              do {
                pcVar29 = pcVar15;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar29 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar29;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              local_6a = 0xf5;
              iVar8 = this_00->field_007C;
              pcVar15 = pcVar29 + -uVar31;
              pcVar29 = local_66;
              for (uVar21 = uVar31 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar29 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar29 = pcVar29 + 4;
              }
              pMVar3 = this_00->field_0074;
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar29 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar29 = pcVar29 + 1;
              }
              local_46 = 0x2a9;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar8 + 1,(undefined4 *)local_78);
              uVar31 = 0xffffffff;
              local_6a = 0xf6;
              pcVar15 = &DAT_007cdb88;
              do {
                pcVar29 = pcVar15;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar29 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar29;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              iVar8 = this_00->field_007C;
              pcVar15 = pcVar29 + -uVar31;
              pcVar29 = local_66;
              for (uVar21 = uVar31 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar29 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar29 = pcVar29 + 4;
              }
              pMVar3 = this_00->field_0074;
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar29 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar29 = pcVar29 + 1;
              }
              local_46 = 0x78;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar8 + 1,(undefined4 *)local_78);
              uVar31 = 0xffffffff;
              pcVar15 = "DEF_BO_ANI8";
              do {
                pcVar29 = pcVar15;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar29 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar29;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              local_6a = 0xf7;
              iVar8 = this_00->field_007C;
              pcVar15 = pcVar29 + -uVar31;
              pcVar29 = local_66;
              for (uVar21 = uVar31 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar29 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar29 = pcVar29 + 4;
              }
              pMVar3 = this_00->field_0074;
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar29 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar29 = pcVar29 + 1;
              }
              local_46 = 0x78;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar8 + 1,(undefined4 *)local_78);
              pbVar23 = PTR_s_DEFAULT_SI_ANIMATED_0079c22c;
            }
            do {
              bVar7 = *pbVar24;
              bVar32 = bVar7 < *pbVar23;
              if (bVar7 != *pbVar23) {
LAB_005e1958:
                iVar8 = (1 - (uint)bVar32) - (uint)(bVar32 != 0);
                goto LAB_005e195d;
              }
              if (bVar7 == 0) break;
              bVar7 = pbVar24[1];
              bVar32 = bVar7 < pbVar23[1];
              if (bVar7 != pbVar23[1]) goto LAB_005e1958;
              pbVar24 = pbVar24 + 2;
              pbVar23 = pbVar23 + 2;
            } while (bVar7 != 0);
            iVar8 = 0;
LAB_005e195d:
            if (iVar8 == 0) {
              uVar31 = 0xffffffff;
              pcVar15 = "DEF_SI_ANI1";
              do {
                pcVar29 = pcVar15;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar29 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar29;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              local_6a = 0xf0;
              pcVar15 = pcVar29 + -uVar31;
              pcVar29 = local_66;
              for (uVar21 = uVar31 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar29 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar29 = pcVar29 + 4;
              }
              iVar8 = this_00->field_007C;
              pMVar3 = this_00->field_0074;
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar29 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar29 = pcVar29 + 1;
              }
              local_46 = 0x8e;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar8 + 1,(undefined4 *)local_78);
              uVar31 = 0xffffffff;
              pcVar15 = "DEF_SI_ANI2";
              do {
                pcVar29 = pcVar15;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar29 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar29;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              local_6a = 0xf1;
              iVar8 = this_00->field_007C;
              pcVar15 = pcVar29 + -uVar31;
              pcVar29 = local_66;
              for (uVar21 = uVar31 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar29 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar29 = pcVar29 + 4;
              }
              pMVar3 = this_00->field_0074;
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar29 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar29 = pcVar29 + 1;
              }
              local_46 = 0x103;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar8 + 1,(undefined4 *)local_78);
              uVar31 = 0xffffffff;
              pcVar15 = "DEF_SI_ANI3";
              do {
                pcVar29 = pcVar15;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar29 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar29;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              local_6a = 0xf2;
              iVar8 = this_00->field_007C;
              pcVar15 = pcVar29 + -uVar31;
              pcVar29 = local_66;
              for (uVar21 = uVar31 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar29 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar29 = pcVar29 + 4;
              }
              pMVar3 = this_00->field_0074;
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar29 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar29 = pcVar29 + 1;
              }
              local_46 = 0x103;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar8 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar31 = 0xffffffff;
              pcVar15 = "DEF_SI_ANI4";
              do {
                pcVar29 = pcVar15;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar29 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar29;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              iVar8 = this_00->field_007C;
              pcVar15 = pcVar29 + -uVar31;
              pcVar29 = local_66;
              for (uVar21 = uVar31 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar29 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar29 = pcVar29 + 4;
              }
              pMVar3 = this_00->field_0074;
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar29 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar29 = pcVar29 + 1;
              }
              local_46 = 0xd7;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar8 + 1,(undefined4 *)local_78);
              uVar31 = 0xffffffff;
              pcVar15 = "DEF_SI_ANI5";
              do {
                pcVar29 = pcVar15;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar29 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar29;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              local_6a = 0xf4;
              iVar8 = this_00->field_007C;
              pcVar15 = pcVar29 + -uVar31;
              pcVar29 = local_66;
              for (uVar21 = uVar31 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar29 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar29 = pcVar29 + 4;
              }
              pMVar3 = this_00->field_0074;
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar29 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar29 = pcVar29 + 1;
              }
              local_46 = 0x27c;
              Library::DKW::TBL::FUN_006b11d0(&pMVar3->flags,iVar8 + 1,(undefined4 *)local_78);
            }
            this_00->field_0080 = 2;
          }
        }
        pMVar3 = this_00->field_0074;
        if ((uint)this_00->field_007C < pMVar3->count) {
          element_0074 = DArrayAt<MTaskTy_field_0074Element>(pMVar3, this_00->field_007C);
        }
        else {
          element_0074 = (MTaskTy_field_0074Element *)0x0;
        }
        FUN_006bc360((ushort *)this_00->field_005D,local_1268,element_0074);
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffdc = (DDXContext_008075A8 *)0x0;
        Library::Ourlib::PALETTE::FUN_00718780
                  ((int)local_1268,0,0x100,0x1a,0x10,(undefined4 *)&this_00->field_0x91);
        Library::Ourlib::PALETTE::FUN_00718780
                  ((int)local_1268,0,0x100,0x2e,0x10,(undefined4 *)&this_00->field_0x191);
        if (this_00->field_007C != 0) {
          DarkScreen(g_dDXContext_0080759C,1,0);
          PaintMTask(this_00);
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          in_stack_ffffffdc = g_ddxContext_008075A8;
          thunk_FUN_0055ddf0((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                             (ushort *)this_00->field_005D,10,2);
        }
        if (this_00->field_0089 != (ccFntTy *)0x0) {
          ccFntTy::operator_delete((uint *)this_00->field_0089);
        }
        pcVar10 = (ccFntTy *)
                  thunk_FUN_005defe0((int)this_00->field_005D,(undefined *)0x0,DAT_00807dd9);
        this_00->field_0089 = pcVar10;
        pcVar10->field_0058 = 1;
        pcVar10->field_005C = 0;
        if (this_00->field_008D != (ccFntTy *)0x0) {
          ccFntTy::operator_delete((uint *)this_00->field_008D);
        }
        pcVar10 = (ccFntTy *)
                  thunk_FUN_005df290((int)this_00->field_005D,(undefined *)0x0,DAT_00807dd9);
        this_00->field_008D = pcVar10;
        thunk_FUN_00568bc0(&g_sound,0);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if ((DAT_00807300._1_1_ & 8) != 0) {
          puVar11 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                      (this_00->field_0070,(char *)((int)element_0074 + 0x2d),0,
                                       (ushort *)0x0);
          *(uint **)&this_00->field_0x85 = puVar11;
          if (puVar11 == (uint *)0x0) {
            puVar11 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                        (g_cMf32_00806798,(char *)((int)element_0074 + 0x2d),0,
                                         (ushort *)0x0);
            *(uint **)&this_00->field_0x85 = puVar11;
            if (puVar11 == (uint *)0x0) {
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              in_stack_ffffffdc = (DDXContext_008075A8 *)0x5e1cab;
              thunk_FUN_0056a130(&g_sound,0x14,'\x02',0,(uint *)0x0);
              break;
            }
          }
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          in_stack_ffffffdc = (DDXContext_008075A8 *)0x5e1c94;
          thunk_FUN_0056a130(&g_sound,0,'\x02',0,puVar11);
        }
      }
      iVar8 = this_00->field_007C + 1;
      this_00->field_007C = iVar8;
      uVar31 = this_00->field_0074->count;
    } while (iVar8 < (int)uVar31);
  }
  if (this_00->field_007C == this_00->field_0074->count) {
    if ((this_00->field_006D == '\x05') &&
       (pDVar16 = this_00->field_064B, pDVar16 != (DArrayTy *)0x0)) {
      uVar31 = 0;
      if (pDVar16->count != 0) {
        if (pDVar16->count == 0) {
          pSVar27 = (SpriteClassTy *)0x0;
          goto LAB_005e34e0;
        }
        do {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar16, uVar31) (runtime stride) */
          pSVar27 = (SpriteClassTy *)(pDVar16->elementSize * uVar31 + (int)pDVar16->data);
LAB_005e34e0:
          if ((pSVar27->field_0004 != -1) &&
             ((*(char *)&pSVar27[1].vtable == '\x01' || (*(char *)&pSVar27[1].vtable == '\x03')))) {
            SpriteClassTy::CloseSprite(pSVar27);
            if (*(int *)((int)&pSVar27[1].field_0008 + 1) != 0) {
              FreeAndNull((void **)((int)&pSVar27[1].field_0008 + 1));
            }
          }
          pDVar16 = this_00->field_064B;
          uVar31 = uVar31 + 1;
        } while (uVar31 < pDVar16->count);
      }
    }
    this_00->field_006D = 1;
  }
  g_currentExceptionFrame = local_278.previous;
  return;
}

