#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::NoneSettMap

   [STSwitchEnumApplier] Switch target field_1E26 uses
   /SubmarineTitans/Recovered/Enums/SettMapMTy_field_1E26State. Cases:
   CASE_4=4;CASE_5=5;CASE_7=7;CASE_C=12;CASE_F=15;CASE_10=16;CASE_13=19 */

undefined4 __thiscall SettMapMTy::NoneSettMap(SettMapMTy *this,int *param_1)

{
  byte bVar1;
  SettMapMTy_field_2237DArray *pSVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  SettMapMTy *this_00;
  int iVar6;
  char *pcVar7;
  SettMapMTy_field_1F84Element *element_1f84;
  SettMapMTy_field_1F84Element *element_1f84_2;
  SettMapMTy_field_1F84Element *element_1f84_3;
  uint *puVar8;
  AnonShape_005D4990_5F0525CF *pAVar9;
  StartSystemTy *pSVar10;
  SettMapMTy_field_1F84Element *pSVar11;
  SettMapMTy_field_1F84DArray *pSVar12;
  DArrayTy *pDVar13;
  AnonPointee_SettMapMTy_0000 *pAVar14;
  undefined4 uVar15;
  int iVar16;
  void *pvVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  AnonShape_005CE0E0_C50CCD71 *pAVar21;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EDI;
  byte *pbVar22;
  undefined4 *puVar23;
  int *piVar24;
  uint *puVar25;
  bool bVar26;
  char cVar27;
  InternalExceptionFrame local_148;
  char local_104 [2];
  undefined1 local_102;
  undefined4 local_f2;
  int local_e6;
  undefined4 local_e2;
  int local_dc [8];
  int local_bc [8];
  AnonShape_005D4990_5F0525CF local_9c;
  undefined2 local_90;
  char local_8e;
  uint local_8d;
  uint local_89;
  undefined1 local_85;
  undefined1 local_84;
  char local_83;
  undefined4 local_82;
  undefined4 local_7e;
  uint local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  int local_68;
  uint local_64;
  int *local_60;
  SettMapMTy *local_5c;
  int local_58 [8];
  uint *local_38;
  int *local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  char local_1d;
  uint local_1c;
  uint local_18;
  char local_11;
  int *local_10;
  AnonShape_005CE0E0_C50CCD71 *local_c;
  char local_5;

  local_1d = this->field_0065;
  local_c = (AnonShape_005CE0E0_C50CCD71 *)0x0;
  local_24 = 0xffffffff;
  local_148.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_148;
  local_5c = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_148.jumpBuffer,0);
  this_00 = local_5c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_148.previous;
    iVar16 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x4a9,0,iVar6,
                                "%s","SettMapMTy::NoneSettMap");
    if (iVar16 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\settmobj.cpp",0x4a9);
    return 0;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar6 = SettMapTy::NoneSettMap((SettMapTy *)local_5c,unaff_EDI);
  if (((iVar6 != 0) && (local_1d == '\x03')) && (this_00->field_0065 == '\x01')) {
    Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,this_00->field_2200);
    Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
    Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
    if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560,
                 0xfffffffe,g_startSystem_0081176C->field_0578,g_startSystem_0081176C->field_057C);
    }
    if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1,
                 0xfffffffe,g_startSystem_0081176C->field_0609,g_startSystem_0081176C->field_060D);
    }
  }
  Library::DKW::DDX::FUN_006b7510(g_int_00811764,-1,&local_30,-1,0);
  if (DAT_0080877e == '\0') {
    iVar6 = this_00->field_0061;
    if (799 < (uint)(iVar6 - this_00->field_220D)) {
      local_f2 = this_00->field_2221;
      local_e2 = this_00->field_2211;
      local_102 = 4;
      local_e6 = iVar6;
      FUN_006b6500(g_int_00811764,0);
      FUN_00715360(g_int_00811764,1,'\x1a',local_104,0x26,1,0xffffffff);
      FUN_006b6500(g_int_00811764,DAT_0080733c);
      this_00->field_2221 = this_00->field_2221 + 1;
      iVar6 = this_00->field_0061;
      this_00->field_220D = iVar6;
    }
    if (((local_30 == 0) && (60000 < (uint)(iVar6 - this_00->field_2209))) &&
       (this_00->field_2225 == '\0')) {
      this_00->field_2225 = 1;
      memset(local_dc, 0, 0x20); /* compiler bulk-zero initialization */
      local_dc[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
      if (this_00->field_1A5B->field_02E6 == (MMsgTy *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)this_00->field_0000->field_0000)(local_dc);
      }
      else {
        local_dc[2] = this_00->field_0008;
        local_dc[3] = 2;
        MMsgTy::SetMessage(this_00->field_1A5B->field_02E6,0x2522,'\0',local_dc,(undefined4 *)0x0,
                           (undefined4 *)0x0,0,0);
      }
    }
  }
  else if ((this_00->field_222E != '\0') &&
          (29999 < (uint)(this_00->field_0061 - this_00->field_2233))) {
    this_00->field_222E = 0;
    RunGame(this_00);
  }
  local_1c = 0;
  if (0 < local_30) {
    do {
      iVar6 = Library::Ourlib::CONNECT::FUN_00715630
                        (g_int_00811764,-1,&local_28,(int *)&local_18,&local_c,&local_2c,-1,0);
      if ((iVar6 == 1) && (local_28 == 0x1b)) {
        StartSystemTy::AddToChat(this_00->field_1A5B,(int)local_c);
      }
      pAVar21 = local_c;
      if (DAT_0080877e == '\0') {
        piVar24 = local_58;
        for (iVar16 = 8; pAVar21 = local_c, iVar16 != 0; iVar16 = iVar16 + -1) {
          *piVar24 = 0;
          piVar24 = piVar24 + 1;
        }
        if (iVar6 == -0x4d) {
          this_00->field_2225 = 1;
          local_58[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
          pSVar10 = this_00->field_1A5B;
          if (pSVar10->field_02E6 == (MMsgTy *)0x0) {
            pAVar14 = this_00->field_0000;
            piVar24 = local_58;
            goto LAB_005cf387;
          }
          local_58[2] = this_00->field_0008;
          local_58[3] = 2;
          piVar24 = local_58;
LAB_005ce9b2:
          MMsgTy::SetMessage(pSVar10->field_02E6,0x2522,'\0',piVar24,(undefined4 *)0x0,
                             (undefined4 *)0x0,0,0);
        }
        else {
          if (iVar6 != 1) goto cf_continue_loop_005CF38C;
          iVar6 = this_00->field_0061;
          this_00->field_2209 = iVar6;
          switch(local_28) {
          case 0x10:
            if (this_00->field_0065 == '\x01') {
              local_58[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
              if (this_00->field_1A5B->field_02E6 == (MMsgTy *)0x0) goto LAB_005cee1a;
              local_58[2] = this_00->field_0008;
              local_58[3] = 2;
              MMsgTy::SetMessage(this_00->field_1A5B->field_02E6,0x2524,'\0',local_58,
                                 (undefined4 *)0x0,(undefined4 *)0x0,0,0);
            }
            break;
          case 0x12:
            if (this_00->field_0065 == '\x01') {
              local_58[4] = 0x694f;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_005cee1a:
              (*(code *)this_00->field_0000->field_0000)(local_58);
            }
            break;
          case 0x1a:
          case 0x2d:
            pcVar7 = &local_c->field_0002;
            if ((local_c->field_0002 == '\x03') && (this_00->field_0065 == '\x01')) {
              local_58[4] = 0x694f;
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)this_00->field_0000->field_0000)(local_58);
            }
            else {
              if (local_c->field_0002 == '\x01') {
                bVar1 = local_c->field_000B;
                if (bVar1 == 1) {
                  if (this_00->field_0065 == '\x01') {
                    if ((local_c->field_0003 == DAT_00809958) ||
                       ((uint)(iVar6 - this_00->field_2215) < 3000)) {
                      if ((local_c->field_0016 != DAT_00808aab) &&
                         (2999 < (uint)(iVar6 - this_00->field_2219))) {
                        FUN_006b6500(g_int_00811764,1);
                        FUN_00715360(g_int_00811764,1,'\x1d',(char *)0x0,0,0,0xffffffff);
                        FUN_006b6500(g_int_00811764,DAT_0080733c);
                        iVar6 = this_00->field_0061;
                        this_00->field_2219 = iVar6;
                      }
                      if (((this_00->field_1F84 != (SettMapMTy_field_1F84DArray *)0x0) &&
                          (*(int *)&pAVar21->field_0x1a != this_00->field_2121)) &&
                         (1999 < (uint)(iVar6 - this_00->field_221D))) {
                        FUN_006b6500(g_int_00811764,1);
                        FUN_00715360(g_int_00811764,1,'#',(char *)0x0,0,0,0xffffffff);
                        FUN_006b6500(g_int_00811764,DAT_0080733c);
                        this_00->field_221D = this_00->field_0061;
                      }
                    }
                    else {
                      FUN_006b6500(g_int_00811764,1);
                      FUN_00715360(g_int_00811764,1,'!',(char *)0x0,0,0,0xffffffff);
                      FUN_00715360(g_int_00811764,1,'\x1f',(char *)0x0,0,0,0xffffffff);
                      FUN_006b6500(g_int_00811764,DAT_0080733c);
                      this_00->field_2215 = this_00->field_0061;
                    }
                  }
                }
                else if ((1 < bVar1) && (bVar1 < 6)) {
                  if ((local_c->field_0016 != DAT_00808aab) &&
                     (2999 < (uint)(iVar6 - this_00->field_2219))) {
                    FUN_006b6500(g_int_00811764,1);
                    FUN_00715360(g_int_00811764,1,'\x1d',(char *)0x0,0,0,0xffffffff);
                    FUN_006b6500(g_int_00811764,DAT_0080733c);
                    iVar6 = this_00->field_0061;
                    this_00->field_2219 = iVar6;
                  }
                  if (this_00->field_1F84 != (SettMapMTy_field_1F84DArray *)0x0) {
                    if ((*(int *)&pAVar21->field_0x1a != this_00->field_2121) &&
                       (1999 < (uint)(iVar6 - this_00->field_221D))) {
                      FUN_006b6500(g_int_00811764,1);
                      FUN_00715360(g_int_00811764,1,'#',(char *)0x0,0,0,0xffffffff);
                      FUN_006b6500(g_int_00811764,DAT_0080733c);
                      iVar6 = this_00->field_0061;
                      this_00->field_221D = iVar6;
                    }
                    if ((this_00->field_1F84 != (SettMapMTy_field_1F84DArray *)0x0) &&
                       (1999 < (uint)(iVar6 - this_00->field_221D))) {
                      AddPlList(this_00,(uint)(this_00->field_1E26 == CASE_10));
                    }
                  }
                }
              }
              iVar6 = this_00->field_0061 - pAVar21->field_001E;
              this_00->field_2211 = iVar6;
              UpdatePing(this_00,DAT_0080877f,iVar6);
              if ((((((*pcVar7 == '\x02') && (this_00->field_0065 == '\x01')) &&
                    (pAVar21->field_0003 == DAT_008087be)) &&
                   ((this_00->field_1E26 != 0xe || (pAVar21->field_0003 == DAT_00809958)))) &&
                  (pAVar21->field_0016 == DAT_00808aab)) &&
                 (*(int *)&pAVar21->field_0x1a == this_00->field_2121)) {
                local_5 = '\0';
                this_00->field_002D = 0x10003;
                FUN_006e6080(this_00,3,0x100ef,(undefined4 *)&this_00->field_0x1d);
                DAT_0080733b = pAVar21->field_0xc;
                DAT_00808754 = *(undefined4 *)&pAVar21->field_0xe;
                pSVar12 = this_00->field_1F84;
                uVar18 = 0;
                uVar19 = pSVar12->count;
                local_1c = 0;
                if (0 < (int)uVar19) {
                  bVar26 = uVar19 != 0;
                  do {
                    if (bVar26) {
                      element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar12, uVar18);
                    }
                    else {
                      element_1f84 = (SettMapMTy_field_1F84Element *)0x0;
                    }
                    if (((element_1f84 != (SettMapMTy_field_1F84Element *)0x0) && ((element_1f84->field_0004 == '\x02' || (element_1f84->field_0004 == '\x03')))
                        ) && (element_1f84->element == DAT_0080877f)) {
                      local_5 = '\x01';
                      local_1c = uVar18;
                      break;
                    }
                    uVar18 = uVar18 + 1;
                    bVar26 = uVar18 < uVar19;
                    local_1c = uVar18;
                  } while ((int)uVar18 < (int)uVar19);
                }
                if (local_5 == '\0') {
                  this_00->field_002D = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  (*(code *)this_00->field_0000->field_0000)(&this_00->field_0x1d);
                }
                else {
                  this_00->field_002D = 0x694a;
                  this_00->field_0031 = 1;
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  (*(code *)this_00->field_0000->field_0000)(&this_00->field_0x1d);
                }
              }
            }
            break;
          case 0x1c:
            if (DAT_00808aab != *(uint *)&local_c[2].field_0x1c) {
              local_5 = DAT_00808a8f != *(char *)(local_c + 2);
              iVar6 = 0x10;
              bVar26 = true;
              pbVar20 = g_playerRelationMatrix[0];
              piVar24 = (int *)&local_c->field_0x10;
              do {
                if (iVar6 == 0) break;
                iVar6 = iVar6 + -1;
                bVar26 = *(int *)pbVar20 == *piVar24;
                pbVar20 = pbVar20 + 4;
                piVar24 = piVar24 + 1;
              } while (bVar26);
              local_11 = !bVar26;
              thunk_FUN_00571a30((AnonShape_00571A30_8BA8841B *)&DAT_008087b6,
                                 (AnonShape_00571A30_67EE4B56 *)local_c,'\x01');
              DAT_0080734b = DAT_00808aa8;
              local_34 = (int *)PTR_0080c502->count;
              local_10 = (int *)0x0;
              if (0 < (int)local_34) {
                bVar26 = local_34 != (int *)0x0;
                do {
                  if (bVar26) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(PTR_0080c502, (int)local_10) (runtime stride) */
                    pvVar17 = (void *)(PTR_0080c502->elementSize * (int)local_10 +
                                      (int)PTR_0080c502->data);
                  }
                  else {
                    pvVar17 = (void *)0x0;
                  }
                  if ((pvVar17 != (void *)0x0) && (*(uint *)((int)pvVar17 + 0x90) == DAT_0080995c))
                  {
                    pbVar22 = (byte *)&DAT_00809960;
                    pbVar20 = (byte *)((int)pvVar17 + 0x4c);
                    do {
                      bVar1 = *pbVar20;
                      bVar26 = bVar1 < *pbVar22;
                      if (bVar1 != *pbVar22) {
LAB_005cef58:
                        iVar6 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
                        goto LAB_005cef5d;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar20[1];
                      bVar26 = bVar1 < pbVar22[1];
                      if (bVar1 != pbVar22[1]) goto LAB_005cef58;
                      pbVar20 = pbVar20 + 2;
                      pbVar22 = pbVar22 + 2;
                    } while (bVar1 != 0);
                    iVar6 = 0;
LAB_005cef5d:
                    if (iVar6 == 0) {
                      this_00->field_1C5F = (uint)local_10;
                      StartSystemTy::SetObjectives
                                (g_startSystem_0081176C,(int)this_00->field_1F43,
                                 (char *)((int)pvVar17 + 0x70),this_00->field_1C63);
                      break;
                    }
                  }
                  local_10 = (int *)((int)local_10 + 1);
                  bVar26 = local_10 < local_34;
                } while ((int)local_10 < (int)local_34);
              }
              puVar8 = this_00->field_2125;
              iVar6 = 0xe;
              do {
                if (*puVar8 != 0) {
                  this_00->field_002D = 5;
                  FUN_006e6080(this_00,2,*puVar8,(undefined4 *)&this_00->field_0x1d);
                }
                puVar8 = puVar8 + 1;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              if (((local_5 == '\0') ||
                  ((*(code *)this_00->field_0000->field_002C)(), local_5 == '\0')) &&
                 (local_11 != '\0')) {
                puVar8 = this_00->field_1F8C;
                local_10 = (int *)0xa;
                do {
                  iVar6 = 8;
                  do {
                    if (*puVar8 != 0) {
                      this_00->field_002D = 5;
                      FUN_006e6080(this_00,2,*puVar8,(undefined4 *)&this_00->field_0x1d);
                    }
                    puVar8 = puVar8 + 1;
                    iVar6 = iVar6 + -1;
                  } while (iVar6 != 0);
                  local_10 = (int *)((int)local_10 + -1);
                } while (local_10 != (int *)0x0);
              }
              SettMapTy::PaintSC((SettMapTy *)this_00);
            }
            break;
          case 0x1e:
            if ((DAT_00809958 != *(uint *)local_c) && (this_00->field_0065 == '\x01')) {
              puVar23 = &DAT_00853de0;
              for (iVar6 = 0x8c; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar23 = *(undefined4 *)pAVar21;
                pAVar21 = (AnonShape_005CE0E0_C50CCD71 *)((int)&pAVar21->field_0003 + 1);
                puVar23 = puVar23 + 1;
              }
              *(undefined2 *)puVar23 = *(undefined2 *)pAVar21;
              thunk_FUN_005c7800();
            }
            break;
          case 0x20:
            iVar6 = 0xd;
            bVar26 = true;
            pcVar7 = (char *)&this_00->field_1F53;
            do {
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              bVar26 = *pcVar7 == *(char *)pAVar21;
              pcVar7 = pcVar7 + 1;
              pAVar21 = (AnonShape_005CE0E0_C50CCD71 *)&pAVar21->field_0x1;
            } while (bVar26);
            if (!bVar26) {
              iVar6 = 6;
              this_00->field_1F53 = *(undefined4 *)local_c;
              *(undefined4 *)&this_00->field_0x1f57 = *(undefined4 *)((int)&local_c->field_0003 + 1);
              this_00->field_1F5B = *(undefined4 *)&local_c->field_0x8;
              this_00->field_1F5F = local_c->field_0xc;
              piVar24 = &this_00->field_1F60;
              do {
                if (*piVar24 != 0) {
                  this_00->field_002D = 5;
                  FUN_006e6080(this_00,2,*piVar24,(undefined4 *)&this_00->field_0x1d);
                }
                piVar24 = piVar24 + 1;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1F80);
            }
            break;
          case 0x22:
            if (((this_00->field_1F84 != (SettMapMTy_field_1F84DArray *)0x0) &&
                (this_00->field_2121 != *(int *)local_c)) &&
               (DAT_00808aab == *(uint *)((int)&local_c->field_0003 + 1))) {
              local_10 = (int *)(local_2c - 9);
              if (-1 < (int)local_10) {
                this_00->field_002D = 0x10003;
                FUN_006e6080(this_00,3,0x100ef,(undefined4 *)&this_00->field_0x1d);
                uVar19 = 0;
                this_00->field_2121 = *(undefined4 *)local_c;
                local_11 = pAVar21->field_0x8;
                pSVar12 = this_00->field_1F84;
                if (0 < (int)pSVar12->count) {
                  bVar26 = pSVar12->count != 0;
                  do {
                    if (bVar26) {
                      element_1f84_2 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar12, uVar19);
                    }
                    else {
                      element_1f84_2 = (SettMapMTy_field_1F84Element *)0x0;
                    }
                    if ((element_1f84_2 != (SettMapMTy_field_1F84Element *)0x0) &&
                       (element_1f84_2->handle != (DArrayTy *)0x0)) {
                      DArrayDestroy(element_1f84_2->handle);
                    }
                    pSVar12 = this_00->field_1F84;
                    uVar19 = uVar19 + 1;
                    bVar26 = uVar19 < pSVar12->count;
                  } while ((int)uVar19 < (int)pSVar12->count);
                }
                pSVar12 = this_00->field_1F84;
                piVar24 = (int *)(local_2c / 0x60);
                local_34 = piVar24;
                if ((int)(pSVar12->count * pSVar12->elementSize) < (int)local_10) {
                  pSVar11 = Library::DKW::LIB::MemRealloc
                                      ((AnonPointee_TLOBaseTy_0607 *)pSVar12->data,(uint)local_10);
                  this_00->field_1F84->data = pSVar11;
                  this_00->field_1F84->capacity = (dword)piVar24;
                }
                pcVar7 = &pAVar21->field_0x9;
                pSVar11 = this_00->field_1F84->data;
                for (uVar19 = (uint)local_10 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
                  cVar27 = pcVar7[1];
                  cVar4 = pcVar7[2];
                  cVar5 = pcVar7[3];
                  pSVar11->field_0000 = pcVar7[0];
                  pSVar11->field_0001 = cVar27;
                  pSVar11->state = cVar4;
                  pSVar11->field_0003 = cVar5;
                  pcVar7 = pcVar7 + 4;
                  pSVar11 = (SettMapMTy_field_1F84Element *)&pSVar11->field_0004;
                }
                for (uVar19 = (uint)local_10 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                  pSVar11->field_0000 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                  pSVar11 = (SettMapMTy_field_1F84Element *)&pSVar11->field_0001;
                }
                uVar19 = 0;
                this_00->field_1F84->count = (dword)local_34;
                pSVar12 = this_00->field_1F84;
                if (0 < (int)pSVar12->count) {
                  bVar26 = pSVar12->count != 0;
                  do {
                    if (bVar26) {
                      element_1f84_3 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar12, uVar19);
                    }
                    else {
                      element_1f84_3 = (SettMapMTy_field_1F84Element *)0x0;
                    }
                    if (element_1f84_3 != (SettMapMTy_field_1F84Element *)0x0) {
                      if ((local_11 == '\x05') || (this_00->field_1E26 == CASE_F)) {
                        pDVar13 = (DArrayTy *)
                                  CreateStrategList((int)this_00->field_1F3F,(uint)(byte)element_1f84_3->state,
                                                    0xffffffff);
                      }
                      else if ((local_11 == '\f') || (this_00->field_1E26 == CASE_10)) {
                        pDVar13 = (DArrayTy *)
                                  CreateSaveStrategList
                                            ((int)this_00->field_1F3F,(uint)(byte)element_1f84_3->state,
                                             0xffffffff);
                      }
                      else {
                        pDVar13 = (DArrayTy *)
                                  CreateOpponentList(this_00->field_1F43,(uint)(byte)element_1f84_3->field_0003,
                                                     DAT_0080995c);
                      }
                      element_1f84_3->handle = pDVar13;
                    }
                    pSVar12 = this_00->field_1F84;
                    uVar19 = uVar19 + 1;
                    bVar26 = uVar19 < pSVar12->count;
                  } while ((int)uVar19 < (int)pSVar12->count);
                }
              }
              if (this_00->field_1E26 != CASE_10) {
                sub_005D1380(this_00);
              }
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)this_00->field_0000->field_002C)();
              SettMapTy::PaintSC((SettMapTy *)this_00);
            }
            AddPlList(this_00,(uint)(this_00->field_1E26 == CASE_10));
            break;
          case 0x31:
          case 0x33:
          case 0x35:
            if (this_00->field_2225 == '\0') {
              this_00->field_2225 = 1;
              local_58[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
              if (this_00->field_1A5B->field_02E6 == (MMsgTy *)0x0) goto LAB_005cee1a;
              local_58[2] = this_00->field_0008;
              local_58[3] = 2;
              MMsgTy::SetMessage(this_00->field_1A5B->field_02E6,0x2522,'\0',local_58,
                                 (undefined4 *)0x0,(undefined4 *)0x0,0,0);
            }
          }
          if (local_c != (AnonShape_005CE0E0_C50CCD71 *)0x0) {
            FreeAndNull(&local_c);
          }
        }
        goto cf_continue_loop_005CF38C;
      }
      if (iVar6 == -0x4d) {
        this_00->field_2225 = 1;
        memset(local_bc, 0, 0x20); /* compiler bulk-zero initialization */
        iVar6 = 0;
        pSVar10 = this_00->field_1A5B;
        if (pSVar10->field_02E6 != (MMsgTy *)0x0) {
          local_bc[2] = this_00->field_0008;
          local_bc[3] = 2;
          local_bc[4] = 0x6947;
          piVar24 = local_bc;
          goto LAB_005ce9b2;
        }
        pAVar14 = this_00->field_0000;
        local_bc[4] = 0x6947;
        piVar24 = local_bc;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_005cf387:
        (*(code *)pAVar14->field_0000)(piVar24);
        goto cf_continue_loop_005CF38C;
      }
      if (iVar6 != 1) goto cf_continue_loop_005CF38C;
      switch(local_28) {
      case 0x11:
        DeletePlayer(this_00,local_18);
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        CheckPlList(this_00,unaff_EDI);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)this_00->field_0000->field_002C)();
        SettMapTy::PaintSC((SettMapTy *)this_00);
        local_24 = 0;
        this_00->field_2121 = this_00->field_2121 + 1;
        break;
      case 0x1a:
        if (local_c->field_0002 == '\x04') {
          local_90 = (undefined2)((uint)DAT_00807dd5 >> 0x10);
          local_84 = DAT_0080733b;
          local_8e = (this_00->field_222E != '\0') + '\x01';
          local_83 = DAT_00807361;
          local_82 = DAT_00808754;
          local_7e = local_c->field_0012;
          local_8d = DAT_008087be;
          local_89 = (this_00->field_1E26 != CASE_C) - 1 & DAT_00808750;
          local_76 = this_00->field_2121;
          local_7a = DAT_00808aab;
          switch(this_00->field_1E26) {
          case CASE_4:
            local_85 = 2;
            break;
          case CASE_5:
            local_85 = 3;
            break;
          case CASE_7:
            local_85 = 1;
            break;
          case CASE_C:
            local_85 = 5;
            break;
          case CASE_13:
            if ((0x13 < DAT_00803400) && (DAT_00803400 < 0x16)) {
              local_85 = 4;
            }
          }
          local_6e = local_c->field_0022;
          puVar23 = &local_c->field_0022;
          local_72 = local_c->field_001E;
          FUN_006b6500(g_int_00811764,0);
          FUN_00715360(g_int_00811764,local_18,'\x1a',(char *)&local_90,0x26,1,0xffffffff);
          FUN_006b6500(g_int_00811764,DAT_0080733c);
          UpdatePing(this_00,local_18,*puVar23);
        }
        break;
      case 0x1d:
        SendDesc(this_00,local_18);
        break;
      case 0x1f:
        uVar19 = 0x232;
        pcVar7 = (char *)&DAT_00853de0;
        cVar27 = '\x1e';
        goto LAB_005ce59f;
      case 0x21:
        pcVar7 = (char *)&this_00->field_1F53;
        uVar19 = 0xd;
        cVar27 = ' ';
LAB_005ce59f:
        FUN_00715360(g_int_00811764,local_18,cVar27,pcVar7,uVar19,1,0xffffffff);
        break;
      case 0x23:
        local_24 = (local_24 != 0xffffffff) - 1 & local_18;
        break;
      case 0x24:
        if (local_c != (AnonShape_005CE0E0_C50CCD71 *)0x0) {
          pSVar12 = this_00->field_1F84;
          if ((pSVar12 == (SettMapMTy_field_1F84DArray *)0x0) ||
             (pSVar12->count <= *(uint *)local_c)) {
            pcVar7 = (char *)0x0;
          }
          else {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar7 = &pSVar12->data->field_0000 + pSVar12->elementSize * *(uint *)local_c;
          }
          if (pcVar7 != (char *)0x0) {
            local_10 = (int *)((int)&local_c->field_0003 + 1);
            iVar6 = *local_10;
            if ((-1 < iVar6) && ((iVar6 < 4 || (iVar6 == 7)))) {
              local_24 = 0;
            }
            this_00->field_002D = 0x10003;
            FUN_006e6080(this_00,3,0x100ef,(undefined4 *)&this_00->field_0x1d);
            switch(*local_10) {
            case 0:
              ChangePlayerState(this_00,*(uint *)pAVar21);
              break;
            case 1:
              ChangePlayerColor(this_00,*(uint *)pAVar21,(char)*(undefined4 *)&pAVar21->field_0x8);
              break;
            case 2:
              ChangePlayerCiv(this_00,*(uint *)pAVar21,(char)*(undefined4 *)&pAVar21->field_0x8);
              break;
            case 3:
              ChangePlayerList(this_00,local_18,*(uint *)pAVar21,*(int *)&pAVar21->field_0x8,
                               (char)*(undefined4 *)&pAVar21->field_0xc,&pAVar21->field_0x10);
              break;
            case 5:
              ChangePlayerTeam(this_00,*(uint *)pAVar21,*(uint *)&pAVar21->field_0x8,
                               *(uint *)&pAVar21->field_0xc);
              SendDesc(this_00,0);
              break;
            case 7:
              puVar8 = this_00->field_1F8C;
              pcVar7[0x4f] = pAVar21->field_0x8;
              local_10 = (int *)0xa;
              this_00->field_2121 = this_00->field_2121 + 1;
              do {
                iVar6 = 8;
                do {
                  if (*puVar8 != 0) {
                    this_00->field_002D = 5;
                    FUN_006e6080(this_00,2,*puVar8,(undefined4 *)&this_00->field_0x1d);
                  }
                  puVar8 = puVar8 + 1;
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
                local_10 = (int *)((int)local_10 + -1);
              } while (local_10 != (int *)0x0);
              local_10 = (int *)0x0;
            }
          }
        }
        break;
      case 0x25:
        if (local_c == (AnonShape_005CE0E0_C50CCD71 *)0x0) goto cf_continue_loop_005CF38C;
        if (((3 < local_2c) && (DAT_00807361 != '\0')) && (this_00->field_2243 != '\0')) {
          if ((((AnonShape_005DE670_0D4D7A8C *)this_00->field_1A5B)->field_069A == (LPVOID)0x0) &&
             (thunk_FUN_005de670((AnonShape_005DE670_0D4D7A8C *)this_00->field_1A5B),
             this_00->field_1A5B->field_069A == (void *)0x0)) {
            this_00->field_2243 = 0;
          }
          else {
            pSVar2 = this_00->field_2237;
            bVar26 = false;
            uVar18 = 0;
            local_10 = (int *)0x0;
            uVar19 = pSVar2->count;
            if (uVar19 != 0) {
              if (uVar19 == 0) {
                pAVar9 = (AnonShape_005D4990_5F0525CF *)0x0;
                goto LAB_005ce8db;
              }
              do {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                pAVar9 = (AnonShape_005D4990_5F0525CF *)
                         ((int)&pSVar2->data->field_0000 + pSVar2->elementSize * uVar18);
LAB_005ce8db:
                if ((pAVar9 != (AnonShape_005D4990_5F0525CF *)0x0) &&
                   (*(uint *)&pAVar9->field_0x0 == local_18)) {
                  PrepareAFT(this_00,pAVar9,(uint *)local_c);
                  bVar26 = true;
                  goto LAB_005ce8fe;
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 < uVar19);
              bVar26 = false;
            }
LAB_005ce8fe:
            if (!bVar26) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_9c._0_4_ = local_18;
              local_9c.field_0008 = Library::DKW::LIB::MemAlloc(this_00->field_1A5B->field_06A6);
              PrepareAFT(this_00,&local_9c,(uint *)local_c);
              Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_2237,&local_9c);
            }
          }
        }
        break;
      case 0x28:
        if (local_c != (AnonShape_005CE0E0_C50CCD71 *)0x0) {
          pSVar12 = this_00->field_1F84;
          if ((pSVar12 == (SettMapMTy_field_1F84DArray *)0x0) ||
             (pSVar12->count <= *(uint *)local_c)) {
            pcVar7 = (char *)0x0;
          }
          else {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar7 = &pSVar12->data->field_0000 + pSVar12->elementSize * *(uint *)local_c;
          }
          if ((pcVar7 != (char *)0x0) && (*(int *)((int)&local_c->field_0003 + 1) == 3)) {
            local_24 = 0;
            this_00->field_002D = 0x10003;
            FUN_006e6080(this_00,3,0x100ef,(undefined4 *)&this_00->field_0x1d);
            AddPlayerList(this_00,local_18,*(uint *)pAVar21,*(int *)&pAVar21->field_0x8,
                          &pAVar21->field_0x10);
          }
        }
        break;
      case 0x2e:
        if ((this_00->field_222E != '\0') &&
           (pDVar13 = this_00->field_222F, pDVar13 != (DArrayTy *)0x0)) {
          uVar19 = pDVar13->count;
          uVar18 = 0;
          local_1c = 0;
          if (0 < (int)uVar19) {
            bVar26 = uVar19 != 0;
            do {
              if (bVar26) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar13, uVar18) (runtime stride) */
                puVar8 = (uint *)(pDVar13->elementSize * uVar18 + (int)pDVar13->data);
              }
              else {
                puVar8 = (uint *)0x0;
              }
              if ((puVar8 != (uint *)0x0) && (*puVar8 == local_18)) {
                local_1c = uVar18;
                DArrayRemoveAt(pDVar13,uVar18);
                break;
              }
              uVar18 = uVar18 + 1;
              bVar26 = uVar18 < uVar19;
              local_1c = uVar18;
            } while ((int)uVar18 < (int)uVar19);
          }
          if (this_00->field_222F->count == 0) {
            this_00->field_222E = 0;
            RunGame(this_00);
            if (DAT_008067a0 != '\0') {
              CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,6,&this_00->field_0x1a5f);
              CFsgsConnection::StartGame((CFsgsConnection *)&DAT_00802a90);
            }
          }
        }
      }
      if (local_c != (AnonShape_005CE0E0_C50CCD71 *)0x0) {
        FreeAndNull(&local_c);
      }
cf_continue_loop_005CF38C:
      local_1c = local_1c + 1;
    } while ((int)local_1c < local_30);
  }
  if (DAT_0080877e != '\0') {
    if (local_24 != 0xffffffff) {
      SendPlList(this_00,local_24);
    }
    if ((this_00->field_223B < this_00->field_2237->count) &&
       (this_00->field_1A5B->field_069A != (void *)0x0)) {
      if (this_00->field_223F == 0) {
        this_00->field_223F = this_00->field_1A5B->field_06AA;
      }
      else {
        this_00->field_223F = this_00->field_223F + -1;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar6 = (**(code **)(*(int *)*g_int_00811764 + 200))
                        ((int *)*g_int_00811764,DAT_0080877f,0,1,0,&local_64);
      if (((iVar6 == 0) && (local_64 < 0x400)) && (this_00->field_223F == 0)) {
        pSVar2 = this_00->field_2237;
        if (this_00->field_223B < pSVar2->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          local_10 = (int *)((int)&pSVar2->data->field_0000 +
                            pSVar2->elementSize * this_00->field_223B);
        }
        else {
          local_10 = (int *)0x0;
        }
        if (local_10 != (int *)0x0) {
          pSVar10 = this_00->field_1A5B;
          local_68 = local_10[2];
          local_60 = local_10 + 2;
          local_1c = 0;
          if (pSVar10->field_06A6 != 0) {
LAB_005cf496:
            if (*(char *)(local_1c + local_68) == '\0') goto code_r0x005cf49c;
            if (local_1c == pSVar10->field_06A6 - 1) {
              uVar19 = pSVar10->field_069E % pSVar10->field_06A2;
            }
            else {
              uVar19 = pSVar10->field_06A2;
            }
            local_34 = (int *)(uVar19 + 0x1c);
            local_38 = Library::DKW::LIB::MemAlloc((uint)local_34);
            piVar24 = local_10;
            *local_38 = DAT_008087be;
            local_38[1] = local_1c;
            local_38[2] = this_00->field_1A5B->field_06A6;
            local_38[3] = this_00->field_1A5B->field_069E;
            local_38[4] = this_00->field_1A5B->field_06AE;
            local_38[5] = this_00->field_1A5B->field_06B2;
            local_38[6] = this_00->field_1A5B->field_06A2;
            puVar8 = (uint *)(this_00->field_1A5B->field_06A2 * local_1c +
                             (int)this_00->field_1A5B->field_069A);
            puVar25 = local_38 + 7;
            memmove(puVar25, puVar8, uVar19); /* compiler REP MOVS byte copy */
            FUN_00715360(g_int_00811764,*local_10,'&',(char *)local_38,(uint)local_34,1,0xffffffff);
            FreeAndNull(&local_38);
            *(undefined1 *)(local_1c + local_68) = 0;
            iVar6 = piVar24[1] + -1;
            piVar24[1] = iVar6;
            if (iVar6 == 0) {
              FreeAndNull((void **)local_60);
              DArrayRemoveAt((DArrayTy *)this_00->field_2237,this_00->field_223B);
            }
          }
LAB_005cf5bf:
          uVar19 = this_00->field_223B + 1;
          this_00->field_223B = uVar19;
          if (this_00->field_2237->count <= uVar19) {
            this_00->field_223B = 0;
          }
        }
      }
    }
  }
  g_currentExceptionFrame = local_148.previous;
  return 1;
code_r0x005cf49c:
  local_1c = local_1c + 1;
  if (pSVar10->field_06A6 <= local_1c) goto LAB_005cf5bf;
  goto LAB_005cf496;
}

