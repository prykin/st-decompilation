#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::NoneSettMap

   [STSwitchEnumApplier] Switch target field_1E26 uses
   /SubmarineTitans/Recovered/Enums/SettMapMTy_field_1E26State. Cases:
   CASE_4=4;CASE_5=5;CASE_7=7;CASE_C=12;CASE_F=15;CASE_10=16;CASE_13=19
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined4
   __thiscall NoneSettMap(SettMapMTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005CF5F9 RET | 005CF642 RET */

undefined4 __thiscall SettMapMTy::NoneSettMap(SettMapMTy *this)

{
  byte bVar1;
  AnonShape_005DE670_0D4D7A8C *pAVar2;
  SettMapMTy_field_2237DArray *pSVar3;
  char cVar5;
  char cVar6;
  SettMapMTy *this_00;
  int local_EAX_65;
  int iVar6;
  int iVar7;
  char *pcVar8;
  SettMapMTy_field_1F84Element *element_1f84;
  SettMapMTy_field_1F84Element *element_1f84_2;
  SettMapMTy_field_1F84Element *element_1f84_3;
  uint *puVar9;
  AnonShape_005D4990_5F0525CF *pAVar10;
  StartSystemTy *pSVar11;
  SettMapMTy_field_1F84Element *pSVar12;
  SettMapMTy_field_1F84DArray *pSVar13;
  DArrayTy *pDVar14;
  SettMapMTyVTable *pSVar15;
  int iVar16;
  uint uVar16;
  int iVar17;
  void *pvVar18;
  STMessage *pSVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  AnonShape_005CE0E0_C50CCD71 *pAVar23;
  byte *pbVar24;
  byte *puVar25;
  int *piVar26;
  uint *puVar27;
  bool bVar28;
  char cVar29;
  InternalExceptionFrame local_148;
  char local_104 [2];
  undefined1 local_102;
  undefined4 local_f2;
  int local_e6;
  undefined4 local_e2;
  STMessage local_dc;
  STMessage local_bc;
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
  STMessage local_58;
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
  local_c = nullptr;
  local_24 = 0xffffffff;
  local_148.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_148;
  local_5c = this;
  local_EAX_65 = Library::MSVCRT::__setjmp3(local_148.jumpBuffer,0);
  this_00 = local_5c;
  if (local_EAX_65 != 0) {
    g_currentExceptionFrame = local_148.previous;
    iVar16 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x4a9,0,local_EAX_65,
                                "%s","SettMapMTy::NoneSettMap");
    if (iVar16 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_65,0,"E:\\__titans\\Start\\settmobj.cpp",0x4a9);
    return 0;
  }
  /* ST_CALLSITE[005CE138]: CALL 0x00402383; direct=00402383 SettMapTy::NoneSettMap */
  iVar6 = SettMapTy::NoneSettMap((SettMapTy *)local_5c);
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
    iVar7 = this_00->field_0061;
    if (799 < (uint)(iVar7 - this_00->field_220D)) {
      local_f2 = this_00->field_2221;
      local_e2 = this_00->field_2211;
      local_102 = 4;
      local_e6 = iVar7;
      FUN_006b6500(g_int_00811764,0);
      FUN_00715360(g_int_00811764,1,'\x1a',local_104,0x26,1,0xffffffff);
      FUN_006b6500(g_int_00811764,DAT_0080733c);
      this_00->field_2221 = this_00->field_2221 + 1;
      iVar7 = this_00->field_0061;
      this_00->field_220D = iVar7;
    }
    if (((local_30 == 0) && (60000 < (uint)(iVar7 - this_00->field_2209))) &&
       (this_00->field_2225 == '\0')) {
      this_00->field_2225 = 1;
      pSVar19 = &local_dc;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        pSVar19->unknown_00 = 0;
        pSVar19 = (STMessage *)&pSVar19->unknown_04;
      }
      pSVar11 = this_00->array_00BC[0xc].field_01DB;
      local_dc.id = (-(uint)(DAT_008067a0 != '\0') & 4) + MESS_WAITTY_694D;
      if (pSVar11->field_02E6 == nullptr) {
        /* ST_CALLSITE[005CE379]: CALL dword ptr [EDX] */
        this_00->GetMessage(&local_dc);
      }
      else {
        local_dc.unknown_08 = this_00->field_0008;
        local_dc.unknown_0c = 2;
        /* ST_CALLSITE[005CE367]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
        MMsgTy::SetMessage(pSVar11->field_02E6,0x2522,'\0',&local_dc.unknown_00,nullptr,
                           nullptr,0,0);
      }
    }
  }
  else if ((this_00->field_222E != '\0') &&
          (29999 < (uint)(this_00->field_0061 - this_00->field_2233))) {
    this_00->field_222E = 0;
    /* ST_CALLSITE[005CE241]: CALL 0x0040471e; direct=0040471E SettMapMTy::RunGame */
    RunGame(this_00);
  }
  local_1c = 0;
  if (0 < local_30) {
    do {
      iVar7 = Library::Ourlib::CONNECT::FUN_00715630
                        (g_int_00811764,-1,&local_28,(int *)&local_18,&local_c,&local_2c,-1,0);
      if ((iVar7 == 1) && (local_28 == 0x1b)) {
        /* ST_CALLSITE[005CE3C5]: CALL 0x00402bbc; direct=00402BBC StartSystemTy::AddToChat */
        StartSystemTy::AddToChat(this_00->array_00BC[0xc].field_01DB,(int)local_c);
      }
      pAVar23 = local_c;
      if (DAT_0080877e == '\0') {
        pSVar19 = &local_58;
        for (iVar17 = 8; pAVar23 = local_c, iVar17 != 0; iVar17 = iVar17 + -1) {
          pSVar19->unknown_00 = 0;
          pSVar19 = (STMessage *)&pSVar19->unknown_04;
        }
        if (iVar7 == -0x4d) {
          this_00->field_2225 = 1;
          local_58.id = (-(uint)(DAT_008067a0 != '\0') & 4) + MESS_WAITTY_694D;
          pSVar11 = this_00->array_00BC[0xc].field_01DB;
          if (pSVar11->field_02E6 == nullptr) {
            pSVar15 = this_00->vtable;
            pSVar19 = &local_58;
            goto LAB_005cf387;
          }
          local_58.unknown_08 = this_00->field_0008;
          local_58.unknown_0c = 2;
          pSVar19 = &local_58;
LAB_005ce9b2:
          /* ST_CALLSITE[005CE9C0]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
          MMsgTy::SetMessage(pSVar11->field_02E6,0x2522,'\0',&pSVar19->unknown_00,nullptr,
                             nullptr,0,0);
        }
        else {
          if (iVar7 != 1) goto cf_continue_loop_005CF38C;
          iVar7 = this_00->field_0061;
          this_00->field_2209 = iVar7;
          switch(local_28) {
          case 0x10:
            if (this_00->field_0065 == '\x01') {
              pSVar11 = this_00->array_00BC[0xc].field_01DB;
              local_58.id = (-(uint)(DAT_008067a0 != '\0') & 4) + MESS_WAITTY_694D;
              if (pSVar11->field_02E6 == nullptr) goto LAB_005cee1a;
              local_58.unknown_08 = this_00->field_0008;
              local_58.unknown_0c = 2;
              /* ST_CALLSITE[005CEE8F]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
              MMsgTy::SetMessage(pSVar11->field_02E6,0x2524,'\0',&local_58.unknown_00,
                                 nullptr,nullptr,0,0);
            }
            break;
          case 0x12:
            if (this_00->field_0065 == '\x01') {
              local_58.id = 0x694f;
LAB_005cee1a:
              /* ST_CALLSITE[005CEE22]: CALL dword ptr [EAX] */
              this_00->GetMessage(&local_58);
            }
            break;
          case 0x1a:
          case 0x2d:
            pcVar8 = &local_c->field_0002;
            if ((local_c->field_0002 == '\x03') && (this_00->field_0065 == '\x01')) {
              local_58.id = 0x694f;
              /* ST_CALLSITE[005CEA4B]: CALL dword ptr [EDX] */
              this_00->GetMessage(&local_58);
            }
            else {
              if (local_c->field_0002 == '\x01') {
                bVar1 = local_c->field_000B;
                if (bVar1 == 1) {
                  if (this_00->field_0065 == '\x01') {
                    if ((local_c->field_0003 == DAT_00809958) ||
                       ((uint)(iVar7 - this_00->field_2215) < 3000)) {
                      if ((local_c->field_0016 != DAT_00808aab) &&
                         (2999 < (uint)(iVar7 - this_00->field_2219))) {
                        FUN_006b6500(g_int_00811764,1);
                        FUN_00715360(g_int_00811764,1,'\x1d',nullptr,0,0,0xffffffff);
                        FUN_006b6500(g_int_00811764,DAT_0080733c);
                        iVar7 = this_00->field_0061;
                        this_00->field_2219 = iVar7;
                      }
                      if (((this_00->field_1F84 != nullptr) &&
                          (*(int *)&pAVar23->field_0x1a != this_00->field_2121)) &&
                         (1999 < (uint)(iVar7 - this_00->field_221D))) {
                        FUN_006b6500(g_int_00811764,1);
                        FUN_00715360(g_int_00811764,1,'#',nullptr,0,0,0xffffffff);
                        FUN_006b6500(g_int_00811764,DAT_0080733c);
                        this_00->field_221D = this_00->field_0061;
                      }
                    }
                    else {
                      FUN_006b6500(g_int_00811764,1);
                      FUN_00715360(g_int_00811764,1,'!',nullptr,0,0,0xffffffff);
                      FUN_00715360(g_int_00811764,1,'\x1f',nullptr,0,0,0xffffffff);
                      FUN_006b6500(g_int_00811764,DAT_0080733c);
                      this_00->field_2215 = this_00->field_0061;
                    }
                  }
                }
                else if ((1 < bVar1) && (bVar1 < 6)) {
                  if ((local_c->field_0016 != DAT_00808aab) &&
                     (2999 < (uint)(iVar7 - this_00->field_2219))) {
                    FUN_006b6500(g_int_00811764,1);
                    FUN_00715360(g_int_00811764,1,'\x1d',nullptr,0,0,0xffffffff);
                    FUN_006b6500(g_int_00811764,DAT_0080733c);
                    iVar7 = this_00->field_0061;
                    this_00->field_2219 = iVar7;
                  }
                  if (this_00->field_1F84 != nullptr) {
                    if ((*(int *)&pAVar23->field_0x1a != this_00->field_2121) &&
                       (1999 < (uint)(iVar7 - this_00->field_221D))) {
                      FUN_006b6500(g_int_00811764,1);
                      FUN_00715360(g_int_00811764,1,'#',nullptr,0,0,0xffffffff);
                      FUN_006b6500(g_int_00811764,DAT_0080733c);
                      iVar7 = this_00->field_0061;
                      this_00->field_221D = iVar7;
                    }
                    if ((this_00->field_1F84 != nullptr) &&
                       (1999 < (uint)(iVar7 - this_00->field_221D))) {
                      /* ST_CALLSITE[005CEB78]: CALL 0x004046a1; direct=004046A1 SettMapMTy::AddPlList */
                      AddPlList(this_00,(uint)(this_00->field_1E26 == CASE_10));
                    }
                  }
                }
              }
              iVar7 = this_00->field_0061 - pAVar23->field_001E;
              this_00->field_2211 = iVar7;
              /* ST_CALLSITE[005CECEA]: CALL 0x00404a84; direct=00404A84 SettMapMTy::UpdatePing */
              UpdatePing(this_00,DAT_0080877f,iVar7);
              if ((((((*pcVar8 == '\x02') && (this_00->field_0065 == '\x01')) &&
                    (pAVar23->field_0003 == DAT_008087be)) &&
                   ((this_00->field_1E26 != 0xe || (pAVar23->field_0003 == DAT_00809958)))) &&
                  (pAVar23->field_0016 == DAT_00808aab)) &&
                 (*(int *)&pAVar23->field_0x1a == this_00->field_2121)) {
                local_5 = '\0';
                this_00->field_002D = 0x10003;
                FUN_006e6080(this_00,3,0x100ef,(undefined4 *)&this_00->field_0x1d);
                DAT_0080733b = pAVar23->field_0xc;
                DAT_00808754 = *(undefined4 *)&pAVar23->field_0xe;
                pSVar13 = this_00->field_1F84;
                uVar20 = 0;
                uVar21 = pSVar13->count;
                local_1c = 0;
                if (0 < (int)uVar21) {
                  bVar28 = uVar21 != 0;
                  do {
                    if (bVar28) {
                      element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar13, uVar20);
                    }
                    else {
                      element_1f84 = nullptr;
                    }
                    if (((element_1f84 != nullptr) && ((element_1f84->field_0004 == '\x02' || (element_1f84->field_0004 == '\x03')))
                        ) && (element_1f84->element == DAT_0080877f)) {
                      local_5 = '\x01';
                      local_1c = uVar20;
                      break;
                    }
                    uVar20 = uVar20 + 1;
                    bVar28 = uVar20 < uVar21;
                    local_1c = uVar20;
                  } while ((int)uVar20 < (int)uVar21);
                }
                if (local_5 == '\0') {
                  this_00->field_002D = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
                  /* ST_CALLSITE[005CEE09]: CALL dword ptr [EDX] */
                  this_00->GetMessage((STMessage *)&this_00->field_0x1d);
                }
                else {
                  this_00->field_002D = 0x694a;
                  this_00->field_0031 = 1;
                  /* ST_CALLSITE[005CEDE7]: CALL dword ptr [EDX] */
                  this_00->GetMessage((STMessage *)&this_00->field_0x1d);
                }
              }
            }
            break;
          case 0x1c:
            if (DAT_00808aab != *(uint *)&local_c[2].field_0x1c) {
              local_5 = DAT_00808a8f != ((char *)local_c)[2];
              iVar7 = 0x10;
              bVar28 = true;
              pbVar22 = g_playerRelationMatrix[0];
              piVar26 = (int *)&local_c->field_0x10;
              do {
                if (iVar7 == 0) break;
                iVar7 = iVar7 + -1;
                bVar28 = *(int *)pbVar22 == *piVar26;
                pbVar22 = pbVar22 + 4;
                piVar26 = piVar26 + 1;
              } while (bVar28);
              local_11 = !bVar28;
              thunk_FUN_00571a30((AnonShape_00571A30_8BA8841B *)&DAT_008087b6,
                                 (AnonShape_00571A30_67EE4B56 *)local_c,'\x01');
              DAT_0080734b = DAT_00808aa8;
              local_34 = (int *)PTR_0080c502->count;
              local_10 = nullptr;
              if (0 < (int)local_34) {
                bVar28 = local_34 != nullptr;
                do {
                  if (bVar28) {
                    pvVar18 = DArrayAt<void>(PTR_0080c502, (int)local_10);
                  }
                  else {
                    pvVar18 = nullptr;
                  }
                  if ((pvVar18 != nullptr) && (STField<uint>(pvVar18,0x90) == DAT_0080995c))
                  {
                    pbVar24 = &DAT_00809960;
                    pbVar22 = (byte *)((int)pvVar18 + 0x4c);
                    do {
                      bVar1 = *pbVar22;
                      bVar28 = bVar1 < *pbVar24;
                      if (bVar1 != *pbVar24) {
LAB_005cef58:
                        iVar7 = (1 - (uint)bVar28) - (uint)(bVar28 != 0);
                        goto LAB_005cef5d;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar22[1];
                      bVar28 = bVar1 < pbVar24[1];
                      if (bVar1 != pbVar24[1]) goto LAB_005cef58;
                      pbVar22 = pbVar22 + 2;
                      pbVar24 = pbVar24 + 2;
                    } while (bVar1 != 0);
                    iVar7 = 0;
LAB_005cef5d:
                    if (iVar7 == 0) {
                      this_00->field_1C5F = (uint)local_10;
                      /* ST_CALLSITE[005CEF98]: CALL 0x00402bf3; direct=00402BF3 StartSystemTy::SetObjectives */
                      StartSystemTy::SetObjectives
                                (g_startSystem_0081176C,(int)this_00->field_1F43,
                                 (char *)((int)pvVar18 + 0x70),this_00->field_1C63);
                      break;
                    }
                  }
                  local_10 = (int *)((int)local_10 + 1);
                  bVar28 = local_10 < local_34;
                } while ((int)local_10 < (int)local_34);
              }
              puVar9 = this_00->field_2125;
              iVar7 = 0xe;
              do {
                if (*puVar9 != 0) {
                  this_00->field_002D = 5;
                  FUN_006e6080(this_00,2,*puVar9,(undefined4 *)&this_00->field_0x1d);
                }
                puVar9 = puVar9 + 1;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
              /* ST_CALLSITE[005CEFD5]: CALL dword ptr [EAX + 0x2c] */
              if (((local_5 == '\0') || (this_00->SetListCtrls(), local_5 == '\0')
                  ) && (local_11 != '\0')) {
                puVar9 = this_00->field_1F8C;
                local_10 = (int *)0xa;
                do {
                  iVar7 = 8;
                  do {
                    if (*puVar9 != 0) {
                      this_00->field_002D = 5;
                      FUN_006e6080(this_00,2,*puVar9,(undefined4 *)&this_00->field_0x1d);
                    }
                    puVar9 = puVar9 + 1;
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                  local_10 = (int *)((int)local_10 + -1);
                } while (local_10 != nullptr);
              }
              /* ST_CALLSITE[005CF025]: CALL 0x00402a9a; direct=00402A9A SettMapTy::PaintSC */
              SettMapTy::PaintSC((SettMapTy *)this_00);
            }
            break;
          case 0x1e:
            if ((DAT_00809958 != *(uint *)local_c) && (this_00->field_0065 == '\x01')) {
              puVar25 = (byte *)(&DAT_00853de0);
              memmove(puVar25, pAVar23, 0x232); /* compiler REP MOVS byte copy */
              pAVar23 = pAVar23 + 0xe;
              thunk_FUN_005c7800();
            }
            break;
          case 0x20:
            iVar7 = 0xd;
            bVar28 = true;
            pcVar8 = (char *)&this_00->field_1F53;
            do {
              if (iVar7 == 0) break;
              iVar7 = iVar7 + -1;
              bVar28 = *pcVar8 == *(char *)pAVar23;
              pcVar8 = pcVar8 + 1;
              pAVar23 = (AnonShape_005CE0E0_C50CCD71 *)&pAVar23->field_0x1;
            } while (bVar28);
            if (!bVar28) {
              iVar7 = 6;
              this_00->field_1F53 = *(undefined4 *)local_c;
              *(undefined4 *)&this_00->field_0x1f57 = *(undefined4 *)((int)&local_c->field_0003 + 1);
              bVar1 = local_c->field_000B;
              *(undefined3 *)&this_00->field_0x1f5b = *(undefined3 *)&local_c->field_0x8;
              this_00->field_0x1f5e = bVar1;
              this_00->field_1F5F = local_c->field_0xc;
              piVar26 = &this_00->field_1F60;
              do {
                if (*piVar26 != 0) {
                  this_00->field_002D = 5;
                  FUN_006e6080(this_00,2,*piVar26,(undefined4 *)&this_00->field_0x1d);
                }
                piVar26 = piVar26 + 1;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
              FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1F80);
            }
            break;
          case 0x22:
            if (((this_00->field_1F84 != nullptr) &&
                (this_00->field_2121 != *(int *)local_c)) &&
               (DAT_00808aab == *(uint *)((int)&local_c->field_0003 + 1))) {
              local_10 = (int *)(local_2c - 9);
              if (-1 < (int)local_10) {
                this_00->field_002D = 0x10003;
                FUN_006e6080(this_00,3,0x100ef,(undefined4 *)&this_00->field_0x1d);
                uVar21 = 0;
                this_00->field_2121 = *(undefined4 *)local_c;
                local_11 = pAVar23->field_0x8;
                pSVar13 = this_00->field_1F84;
                if (0 < (int)pSVar13->count) {
                  bVar28 = pSVar13->count != 0;
                  do {
                    if (bVar28) {
                      element_1f84_2 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar13, uVar21);
                    }
                    else {
                      element_1f84_2 = nullptr;
                    }
                    if ((element_1f84_2 != nullptr) &&
                       (element_1f84_2->handle != nullptr)) {
                      DArrayDestroy(element_1f84_2->handle);
                    }
                    pSVar13 = this_00->field_1F84;
                    uVar21 = uVar21 + 1;
                    bVar28 = uVar21 < pSVar13->count;
                  } while ((int)uVar21 < (int)pSVar13->count);
                }
                pSVar13 = this_00->field_1F84;
                piVar26 = (int *)(local_2c / 0x60);
                local_34 = piVar26;
                if ((int)(pSVar13->count * pSVar13->elementSize) < (int)local_10) {
                  pSVar12 = Library::DKW::LIB::MemRealloc(pSVar13->data,(uint)local_10);
                  this_00->field_1F84->data = pSVar12;
                  this_00->field_1F84->capacity = (dword)piVar26;
                }
                pcVar8 = &pAVar23->field_0x9;
                pSVar12 = this_00->field_1F84->data;
                for (uVar21 = (uint)local_10 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                  cVar29 = pcVar8[1];
                  cVar5 = pcVar8[2];
                  cVar6 = pcVar8[3];
                  pSVar12->field_0000 = pcVar8[0];
                  pSVar12->field_0001 = cVar29;
                  pSVar12->state = cVar5;
                  pSVar12->field_0003 = cVar6;
                  pcVar8 = pcVar8 + 4;
                  pSVar12 = (SettMapMTy_field_1F84Element *)&pSVar12->field_0004;
                }
                for (uVar21 = (uint)local_10 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                  pSVar12->field_0000 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                  pSVar12 = (SettMapMTy_field_1F84Element *)&pSVar12->field_0001;
                }
                uVar21 = 0;
                this_00->field_1F84->count = (dword)local_34;
                pSVar13 = this_00->field_1F84;
                if (0 < (int)pSVar13->count) {
                  bVar28 = pSVar13->count != 0;
                  do {
                    if (bVar28) {
                      element_1f84_3 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar13, uVar21);
                    }
                    else {
                      element_1f84_3 = nullptr;
                    }
                    if (element_1f84_3 != nullptr) {
                      if ((local_11 == '\x05') || (this_00->field_1E26 == CASE_F)) {
                        pDVar14 = (DArrayTy *)
                                  /* ST_CALLSITE[005CF275]: CALL 0x0040466a; direct=0040466A CreateStrategList */
                                  CreateStrategList((int)this_00->field_1F3F,(uint)(byte)element_1f84_3->state,
                                                    0xffffffff);
                      }
                      else if ((local_11 == '\f') || (this_00->field_1E26 == CASE_10)) {
                        pDVar14 = (DArrayTy *)
                                  /* ST_CALLSITE[005CF25F]: CALL 0x00401dbb; direct=00401DBB CreateSaveStrategList */
                                  CreateSaveStrategList
                                            ((int)this_00->field_1F3F,(uint)(byte)element_1f84_3->state,
                                             0xffffffff);
                      }
                      else {
                        pDVar14 = (DArrayTy *)
                                  /* ST_CALLSITE[005CF249]: CALL 0x00403f44; direct=00403F44 CreateOpponentList */
                                  CreateOpponentList(this_00->field_1F43,(uint)(byte)element_1f84_3->field_0003,
                                                     DAT_0080995c);
                      }
                      element_1f84_3->handle = pDVar14;
                    }
                    pSVar13 = this_00->field_1F84;
                    uVar21 = uVar21 + 1;
                    bVar28 = uVar21 < pSVar13->count;
                  } while ((int)uVar21 < (int)pSVar13->count);
                }
              }
              if (this_00->field_1E26 != CASE_10) {
                /* ST_CALLSITE[005CF29D]: CALL 0x00405b7d; direct=00405B7D SettMapMTy::sub_005D1380 */
                sub_005D1380(this_00);
              }
              /* ST_CALLSITE[005CF2A6]: CALL dword ptr [EAX + 0x2c] */
              this_00->SetListCtrls();
              /* ST_CALLSITE[005CF2AB]: CALL 0x00402a9a; direct=00402A9A SettMapTy::PaintSC */
              SettMapTy::PaintSC((SettMapTy *)this_00);
            }
            /* ST_CALLSITE[005CF2C1]: CALL 0x004046a1; direct=004046A1 SettMapMTy::AddPlList */
            AddPlList(this_00,(uint)(this_00->field_1E26 == CASE_10));
            break;
          case 0x31:
          case 0x33:
          case 0x35:
            if (this_00->field_2225 == '\0') {
              this_00->field_2225 = 1;
              pSVar11 = this_00->array_00BC[0xc].field_01DB;
              local_58.id = (-(uint)(DAT_008067a0 != '\0') & 4) + MESS_WAITTY_694D;
              if (pSVar11->field_02E6 == nullptr) goto LAB_005cee1a;
              local_58.unknown_08 = this_00->field_0008;
              local_58.unknown_0c = 2;
              /* ST_CALLSITE[005CF330]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
              MMsgTy::SetMessage(pSVar11->field_02E6,0x2522,'\0',&local_58.unknown_00,
                                 nullptr,nullptr,0,0);
            }
          }
          if (local_c != nullptr) {
            FreeAndNull(&local_c);
          }
        }
        goto cf_continue_loop_005CF38C;
      }
      if (iVar7 == -0x4d) {
        this_00->field_2225 = 1;
        pSVar19 = &local_bc;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          pSVar19->unknown_00 = 0;
          pSVar19 = (STMessage *)&pSVar19->unknown_04;
        }
        pSVar11 = this_00->array_00BC[0xc].field_01DB;
        if (pSVar11->field_02E6 != nullptr) {
          local_bc.unknown_08 = this_00->field_0008;
          local_bc.unknown_0c = 2;
          local_bc.id = MESS_MAINMENUTY_6944|MESS_SHARED_0003;
          pSVar19 = &local_bc;
          goto LAB_005ce9b2;
        }
        pSVar15 = this_00->vtable;
        local_bc.id = MESS_MAINMENUTY_6944|MESS_SHARED_0003;
        pSVar19 = &local_bc;
LAB_005cf387:
        /* ST_CALLSITE[005CF38A]: CALL dword ptr [EAX] */
        (*pSVar15->GetMessage)(this_00,pSVar19);
        goto cf_continue_loop_005CF38C;
      }
      if (iVar7 != 1) goto cf_continue_loop_005CF38C;
      switch(local_28) {
      case 0x11:
        /* ST_CALLSITE[005CE54C]: CALL 0x0040495d; direct=0040495D SettMapMTy::DeletePlayer */
        DeletePlayer(this_00,local_18);
        /* ST_CALLSITE[005CE553]: CALL 0x004035c6; direct=004035C6 SettMapMTy::CheckPlList */
        CheckPlList(this_00);
        /* ST_CALLSITE[005CE55C]: CALL dword ptr [EDX + 0x2c] */
        this_00->SetListCtrls();
        /* ST_CALLSITE[005CE561]: CALL 0x00402a9a; direct=00402A9A SettMapTy::PaintSC */
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
          puVar25 = (byte *)(&local_c->field_0022);
          local_72 = local_c->field_001E;
          FUN_006b6500(g_int_00811764,0);
          FUN_00715360(g_int_00811764,local_18,'\x1a',(char *)&local_90,0x26,1,0xffffffff);
          FUN_006b6500(g_int_00811764,DAT_0080733c);
          /* ST_CALLSITE[005CE53C]: CALL 0x00404a84; direct=00404A84 SettMapMTy::UpdatePing */
          UpdatePing(this_00,local_18,*puVar25);
        }
        break;
      case 0x1d:
        /* ST_CALLSITE[005CE585]: CALL 0x00404a89; direct=00404A89 SettMapMTy::SendDesc */
        SendDesc(this_00,local_18);
        break;
      case 0x1f:
        uVar21 = 0x232;
        pcVar8 = (char *)&DAT_00853de0;
        cVar29 = '\x1e';
        goto LAB_005ce59f;
      case 0x21:
        pcVar8 = (char *)&this_00->field_1F53;
        uVar21 = 0xd;
        cVar29 = ' ';
LAB_005ce59f:
        FUN_00715360(g_int_00811764,local_18,cVar29,pcVar8,uVar21,1,0xffffffff);
        break;
      case 0x23:
        local_24 = (local_24 != 0xffffffff) - 1 & local_18;
        break;
      case 0x24:
        if (local_c != nullptr) {
          pSVar13 = this_00->field_1F84;
          if ((pSVar13 == nullptr) ||
             (pSVar13->count <= *(uint *)local_c)) {
            pcVar8 = nullptr;
          }
          else {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar8 = &pSVar13->data->field_0000 + pSVar13->elementSize * *(uint *)local_c;
          }
          if (pcVar8 != nullptr) {
            local_10 = (int *)((int)&local_c->field_0003 + 1);
            iVar7 = *local_10;
            if ((-1 < iVar7) && ((iVar7 < 4 || (iVar7 == 7)))) {
              local_24 = 0;
            }
            this_00->field_002D = 0x10003;
            FUN_006e6080(this_00,3,0x100ef,(undefined4 *)&this_00->field_0x1d);
            switch(*local_10) {
            case 0:
              /* ST_CALLSITE[005CE669]: CALL 0x00405407; direct=00405407 SettMapMTy::ChangePlayerState */
              ChangePlayerState(this_00,*(uint *)pAVar23);
              break;
            case 1:
              /* ST_CALLSITE[005CE67C]: CALL 0x00405b46; direct=00405B46 SettMapMTy::ChangePlayerColor */
              ChangePlayerColor(this_00,*(uint *)pAVar23,(char)*(undefined4 *)&pAVar23->field_0x8);
              break;
            case 2:
              /* ST_CALLSITE[005CE68F]: CALL 0x004041a6; direct=004041A6 SettMapMTy::ChangePlayerCiv */
              ChangePlayerCiv(this_00,*(uint *)pAVar23,(char)*(undefined4 *)&pAVar23->field_0x8);
              break;
            case 3:
              /* ST_CALLSITE[005CE6AE]: CALL 0x00401bdb; direct=00401BDB SettMapMTy::ChangePlayerList */
              ChangePlayerList(this_00,local_18,*(uint *)pAVar23,*(int *)&pAVar23->field_0x8,
                               (char)*(undefined4 *)&pAVar23->field_0xc,&pAVar23->field_0x10);
              break;
            case 5:
              /* ST_CALLSITE[005CE6C5]: CALL 0x00402068; direct=00402068 SettMapMTy::ChangePlayerTeam */
              ChangePlayerTeam(this_00,*(uint *)pAVar23,*(uint *)&pAVar23->field_0x8,
                               *(uint *)&pAVar23->field_0xc);
              /* ST_CALLSITE[005CE6CE]: CALL 0x00404a89; direct=00404A89 SettMapMTy::SendDesc */
              SendDesc(this_00,0);
              break;
            case 7:
              puVar9 = this_00->field_1F8C;
              pcVar8[0x4f] = pAVar23->field_0x8;
              local_10 = (int *)0xa;
              this_00->field_2121 = this_00->field_2121 + 1;
              do {
                iVar7 = 8;
                do {
                  if (*puVar9 != 0) {
                    this_00->field_002D = 5;
                    FUN_006e6080(this_00,2,*puVar9,(undefined4 *)&this_00->field_0x1d);
                  }
                  puVar9 = puVar9 + 1;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
                local_10 = (int *)((int)local_10 + -1);
              } while (local_10 != nullptr);
              local_10 = nullptr;
            }
          }
        }
        break;
      case 0x25:
        if (local_c == nullptr) goto cf_continue_loop_005CF38C;
        if (((3 < local_2c) && (DAT_00807361 != '\0')) && (this_00->field_2243 != '\0')) {
          pAVar2 = (AnonShape_005DE670_0D4D7A8C *)this_00->array_00BC[0xc].field_01DB;
          if ((pAVar2->field_069A == (LPVOID)0x0) &&
             (thunk_FUN_005de670(pAVar2),
             (this_00->array_00BC[0xc].field_01DB)->field_069A == nullptr)) {
            this_00->field_2243 = 0;
          }
          else {
            pSVar3 = this_00->field_2237;
            bVar28 = false;
            uVar20 = 0;
            local_10 = nullptr;
            uVar21 = pSVar3->count;
            if (uVar21 != 0) {
              if (uVar21 == 0) {
                pAVar10 = nullptr;
                goto LAB_005ce8db;
              }
              do {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                pAVar10 = (AnonShape_005D4990_5F0525CF *)
                          ((int)&pSVar3->data->field_0000 + pSVar3->elementSize * uVar20);
LAB_005ce8db:
                if ((pAVar10 != nullptr) &&
                   (pAVar10->field_0000 == local_18)) {
                  /* ST_CALLSITE[005CE8F4]: CALL 0x0040393b; direct=0040393B SettMapMTy::PrepareAFT */
                  PrepareAFT(this_00,pAVar10,(uint *)local_c);
                  bVar28 = true;
                  goto LAB_005ce8fe;
                }
                uVar20 = uVar20 + 1;
              } while (uVar20 < uVar21);
              bVar28 = false;
            }
LAB_005ce8fe:
            if (!bVar28) {
              local_9c.field_0000 = local_18;
              local_9c.field_0008 =
                   Library::DKW::LIB::MemAlloc
                             (*(uint *)&(this_00->array_00BC[0xc].field_01DB)->field_0x6a6);
              /* ST_CALLSITE[005CE930]: CALL 0x0040393b; direct=0040393B SettMapMTy::PrepareAFT */
              PrepareAFT(this_00,&local_9c,(uint *)local_c);
              Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_2237,&local_9c);
            }
          }
        }
        break;
      case 0x28:
        if (local_c != nullptr) {
          pSVar13 = this_00->field_1F84;
          if ((pSVar13 == nullptr) ||
             (pSVar13->count <= *(uint *)local_c)) {
            pcVar8 = nullptr;
          }
          else {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar8 = &pSVar13->data->field_0000 + pSVar13->elementSize * *(uint *)local_c;
          }
          if ((pcVar8 != nullptr) && (*(int *)((int)&local_c->field_0003 + 1) == 3)) {
            local_24 = 0;
            this_00->field_002D = 0x10003;
            FUN_006e6080(this_00,3,0x100ef,(undefined4 *)&this_00->field_0x1d);
            /* ST_CALLSITE[005CE7A0]: CALL 0x004013a7; direct=004013A7 SettMapMTy::AddPlayerList */
            AddPlayerList(this_00,local_18,*(uint *)pAVar23,*(int *)&pAVar23->field_0x8,
                          &pAVar23->field_0x10);
          }
        }
        break;
      case 0x2e:
        if ((this_00->field_222E != '\0') &&
           (pDVar14 = this_00->field_222F, pDVar14 != nullptr)) {
          uVar21 = pDVar14->count;
          uVar20 = 0;
          local_1c = 0;
          if (0 < (int)uVar21) {
            bVar28 = uVar21 != 0;
            do {
              if (bVar28) {
                puVar9 = DArrayAt<uint>(pDVar14, uVar20);
              }
              else {
                puVar9 = nullptr;
              }
              if ((puVar9 != nullptr) && (*puVar9 == local_18)) {
                local_1c = uVar20;
                DArrayRemoveAt(pDVar14,uVar20);
                break;
              }
              uVar20 = uVar20 + 1;
              bVar28 = uVar20 < uVar21;
              local_1c = uVar20;
            } while ((int)uVar20 < (int)uVar21);
          }
          if (this_00->field_222F->count == 0) {
            this_00->field_222E = 0;
            /* ST_CALLSITE[005CE81C]: CALL 0x0040471e; direct=0040471E SettMapMTy::RunGame */
            RunGame(this_00);
            if (DAT_008067a0 != '\0') {
              /* ST_CALLSITE[005CE83C]: CALL dword ptr [0x0085c070] */
              CFsgsConnection::UpdateGame
                        ((CFsgsConnection *)&DAT_00802a90,6,&this_00->array_00BC[0xc].field_0x1df);
              /* ST_CALLSITE[005CE847]: CALL dword ptr [0x0085c078] */
              CFsgsConnection::StartGame((CFsgsConnection *)&DAT_00802a90);
            }
          }
        }
      }
      if (local_c != nullptr) {
        FreeAndNull(&local_c);
      }
cf_continue_loop_005CF38C:
      local_1c = local_1c + 1;
    } while ((int)local_1c < local_30);
  }
  if (DAT_0080877e != '\0') {
    if (local_24 != 0xffffffff) {
      /* ST_CALLSITE[005CF3B6]: CALL 0x00403ad5; direct=00403AD5 SettMapMTy::SendPlList */
      SendPlList(this_00,local_24);
    }
    if ((this_00->field_223B < this_00->field_2237->count) &&
       (pSVar11 = this_00->array_00BC[0xc].field_01DB, pSVar11->field_069A != nullptr)) {
      if (this_00->field_223F == 0) {
        this_00->field_223F = *(undefined4 *)&pSVar11->field_0x6aa;
      }
      else {
        this_00->field_223F = this_00->field_223F + -1;
      }
      /* ST_CALLSITE[005CF41F]: CALL dword ptr [ECX + 0xc8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar7 = (**(code **)(*(int *)*g_int_00811764 + 200))
                        ((int *)*g_int_00811764,DAT_0080877f,0,1,0,&local_64);
      if (((iVar7 == 0) && (local_64 < 0x400)) && (this_00->field_223F == 0)) {
        pSVar3 = this_00->field_2237;
        if (this_00->field_223B < pSVar3->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          local_10 = (int *)((int)&pSVar3->data->field_0000 +
                            pSVar3->elementSize * this_00->field_223B);
        }
        else {
          local_10 = nullptr;
        }
        if (local_10 != nullptr) {
          pSVar11 = this_00->array_00BC[0xc].field_01DB;
          local_68 = local_10[2];
          local_60 = local_10 + 2;
          local_1c = 0;
          if (*(uint *)&pSVar11->field_0x6a6 != 0) {
LAB_005cf496:
            if (*(char *)(local_1c + local_68) == '\0') goto code_r0x005cf49c;
            if (local_1c == *(int *)&pSVar11->field_0x6a6 - 1U) {
              uVar21 = pSVar11->field_069E % *(uint *)&pSVar11->field_0x6a2;
            }
            else {
              uVar21 = *(uint *)&pSVar11->field_0x6a2;
            }
            local_34 = (int *)(uVar21 + 0x1c);
            local_38 = Library::DKW::LIB::MemAlloc((uint)local_34);
            piVar26 = local_10;
            *local_38 = DAT_008087be;
            local_38[1] = local_1c;
            local_38[2] = *(uint *)&(this_00->array_00BC[0xc].field_01DB)->field_0x6a6;
            local_38[3] = (this_00->array_00BC[0xc].field_01DB)->field_069E;
            local_38[4] = (this_00->array_00BC[0xc].field_01DB)->field_06AE;
            local_38[5] = (this_00->array_00BC[0xc].field_01DB)->field_06B2;
            local_38[6] = *(uint *)&(this_00->array_00BC[0xc].field_01DB)->field_0x6a2;
            pSVar11 = this_00->array_00BC[0xc].field_01DB;
            puVar9 = (uint *)(*(int *)&pSVar11->field_0x6a2 * local_1c + (int)pSVar11->field_069A);
            puVar27 = local_38 + 7;
            memmove(puVar27, puVar9, uVar21); /* compiler REP MOVS byte copy */
            FUN_00715360(g_int_00811764,*local_10,'&',(char *)local_38,(uint)local_34,1,0xffffffff);
            FreeAndNull(&local_38);
            *(undefined1 *)(local_1c + local_68) = 0;
            iVar7 = piVar26[1] + -1;
            piVar26[1] = iVar7;
            if (iVar7 == 0) {
              FreeAndNull(local_60);
              DArrayRemoveAt((DArrayTy *)this_00->field_2237,this_00->field_223B);
            }
          }
LAB_005cf5bf:
          uVar21 = this_00->field_223B + 1;
          this_00->field_223B = uVar21;
          if (this_00->field_2237->count <= uVar21) {
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
  if (*(uint *)&pSVar11->field_0x6a6 <= local_1c) goto LAB_005cf5bf;
  goto LAB_005cf496;
}

