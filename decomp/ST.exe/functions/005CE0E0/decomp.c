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
  SettMapMTy_field_2237Element *pAVar9;
  StartSystemTy *pSVar9;
  SettMapMTy_field_1F84Element *pSVar10;
  SettMapMTy_field_1F84DArray *pSVar11;
  DArrayTy *pDVar12;
  AnonPointee_SettMapMTy_0000 *pAVar13;
  undefined4 uVar14;
  int iVar15;
  void *pvVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  AnonShape_005CE0E0_C50CCD71 *pAVar20;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EDI;
  byte *pbVar21;
  undefined4 *puVar22;
  int *piVar23;
  uint *puVar24;
  bool bVar25;
  char cVar26;
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
    iVar15 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x4a9,0,iVar6,
                                "%s","SettMapMTy::NoneSettMap");
    if (iVar15 != 0) {
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
      pAVar20 = local_c;
      if (DAT_0080877e == '\0') {
        piVar23 = local_58;
        for (iVar15 = 8; pAVar20 = local_c, iVar15 != 0; iVar15 = iVar15 + -1) {
          *piVar23 = 0;
          piVar23 = piVar23 + 1;
        }
        if (iVar6 == -0x4d) {
          this_00->field_2225 = 1;
          local_58[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
          pSVar9 = this_00->field_1A5B;
          if (pSVar9->field_02E6 == (MMsgTy *)0x0) {
            pAVar13 = this_00->field_0000;
            piVar23 = local_58;
            goto LAB_005cf387;
          }
          local_58[2] = this_00->field_0008;
          local_58[3] = 2;
          piVar23 = local_58;
LAB_005ce9b2:
          MMsgTy::SetMessage(pSVar9->field_02E6,0x2522,'\0',piVar23,(undefined4 *)0x0,
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
                          (*(int *)&pAVar20->field_0x1a != this_00->field_2121)) &&
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
                    if ((*(int *)&pAVar20->field_0x1a != this_00->field_2121) &&
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
              iVar6 = this_00->field_0061 - pAVar20->field_001E;
              this_00->field_2211 = iVar6;
              UpdatePing(this_00,DAT_0080877f,iVar6);
              if ((((((*pcVar7 == '\x02') && (this_00->field_0065 == '\x01')) &&
                    (pAVar20->field_0003 == DAT_008087be)) &&
                   ((this_00->field_1E26 != 0xe || (pAVar20->field_0003 == DAT_00809958)))) &&
                  (pAVar20->field_0016 == DAT_00808aab)) &&
                 (*(int *)&pAVar20->field_0x1a == this_00->field_2121)) {
                local_5 = '\0';
                this_00->field_002D = 0x10003;
                FUN_006e6080(this_00,3,0x100ef,(undefined4 *)&this_00->field_0x1d);
                DAT_0080733b = pAVar20->field_0xc;
                DAT_00808754 = *(undefined4 *)&pAVar20->field_0xe;
                pSVar11 = this_00->field_1F84;
                uVar17 = 0;
                uVar18 = pSVar11->count;
                local_1c = 0;
                if (0 < (int)uVar18) {
                  bVar25 = uVar18 != 0;
                  do {
                    if (bVar25) {
                      element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar11, uVar17);
                    }
                    else {
                      element_1f84 = (SettMapMTy_field_1F84Element *)0x0;
                    }
                    if (((element_1f84 != (SettMapMTy_field_1F84Element *)0x0) && ((element_1f84->field_0004 == '\x02' || (element_1f84->field_0004 == '\x03')))
                        ) && (element_1f84->data == DAT_0080877f)) {
                      local_5 = '\x01';
                      local_1c = uVar17;
                      break;
                    }
                    uVar17 = uVar17 + 1;
                    bVar25 = uVar17 < uVar18;
                    local_1c = uVar17;
                  } while ((int)uVar17 < (int)uVar18);
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
              bVar25 = true;
              pbVar19 = g_playerRelationMatrix[0];
              piVar23 = (int *)&local_c->field_0x10;
              do {
                if (iVar6 == 0) break;
                iVar6 = iVar6 + -1;
                bVar25 = *(int *)pbVar19 == *piVar23;
                pbVar19 = pbVar19 + 4;
                piVar23 = piVar23 + 1;
              } while (bVar25);
              local_11 = !bVar25;
              thunk_FUN_00571a30((AnonShape_00571A30_8BA8841B *)&DAT_008087b6,
                                 (AnonShape_00571A30_67EE4B56 *)local_c,'\x01');
              DAT_0080734b = DAT_00808aa8;
              local_34 = (int *)PTR_0080c502->count;
              local_10 = (int *)0x0;
              if (0 < (int)local_34) {
                bVar25 = local_34 != (int *)0x0;
                do {
                  if (bVar25) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(PTR_0080c502, (int)local_10) (runtime stride) */
                    pvVar16 = (void *)(PTR_0080c502->elementSize * (int)local_10 +
                                      (int)PTR_0080c502->data);
                  }
                  else {
                    pvVar16 = (void *)0x0;
                  }
                  if ((pvVar16 != (void *)0x0) && (*(uint *)((int)pvVar16 + 0x90) == DAT_0080995c))
                  {
                    pbVar21 = (byte *)&DAT_00809960;
                    pbVar19 = (byte *)((int)pvVar16 + 0x4c);
                    do {
                      bVar1 = *pbVar19;
                      bVar25 = bVar1 < *pbVar21;
                      if (bVar1 != *pbVar21) {
LAB_005cef58:
                        iVar6 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
                        goto LAB_005cef5d;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar19[1];
                      bVar25 = bVar1 < pbVar21[1];
                      if (bVar1 != pbVar21[1]) goto LAB_005cef58;
                      pbVar19 = pbVar19 + 2;
                      pbVar21 = pbVar21 + 2;
                    } while (bVar1 != 0);
                    iVar6 = 0;
LAB_005cef5d:
                    if (iVar6 == 0) {
                      this_00->field_1C5F = (uint)local_10;
                      StartSystemTy::SetObjectives
                                (g_startSystem_0081176C,(int)this_00->field_1F43,
                                 (char *)((int)pvVar16 + 0x70),this_00->field_1C63);
                      break;
                    }
                  }
                  local_10 = (int *)((int)local_10 + 1);
                  bVar25 = local_10 < local_34;
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
              puVar22 = &DAT_00853de0;
              for (iVar6 = 0x8c; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar22 = *(undefined4 *)pAVar20;
                pAVar20 = (AnonShape_005CE0E0_C50CCD71 *)((int)&pAVar20->field_0003 + 1);
                puVar22 = puVar22 + 1;
              }
              *(undefined2 *)puVar22 = *(undefined2 *)pAVar20;
              thunk_FUN_005c7800();
            }
            break;
          case 0x20:
            iVar6 = 0xd;
            bVar25 = true;
            pcVar7 = (char *)&this_00->field_1F53;
            do {
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              bVar25 = *pcVar7 == *(char *)pAVar20;
              pcVar7 = pcVar7 + 1;
              pAVar20 = (AnonShape_005CE0E0_C50CCD71 *)&pAVar20->field_0x1;
            } while (bVar25);
            if (!bVar25) {
              iVar6 = 6;
              this_00->field_1F53 = *(undefined4 *)local_c;
              *(undefined4 *)&this_00->field_0x1f57 = *(undefined4 *)((int)&local_c->field_0003 + 1);
              this_00->field_1F5B = *(undefined4 *)&local_c->field_0x8;
              this_00->field_1F5F = local_c->field_0xc;
              piVar23 = &this_00->field_1F60;
              do {
                if (*piVar23 != 0) {
                  this_00->field_002D = 5;
                  FUN_006e6080(this_00,2,*piVar23,(undefined4 *)&this_00->field_0x1d);
                }
                piVar23 = piVar23 + 1;
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
                uVar18 = 0;
                this_00->field_2121 = *(undefined4 *)local_c;
                local_11 = pAVar20->field_0x8;
                pSVar11 = this_00->field_1F84;
                if (0 < (int)pSVar11->count) {
                  bVar25 = pSVar11->count != 0;
                  do {
                    if (bVar25) {
                      element_1f84_2 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar11, uVar18);
                    }
                    else {
                      element_1f84_2 = (SettMapMTy_field_1F84Element *)0x0;
                    }
                    if ((element_1f84_2 != (SettMapMTy_field_1F84Element *)0x0) &&
                       (element_1f84_2->handle != (DArrayTy *)0x0)) {
                      DArrayDestroy(element_1f84_2->handle);
                    }
                    pSVar11 = this_00->field_1F84;
                    uVar18 = uVar18 + 1;
                    bVar25 = uVar18 < pSVar11->count;
                  } while ((int)uVar18 < (int)pSVar11->count);
                }
                pSVar11 = this_00->field_1F84;
                piVar23 = (int *)(local_2c / 0x60);
                local_34 = piVar23;
                if ((int)(pSVar11->count * pSVar11->elementSize) < (int)local_10) {
                  pSVar10 = (SettMapMTy_field_1F84Element *)
                            Library::DKW::LIB::FUN_006acf50((int)pSVar11->data,(uint)local_10);
                  this_00->field_1F84->data = pSVar10;
                  this_00->field_1F84->capacity = (dword)piVar23;
                }
                pcVar7 = &pAVar20->field_0x9;
                pSVar10 = this_00->field_1F84->data;
                for (uVar18 = (uint)local_10 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                  cVar26 = pcVar7[1];
                  cVar4 = pcVar7[2];
                  cVar5 = pcVar7[3];
                  pSVar10->field_0000 = pcVar7[0];
                  pSVar10->field_0001 = cVar26;
                  pSVar10->state = cVar4;
                  pSVar10->field_0003 = cVar5;
                  pcVar7 = pcVar7 + 4;
                  pSVar10 = (SettMapMTy_field_1F84Element *)&pSVar10->field_0004;
                }
                for (uVar18 = (uint)local_10 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                  pSVar10->field_0000 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                  pSVar10 = (SettMapMTy_field_1F84Element *)&pSVar10->field_0001;
                }
                uVar18 = 0;
                this_00->field_1F84->count = (dword)local_34;
                pSVar11 = this_00->field_1F84;
                if (0 < (int)pSVar11->count) {
                  bVar25 = pSVar11->count != 0;
                  do {
                    if (bVar25) {
                      element_1f84_3 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar11, uVar18);
                    }
                    else {
                      element_1f84_3 = (SettMapMTy_field_1F84Element *)0x0;
                    }
                    if (element_1f84_3 != (SettMapMTy_field_1F84Element *)0x0) {
                      if ((local_11 == '\x05') || (this_00->field_1E26 == CASE_F)) {
                        pDVar12 = (DArrayTy *)
                                  CreateStrategList((int)this_00->field_1F3F,(uint)(byte)element_1f84_3->state,
                                                    0xffffffff);
                      }
                      else if ((local_11 == '\f') || (this_00->field_1E26 == CASE_10)) {
                        pDVar12 = (DArrayTy *)
                                  CreateSaveStrategList
                                            ((int)this_00->field_1F3F,(uint)(byte)element_1f84_3->state,
                                             0xffffffff);
                      }
                      else {
                        pDVar12 = (DArrayTy *)
                                  CreateOpponentList(this_00->field_1F43,(uint)(byte)element_1f84_3->field_0003,
                                                     DAT_0080995c);
                      }
                      element_1f84_3->handle = pDVar12;
                    }
                    pSVar11 = this_00->field_1F84;
                    uVar18 = uVar18 + 1;
                    bVar25 = uVar18 < pSVar11->count;
                  } while ((int)uVar18 < (int)pSVar11->count);
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
        pSVar9 = this_00->field_1A5B;
        if (pSVar9->field_02E6 != (MMsgTy *)0x0) {
          local_bc[2] = this_00->field_0008;
          local_bc[3] = 2;
          local_bc[4] = 0x6947;
          piVar23 = local_bc;
          goto LAB_005ce9b2;
        }
        pAVar13 = this_00->field_0000;
        local_bc[4] = 0x6947;
        piVar23 = local_bc;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_005cf387:
        (*(code *)pAVar13->field_0000)(piVar23);
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
          puVar22 = &local_c->field_0022;
          local_72 = local_c->field_001E;
          FUN_006b6500(g_int_00811764,0);
          FUN_00715360(g_int_00811764,local_18,'\x1a',(char *)&local_90,0x26,1,0xffffffff);
          FUN_006b6500(g_int_00811764,DAT_0080733c);
          UpdatePing(this_00,local_18,*puVar22);
        }
        break;
      case 0x1d:
        SendDesc(this_00,local_18);
        break;
      case 0x1f:
        uVar18 = 0x232;
        pcVar7 = (char *)&DAT_00853de0;
        cVar26 = '\x1e';
        goto LAB_005ce59f;
      case 0x21:
        pcVar7 = (char *)&this_00->field_1F53;
        uVar18 = 0xd;
        cVar26 = ' ';
LAB_005ce59f:
        FUN_00715360(g_int_00811764,local_18,cVar26,pcVar7,uVar18,1,0xffffffff);
        break;
      case 0x23:
        local_24 = (local_24 != 0xffffffff) - 1 & local_18;
        break;
      case 0x24:
        if (local_c != (AnonShape_005CE0E0_C50CCD71 *)0x0) {
          pSVar11 = this_00->field_1F84;
          if ((pSVar11 == (SettMapMTy_field_1F84DArray *)0x0) ||
             (pSVar11->count <= *(uint *)local_c)) {
            pcVar7 = (char *)0x0;
          }
          else {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar7 = &pSVar11->data->field_0000 + pSVar11->elementSize * *(uint *)local_c;
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
              ChangePlayerState(this_00,*(uint *)pAVar20);
              break;
            case 1:
              ChangePlayerColor(this_00,*(uint *)pAVar20,(char)*(undefined4 *)&pAVar20->field_0x8);
              break;
            case 2:
              ChangePlayerCiv(this_00,*(uint *)pAVar20,(char)*(undefined4 *)&pAVar20->field_0x8);
              break;
            case 3:
              ChangePlayerList(this_00,local_18,*(uint *)pAVar20,*(int *)&pAVar20->field_0x8,
                               (char)*(undefined4 *)&pAVar20->field_0xc,&pAVar20->field_0x10);
              break;
            case 5:
              ChangePlayerTeam(this_00,*(uint *)pAVar20,*(uint *)&pAVar20->field_0x8,
                               *(uint *)&pAVar20->field_0xc);
              SendDesc(this_00,0);
              break;
            case 7:
              puVar8 = this_00->field_1F8C;
              pcVar7[0x4f] = pAVar20->field_0x8;
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
            bVar25 = false;
            uVar17 = 0;
            local_10 = (int *)0x0;
            uVar18 = pSVar2->count;
            if (uVar18 != 0) {
              if (uVar18 == 0) {
                pAVar9 = (SettMapMTy_field_2237Element *)0x0;
                goto LAB_005ce8db;
              }
              do {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                pAVar9 = (SettMapMTy_field_2237Element *)
                         ((int)&pSVar2->data->field_0000 + pSVar2->elementSize * uVar17);
LAB_005ce8db:
                if ((pAVar9 != (SettMapMTy_field_2237Element *)0x0) &&
                   (pAVar9->field_0000 == local_18)) {
                  PrepareAFT(this_00,(AnonShape_005D4990_5F0525CF *)pAVar9,(uint *)local_c);
                  bVar25 = true;
                  goto LAB_005ce8fe;
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar18);
              bVar25 = false;
            }
LAB_005ce8fe:
            if (!bVar25) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_9c._0_4_ = local_18;
              local_9c.field_0008 = Library::DKW::LIB::FUN_006aac70(this_00->field_1A5B->field_06A6);
              PrepareAFT(this_00,&local_9c,(uint *)local_c);
              Library::DKW::TBL::FUN_006ae1c0(&this_00->field_2237->flags,(undefined4 *)&local_9c);
            }
          }
        }
        break;
      case 0x28:
        if (local_c != (AnonShape_005CE0E0_C50CCD71 *)0x0) {
          pSVar11 = this_00->field_1F84;
          if ((pSVar11 == (SettMapMTy_field_1F84DArray *)0x0) ||
             (pSVar11->count <= *(uint *)local_c)) {
            pcVar7 = (char *)0x0;
          }
          else {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar7 = &pSVar11->data->field_0000 + pSVar11->elementSize * *(uint *)local_c;
          }
          if ((pcVar7 != (char *)0x0) && (*(int *)((int)&local_c->field_0003 + 1) == 3)) {
            local_24 = 0;
            this_00->field_002D = 0x10003;
            FUN_006e6080(this_00,3,0x100ef,(undefined4 *)&this_00->field_0x1d);
            AddPlayerList(this_00,local_18,*(uint *)pAVar20,*(int *)&pAVar20->field_0x8,
                          &pAVar20->field_0x10);
          }
        }
        break;
      case 0x2e:
        if ((this_00->field_222E != '\0') &&
           (pDVar12 = this_00->field_222F, pDVar12 != (DArrayTy *)0x0)) {
          uVar18 = pDVar12->count;
          uVar17 = 0;
          local_1c = 0;
          if (0 < (int)uVar18) {
            bVar25 = uVar18 != 0;
            do {
              if (bVar25) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar12, uVar17) (runtime stride) */
                puVar8 = (uint *)(pDVar12->elementSize * uVar17 + (int)pDVar12->data);
              }
              else {
                puVar8 = (uint *)0x0;
              }
              if ((puVar8 != (uint *)0x0) && (*puVar8 == local_18)) {
                local_1c = uVar17;
                DArrayRemoveAt(pDVar12,uVar17);
                break;
              }
              uVar17 = uVar17 + 1;
              bVar25 = uVar17 < uVar18;
              local_1c = uVar17;
            } while ((int)uVar17 < (int)uVar18);
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
          pSVar9 = this_00->field_1A5B;
          local_68 = local_10[2];
          local_60 = local_10 + 2;
          local_1c = 0;
          if (pSVar9->field_06A6 != 0) {
LAB_005cf496:
            if (*(char *)(local_1c + local_68) == '\0') goto code_r0x005cf49c;
            if (local_1c == pSVar9->field_06A6 - 1) {
              uVar18 = pSVar9->field_069E % pSVar9->field_06A2;
            }
            else {
              uVar18 = pSVar9->field_06A2;
            }
            local_34 = (int *)(uVar18 + 0x1c);
            local_38 = (uint *)Library::DKW::LIB::FUN_006aac70((int)local_34);
            piVar23 = local_10;
            *local_38 = DAT_008087be;
            local_38[1] = local_1c;
            local_38[2] = this_00->field_1A5B->field_06A6;
            local_38[3] = this_00->field_1A5B->field_069E;
            local_38[4] = this_00->field_1A5B->field_06AE;
            local_38[5] = this_00->field_1A5B->field_06B2;
            local_38[6] = this_00->field_1A5B->field_06A2;
            puVar8 = (uint *)(this_00->field_1A5B->field_06A2 * local_1c +
                             (int)this_00->field_1A5B->field_069A);
            puVar24 = local_38 + 7;
            memmove(puVar24, puVar8, uVar18); /* compiler REP MOVS byte copy */
            FUN_00715360(g_int_00811764,*local_10,'&',(char *)local_38,(uint)local_34,1,0xffffffff);
            FreeAndNull(&local_38);
            *(undefined1 *)(local_1c + local_68) = 0;
            iVar6 = piVar23[1] + -1;
            piVar23[1] = iVar6;
            if (iVar6 == 0) {
              FreeAndNull((void **)local_60);
              DArrayRemoveAt((DArrayTy *)this_00->field_2237,this_00->field_223B);
            }
          }
LAB_005cf5bf:
          uVar18 = this_00->field_223B + 1;
          this_00->field_223B = uVar18;
          if (this_00->field_2237->count <= uVar18) {
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
  if (pSVar9->field_06A6 <= local_1c) goto LAB_005cf5bf;
  goto LAB_005cf496;
}

