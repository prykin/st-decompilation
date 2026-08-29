#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::InitChooseMap

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21

   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_InitChooseMap_param_2Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_C=12;CASE_14=20 */

void __thiscall
ChooseMapTy::InitChooseMap
          (ChooseMapTy *this,undefined1 param_1,ChooseMapTy_InitChooseMap_param_2Enum param_2)

{
  byte uVar1;
  RecoveredSourceFamily_dibcopy *pRVar2;
  MMsgTy *this_00;
  AnonPointee_ChooseMapTy_1C8B *pAVar3;
  ChooseMapTy *this_01;
  CursorClassTy *this_02;
  int iVar5;
  HANDLE pvVar5;
  ushort *local_EAX_619;
  ushort *puVar7;
  ushort *local_EAX_770;
  uint *puVar6;
  int uVar14;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar7;
  uint *puVar8;
  HoloTy *pHVar9;
  RecoveredRecord_005AACB0_2533FD69 *pRVar10;
  uint uVar13;
  uint local_EAX_2254;
  uint local_EAX_2912;
  int local_EAX_3379;
  int iVar20;
  uint uVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar18;
  byte bVar19;
  char cVar20;
  ushort *puVar21;
  int iVar22;
  uint local_86c [256];
  char local_46c [32];
  byte local_44c;
  uint local_26c [7];
  InternalExceptionFrame local_250;
  uint local_20c;
  uint local_1ff;
  uint local_1fb;
  uint local_1f7;
  uint local_1e5;
  uint local_1d8;
  uint local_1d4;
  uint local_1d0;
  uint local_1be;
  uint local_1b1;
  uint local_1ad;
  uint local_1a9;
  uint local_149;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_122;
  uint local_115;
  uint local_111;
  uint local_10d;
  uint local_109;
  ChooseMapTy *local_10;
  uint local_c;
  uint local_8;
  char *pcVar16;
  char *pcVar17;
  char *temp_3f2c6d1691;
  char *temp_3ff82dc6a0;

  local_250.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_250;
  local_10 = this;

  iVar5 = Library::MSVCRT::__setjmp3(local_250.jumpBuffer,0);
  this_01 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_250.previous;

    iVar20 = ReportDebugMessage("E:\\__titans\\Start\\load_obj.cpp",0x15a,0,iVar5,
                                "%s","ChooseMapTy::InitChooseMap");
    if (iVar20 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\load_obj.cpp",0x15a);
    return;
  }
  local_10->array_00BC[0xc].field_01DF = param_1;
  if (2 < g_startSystem_0081176C->field_02EB) {
    g_startSystem_0081176C->field_02EB = 2;
  }
  _DAT_0080f32e = 0;
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {

      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  uVar11 = 0xffffffff;
  pcVar14 = &this_01->field_1CA3;
  pcVar18 = &CHAR_00h_00807680;
  do {
    pcVar15 = pcVar18;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar15 = pcVar18 + 1;
    cVar20 = *pcVar18;
    pcVar18 = pcVar15;
  } while (cVar20 != '\0');
  uVar11 = ~uVar11;
  pcVar18 = pcVar15 + -uVar11;
  pcVar15 = pcVar14;
  memmove(pcVar15, pcVar18, uVar11); /* compiler REP MOVS byte copy */
  uVar12 = 0;
  switch(this_01->array_00BC[0xc].field_01DF) {
  case 1:
  case 2:
  case 4:
  case 5:
    local_c = 0xffffffff;
    temp_3f2c6d1691 = PTR_s_CUSTOM__0079c050;
    do {
      pcVar18 = temp_3f2c6d1691;
      if (local_c == 0) break;
      local_c = local_c - 1;
      pcVar18 = temp_3f2c6d1691 + 1;
      cVar20 = *temp_3f2c6d1691;
      temp_3f2c6d1691 = pcVar18;
    } while (cVar20 != '\0');
    local_c = ~local_c;
    pcVar18 = pcVar18 + -local_c;
    iVar22 = -1;
    pcVar15 = pcVar14;
    do {
      pcVar14 = pcVar15;
      if (iVar22 == 0) break;
      iVar22 = iVar22 + -1;
      pcVar14 = pcVar15 + 1;
      cVar20 = *pcVar15;
      pcVar15 = pcVar14;
    } while (cVar20 != '\0');
    goto LAB_005ab4dc;
  case 3:
    uVar11 = 0xffffffff;
    temp_3ff82dc6a0 = PTR_s_MISSIONS__0079c054;
    do {
      pcVar18 = temp_3ff82dc6a0;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar18 = temp_3ff82dc6a0 + 1;
      cVar20 = *temp_3ff82dc6a0;
      temp_3ff82dc6a0 = pcVar18;
    } while (cVar20 != '\0');
    uVar11 = ~uVar11;
    iVar22 = -1;
    do {
      pcVar15 = pcVar14;
      if (iVar22 == 0) break;
      iVar22 = iVar22 + -1;
      pcVar15 = pcVar14 + 1;
      cVar20 = *pcVar14;
      pcVar14 = pcVar15;
    } while (cVar20 != '\0');
    pcVar18 = pcVar18 + -uVar11;
    pcVar14 = pcVar15 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar14 = pcVar14 + 4;
    }
    goto LAB_005ab4e5;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
switchD_005ab3e3_caseD_9:
    uVar11 = 0xffffffff;
    pcVar16 = PTR_s_SAVEGAME__0079c04c;
    do {
      pcVar14 = pcVar16;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar14 = pcVar16 + 1;
      cVar20 = *pcVar16;
      pcVar16 = pcVar14;
    } while (cVar20 != '\0');
    uVar11 = ~uVar11;
    iVar22 = -1;
    pcVar18 = &this_01->field_1CA3;
    do {
      pcVar15 = pcVar18;
      if (iVar22 == 0) break;
      iVar22 = iVar22 + -1;
      pcVar15 = pcVar18 + 1;
      cVar20 = *pcVar18;
      pcVar18 = pcVar15;
    } while (cVar20 != '\0');
    pcVar14 = pcVar14 + -uVar11;
    pcVar18 = pcVar15 + -1;
    memmove(pcVar18, pcVar14, uVar11); /* compiler REP MOVS byte copy */
    uVar12 = 0;
    uVar11 = 0xffffffff;
    pcVar14 = &CHAR_00h_00807ddd;
    do {
      pcVar18 = pcVar14;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar18 = pcVar14 + 1;
      cVar20 = *pcVar14;
      pcVar14 = pcVar18;
    } while (cVar20 != '\0');
    uVar11 = ~uVar11;
    iVar22 = -1;
    pcVar14 = &this_01->field_1CA3;
    do {
      pcVar15 = pcVar14;
      if (iVar22 == 0) break;
      iVar22 = iVar22 + -1;
      pcVar15 = pcVar14 + 1;
      cVar20 = *pcVar14;
      pcVar14 = pcVar15;
    } while (cVar20 != '\0');
    pcVar14 = pcVar18 + -uVar11;
    pcVar18 = pcVar15 + -1;
    memmove(pcVar18, pcVar14, uVar11); /* compiler REP MOVS byte copy */
    pcVar14 = (char *)((byte *)pcVar14 + uVar11);
    uVar12 = 0;
    uVar11 = 0;
    FUN_006b8280(&this_01->field_1CA3,&this_01->field_1CA3);
    break;
  case 0x13:
    if (DAT_00803400 == 0xc) goto switchD_005ab3e3_caseD_9;
    local_c = 0xffffffff;
    pcVar17 = PTR_s_CUSTOM__0079c050;
    do {
      pcVar18 = pcVar17;
      if (local_c == 0) break;
      local_c = local_c - 1;
      pcVar18 = pcVar17 + 1;
      cVar20 = *pcVar17;
      pcVar17 = pcVar18;
    } while (cVar20 != '\0');
    local_c = ~local_c;
    pcVar18 = pcVar18 + -local_c;
    iVar22 = -1;
    do {
      if (iVar22 == 0) break;
      iVar22 = iVar22 + -1;
      pcVar15 = pcVar14 + 1;
      cVar20 = *pcVar14;
      pcVar14 = pcVar15;
    } while (cVar20 != '\0');
LAB_005ab4dc:
    pcVar14 = pcVar14 + -1;
    for (uVar12 = local_c >> 2; uVar11 = local_c, uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar14 = pcVar14 + 4;
    }
LAB_005ab4e5:
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar14 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar14 = pcVar14 + 1;
    }
  }
  uVar11 = 0xffffffff;
  pcVar14 = &this_01->field_1DA7;
  pcVar18 = &this_01->field_1CA3;
  do {
    pcVar15 = pcVar18;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar15 = pcVar18 + 1;
    cVar20 = *pcVar18;
    pcVar18 = pcVar15;
  } while (cVar20 != '\0');
  uVar11 = ~uVar11;
  pcVar18 = pcVar15 + -uVar11;
  pcVar15 = pcVar14;
  memmove(pcVar15, pcVar18, uVar11); /* compiler REP MOVS byte copy */
  uVar12 = 0;
  FUN_006b78c0(pcVar14,pcVar14);
  /* ST_CALLSITE[005AB525]: CALL dword ptr [0x0085bcfc] */
  pvVar5 = FindFirstChangeNotificationA(&this_01->field_1DA7,0,1);
  this_01->field_1C8F = pvVar5;
  if (pvVar5 == (HANDLE)0xffffffff) {
    this_01->field_1C8F = (HANDLE)0x0;
  }
  FUN_006b8280(&this_01->field_1CA3,&this_01->field_1CA3);
  FUN_006b8280(&this_01->field_1DA7,&this_01->field_1DA7);
  local_EAX_619 = FUN_0070a9f0(g_cMf32_00806780,"LOADSINGLE",0,1);
  g_startSystem_0081176C->field_002C = local_EAX_619;
  this_01->field_005D = g_startSystem_0081176C->field_002C;

  FUN_006bc360(g_startSystem_0081176C->field_002C,local_86c,nullptr);
  *(undefined4 *)(this_01->array_00BC[0xc].field_01DB + 0x140) = 0x1f;

  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_86c,0,0x100,0x8b,0x15,
             (undefined4 *)(this_01->array_00BC[0xc].field_01DB + 0x144));
  puVar7 = Library::Ourlib::MFRLOAD::mfRLoad
                     (PTR_00806784,CASE_B,"FILE_LIST",0xffffffff,0,1,0,nullptr);
  this_01->field_1C7F = puVar7;
  local_EAX_770 =
       /* ST_CALLSITE[005AB602]: CALL 0x0070a5a0; direct=0070A5A0 Library::Ourlib::MFIMG::mfImgLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/cMf32;/byte;pointer:/char;/byte;/int */
       (ushort *)Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,1,"MM_MAPB",0,1);
  /* ST_CALLSITE[005AB61C]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_02F0,0,0,'\x01',
         (RecoveredRecordView_006B84D0_87AF9D9B *)local_EAX_770);
  this_01->field_20B3 = 1;
  this_01->field_20B4 = 1;
  this_01->field_20B5 = 1;
  this_01->field_20B6 = 1;
  this_01->field_20B7 = 1;
  switch(this_01->array_00BC[0xc].field_01DF) {
  case 1:
  case 2:
  case 3:
  case 9:
  case 10:
  case 0xb:
switchD_005ab64d_caseD_1:
    this_01->field_20B7 = 0;
    goto switchD_005ab66b_caseD_6;
  default:
    switch(param_2) {
    case CASE_4:
    case CASE_5:
    case CASE_7:
    case CASE_C:
    case CASE_14:
      goto switchD_005ab64d_caseD_1;
    default:
switchD_005ab66b_caseD_6:
      switch(param_2) {
      case CASE_1:
      case CASE_2:
      case CASE_4:
      case CASE_5:
      case CASE_14:
        this_01->field_20B4 = 0;
      case CASE_6:
      case CASE_7:
        this_01->field_20B5 = 0;
      default:
        pRVar2 = (RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_0544;
        local_c = param_2 - 1;
        FUN_006b4170(pRVar2,0,0,0,pRVar2->field_0004,pRVar2->field_0008,0xff);
        if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
          FUN_006b5570((DArrayTy *)g_startSystem_0081176C->field_0548);
        }
        /* ST_CALLSITE[005AB6E0]: CALL 0x006b54f0; direct=006B54F0 Library::DKW::TBL::SArrayCreate; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/uint; signature=__stdcall;pointer:/uint;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint */
        puVar6 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
        g_startSystem_0081176C->field_0548 = puVar6;
        uVar11 = param_2 - 1;
        if (g_startSystem_0081176C->field_0389 != 0) {
          this_01->field_002D = 0x28;
          this_01->field_0031 = 1;
          this_01->field_0033 = (short)g_startSystem_0081176C->field_0548[2];
          FUN_006e6080(this_01,2,g_startSystem_0081176C->field_0389,
                       (undefined4 *)&this_01->field_0x1d);
          this_01->field_002D = 0x22;
          this_01->field_0031 = 0;
          this_01->field_0033 = 0;
          FUN_006e6080(this_01,2,g_startSystem_0081176C->field_0389,
                       (undefined4 *)&this_01->field_0x1d);
          uVar11 = local_c;
        }
        switch(uVar11) {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 0xb:
        case 0x10:
        case 0x13:
          break;
        default:
          /* ST_CALLSITE[005AB77F]: CALL 0x00401d43; direct=00401D43 DarkScreen */
          DarkScreen(g_dDXContext_0080759C,1,0);
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        this_00 = *(MMsgTy **)(this_01->array_00BC[0xc].field_01DB + 0x2e6);
        if (this_00 != nullptr) {
          /* ST_CALLSITE[005AB797]: CALL 0x00405191; direct=00405191 MMsgTy::ShowSprites */
          MMsgTy::ShowSprites(this_00);
          *(undefined4 *)(*(int *)(this_01->array_00BC[0xc].field_01DB + 0x2e6) + 0x1cab) =
               this_01->field_0008;
        }
        /* ST_CALLSITE[005AB7B5]: CALL 0x00402725; direct=00402725 ChooseMapTy::PaintChooseMap */
        PaintChooseMap(this_01,'\x01');
        puVar8 = &this_01->array_00BC[0xc].field_01F0;

        SpriteClassTy::InitSprite
                  ((SpriteClassTy *)puVar8,(int *)g_ddxContext_008075A8,0x31,'\a',nullptr,
                   0,0);
        /* ST_CALLSITE[005AB7E9]: CALL dword ptr [EDX + 0x4] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*puVar8 + 4))
                  ((SpriteClassTy *)puVar8,PTR_00806784,7,0,(byte *)"MM_SLDUP",0xffffffff);
        this_01->field_1A8C = 0x2f8;
        this_01->field_1A90 = 0x3c;
        *(undefined4 *)&this_01->array_00BC[0xc].field_0x1f8 = 0;

        SpriteClassTy::InitSprite
                  ((SpriteClassTy *)&this_01->field_1B01,(int *)g_ddxContext_008075A8,0x31,'\a',
                   nullptr,0,0);
        /* ST_CALLSITE[005AB835]: CALL dword ptr [EDX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(this_01->field_1B01 + 4))(PTR_00806784,7,0,"MM_SLDDN",0xffffffff);
        this_01->field_1B1D = 0x2f8;
        this_01->field_1B21 = 0x1b8;
        this_01->field_1B09 = 0;

        SpriteClassTy::InitSprite
                  ((SpriteClassTy *)&this_01->field_1B92,(int *)g_ddxContext_008075A8,0x31,'\a',
                   nullptr,0,0);
        /* ST_CALLSITE[005AB881]: CALL dword ptr [EDX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(this_01->field_1B92 + 4))(PTR_00806784,7,0,"MM_SLDT",0xffffffff);
        iVar22 = 1;
        this_01->field_1BAE = 0x2fe;
        this_01->field_1BB2 = 0x5c;
        puVar21 = this_01->field_005D + 0x14;
        this_01->field_1B9A = 0;

        uVar14 = FUN_006b4fe0(this_01->field_005D);
        pRVar7 = (RecoveredRecord_006B4FA0_DAC3A217 *)

                 FUN_006b50c0(0x1e4,399,(uint)this_01->field_005D[7],uVar14,(undefined4 *)puVar21,
                              iVar22);
        this_01->field_1C7B = (AnonPointee_ChooseMapTy_1C7B *)pRVar7;
        uVar11 = *(uint *)&pRVar7[1].field_0x4;
        if (uVar11 == 0) {
          uVar11 = ((uint)pRVar7->field_000E * *(int *)&pRVar7->field_0x4 + 0x1f >> 3 & 0x1ffffffc)
                   * *(int *)&pRVar7->field_0x8;
        }

        puVar8 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar7));
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        puVar6 = &this_01->field_1C23;
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar8 = 0;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        uVar11 = 0x3f;
        do {

          FUN_006b2330(g_ddxContext_008075A8,puVar6,0x31,0x40213a,this_01->field_1C7B->field_0004,
                       0x13,(ushort *)this_01);

          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,*puVar6,0xffffffff,0x114,uVar11);
          uVar11 = uVar11 + 0x13;
          puVar6 = puVar6 + 1;
        } while ((int)uVar11 < 0x1e1);
        /* ST_CALLSITE[005AB95E]: CALL 0x0040175d; direct=0040175D ChooseMapTy::CreateCtrls */
        CreateCtrls(this_01,'\0');
        /* ST_CALLSITE[005AB96C]: CALL 0x00403b0c; direct=00403B0C ChooseMapTy::PrepFiles */
        PrepFiles(this_01,this_01->field_1C93);

        FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0x204,0x19d,
                     (ushort *)(this_01->array_00BC[0xc].field_01DB + 0x140));

        Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x112,0x38);
        pHVar9 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
        if (pHVar9 == nullptr) {
          pHVar9 = nullptr;
        }
        else {
          pHVar9->field_0002 = 1;
          pHVar9->field_0000 = 0;
          *(undefined4 *)&pHVar9->field_0x3 = 0xffffffff;
          pHVar9->field_0001 = CASE_2;
          pHVar9->field_0007 = nullptr;
          pHVar9->field_000B = nullptr;
          pHVar9->field_000F = 0;
          *(undefined4 *)&pHVar9->field_0x1b = 1;
          pHVar9->field_0013 = 1;
          pHVar9->field_0017 = -1;
          pHVar9->field_0027 = 0;
          pHVar9->field_0023 = 0;
          pHVar9->field_002F = 1;
          pHVar9->field_002B = 1;
        }
        this_01->field_20B8 = pHVar9;
        if (pHVar9 != nullptr) {
          uVar11 = 0;
          cVar20 = '\x01';
          bVar19 = 0x10;
          iVar22 = 1;
          /* ST_CALLSITE[005ABA29]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
          pRVar10 = Library::DKW::DDX::FUN_006bf9f0
                              ((int *)g_ddxContext_008075A8,0x112,0x38,0x204,0x19d);
          /* ST_CALLSITE[005ABA3E]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
          uVar13 = HoloTy::Init(this_01->field_20B8,CASE_2,0x112,0x38,pRVar10,iVar22,bVar19,cVar20,
                                uVar11);
          if (uVar13 != 0) {
            pHVar9 = this_01->field_20B8;
            pHVar9->field_0002 = 1;
            pHVar9->field_0017 = pHVar9->field_0013;
            uVar11 = *(uint *)&this_01->field_20B8->field_0x3;
            if (-1 < (int)uVar11) {
              FUN_006b3af0((int *)g_ddxContext_008075A8,uVar11);
            }
            uVar11 = this_01->array_00BC[0xc].field_01F4;
            if (uVar11 != 0xffffffff) {
              FUN_006b3af0((int *)this_01->field_1AB8,uVar11);
            }
            if (this_01->field_1B05 != 0xffffffff) {
              FUN_006b3af0((int *)this_01->field_1B49,this_01->field_1B05);
            }
            if (this_01->field_1B96 != 0xffffffff) {
              FUN_006b3af0((int *)this_01->field_1BDA,this_01->field_1B96);
            }
            puVar6 = &this_01->field_1C23;
            iVar22 = 0x16;
            do {
              FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar6);
              puVar6 = puVar6 + 1;
              iVar22 = iVar22 + -1;
            } while (iVar22 != 0);
          }
        }
        if (local_8 != 0xffffffff) {
          FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
          local_8 = 0xffffffff;
        }
        if (this_01->field_20B4 == '\0') {
          if (g_startSystem_0081176C->field_0391 != 0xffffffff) {

            Library::DKW::DDX::FUN_006b34d0
                      ((uint *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391
                       ,0xfffffffe,g_startSystem_0081176C->field_03A9,
                       g_startSystem_0081176C->field_03AD);
          }
          if (g_startSystem_0081176C->field_0422 != 0xffffffff) {

            Library::DKW::DDX::FUN_006b34d0
                      ((uint *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422
                       ,0xfffffffe,g_startSystem_0081176C->field_043A,
                       g_startSystem_0081176C->field_043E);
          }
          if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {

            Library::DKW::DDX::FUN_006b34d0
                      ((uint *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3
                       ,0xfffffffe,g_startSystem_0081176C->field_04CB,
                       g_startSystem_0081176C->field_04CF);
          }

          Library::DKW::DDX::FUN_006b3430
                    ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
        }
        else {

          FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0xf9,0x121,
                       (ushort *)(this_01->array_00BC[0xc].field_01DB + 0x140));

          Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,10,0xb4);
          pHVar9 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
          if (pHVar9 == nullptr) {
            pHVar9 = nullptr;
          }
          else {
            pHVar9->field_0002 = 1;
            pHVar9->field_0000 = 0;
            *(undefined4 *)&pHVar9->field_0x3 = 0xffffffff;
            pHVar9->field_0001 = CASE_2;
            pHVar9->field_0007 = nullptr;
            pHVar9->field_000B = nullptr;
            pHVar9->field_000F = 0;
            *(undefined4 *)&pHVar9->field_0x1b = 1;
            pHVar9->field_0013 = 1;
            pHVar9->field_0017 = -1;
            pHVar9->field_0027 = 0;
            pHVar9->field_0023 = 0;
            pHVar9->field_002F = 1;
            pHVar9->field_002B = 1;
          }
          this_01->field_20BC = pHVar9;
          if (pHVar9 != nullptr) {
            uVar11 = 0;
            cVar20 = '\x01';
            bVar19 = 0x10;
            iVar22 = 1;
            /* ST_CALLSITE[005ABBB9]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
            pRVar10 = Library::DKW::DDX::FUN_006bf9f0
                                ((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
            /* ST_CALLSITE[005ABBCE]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
            local_EAX_2254 =
                 HoloTy::Init(this_01->field_20BC,CASE_4,10,0xb4,pRVar10,iVar22,bVar19,cVar20,uVar11
                             );
            if (local_EAX_2254 != 0) {
              pHVar9 = this_01->field_20BC;
              pHVar9->field_0002 = 1;
              pHVar9->field_0017 = pHVar9->field_0013;
              uVar11 = *(uint *)&this_01->field_20BC->field_0x3;
              if (-1 < (int)uVar11) {
                FUN_006b3af0((int *)g_ddxContext_008075A8,uVar11);
              }
              if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
                FUN_006b3af0((int *)g_startSystem_0081176C->field_03D5,
                             g_startSystem_0081176C->field_0391);
              }
              if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
                FUN_006b3af0((int *)g_startSystem_0081176C->field_0466,
                             g_startSystem_0081176C->field_0422);
              }
              if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
                FUN_006b3af0((int *)g_startSystem_0081176C->field_04F7,
                             g_startSystem_0081176C->field_04B3);
              }
              FUN_006b3af0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
            }
          }
          if (local_8 != 0xffffffff) {
            FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
            local_8 = 0xffffffff;
          }
        }
        if (this_01->field_20B7 == '\0') {
          cVar20 = this_01->array_00BC[0xc].field_01DF;
          if ((((cVar20 == '\f') || (cVar20 == '\x04')) || (cVar20 == '\x05')) || (cVar20 == '\x13')
             ) {
            if (g_startSystem_0081176C->field_0560 != 0xffffffff) {

              Library::DKW::DDX::FUN_006b34d0
                        ((uint *)g_startSystem_0081176C->field_05A4,
                         g_startSystem_0081176C->field_0560,0xfffffffe,
                         g_startSystem_0081176C->field_0578,g_startSystem_0081176C->field_057C);
            }
            if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {

              Library::DKW::DDX::FUN_006b34d0
                        ((uint *)g_startSystem_0081176C->field_0635,
                         g_startSystem_0081176C->field_05F1,0xfffffffe,
                         g_startSystem_0081176C->field_0609,g_startSystem_0081176C->field_060D);
            }

            Library::DKW::DDX::FUN_006b3430
                      ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);

            Library::DKW::DDX::FUN_006b3430
                      ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
          }
          else {
            if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
              FUN_006b3af0((int *)g_startSystem_0081176C->field_05A4,
                           g_startSystem_0081176C->field_0560);
            }
            if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
              FUN_006b3af0((int *)g_startSystem_0081176C->field_0635,
                           g_startSystem_0081176C->field_05F1);
            }
            FUN_006b3af0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
            FUN_006b3af0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
          }
        }
        else {

          FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x403b61,400,0x62,
                       (ushort *)(this_01->array_00BC[0xc].field_01DB + 0x140));

          Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,200,0x1f1);
          if (g_startSystem_0081176C->field_0560 != 0xffffffff) {

            Library::DKW::DDX::FUN_006b34d0
                      ((uint *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560
                       ,0xfffffffe,g_startSystem_0081176C->field_0578,
                       g_startSystem_0081176C->field_057C);
          }
          if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {

            Library::DKW::DDX::FUN_006b34d0
                      ((uint *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1
                       ,0xfffffffe,g_startSystem_0081176C->field_0609,
                       g_startSystem_0081176C->field_060D);
          }
          pHVar9 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
          if (pHVar9 == nullptr) {
            pHVar9 = nullptr;
          }
          else {
            pHVar9->field_0002 = 1;
            pHVar9->field_0000 = 0;
            *(undefined4 *)&pHVar9->field_0x3 = 0xffffffff;
            pHVar9->field_0001 = CASE_2;
            pHVar9->field_0007 = nullptr;
            pHVar9->field_000B = nullptr;
            pHVar9->field_000F = 0;
            *(undefined4 *)&pHVar9->field_0x1b = 1;
            pHVar9->field_0013 = 1;
            pHVar9->field_0017 = -1;
            pHVar9->field_0027 = 0;
            pHVar9->field_0023 = 0;
            pHVar9->field_002F = 1;
            pHVar9->field_002B = 1;
          }
          this_01->field_20C0 = pHVar9;
          if (pHVar9 != nullptr) {
            uVar11 = 0;
            cVar20 = '\x01';
            bVar19 = 0x10;
            iVar22 = 1;
            /* ST_CALLSITE[005ABE48]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
            pRVar10 = Library::DKW::DDX::FUN_006bf9f0
                                ((int *)g_ddxContext_008075A8,200,0x1f1,400,0x62);
            /* ST_CALLSITE[005ABE60]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
            local_EAX_2912 =
                 HoloTy::Init(this_01->field_20C0,CASE_1,200,0x1f1,pRVar10,iVar22,bVar19,cVar20,
                              uVar11);
            if (local_EAX_2912 != 0) {
              pHVar9 = this_01->field_20C0;
              pHVar9->field_0002 = 1;
              pHVar9->field_0017 = pHVar9->field_0013;
              uVar11 = *(uint *)&this_01->field_20C0->field_0x3;
              if (-1 < (int)uVar11) {
                FUN_006b3af0((int *)g_ddxContext_008075A8,uVar11);
              }
              if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
                FUN_006b3af0((int *)g_startSystem_0081176C->field_05A4,
                             g_startSystem_0081176C->field_0560);
              }
              if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
                FUN_006b3af0((int *)g_startSystem_0081176C->field_0635,
                             g_startSystem_0081176C->field_05F1);
              }
              FUN_006b3af0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
              FUN_006b3af0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
            }
          }
          if (local_8 != 0xffffffff) {
            FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
            local_8 = 0xffffffff;
          }
        }
        iVar22 = 1;
        puVar21 = this_01->field_005D + 0x14;

        local_EAX_3379 = FUN_006b4fe0(this_01->field_005D);
        pRVar7 = (RecoveredRecord_006B4FA0_DAC3A217 *)

                 FUN_006b50c0(0x172,0x18,(uint)this_01->field_005D[7],local_EAX_3379,
                              (undefined4 *)puVar21,iVar22);
        this_01->field_1C8B = (AnonPointee_ChooseMapTy_1C8B *)pRVar7;
        uVar11 = *(uint *)&pRVar7[1].field_0x4;
        if (uVar11 == 0) {
          uVar11 = ((uint)pRVar7->field_000E * *(int *)&pRVar7->field_0x4 + 0x1f >> 3 & 0x1ffffffc)
                   * *(int *)&pRVar7->field_0x8;
        }

        puVar8 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar7));
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar8 = 0xffffffff;
          puVar8 = puVar8 + 1;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar8 = 0xff;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_01->field_1C8B,0,0,1,
                     ((AnonShape_006E6FB0_BC494FEA *)this_01->field_1C8B)->field_0004 + -1,1,
                     (byte)*(undefined4 *)(this_01->array_00BC[0xc].field_01DB + 0x140),0xd);
        pAVar3 = this_01->field_1C8B;
        puVar6 = &this_01->field_1C87;

        FUN_006b2330(g_ddxContext_008075A8,puVar6,0x31,0x404acf,pAVar3->field_0004,
                     pAVar3->field_0008,(ushort *)pAVar3);

        Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar6,0xffffffff,0x112,0x1d3);
        FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar6);
        switch(local_c) {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 0xb:
        case 0x10:
        case 0x13:
          break;
        default:
          thunk_FUN_0055ddf0((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                             this_01->field_005D,10,2);
        }
        pHVar9 = this_01->field_20B8;
        if (((pHVar9 != nullptr) && (pHVar9->field_0000 != '\0')) &&
           (-1 < (int)*(uint *)&pHVar9->field_0x3)) {

          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar9->field_0x3);
        }
        pHVar9 = this_01->field_20BC;
        if (((pHVar9 != nullptr) && (pHVar9->field_0000 != '\0')) &&
           (-1 < (int)*(uint *)&pHVar9->field_0x3)) {

          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar9->field_0x3);
        }
        pHVar9 = this_01->field_20C0;
        if (((pHVar9 != nullptr) && (pHVar9->field_0000 != '\0')) &&
           (-1 < (int)*(uint *)&pHVar9->field_0x3)) {

          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar9->field_0x3);
        }
        this_02 = g_cursorClass_00802A30;
        if (g_cursorClass_00802A30 != nullptr) {
          iVar22 = g_cursorClass_00802A30->field_00C9;
          iVar13 = g_cursorClass_00802A30->field_00C5;
          g_cursorClass_00802A30->field_0493 = CASE_1;
          this_02->field_0494 = 0xffff;
          /* ST_CALLSITE[005AC1D5]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
          CursorClassTy::SetGCType(this_02,CASE_0,iVar13,iVar22);
          /* ST_CALLSITE[005AC1EA]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
          CursorClassTy::DrawSprite(this_02,this_02->field_00C5,this_02->field_00C9);
          this_02->field_00D2 = 0;
          this_02->field_04DF = -1;
        }
        puVar8 = &local_20c;
        memset(puVar8, 0, 0x1fb); /* compiler bulk-zero initialization */
        puVar8 = (undefined4 *)((byte *)puVar8 + 0x1f8);
        uVar1 = this_01->array_00BC[0xc].field_01DF;
        local_13c = this_01->field_0008;
        this_01->field_0065 = 3;
        local_149 = 0x2340;
        local_138 = 2;
        local_134 = 0x6943;
        local_122 = 0x24bc;
        local_111 = 2;
        switch(uVar1) {
        case 4:
        case 5:
        case 0xc:
          local_10d = 0x694d;
          break;
        default:
          local_10d = 0x6943;
          local_109 = 1;
          break;
        case 0x13:
          local_10d = 0x6951;
        }
      }
      switch(uVar1) {
      case 1:
      case 2:
        local_20c = 0x2348;
        local_1fb = 2;
        local_1f7 = 0x694b;
        local_1e5 = 0x2343;
        local_1d4 = 2;
        local_1d0 = 0x694a;
        local_1be = 0x2349;
        local_1ad = 2;
        local_1a9 = 0x694c;
        local_1ff = local_13c;
        local_1d8 = local_13c;
        local_1b1 = local_13c;
        break;
      case 3:
        this_01->field_20B5 = 0;
        local_1e5 = 0x2343;
        local_1d4 = 2;
        local_1d0 = 0x6956;
        local_1d8 = local_13c;
        break;
      case 4:
      case 5:
        local_1e5 = 0x2357;
        local_1d4 = 2;
        local_1d0 = 0x694e;
        local_1be = 0x2349;
        local_1ad = 2;
        local_1a9 = 0x694c;
        local_1d8 = local_13c;
        local_1b1 = local_13c;
        break;
      case 9:
      case 10:
      case 0xb:
        local_1e5 = 0x233e;
        local_1d4 = 2;
        local_1d0 = 0x6949;
        local_1d8 = local_13c;
        break;
      case 0x13:
        if (DAT_00803400 != 0xc) {
          local_1e5 = 0x2357;
          local_1d4 = 2;
          local_1d0 = 0x694e;
          local_1d8 = local_13c;
          if ((3 < DAT_00803400) && (DAT_00803400 < 6)) {
            local_1be = 0x2349;
            local_1ad = 2;
            local_1a9 = 0x694c;
            local_1b1 = local_13c;
          }
          break;
        }
      case 0xc:
        local_1e5 = 0x233e;
        local_1d4 = 2;
        local_1d0 = 0x694e;
        local_1d8 = local_13c;
      }
      iVar22 = this_01->array_00BC[0xc].field_01DB;
      local_115 = local_13c;
      if (STField<int>(iVar22,0x2E6) != 0) {
        puVar8 = local_26c;
        for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
          *puVar8 = 0xffffffff;
          puVar8 = puVar8 + 1;
        }
        *(undefined2 *)puVar8 = 0xffff;
        /* ST_CALLSITE[005AC45E]: CALL 0x00401717; direct=00401717 MMsgTy::SetPanel */
        MMsgTy::SetPanel(*(MMsgTy **)(iVar22 + 0x2e6),0,(int)&local_20c,0,0);
        /* ST_CALLSITE[005AC476]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        MMsgTy::StatePanel(*(MMsgTy **)(this_01->array_00BC[0xc].field_01DB + 0x2e6),(int)local_26c);
      }
      if ((DAT_008067a0 != '\0') && (g_int_00811764 != nullptr)) {
        FUN_006b6160(local_46c,(int)(g_int_00811764 + 6));
        local_44c = 0;
        /* ST_CALLSITE[005AC4B2]: CALL dword ptr [0x0085c070] */
        CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,local_46c);
      }
      thunk_FUN_00568bc0(&g_sound,0);
      if ((STPiece<1,1>(DAT_00807300) & 8) != 0) {
        SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0056A130::thunk_FUN_0056a130
                  ((RecoveredReceiver_0056A130 *)&g_sound,0x14,'\x02',0,nullptr);
      }
      thunk_FUN_005b6730(this_01,0xb,'\0',-1);
      g_currentExceptionFrame = local_250.previous;
      return;
    }
  }
}

