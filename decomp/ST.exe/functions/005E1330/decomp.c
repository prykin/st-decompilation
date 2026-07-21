#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::PlayScript */

void __thiscall MTaskTy::PlayScript(MTaskTy *this)

{
  cMf32 **ppcVar1;
  char cVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  cMf32 *pcVar7;
  LPSTR text;
  ccFntTy *pcVar8;
  uint *puVar9;
  undefined4 uVar10;
  AnonPointee_MTaskTy_06BF *pAVar11;
  AnonShape_005E10A0_819783CC *pAVar12;
  char *pcVar13;
  AnonShape_006B5570_4D68B99C *pAVar14;
  AnonShape_006B5570_4D68B99C *pAVar15;
  DArrayTy *pDVar16;
  int iVar17;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  MTaskTy *extraout_ECX;
  uint uVar18;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_01;
  ccFntTy *this_00;
  MTaskTy *this_01;
  undefined1 *puVar19;
  byte *pbVar20;
  byte *pbVar21;
  int *piVar22;
  int *piVar23;
  undefined4 *puVar24;
  SpriteClassTy *pSVar25;
  byte *pbVar26;
  char *pcVar27;
  uint *puVar28;
  int *piVar29;
  uint uVar30;
  bool bVar31;
  undefined4 local_1268 [256];
  int local_e68 [140];
  AnonShape_006B5570_4D68B99C local_c38 [10];
  undefined4 local_b34 [4];
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
  uint local_13c [5];
  undefined4 local_128;
  undefined4 local_124;
  int local_120;
  undefined1 *local_110;
  undefined1 local_10c;
  cTypingTy *local_10b;
  undefined1 local_107;
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
  AnonShape_006B5570_4D68B99C *local_80;
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
  uint *in_stack_ffffffdc;
  UINT resourceId;
  undefined1 *puVar32;
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
  iVar6 = Library::MSVCRT::__setjmp3(local_278.jumpBuffer,0);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_278.previous;
    iVar17 = ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",0x45f,0,iVar6,
                                "%s");
    if (iVar17 == 0) {
      RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\task_obj.cpp",0x45f);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar30 = *(uint *)(local_8c->field_0074 + 0xc);
  this_01 = local_8c;
  if ((int)local_8c->field_007C < (int)uVar30) {
    do {
      uVar18 = this_01->field_007C;
      if (uVar18 < uVar30) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        puVar19 = (undefined1 *)
                  (*(int *)(this_01->field_0074 + 8) * uVar18 + *(int *)(this_01->field_0074 + 0x1c)
                  );
      }
      else {
        puVar19 = (undefined1 *)0x0;
      }
      if (((uint)(this_01->field_0069 - this_01->field_0061) < *(uint *)(puVar19 + 1)) &&
         (this_01->field_006D != '\x05')) break;
      switch(*puVar19) {
      case 1:
        if ((this_01->field_006E != '\x01') || ((puVar19[0xd] != '\0' && (puVar19[0xd] != '\x01'))))
        {
          switch(puVar19[0xd]) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          case 0:
            in_stack_ffffffdc = (uint *)0x0;
            break;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          case 1:
            in_stack_ffffffdc = (uint *)0x1;
            break;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          case 2:
            in_stack_ffffffdc = (uint *)0x2;
            break;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          case 3:
            in_stack_ffffffdc = (uint *)0x3;
            break;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          case 4:
            in_stack_ffffffdc = (uint *)0x4;
          }
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          uVar30 = (uint)in_stack_ffffffdc & 0xff;
          if ((&this_01->field_0291)[uVar30] != 0) {
            FUN_006b3af0((int *)DAT_008075a8,(&this_01->field_02A5)[uVar30]);
            StartSystemTy::sub_006E56B0(this_01->field_000C,(&this_01->field_0291)[uVar30]);
            (&this_01->field_0291)[uVar30] = 0;
          }
          FreeAndNull((void **)(&this_01->field_0653 + uVar30 * 3));
          if (puVar19[0xe] == '\x01') {
            local_84 = *(uint *)(puVar19 + 0x1b);
            if ((int)local_84 < 0x28) {
              local_84 = 0x28;
            }
            iVar6 = 1;
            puVar32 = &this_01->field_005D->field_0x28;
            uVar18 = FUN_006b4fe0((int)this_01->field_005D);
            uVar10 = FUN_006b50c0((int)puVar32,local_84,
                                  (uint)*(ushort *)&this_01->field_005D->field_0xe,uVar18,
                                  (undefined4 *)puVar32,iVar6);
            (&this_01->field_0653)[uVar30 * 3] = uVar10;
            *(undefined1 **)(&this_01->field_0x657 + uVar30 * 0xc) =
                 &this_01->field_0x91 + (uint)(puVar19[10] == '\x01') * 0x100;
            *(undefined4 *)(&this_01->field_0x65b + uVar30 * 0xc) = *(undefined4 *)(puVar19 + 9);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            uVar10 = CreateBut(this_01,1,1,*(undefined4 *)(puVar19 + 0xf),
                               *(undefined4 *)(puVar19 + 0x13),puVar32,local_84,uVar30 + 0x6200,
                               uVar30 + 0x6212);
            (&this_01->field_0291)[uVar30] = uVar10;
            uVar18 = *(uint *)(puVar19 + 0xf);
            puVar9 = &this_01->field_02A5 + uVar30;
            Library::DKW::DDX::FUN_006b3640
                      ((int *)DAT_008075a8,(&this_01->field_02A5)[uVar30],0xffffffff,uVar18,
                       *(uint *)(puVar19 + 0x13));
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            in_stack_ffffffdc = (uint *)0x5e1e40;
            FUN_006b2800((int)DAT_008075a8,*puVar9,uVar18,local_84);
            FUN_006b3020((int)DAT_008075a8,*puVar9,*(uint *)(puVar19 + 5));
            Library::DKW::DDX::FUN_006b3430((int *)DAT_008075a8,*puVar9);
          }
        }
        break;
      case 2:
        if (this_01->field_006E != '\x01') {
          if (this_01->field_02B9 != 0) {
            puVar9 = &this_01->field_02BD;
            iVar6 = 4;
            do {
              FUN_006b3af0((int *)DAT_008075a8,*puVar9);
              puVar9 = puVar9 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            StartSystemTy::sub_006E56B0(this_01->field_000C,this_01->field_02B9);
            this_01->field_02B9 = 0;
          }
          ppvVar36 = (void **)&this_01->field_0x68f;
          iVar6 = 4;
          do {
            FreeAndNull(ppvVar36);
            ppvVar36 = ppvVar36 + 3;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          if (puVar19[0xd] == '\x01') {
            puVar24 = local_234;
            for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar24 = 0;
              puVar24 = puVar24 + 1;
            }
            piVar22 = local_e68;
            for (iVar6 = 0x8c; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar22 = 0;
              piVar22 = piVar22 + 1;
            }
            bVar5 = 2;
            piVar22 = (int *)(puVar19 + 0x16);
            iVar6 = 2;
            do {
              if (-1 < *piVar22) {
                bVar5 = bVar5 + 1;
              }
              piVar22 = piVar22 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_90 = CONCAT31((int3)((uint)local_90 >> 8),bVar5);
            local_80 = (AnonShape_006B5570_4D68B99C *)(uint)bVar5;
            if (local_80 == (AnonShape_006B5570_4D68B99C *)0x2) {
              if ((DAT_00807340 == 1) || (DAT_00807340 == 3)) {
                _DAT_00807340 = (uint)_DAT_00807341 << 8;
              }
            }
            else if ((local_80 == (AnonShape_006B5570_4D68B99C *)0x3) && (DAT_00807340 == 3)) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _DAT_00807340 = CONCAT31(_DAT_00807341,1);
            }
            bVar4 = 0;
            if (bVar5 != 0) {
              local_88 = (int *)(puVar19 + 9);
              iVar6 = 0;
              piVar22 = local_e68;
              piVar23 = (int *)(puVar19 + 0x1e);
              piVar29 = (int *)&this_01->field_0x693;
              do {
                resourceId = 0x1f52;
                if (local_80 == (AnonShape_006B5570_4D68B99C *)0x2) {
                  if (iVar6 == 0) {
                    resourceId = 0x1f47;
                    *piVar22 = 1;
                  }
                  else if (iVar6 == 1) {
                    resourceId = 0x1f49;
                    *piVar22 = 3;
                  }
                }
                else if (local_80 == (AnonShape_006B5570_4D68B99C *)0x3) {
                  if (iVar6 == 0) {
                    resourceId = 0x1f47;
LAB_005e200a:
                    *piVar22 = iVar6 + 1;
                  }
                  else if (iVar6 == 1) {
                    resourceId = 0x1f48;
                    *piVar22 = 2;
                  }
                  else {
                    if (iVar6 != 2) goto LAB_005e200a;
                    resourceId = 0x1f49;
                    *piVar22 = 3;
                  }
                }
                else {
                  switch(iVar6) {
                  case 0:
                    resourceId = 0x1f47;
                    *piVar22 = iVar6 + 1;
                    break;
                  case 1:
                    resourceId = 0x1f48;
                    *piVar22 = iVar6 + 1;
                    break;
                  case 2:
                    resourceId = 0x1f49;
                    *piVar22 = iVar6 + 1;
                    break;
                  case 3:
                  default:
                    resourceId = 0x1f52;
                    *piVar22 = iVar6 + 1;
                  }
                }
                piVar22[1] = (uint)(bVar4 == DAT_00807340);
                module = HINSTANCE_00807618;
                piVar22[3] = piVar23[-4];
                pcVar13 = LoadResourceString(resourceId,module);
                iVar17 = FUN_00711110(this_01->field_008D,pcVar13);
                iVar34 = 1;
                piVar22[5] = iVar17 + 0x1b;
                pcVar7 = this_01->field_005D;
                piVar22[4] = *piVar23;
                piVar22[6] = 0x14;
                local_e8 = piVar22[5];
                puVar24 = (undefined4 *)&pcVar7->field_0x28;
                uVar30 = FUN_006b4fe0((int)pcVar7);
                iVar17 = FUN_006b50c0(local_e8,0x14,(uint)*(ushort *)&this_01->field_005D->field_0xe
                                      ,uVar30,puVar24,iVar34);
                piVar29[-1] = iVar17;
                piVar23 = piVar23 + 1;
                *piVar29 = (int)(&this_01->field_0x91 +
                                (uint)(*(char *)(iVar34 + 10) != '\0') * 0x100);
                piVar22 = piVar22 + 0x1c;
                piVar29[1] = *local_88;
                bVar4 = bVar4 + 1;
                iVar6 = iVar6 + 1;
                piVar29 = piVar29 + 3;
              } while (bVar4 < (byte)local_90);
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
                      ((SystemClassTy *)this_01->field_000C,5,&this_01->field_02B9,(int *)0x0,
                       local_234,0);
            puVar9 = (uint *)(local_e68 + 3);
            puVar28 = &this_01->field_02BD;
            iVar6 = 4;
            do {
              Library::DKW::DDX::FUN_006b3640
                        ((int *)DAT_008075a8,*puVar28,0xffffffff,*puVar9,puVar9[1]);
              uVar30 = puVar9[3];
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              in_stack_ffffffdc = (uint *)0x5e21c3;
              FUN_006b2800((int)DAT_008075a8,*puVar28,puVar9[2],uVar30);
              FUN_006b3020((int)DAT_008075a8,*puVar28,*(uint *)(uVar30 + 5));
              Library::DKW::DDX::FUN_006b3430((int *)DAT_008075a8,*puVar28);
              puVar9 = puVar9 + 0x1c;
              puVar28 = puVar28 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
        break;
      case 3:
        if (this_01->field_006E != '\x01') {
          if (this_01->field_02CD != 0) {
            StartSystemTy::sub_006E56B0(this_01->field_000C,this_01->field_02CD);
            this_01->field_02CD = 0;
            FUN_006b3af0((int *)DAT_008075a8,this_01->field_0484);
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
          if (puVar19[0xd] == '\x01') {
            puVar24 = local_b34;
            for (iVar6 = 0x21e; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar24 = 0;
              puVar24 = puVar24 + 1;
            }
            if ((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548 !=
                (AnonShape_006B5570_4D68B99C *)0x0) {
              FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548);
            }
            puVar9 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
            PTR_0081176c->field_0548 = puVar9;
            iVar6 = PTR_0080c4cb->field_0008;
            if (iVar6 != 0) {
              iVar17 = 0;
              if (0 < iVar6) {
                if (iVar6 < 1) {
                  pcVar13 = (char *)0x0;
                  goto LAB_005e22f4;
                }
                do {
                  pcVar13 = *(char **)(PTR_0080c4cb->field_0014 + iVar17 * 4);
LAB_005e22f4:
                  thunk_FUN_005411a0((uint *)PTR_0081176c->field_0548,pcVar13,"@ - %s");
                  iVar17 = iVar17 + 1;
                } while (iVar17 < PTR_0080c4cb->field_0008);
              }
              ccFntTy::FormIndentSarr
                        (this_01->field_008D,(uint *)PTR_0081176c->field_0548,
                         " ,.;:!?/\\()[]{}",(uint *)&DAT_007c21ec,
                         /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                         (*(int *)(puVar19 + 0x16) - *(int *)&this_01->field_0x2f5) + -0x2d,0,
                         0xffffffff,(char *)0x0,1);
              if ((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548 !=
                  (AnonShape_006B5570_4D68B99C *)0x0) {
                FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548);
              }
              puVar9 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
              PTR_0081176c->field_0548 = puVar9;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_ec = CONCAT31(local_ec._1_3_,(this_01->field_06C7 != '\x01') + -1) & 0xffffff02;
              LoadResourceString(0x2347,HINSTANCE_00807618);
              wsprintfA((LPSTR)local_c38,"&%1d %s:");
              Library::DKW::TBL::FUN_006b5aa0((uint *)PTR_0081176c->field_0548,(char *)local_c38);
              wsprintfA((LPSTR)local_c38,"&%1d %s");
              Library::DKW::TBL::FUN_006b5aa0((uint *)PTR_0081176c->field_0548,(char *)local_c38);
              Library::DKW::TBL::FUN_006b5aa0((uint *)PTR_0081176c->field_0548,&DAT_007c3b5c);
              LoadResourceString(0x2346,HINSTANCE_00807618);
              pAVar14 = local_c38;
              wsprintfA((LPSTR)pAVar14,"&%1d %s:");
              Library::DKW::TBL::FUN_006b5aa0((uint *)PTR_0081176c->field_0548,(char *)local_c38);
              Library::DKW::TBL::FUN_006b5aa0((uint *)PTR_0081176c->field_0548,&DAT_007c3b5c);
              if (pAVar14 != (AnonShape_006B5570_4D68B99C *)0x0) {
                if (pAVar14->field_0008 != 0) {
                  ccFntTy::SepColorStrInSarr(this_01->field_008D,(uint *)pAVar14,(uint *)pAVar14);
                }
                iVar6 = 0;
                if (0 < (int)pAVar14->field_0008) {
                  if ((int)pAVar14->field_0008 < 1) {
                    pcVar13 = (char *)0x0;
                    goto LAB_005e24c5;
                  }
                  do {
                    pcVar13 = *(char **)(pAVar14->field_0014 + iVar6 * 4);
LAB_005e24c5:
                    Library::DKW::TBL::FUN_006b5aa0((uint *)PTR_0081176c->field_0548,pcVar13);
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < (int)pAVar14->field_0008);
                }
                FUN_006b5570(pAVar14);
              }
              local_f0 = *(int *)(puVar19 + 0x16);
              iVar6 = *(int *)(puVar19 + 0x1a);
              pcVar35 = (ccFntTy *)0x1;
              puVar24 = (undefined4 *)&this_01->field_005D->field_0x28;
              uVar30 = FUN_006b4fe0((int)this_01->field_005D);
              pAVar11 = (AnonPointee_MTaskTy_06BF *)
                        FUN_006b50c0(local_f0,iVar6,(uint)*(ushort *)&this_01->field_005D->field_0xe
                                     ,uVar30,puVar24,(int)pcVar35);
              this_01->field_06BF = pAVar11;
              *(undefined1 **)&this_01->field_0x6c3 =
                   &this_01->field_0x91 + (uint)(puVar19[10] != '\0') * 0x100;
              uVar10 = *(undefined4 *)(puVar19 + 9);
              this_01->field_06C7 = (char)uVar10;
              this_01->field_0x6c8 = (char)((uint)uVar10 >> 8);
              this_01->field_06C9 = (char)((uint)uVar10 >> 0x10);
              this_01->field_06CA = (char)((uint)uVar10 >> 0x18);
              local_b34[0] = 0;
              local_b34[1] = 2;
              local_b14 = *(int *)(puVar19 + 0xe) + 0xf;
              local_b34[2] = 1;
              local_b10 = *(int *)(puVar19 + 0x12) + 0xf;
              pcVar8 = this_01->field_008D;
              local_b34[3] = *(undefined4 *)(PTR_0081176c->field_0548 + 8);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_b24 = (*(int *)(puVar19 + 0x16) - *(int *)&this_01->field_0x2f5) + -0x2d;
              if (pcVar8->field_00A0 != 0) {
                pcVar35 = pcVar8;
                FUN_00710790((uint *)pcVar8);
              }
              local_b20 = *(int *)&pcVar8->field_0x8a;
              local_b1c = 1;
              local_af4 = 0x6332;
              local_a84 = 4;
              local_a80 = 0;
              local_a78[0] = 0;
              local_afc = this_01->field_0008;
              local_b18 = (*(int *)&pcVar35->field_0x1a + -0x1e) / *(int *)&pcVar8->field_0x8a;
              local_af8 = 2;
              local_a7c = 2;
              local_a78[1] = 2;
              local_a78[2] = local_b24 + 0xf + local_b14;
              this_01->field_037E = local_a78[2];
              local_a18 = this_01->field_0008;
              local_a78[3] = (*(int *)&pcVar35->field_0x12 - *(int *)&this_01->field_0x38a) + -0x10
                             + *(int *)&pcVar35->field_0x1a;
              this_01->field_0382 = local_a78[3];
              local_a68 = *(undefined4 *)&this_01->field_0x386;
              local_a64 = *(int *)&this_01->field_0x38a;
              local_968 = 500;
              local_964 = 0x32;
              local_a14 = 2;
              local_a10 = 0x6334;
              local_8fc = 2;
              piVar22 = local_a78;
              piVar29 = local_8f8;
              for (iVar6 = 0x5f; iVar6 != 0; iVar6 = iVar6 + -1) {
                *piVar29 = *piVar22;
                piVar22 = piVar22 + 1;
                piVar29 = piVar29 + 1;
              }
              local_764 = *(int *)&this_01->field_0x417;
              local_8f8[2] = local_b24 + 0xf + local_b14;
              local_8e4 = *(int *)&this_01->field_0x2f9;
              this_01->field_02ED = local_8f8[2];
              local_8f8[3] = *(int *)&pcVar35->field_0x12 + 0xf;
              local_890 = 0x6333;
              this_01->field_02F1 = local_8f8[3];
              local_8e8 = *(int *)&this_01->field_0x2f5;
              local_77c = 3;
              local_778 = 1;
              local_770 = 0;
              local_76c = (local_8e8 - local_764) / 2 + local_b24 + 0xf + local_b14;
              this_01->field_040F = local_76c;
              local_768 = *(int *)&pcVar35->field_0x12 + 0x1e + local_8e4;
              this_01->field_0413 = local_768;
              local_728 = this_01->field_0008;
              local_760 = ((*(int *)&pcVar35->field_0x1a - local_8e4) -
                          *(int *)&this_01->field_0x38a) + -0x3c;
              local_75c = 0xe;
              local_724 = 2;
              local_720 = 0x6335;
              (*this_01->field_000C->vtable->CreateObject)
                        ((SystemClassTy *)this_01->field_000C,8,&this_01->field_02CD,(int *)0x0,
                         local_b34,0);
              *(undefined4 *)&this_01->field_0x2d = 0x20;
              *(undefined4 *)&this_01->field_0x31 = 1;
              FUN_006e6080(this_01,2,this_01->field_02CD,(undefined4 *)&this_01->field_0x1d);
              Library::DKW::DDX::FUN_006b3640
                        ((int *)DAT_008075a8,this_01->field_0484,0xffffffff,
                         *(uint *)&pcVar35->field_0xe,*(uint *)&pcVar35->field_0x12);
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              in_stack_ffffffdc = (uint *)0x5e2823;
              FUN_006b2800((int)DAT_008075a8,this_01->field_0484,*(uint *)&pcVar35->field_0x16,
                           *(uint *)&pcVar35->field_0x1a);
              FUN_006b3020((int)DAT_008075a8,this_01->field_0484,
                           *(uint *)((int)&pcVar35->field_0004 + 1));
              uVar30 = this_01->field_0484;
              Library::DKW::DDX::FUN_006b3430((int *)DAT_008075a8,uVar30);
              iVar6 = *(int *)((int)&pcVar35->field_0004 + 1);
              if (iVar6 < 1) {
                uVar18 = 0;
              }
              else {
                uVar18 = iVar6 - 1;
              }
              if (this_01->field_02D5 != 0xffffffff) {
                uVar30 = uVar18;
                FUN_006b3020(this_01->field_0319,this_01->field_02D5,uVar18);
              }
              *(uint *)&this_01->field_0x32e = uVar18;
              if (*(int *)(uVar30 + 5) < 1) {
                uVar18 = 0;
              }
              else {
                uVar18 = *(int *)(uVar30 + 5) - 1;
              }
              if (this_01->field_0366 != 0xffffffff) {
                FUN_006b3020(this_01->field_03AA,this_01->field_0366,uVar18);
              }
              *(uint *)&this_01->field_0x3bf = uVar18;
              if (*(int *)(uVar30 + 5) < 1) {
                uVar30 = 0;
              }
              else {
                uVar30 = *(int *)(uVar30 + 5) - 1;
              }
              if (this_01->field_03F7 != 0xffffffff) {
                FUN_006b3020(this_01->field_043B,this_01->field_03F7,uVar30);
              }
              *(uint *)&this_01->field_0x450 = uVar30;
              this_01->field_03FB = (uint)(this_01->field_06CA == '\x01');
              if (this_01->field_02D5 != 0xffffffff) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                in_stack_ffffffdc = (uint *)this_01->field_0319;
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                Library::DKW::DDX::FUN_006b34d0
                          (in_stack_ffffffdc,this_01->field_02D5,0xfffffffe,this_01->field_02ED,
                           this_01->field_02F1);
              }
              if (this_01->field_0366 != 0xffffffff) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                in_stack_ffffffdc = (uint *)this_01->field_03AA;
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                Library::DKW::DDX::FUN_006b34d0
                          (in_stack_ffffffdc,this_01->field_0366,0xfffffffe,this_01->field_037E,
                           this_01->field_0382);
              }
              if (this_01->field_03F7 != 0xffffffff) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                in_stack_ffffffdc = (uint *)this_01->field_043B;
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                Library::DKW::DDX::FUN_006b34d0
                          (in_stack_ffffffdc,this_01->field_03F7,0xfffffffe,this_01->field_040F,
                           this_01->field_0413);
              }
              if (this_01->field_03F7 != 0xffffffff) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                in_stack_ffffffdc = (uint *)this_01->field_043B;
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                Library::DKW::DDX::FUN_006b3730
                          (in_stack_ffffffdc,this_01->field_03F7,this_01->field_03FB,
                           this_01->field_040F,this_01->field_0413);
              }
            }
          }
        }
        break;
      case 5:
        cVar2 = puVar19[0xe];
        if (cVar2 == '\0') {
          pDVar16 = this_01->field_064F;
        }
        else {
          pDVar16 = this_01->field_0647;
        }
        uVar30 = *(uint *)(puVar19 + 0xf);
        if (uVar30 < pDVar16->count) {
          if (cVar2 == '\0') {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pAVar12 = (AnonShape_005E10A0_819783CC *)
                      (this_01->field_064F->elementSize * uVar30 + (int)this_01->field_064F->data);
          }
          else {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pAVar12 = (AnonShape_005E10A0_819783CC *)
                      (this_01->field_0647->elementSize * uVar30 + (int)this_01->field_0647->data);
          }
        }
        else {
          pAVar12 = (AnonShape_005E10A0_819783CC *)0x0;
        }
        if (puVar19[0xd] == '\x01') {
          if (((pAVar12 == (AnonShape_005E10A0_819783CC *)0x0) || ((int)*(uint *)pAVar12 < 0)) ||
             (*(int *)&pAVar12->field_0x20 != *(int *)(puVar19 + 0x14))) {
            TTaskItemClose(this_01,pAVar12);
            if (*(int *)(puVar19 + 0x14) < (int)PTR_0080c4c7->field_0008) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              pcVar13 = *(char **)(PTR_0080c4c7->field_0014 + *(int *)(puVar19 + 0x14) * 4);
            }
            else {
              pcVar13 = (char *)0x0;
            }
            if (pcVar13 != (char *)0x0) {
              puVar9 = local_13c;
              for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar9 = 0;
                puVar9 = puVar9 + 1;
              }
              *(undefined2 *)puVar9 = 0;
              if (puVar19[0xe] == '\0') {
                local_7c = local_7c & 0xffffff00;
                local_88 = (int *)((-(uint)(puVar19[9] != '\x01') & 0xfffffffe) + 2);
                do {
                  local_fc = *(int *)(puVar19 + 0x22);
                  iVar6 = *(int *)(puVar19 + 0x26);
                  iVar17 = 1;
                  puVar24 = (undefined4 *)&this_01->field_005D->field_0x28;
                  uVar30 = FUN_006b4fe0((int)this_01->field_005D);
                  uVar18 = FUN_006b50c0(local_fc,iVar6,
                                        (uint)*(ushort *)&this_01->field_005D->field_0xe,uVar30,
                                        puVar24,iVar17);
                  local_13c[(local_7c & 0xff) + 1] = uVar18;
                  uVar30 = *(uint *)(uVar18 + 0x14);
                  if (uVar30 == 0) {
                    uVar30 = ((uint)*(ushort *)(uVar18 + 0xe) * *(int *)(uVar18 + 4) + 0x1f >> 3 &
                             0x1ffffffc) * *(int *)(uVar18 + 8);
                  }
                  puVar33 = (undefined4 *)0x5e2d28;
                  puVar24 = (undefined4 *)FUN_006b4fa0(uVar18);
                  for (uVar18 = uVar30 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                    *puVar24 = 0xffffffff;
                    puVar24 = puVar24 + 1;
                  }
                  for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                    *(undefined1 *)puVar24 = 0xff;
                    puVar24 = (undefined4 *)((int)puVar24 + 1);
                  }
                  piVar22 = (int *)(uint)(byte)puVar19[0x19];
                  PrepareTSurf(this_01,(AnonShape_005E11D0_D0F8BE03 *)*puVar33,puVar19[0x19],
                               puVar19[0xb]);
                  if (puVar19[0x19] != '\0') {
                    local_110 = &this_01->field_0x91 + (uint)(puVar19[10] == '\x01') * 0x100;
                  }
                  ccFntTy::SetSurf(this_01->field_0089,*piVar22,0,0,0,0,0);
                  pAVar14 = (AnonShape_006B5570_4D68B99C *)
                            Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
                  Library::DKW::TBL::FUN_006b5aa0((uint *)pAVar14,pcVar13);
                  local_80 = (AnonShape_006B5570_4D68B99C *)
                             ccFntTy::FormIndentSarr
                                       (this_01->field_0089,(uint *)pAVar14,
                                        " ,.;:!?/\\()[]{}",(uint *)&DAT_007c21ec,
                                        *(int *)(puVar19 + 0x22) + *(int *)(puVar19 + 0x2a) * -2,0,
                                        0xffffffff,(char *)0x0,1);
                  FUN_006b5570(pAVar14);
                  pAVar14 = local_80;
                  if (local_80 != (AnonShape_006B5570_4D68B99C *)0x0) {
                    piVar22 = local_88;
                    if ((char)local_7c != '\0') {
                      if ((char)local_7c == '\x01') {
                        piVar22 = (int *)((int)local_88 + 1);
                      }
                      else {
                        piVar22 = (int *)0x4;
                      }
                    }
                    ccFntTy::WrSarr(this_01->field_0089,(int)local_80,0,-1,*(int *)(puVar19 + 0x2a),
                                    *(int *)(puVar19 + 0x2e),piVar22);
                    FUN_006b5570(pAVar14);
                  }
                  bVar5 = (char)local_7c + 1;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_7c = CONCAT31(local_7c._1_3_,bVar5);
                } while (bVar5 < 3);
                FUN_006b2330((uint)DAT_008075a8,local_13c,*(uint *)(puVar19 + 5),0x403db4,
                             *(uint *)(puVar19 + 0x22),*(uint *)(puVar19 + 0x26),
                             (uint)this_01->field_064F);
                uVar30 = *(uint *)(puVar19 + 0xf);
                pDVar16 = this_01->field_064F;
              }
              else {
                local_106 = *(undefined4 *)(puVar19 + 9);
                iVar17 = 1;
                local_107 = puVar19[0x19];
                local_10c = puVar19[0x18];
                local_f8 = *(int *)(puVar19 + 0x22);
                iVar6 = *(int *)(puVar19 + 0x26);
                puVar24 = (undefined4 *)&this_01->field_005D->field_0x28;
                local_f4 = (-(uint)(puVar19[9] != '\x01') & 0xfffffffe) + 2;
                uVar30 = FUN_006b4fe0((int)this_01->field_005D);
                local_13c[1] = FUN_006b50c0(local_f8,iVar6,
                                            (uint)*(ushort *)&this_01->field_005D->field_0xe,uVar30,
                                            puVar24,iVar17);
                uVar18 = 0x5e2b09;
                puVar24 = (undefined4 *)FUN_006b4fa0(local_13c[1]);
                for (uVar30 = uVar18 >> 2; uVar30 != 0; uVar30 = uVar30 - 1) {
                  *puVar24 = 0xffffffff;
                  puVar24 = puVar24 + 1;
                }
                for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *(undefined1 *)puVar24 = 0xff;
                  puVar24 = (undefined4 *)((int)puVar24 + 1);
                }
                if (puVar19[0x19] != '\0') {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_110 = &this_01->field_0x91 + (uint)(local_106._1_1_ == '\x01') * 0x100;
                }
                ccFntTy::SetSurf(this_01->field_0089,local_13c[1],0,0,0,0,0);
                pAVar14 = (AnonShape_006B5570_4D68B99C *)
                          Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
                Library::DKW::TBL::FUN_006b5aa0((uint *)pAVar14,pcVar13);
                pAVar15 = (AnonShape_006B5570_4D68B99C *)
                          ccFntTy::FormIndentSarr
                                    (this_01->field_0089,(uint *)pAVar14," ,.;:!?/\\()[]{}",
                                     (uint *)&DAT_007c21ec,
                                     *(int *)(puVar19 + 0x22) + *(int *)(puVar19 + 0x2a) * -2,0,
                                     0xffffffff,(char *)0x0,1);
                FUN_006b5570(pAVar14);
                if (pAVar15 != (AnonShape_006B5570_4D68B99C *)0x0) {
                  local_102 = (uint *)ccFntTy::_SarrToTxt(this_01->field_0089,(char *)0x0,
                                                          (int)pAVar15);
                  if (local_102 != (uint *)0x0) {
                    local_10b = (cTypingTy *)Library::MSVCRT::FUN_0072e530(0xb4);
                    if (local_10b == (cTypingTy *)0x0) {
                      local_10b = (cTypingTy *)0x0;
                    }
                    else {
                      local_10b->field_0058 = 0;
                      local_10b->field_0088 = 0;
                    }
                    local_128 = *(undefined4 *)(puVar19 + 0x2a);
                    local_124 = *(undefined4 *)(puVar19 + 0x2e);
                    uStackY_48 = 0x2c51;
                    local_46 = 0x5e;
                    local_120 = cTypingTy::TypingInit
                                          (local_10b,local_102,this_01->field_0089,0,0,0,
                                           *(int *)(puVar19 + 0x22) + *(int *)(puVar19 + 0x2a) * -2,
                                           *(int *)(puVar19 + 0x26) + *(int *)(puVar19 + 0x2e) * -2,
                                           0,0,local_f4,local_f4 + 1,4,0xff);
                    local_120 = local_120 + 1;
                  }
                  FUN_006b5570(pAVar15);
                }
                FUN_006b2330((uint)DAT_008075a8,local_13c,*(uint *)(puVar19 + 5),0x4041b0,
                             *(uint *)(puVar19 + 0x22),*(uint *)(puVar19 + 0x26),
                             (uint)this_01->field_0647);
                uVar30 = *(uint *)(puVar19 + 0xf);
                pDVar16 = this_01->field_0647;
              }
              Library::DKW::TBL::FUN_006ae140(&pDVar16->flags,uVar30,local_13c);
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              in_stack_ffffffdc = DAT_008075a8;
              Library::DKW::DDX::FUN_006b3640
                        ((int *)DAT_008075a8,local_13c[0],0,*(uint *)(puVar19 + 0x1a),
                         *(uint *)(puVar19 + 0x1e));
            }
          }
          else {
            if (cVar2 == '\0') {
              uVar30 = *(uint *)&pAVar12->field_0x10;
            }
            else {
              uVar30 = 0;
            }
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            in_stack_ffffffdc = DAT_008075a8;
            Library::DKW::DDX::FUN_006b3730
                      (DAT_008075a8,*(uint *)pAVar12,uVar30,*(uint *)(puVar19 + 0x1a),
                       *(uint *)(puVar19 + 0x1e));
          }
        }
        else if ((pAVar12 != (AnonShape_005E10A0_819783CC *)0x0) && (-1 < *(int *)pAVar12)) {
          if (this_01->field_006D == '\x05') {
            TTaskItemClose(this_01,pAVar12);
          }
          else {
            if (cVar2 == '\0') {
              iVar6 = 1;
            }
            else {
              iVar6 = *(int *)&pAVar12->field_0x1c + -2;
            }
            *(int *)&pAVar12->field_0x10 = iVar6;
            *(undefined4 *)&pAVar12->field_0x28 = 2;
            *(undefined4 *)&pAVar12->field_0x24 = this_01->field_0069;
            FUN_006b35d0((int *)DAT_008075a8,*(uint *)pAVar12);
          }
        }
        break;
      case 6:
        if (this_01->field_006D != '\x05') {
          puVar9 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                     (this_01->field_0070,puVar19 + 0xd,0,(ushort *)0x0);
          if (puVar9 == (uint *)0x0) {
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            in_stack_ffffffdc = (uint *)0x5e2f3a;
            puVar9 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                       (g_cMf32_00806798,puVar19 + 0xd,0,(ushort *)0x0);
            if (puVar9 == (uint *)0x0) break;
          }
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          in_stack_ffffffdc = (uint *)0x5e2f24;
          thunk_FUN_0056a130(&g_sound,0,'\x03',-1,puVar9);
        }
        break;
      case 7:
        pDVar16 = this_01->field_064B;
        if (*(uint *)(puVar19 + 0xe) < pDVar16->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pSVar25 = (SpriteClassTy *)
                    (pDVar16->elementSize * *(uint *)(puVar19 + 0xe) + (int)pDVar16->data);
        }
        else {
          pSVar25 = (SpriteClassTy *)0x0;
        }
        if (puVar19[0xd] == '\x01') {
          SpriteClassTy::SpriteClassTy(&local_1dc);
          ppvVar36 = (void **)0x0;
          local_142 = (int *)0x0;
          local_94 = 1;
          local_2bc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_2bc;
          iVar6 = Library::MSVCRT::__setjmp3(local_2bc.jumpBuffer,0);
          if (iVar6 == 0) {
            ppvVar37 = ppvVar36;
            if (pSVar25 != (SpriteClassTy *)0x0) {
              pbVar21 = &pSVar25->field_0065;
              if (pbVar21 != (undefined1 *)0x0) {
                pbVar20 = (byte *)((int)ppvVar36 + 0x12);
                do {
                  bVar5 = *pbVar21;
                  bVar31 = bVar5 < *pbVar20;
                  if (bVar5 != *pbVar20) {
LAB_005e2ffb:
                    iVar6 = (1 - (uint)bVar31) - (uint)(bVar31 != 0);
                    goto LAB_005e3000;
                  }
                  if (bVar5 == 0) break;
                  bVar5 = pbVar21[1];
                  bVar31 = bVar5 < pbVar20[1];
                  if (bVar5 != pbVar20[1]) goto LAB_005e2ffb;
                  pbVar21 = pbVar21 + 2;
                  pbVar20 = pbVar20 + 2;
                } while (bVar5 != 0);
                iVar6 = 0;
LAB_005e3000:
                if (iVar6 != 0) {
                  ppvVar37 = (void **)0x5e300e;
                  SpriteClassTy::CloseSprite(pSVar25);
                  value = (void **)((int)&pSVar25[1].field_0008 + 1);
                  if (*(int *)((int)&pSVar25[1].field_0008 + 1) != 0) {
                    FreeAndNull(value);
                    ppvVar37 = value;
                  }
                  goto LAB_005e3030;
                }
              }
              local_94 = 0;
            }
LAB_005e3030:
            this_01 = local_8c;
            if (local_94 == 0) {
              if (pSVar25 == (SpriteClassTy *)0x0) {
                puVar24 = (undefined4 *)0x0;
              }
              else {
                puVar24 = &pSVar25->field_0004;
              }
              puVar33 = &local_1dc.field_0004;
              ppvVar36 = ppvVar37;
              for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar33 = *puVar24;
                puVar24 = puVar24 + 1;
                puVar33 = puVar33 + 1;
              }
              local_1dc.field_0048 = (uint *)pSVar25->field_0048;
              local_1dc.field_004C = pSVar25->field_004C;
              local_1dc.field_004D = pSVar25->field_004D;
              local_1dc.field_0051 = pSVar25->field_0051;
              local_1dc.field_0055 = pSVar25->field_0055;
              local_1dc.field_0059 = pSVar25->field_0059;
              local_1dc.field_005D = pSVar25->field_005D;
              local_1dc.field_0061 = pSVar25->field_0061;
              puVar19 = &local_1dc.field_0065;
              iVar6 = 0x20;
              do {
                *puVar19 = puVar19[(int)pSVar25 - (int)&local_1dc];
                puVar19 = puVar19 + 1;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              local_1dc.field_0085 = pSVar25->field_0085;
              local_1dc.field_0089 = pSVar25->field_0089;
              local_1dc.field_008D = pSVar25->field_008D;
            }
            else {
              SpriteClassTy::InitSprite
                        (&local_1dc,(int *)DAT_008075a8,*(uint *)((int)ppvVar36 + 5),'\x1e',
                         (undefined4 *)0x0,0,0);
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              in_stack_ffffffdc = (uint *)0x1e;
              iVar6 = SpriteClassTy::SetImages
                                (&local_1dc,this_01->field_0070,CASE_1E,0,
                                 (char *)((int)ppvVar36 + 0x12),0xffffffff,0);
              if (iVar6 != 0) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                in_stack_ffffffdc = (uint *)0x1e;
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
              local_1dc.field_0044 = this_01->field_0069;
              local_14b = (*(char *)((int)ppvVar36 + 0x4e) != '\0') + '\x01';
              local_1dc.field_0008 = *(uint *)((int)ppvVar36 + 0x4a);
              local_1dc.field_0040 = *(undefined4 *)((int)ppvVar36 + 0x46);
            }
            else if (cVar2 == '\x02') {
              local_1dc.field_0044 = this_01->field_0069;
              local_14b = (*(char *)((int)ppvVar36 + 0x4e) != '\0') + '\x03';
              local_1dc.field_0008 = *(uint *)((int)ppvVar36 + 0x4a);
              local_1dc.field_0040 = *(undefined4 *)((int)ppvVar36 + 0x46);
              local_14a = 0;
              local_146 = *(int *)((int)ppvVar36 + 0x42);
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              in_stack_ffffffdc = *(uint **)((int)ppvVar36 + 0x32);
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
                        (local_1dc.field_0048,local_1dc.field_0004,local_1dc.field_0008,
                         local_1dc.field_001C,local_1dc.field_0020);
            }
            Library::DKW::TBL::FUN_006ae140
                      (&this_01->field_064B->flags,*(uint *)((int)ppvVar36 + 0xe),&local_1dc.vtable)
            ;
            g_currentExceptionFrame = local_2bc.previous;
          }
          else {
            g_currentExceptionFrame = local_2bc.previous;
            SpriteClassTy::CloseSprite(&local_1dc);
            this_01 = local_8c;
            if (local_142 != (int *)0x0) {
              FreeAndNull(&local_142);
              this_01 = local_8c;
            }
          }
        }
        else if (pSVar25 != (SpriteClassTy *)0x0) {
          SpriteClassTy::CloseSprite(pSVar25);
          if (*(int *)((int)&pSVar25[1].field_0008 + 1) != 0) {
            FreeAndNull((void **)((int)&pSVar25[1].field_0008 + 1));
          }
        }
        break;
      case 8:
        puVar24 = local_e4;
        for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar24 = 0;
          puVar24 = puVar24 + 1;
        }
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
        Library::DKW::TBL::FUN_006b11d0((uint *)this_01->field_0074,uVar18 + 1,local_e4);
        local_d7 = 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_d6 = CONCAT31(0x2d,(undefined1)local_d6);
        uStackY_d2 = 0x22600;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iStackY_ce._0_1_ = 0;
        Library::DKW::TBL::FUN_006b11d0
                  ((uint *)this_01->field_0074,this_01->field_007C + 1,local_e4);
        local_d7 = 0;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_d6 = CONCAT31(0x23,(undefined1)local_d6);
        uStackY_d2 = 0x1f400;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iStackY_ce = (uint)iStackY_ce._1_3_ << 8;
        Library::DKW::TBL::FUN_006b11d0
                  ((uint *)this_01->field_0074,this_01->field_007C + 1,local_e4);
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
                  ((uint *)this_01->field_0074,this_01->field_007C + 1,local_e4);
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
                  ((uint *)this_01->field_0074,this_01->field_007C + 1,local_e4);
        break;
      case 9:
        ppcVar1 = &this_01->field_005D;
        if (this_01->field_005D != (cMf32 *)0x0) {
          pcVar7 = g_cMf32_00806780;
          if ((this_01->field_0080 != '\x01') &&
             (pcVar7 = g_cMf32_00806798, this_01->field_0080 != '\x02')) {
            pcVar7 = this_01->field_0070;
          }
          cMf32::RecMemFree(pcVar7,(uint *)ppcVar1);
        }
        pbVar21 = puVar19 + 0xd;
        this_01->field_0080 = 0;
        pcVar7 = (cMf32 *)FUN_0070a9f0(this_01->field_0070,(char *)pbVar21,0,0);
        *ppcVar1 = pcVar7;
        if (pcVar7 == (cMf32 *)0x0) {
          pcVar7 = (cMf32 *)FUN_0070a9f0(g_cMf32_00806798,(char *)pbVar21,0,0);
          *ppcVar1 = pcVar7;
          if (pcVar7 == (cMf32 *)0x0) {
            iVar6 = 1;
            bVar5 = 0;
            text = FUN_006f2c00("TASK_BKG",1,(uint)DAT_0080874e);
            pcVar7 = (cMf32 *)FUN_0070a9f0(g_cMf32_00806780,text,bVar5,iVar6);
            *ppcVar1 = pcVar7;
            this_01->field_0080 = 1;
          }
          else {
            puVar24 = (undefined4 *)local_78;
            for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar24 = 0;
              puVar24 = puVar24 + 1;
            }
            local_6d = 1;
            local_6c = 1;
            local_6f = 1;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_78._1_4_ = *(undefined4 *)(puVar19 + 1);
            local_73 = 0x7ffffff0;
            local_78[0] = 7;
            local_6b = 1;
            pbVar20 = pbVar21;
            pbVar26 = PTR_s_DEFAULT_WS_ANIMATED_0079c224;
            do {
              bVar5 = *pbVar20;
              bVar31 = bVar5 < *pbVar26;
              if (bVar5 != *pbVar26) {
LAB_005e14be:
                iVar6 = (1 - (uint)bVar31) - (uint)(bVar31 != 0);
                goto LAB_005e14c3;
              }
              if (bVar5 == 0) break;
              bVar5 = pbVar20[1];
              bVar31 = bVar5 < pbVar26[1];
              if (bVar5 != pbVar26[1]) goto LAB_005e14be;
              pbVar20 = pbVar20 + 2;
              pbVar26 = pbVar26 + 2;
            } while (bVar5 != 0);
            iVar6 = 0;
LAB_005e14c3:
            pbVar20 = pbVar21;
            pbVar26 = PTR_s_DEFAULT_BO_ANIMATED_0079c228;
            if (iVar6 == 0) {
              uVar30 = 0xffffffff;
              pcVar13 = &DAT_007cdc48;
              do {
                pcVar27 = pcVar13;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar27 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar27;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              local_6a = 0xf0;
              pcVar13 = pcVar27 + -uVar30;
              pcVar27 = local_66;
              for (uVar18 = uVar30 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar27 = pcVar27 + 4;
              }
              iVar6 = this_01->field_007C;
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar27 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0;
              Library::DKW::TBL::FUN_006b11d0
                        ((uint *)this_01->field_0074,iVar6 + 1,(undefined4 *)local_78);
              uVar30 = 0xffffffff;
              pcVar13 = "DEF_WS_ANI2";
              do {
                pcVar27 = pcVar13;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar27 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar27;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              local_6a = 0xf1;
              iVar6 = this_01->field_007C;
              pcVar13 = pcVar27 + -uVar30;
              pcVar27 = local_66;
              for (uVar18 = uVar30 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar27 = pcVar27 + 4;
              }
              puVar9 = (uint *)this_01->field_0074;
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar27 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0;
              Library::DKW::TBL::FUN_006b11d0(puVar9,iVar6 + 1,(undefined4 *)local_78);
              uVar30 = 0xffffffff;
              pcVar13 = "DEF_WS_ANI3";
              do {
                pcVar27 = pcVar13;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar27 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar27;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              local_6a = 0xf2;
              iVar6 = this_01->field_007C;
              pcVar13 = pcVar27 + -uVar30;
              pcVar27 = local_66;
              for (uVar18 = uVar30 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar27 = pcVar27 + 4;
              }
              puVar9 = (uint *)this_01->field_0074;
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar27 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x40;
              Library::DKW::TBL::FUN_006b11d0(puVar9,iVar6 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar30 = 0xffffffff;
              pcVar13 = &DAT_007cdc18;
              do {
                pcVar27 = pcVar13;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar27 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar27;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              iVar6 = this_01->field_007C;
              pcVar13 = pcVar27 + -uVar30;
              pcVar27 = local_66;
              for (uVar18 = uVar30 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar27 = pcVar27 + 4;
              }
              puVar9 = (uint *)this_01->field_0074;
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar27 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x208;
              Library::DKW::TBL::FUN_006b11d0(puVar9,iVar6 + 1,(undefined4 *)local_78);
              uVar30 = 0xffffffff;
              pcVar13 = &DAT_007cdc08;
              do {
                pcVar27 = pcVar13;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar27 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar27;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              local_6a = 0xf4;
              iVar6 = this_01->field_007C;
              pcVar13 = pcVar27 + -uVar30;
              pcVar27 = local_66;
              for (uVar18 = uVar30 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar27 = pcVar27 + 4;
              }
              puVar9 = (uint *)this_01->field_0074;
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar27 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x208;
              Library::DKW::TBL::FUN_006b11d0(puVar9,iVar6 + 1,(undefined4 *)local_78);
              uVar30 = 0xffffffff;
              pcVar13 = &DAT_007cdbf8;
              do {
                pcVar27 = pcVar13;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar27 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar27;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              local_6a = 0xf5;
              iVar6 = this_01->field_007C;
              pcVar13 = pcVar27 + -uVar30;
              pcVar27 = local_66;
              for (uVar18 = uVar30 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar27 = pcVar27 + 4;
              }
              puVar9 = (uint *)this_01->field_0074;
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar27 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x2df;
              Library::DKW::TBL::FUN_006b11d0(puVar9,iVar6 + 1,(undefined4 *)local_78);
              pbVar26 = PTR_s_DEFAULT_BO_ANIMATED_0079c228;
            }
            do {
              bVar5 = *pbVar20;
              bVar31 = bVar5 < *pbVar26;
              if (bVar5 != *pbVar26) {
LAB_005e16bc:
                iVar6 = (1 - (uint)bVar31) - (uint)(bVar31 != 0);
                goto LAB_005e16c1;
              }
              if (bVar5 == 0) break;
              bVar5 = pbVar20[1];
              bVar31 = bVar5 < pbVar26[1];
              if (bVar5 != pbVar26[1]) goto LAB_005e16bc;
              pbVar20 = pbVar20 + 2;
              pbVar26 = pbVar26 + 2;
            } while (bVar5 != 0);
            iVar6 = 0;
LAB_005e16c1:
            pbVar20 = PTR_s_DEFAULT_SI_ANIMATED_0079c22c;
            if (iVar6 == 0) {
              uVar30 = 0xffffffff;
              pcVar13 = "DEF_BO_ANI1";
              do {
                pcVar27 = pcVar13;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar27 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar27;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              local_6a = 0xf0;
              pcVar13 = pcVar27 + -uVar30;
              pcVar27 = local_66;
              for (uVar18 = uVar30 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar27 = pcVar27 + 4;
              }
              iVar6 = this_01->field_007C;
              puVar9 = (uint *)this_01->field_0074;
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar27 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0xb0;
              Library::DKW::TBL::FUN_006b11d0(puVar9,iVar6 + 1,(undefined4 *)local_78);
              uVar30 = 0xffffffff;
              pcVar13 = "DEF_BO_ANI2";
              do {
                pcVar27 = pcVar13;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar27 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar27;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              local_6a = 0xf1;
              iVar6 = this_01->field_007C;
              pcVar13 = pcVar27 + -uVar30;
              pcVar27 = local_66;
              for (uVar18 = uVar30 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar27 = pcVar27 + 4;
              }
              puVar9 = (uint *)this_01->field_0074;
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar27 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0;
              Library::DKW::TBL::FUN_006b11d0(puVar9,iVar6 + 1,(undefined4 *)local_78);
              uVar30 = 0xffffffff;
              pcVar13 = "DEF_BO_ANI3";
              do {
                pcVar27 = pcVar13;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar27 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar27;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              local_6a = 0xf2;
              iVar6 = this_01->field_007C;
              pcVar13 = pcVar27 + -uVar30;
              pcVar27 = local_66;
              for (uVar18 = uVar30 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar27 = pcVar27 + 4;
              }
              puVar9 = (uint *)this_01->field_0074;
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar27 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0xb0;
              Library::DKW::TBL::FUN_006b11d0(puVar9,iVar6 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar30 = 0xffffffff;
              pcVar13 = "DEF_BO_ANI4";
              do {
                pcVar27 = pcVar13;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar27 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar27;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              iVar6 = this_01->field_007C;
              pcVar13 = pcVar27 + -uVar30;
              pcVar27 = local_66;
              for (uVar18 = uVar30 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar27 = pcVar27 + 4;
              }
              puVar9 = (uint *)this_01->field_0074;
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar27 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0xdc;
              Library::DKW::TBL::FUN_006b11d0(puVar9,iVar6 + 1,(undefined4 *)local_78);
              uVar30 = 0xffffffff;
              pcVar13 = &DAT_007cdba8;
              do {
                pcVar27 = pcVar13;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar27 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar27;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              local_6a = 0xf4;
              iVar6 = this_01->field_007C;
              pcVar13 = pcVar27 + -uVar30;
              pcVar27 = local_66;
              for (uVar18 = uVar30 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar27 = pcVar27 + 4;
              }
              puVar9 = (uint *)this_01->field_0074;
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar27 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x1ce;
              Library::DKW::TBL::FUN_006b11d0(puVar9,iVar6 + 1,(undefined4 *)local_78);
              uVar30 = 0xffffffff;
              pcVar13 = &DAT_007cdb98;
              do {
                pcVar27 = pcVar13;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar27 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar27;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              local_6a = 0xf5;
              iVar6 = this_01->field_007C;
              pcVar13 = pcVar27 + -uVar30;
              pcVar27 = local_66;
              for (uVar18 = uVar30 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar27 = pcVar27 + 4;
              }
              puVar9 = (uint *)this_01->field_0074;
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar27 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x2a9;
              Library::DKW::TBL::FUN_006b11d0(puVar9,iVar6 + 1,(undefined4 *)local_78);
              uVar30 = 0xffffffff;
              local_6a = 0xf6;
              pcVar13 = &DAT_007cdb88;
              do {
                pcVar27 = pcVar13;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar27 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar27;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              iVar6 = this_01->field_007C;
              pcVar13 = pcVar27 + -uVar30;
              pcVar27 = local_66;
              for (uVar18 = uVar30 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar27 = pcVar27 + 4;
              }
              puVar9 = (uint *)this_01->field_0074;
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar27 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x78;
              Library::DKW::TBL::FUN_006b11d0(puVar9,iVar6 + 1,(undefined4 *)local_78);
              uVar30 = 0xffffffff;
              pcVar13 = "DEF_BO_ANI8";
              do {
                pcVar27 = pcVar13;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar27 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar27;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              local_6a = 0xf7;
              iVar6 = this_01->field_007C;
              pcVar13 = pcVar27 + -uVar30;
              pcVar27 = local_66;
              for (uVar18 = uVar30 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar27 = pcVar27 + 4;
              }
              puVar9 = (uint *)this_01->field_0074;
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar27 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x78;
              Library::DKW::TBL::FUN_006b11d0(puVar9,iVar6 + 1,(undefined4 *)local_78);
              pbVar20 = PTR_s_DEFAULT_SI_ANIMATED_0079c22c;
            }
            do {
              bVar5 = *pbVar21;
              bVar31 = bVar5 < *pbVar20;
              if (bVar5 != *pbVar20) {
LAB_005e1958:
                iVar6 = (1 - (uint)bVar31) - (uint)(bVar31 != 0);
                goto LAB_005e195d;
              }
              if (bVar5 == 0) break;
              bVar5 = pbVar21[1];
              bVar31 = bVar5 < pbVar20[1];
              if (bVar5 != pbVar20[1]) goto LAB_005e1958;
              pbVar21 = pbVar21 + 2;
              pbVar20 = pbVar20 + 2;
            } while (bVar5 != 0);
            iVar6 = 0;
LAB_005e195d:
            if (iVar6 == 0) {
              uVar30 = 0xffffffff;
              pcVar13 = "DEF_SI_ANI1";
              do {
                pcVar27 = pcVar13;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar27 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar27;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              local_6a = 0xf0;
              pcVar13 = pcVar27 + -uVar30;
              pcVar27 = local_66;
              for (uVar18 = uVar30 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar27 = pcVar27 + 4;
              }
              iVar6 = this_01->field_007C;
              puVar9 = (uint *)this_01->field_0074;
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar27 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x8e;
              Library::DKW::TBL::FUN_006b11d0(puVar9,iVar6 + 1,(undefined4 *)local_78);
              uVar30 = 0xffffffff;
              pcVar13 = "DEF_SI_ANI2";
              do {
                pcVar27 = pcVar13;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar27 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar27;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              local_6a = 0xf1;
              iVar6 = this_01->field_007C;
              pcVar13 = pcVar27 + -uVar30;
              pcVar27 = local_66;
              for (uVar18 = uVar30 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar27 = pcVar27 + 4;
              }
              puVar9 = (uint *)this_01->field_0074;
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar27 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x103;
              Library::DKW::TBL::FUN_006b11d0(puVar9,iVar6 + 1,(undefined4 *)local_78);
              uVar30 = 0xffffffff;
              pcVar13 = "DEF_SI_ANI3";
              do {
                pcVar27 = pcVar13;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar27 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar27;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              local_6a = 0xf2;
              iVar6 = this_01->field_007C;
              pcVar13 = pcVar27 + -uVar30;
              pcVar27 = local_66;
              for (uVar18 = uVar30 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar27 = pcVar27 + 4;
              }
              puVar9 = (uint *)this_01->field_0074;
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar27 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x103;
              Library::DKW::TBL::FUN_006b11d0(puVar9,iVar6 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar30 = 0xffffffff;
              pcVar13 = "DEF_SI_ANI4";
              do {
                pcVar27 = pcVar13;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar27 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar27;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              iVar6 = this_01->field_007C;
              pcVar13 = pcVar27 + -uVar30;
              pcVar27 = local_66;
              for (uVar18 = uVar30 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar27 = pcVar27 + 4;
              }
              puVar9 = (uint *)this_01->field_0074;
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar27 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0xd7;
              Library::DKW::TBL::FUN_006b11d0(puVar9,iVar6 + 1,(undefined4 *)local_78);
              uVar30 = 0xffffffff;
              pcVar13 = "DEF_SI_ANI5";
              do {
                pcVar27 = pcVar13;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar27 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar27;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              local_6a = 0xf4;
              iVar6 = this_01->field_007C;
              pcVar13 = pcVar27 + -uVar30;
              pcVar27 = local_66;
              for (uVar18 = uVar30 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar27 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar27 = pcVar27 + 4;
              }
              puVar9 = (uint *)this_01->field_0074;
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar27 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar27 = pcVar27 + 1;
              }
              local_46 = 0x27c;
              Library::DKW::TBL::FUN_006b11d0(puVar9,iVar6 + 1,(undefined4 *)local_78);
            }
            this_01->field_0080 = 2;
          }
        }
        iVar6 = this_01->field_0074;
        if ((uint)this_01->field_007C < *(uint *)(iVar6 + 0xc)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          piVar22 = (int *)(*(int *)(iVar6 + 8) * this_01->field_007C + *(int *)(iVar6 + 0x1c));
        }
        else {
          piVar22 = (int *)0x0;
        }
        FUN_006bc360((ushort *)this_01->field_005D,local_1268,piVar22);
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffdc = (uint *)0x0;
        Library::Ourlib::PALETTE::FUN_00718780
                  ((int)local_1268,0,0x100,0x1a,0x10,(undefined4 *)&this_01->field_0x91);
        Library::Ourlib::PALETTE::FUN_00718780
                  ((int)local_1268,0,0x100,0x2e,0x10,(undefined4 *)&this_01->field_0x191);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        pcVar8 = extraout_ECX_00;
        if (this_01->field_007C != 0) {
          DarkScreen(DAT_0080759c,1,0);
          PaintMTask(this_01);
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          in_stack_ffffffdc = DAT_008075a8;
          thunk_FUN_0055ddf0(DAT_0080759c,(int *)DAT_008075a8,(int)this_01->field_005D,10,2);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          pcVar8 = extraout_ECX_01;
        }
        if (this_01->field_0089 != (ccFntTy *)0x0) {
          ccFntTy::operator(pcVar8,(uint *)this_01->field_0089);
        }
        pcVar8 = (ccFntTy *)
                 thunk_FUN_005defe0((int)this_01->field_005D,(undefined *)0x0,DAT_00807dd9);
        this_01->field_0089 = pcVar8;
        pcVar8->field_0058 = 1;
        pcVar8->field_005C = 0;
        if (this_01->field_008D != (ccFntTy *)0x0) {
          ccFntTy::operator(this_00,(uint *)this_01->field_008D);
        }
        pcVar8 = (ccFntTy *)
                 thunk_FUN_005df290((int)this_01->field_005D,(undefined *)0x0,DAT_00807dd9);
        this_01->field_008D = pcVar8;
        thunk_FUN_00568bc0(&g_sound,0);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if ((DAT_00807300._1_1_ & 8) != 0) {
          puVar9 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                     (this_01->field_0070,(char *)((int)piVar22 + 0x2d),0,
                                      (ushort *)0x0);
          *(uint **)&this_01->field_0x85 = puVar9;
          if (puVar9 == (uint *)0x0) {
            puVar9 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                       (g_cMf32_00806798,(char *)((int)piVar22 + 0x2d),0,
                                        (ushort *)0x0);
            *(uint **)&this_01->field_0x85 = puVar9;
            if (puVar9 == (uint *)0x0) {
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              in_stack_ffffffdc = (uint *)0x5e1cab;
              thunk_FUN_0056a130(&g_sound,0x14,'\x02',0,(uint *)0x0);
              break;
            }
          }
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          in_stack_ffffffdc = (uint *)0x5e1c94;
          thunk_FUN_0056a130(&g_sound,0,'\x02',0,puVar9);
        }
      }
      iVar6 = this_01->field_007C + 1;
      this_01->field_007C = iVar6;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar30 = *(uint *)(this_01->field_0074 + 0xc);
    } while (iVar6 < (int)uVar30);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (this_01->field_007C == *(int *)(this_01->field_0074 + 0xc)) {
    if ((this_01->field_006D == '\x05') &&
       (pDVar16 = this_01->field_064B, pDVar16 != (DArrayTy *)0x0)) {
      uVar30 = 0;
      if (pDVar16->count != 0) {
        if (pDVar16->count == 0) {
          pSVar25 = (SpriteClassTy *)0x0;
          goto LAB_005e34e0;
        }
        do {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar16, uVar30) (runtime stride) */
          pSVar25 = (SpriteClassTy *)(pDVar16->elementSize * uVar30 + (int)pDVar16->data);
LAB_005e34e0:
          if ((pSVar25->field_0004 != -1) &&
             ((*(char *)&pSVar25[1].vtable == '\x01' || (*(char *)&pSVar25[1].vtable == '\x03')))) {
            SpriteClassTy::CloseSprite(pSVar25);
            if (*(int *)((int)&pSVar25[1].field_0008 + 1) != 0) {
              FreeAndNull((void **)((int)&pSVar25[1].field_0008 + 1));
            }
          }
          pDVar16 = this_01->field_064B;
          uVar30 = uVar30 + 1;
        } while (uVar30 < pDVar16->count);
      }
    }
    this_01->field_006D = 1;
  }
  g_currentExceptionFrame = local_278.previous;
  return;
}

