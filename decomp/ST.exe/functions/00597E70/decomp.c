#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetState

   [STSwitchEnumApplier] Switch target field_0065 uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_0065State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10

   [STSwitchEnumApplier] Switch target field_0065 uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_0065State. Cases:
   CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00595E40 -> 00597E70 @ 005964DF; literal 6 at 005964DB | 00597120 -> 00597E70 @
   00597444; literal 7 at 0059743A | 00597120 -> 00597E70 @ 0059746D; literal 8 at 00597463 |
   00597120 -> 00597E70 @ 00597496; literal 10 at 0059748C */

void __thiscall FSGSTy::SetState(FSGSTy *this,byte param_1)

{
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar1;
  StartSystemTy *pSVar2;
  FSGSTy *this_00;
  int iVar8;
  uint *puVar4;
  ccFntTy *resourceString;
  uint local_EAX_718;
  uint local_EAX_1280;
  uint local_EAX_1866;
  uint local_EAX_2234;
  uint local_EAX_3263;
  uint local_EAX_3905;
  HoloTy *pHVar5;
  RecoveredRecord_005AACB0_2533FD69 *pRVar6;
  uint uVar14;
  uint local_EAX_4936;
  int iVar7;
  int iVar9;
  int iVar10;
  byte bVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint local_270 [7];
  InternalExceptionFrame local_254;
  uint local_210;
  uint local_203;
  uint local_1ff;
  uint local_1fb;
  uint local_1e9;
  uint local_1dc;
  uint local_1d8;
  uint local_1d4;
  uint local_1c2;
  uint local_1b5;
  uint local_1b1;
  uint local_1ad;
  uint local_14d;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_126;
  byte local_122;
  uint local_119;
  uint local_115;
  uint local_111;
  FSGSTy *local_14;
  uint local_10;
  ushort *local_c;
  uint local_8;

  puVar4 = &local_210;
  local_14 = this;
  for (iVar9 = 0x7e; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  STField<undefined1>(puVar4,2) = 0;
  local_8 = 0xffffffff;
  local_254.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_254;

  iVar8 = Library::MSVCRT::__setjmp3(local_254.jumpBuffer,0);
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_254.previous;

    iVar7 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x397,0,iVar8,"%s"
                               ,"FSGSTy::SetState");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar8,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x397);
    return;
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {

      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  this_00 = local_14;
  local_14->field_0065 = param_1;
  if (local_14->field_1F23 != nullptr) {
    /* ST_CALLSITE[00597F0F]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
    HoloTy::Done(local_14->field_1F23);
    Library::MSVCRT::FUN_0072e2b0(this_00->field_1F23);
    this_00->field_1F23 = nullptr;
  }
  if (this_00->field_1F27 != nullptr) {
    /* ST_CALLSITE[00597F33]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
    HoloTy::Done(this_00->field_1F27);
    Library::MSVCRT::FUN_0072e2b0(this_00->field_1F27);
    this_00->field_1F27 = nullptr;
  }
  if (this_00->field_1F2B != nullptr) {
    /* ST_CALLSITE[00597F57]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
    HoloTy::Done(this_00->field_1F2B);
    Library::MSVCRT::FUN_0072e2b0(this_00->field_1F2B);
    this_00->field_1F2B = nullptr;
  }
  if (this_00->field_1F2F != nullptr) {
    /* ST_CALLSITE[00597F7B]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
    HoloTy::Done(this_00->field_1F2F);
    Library::MSVCRT::FUN_0072e2b0(this_00->field_1F2F);
    this_00->field_1F2F = nullptr;
  }
  switch(this_00->field_0065) {
  case CASE_6:
    if (this_00->field_1ABB != '\0') {
      /* ST_CALLSITE[00597FBB]: CALL 0x0040165e; direct=0040165E FSGSTy::PrepBkgMess */
      PrepBkgMess(this_00,'\0');
    }
    pRVar1 = (RecoveredRecord_006B4FA0_DAC3A217 *)this_00->field_1AC0;
    uVar16 = *(uint *)&pRVar1[1].field_0x4;
    if (uVar16 == 0) {
      uVar16 = ((uint)pRVar1->field_000E * *(int *)&pRVar1->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)&pRVar1->field_0x8;
    }

    puVar4 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar1));
    for (uVar15 = uVar16 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }

    ccFntTy::SetSurf(this_00->array_00BC[0xc].field_01F3,(int)this_00->field_1AC0,0,0,0x16,0x1b8,
                     0xf0);
    iVar14 = -1;
    iVar13 = -1;
    uVar16 = 2;
    iVar10 = -1;
    iVar9 = -1;
    /* ST_CALLSITE[00598038]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__stdcall;pointer:/ccFntTy;/WinDef.h/UINT;/WinDef.h/HINSTANCE */
    resourceString = LoadResourceString(0x254e,g_hINSTANCE_00807618);

    ccFntTy::WrTxt(this_00->array_00BC[0xc].field_01F3,(char *)resourceString,iVar9,iVar10,uVar16,
                   iVar13,iVar14);

    Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,this_00->field_1ABC);

    FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1ABC);

    FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x4035e9,0x1b8,0x106,(ushort *)0x2563);

    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0xb4,0xaa);
    pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar5 == nullptr) {
      pHVar5 = nullptr;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      *(undefined4 *)&pHVar5->field_0x3 = 0xffffffff;
      pHVar5->field_0001 = CASE_2;
      pHVar5->field_0007 = nullptr;
      pHVar5->field_000B = nullptr;
      pHVar5->field_000F = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = -1;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    this_00->field_1F23 = pHVar5;
    if (pHVar5 != nullptr) {
      uVar16 = 0;
      cVar12 = '\x01';
      bVar11 = 0x10;
      iVar9 = 1;
      /* ST_CALLSITE[00598126]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
      pRVar6 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0xb4,0xaa,0x1b8,0x106);
      /* ST_CALLSITE[0059813E]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_718 =
           HoloTy::Init(this_00->field_1F23,CASE_2,0xb4,0xaa,pRVar6,iVar9,bVar11,cVar12,uVar16);
      if (local_EAX_718 != 0) {
        pHVar5 = this_00->field_1F23;
        pHVar5->field_0002 = 1;
        pHVar5->field_0017 = pHVar5->field_0013;
        uVar16 = *(uint *)&this_00->field_1F23->field_0x3;
        if (-1 < (int)uVar16) {

          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar16);
        }
        /* ST_CALLSITE[00598175]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        HoloTy::NextFas(this_00->field_1F23);
        FUN_006b3af0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
    local_119 = this_00->field_0008;
    local_126 = 0x2336;
    local_115 = 2;
    local_111 = 0x6941;
    goto switchD_00597fa6_caseD_9;
  case CASE_7:
    cVar12 = this_00->array_00BC[0xc].field_01DF;
    local_c = (ushort *)0x2563;
    if (cVar12 == '\x03') {

      FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0x2e1,0x14c,
                   (ushort *)&(this_00->array_00BC[0xc].field_01DB)->field_0140);

      Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x22,0x72);
      this_00->field_1B48 = 0x77;
      this_00->field_1B44 = 0x2fe - this_00->field_1B4C;
      if (this_00->field_1B2C != 0xffffffff) {

        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)this_00->field_1B70,this_00->field_1B2C,0xfffffffe,this_00->field_1B44,
                   this_00->field_1B48);
      }
      if (this_00->field_1B2C != 0xffffffff) {

        FUN_006b35d0((int *)this_00->field_1B70,this_00->field_1B2C);
      }
      this_00->field_1BD5 = 0x2fe - this_00->field_1BDD;
      this_00->field_1BD9 = 0x1b9 - this_00->field_1BE1;
      if (this_00->field_1BBD != 0xffffffff) {

        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)this_00->field_1C01,this_00->field_1BBD,0xfffffffe,this_00->field_1BD5,
                   this_00->field_1BD9);
      }
      if (this_00->field_1BBD != 0xffffffff) {

        FUN_006b35d0((int *)this_00->field_1C01,this_00->field_1BBD);
      }
      this_00->field_1C6A = 0x98;
      uVar16 = 0x2ee - (this_00->field_1C6E + -7) / 2;
      this_00->field_1C66 = uVar16;
      if (this_00->field_1C4E != 0xffffffff) {

        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)this_00->field_1C92,this_00->field_1C4E,0xfffffffe,uVar16,
                   this_00->field_1C6A);
      }
      if (this_00->field_1C4E != 0xffffffff) {

        FUN_006b35d0((int *)this_00->field_1C92,this_00->field_1C4E);
      }
      pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar5 == nullptr) {
        pHVar5 = nullptr;
      }
      else {
        pHVar5->field_0002 = 1;
        pHVar5->field_0000 = 0;
        *(undefined4 *)&pHVar5->field_0x3 = 0xffffffff;
        pHVar5->field_0001 = CASE_2;
        pHVar5->field_0007 = nullptr;
        pHVar5->field_000B = nullptr;
        pHVar5->field_000F = 0;
        *(undefined4 *)&pHVar5->field_0x1b = 1;
        pHVar5->field_0013 = 1;
        pHVar5->field_0017 = -1;
        pHVar5->field_0027 = 0;
        pHVar5->field_0023 = 0;
        pHVar5->field_002F = 1;
        pHVar5->field_002B = 1;
      }
      this_00->field_1F23 = pHVar5;
      if (pHVar5 != nullptr) {
        uVar16 = 0;
        cVar12 = '\x01';
        bVar11 = 0x10;
        iVar9 = 1;
        /* ST_CALLSITE[005985A8]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
        pRVar6 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x22,0x72,0x2e1,0x14c);
        /* ST_CALLSITE[005985BA]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
        local_EAX_1866 =
             HoloTy::Init(this_00->field_1F23,CASE_2,0x22,0x72,pRVar6,iVar9,bVar11,cVar12,uVar16);
        if (local_EAX_1866 != 0) {
          pHVar5 = this_00->field_1F23;
          pHVar5->field_0002 = 1;
          pHVar5->field_0017 = pHVar5->field_0013;
          uVar16 = *(uint *)&this_00->field_1F23->field_0x3;
          if (-1 < (int)uVar16) {

            Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar16);
          }
          /* ST_CALLSITE[005985F2]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
          HoloTy::NextFas(this_00->field_1F23);
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
        local_8 = 0xffffffff;
      }
      FUN_006b3af0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
      if (this_00->field_1B2C != 0xffffffff) {
        FUN_006b3af0((int *)this_00->field_1B70,this_00->field_1B2C);
      }
      if (this_00->field_1BBD != 0xffffffff) {
        FUN_006b3af0((int *)this_00->field_1C01,this_00->field_1BBD);
      }
      if (this_00->field_1C4E != 0xffffffff) {
        FUN_006b3af0((int *)this_00->field_1C92,this_00->field_1C4E);
      }
    }
    else {
      if (cVar12 == '\t') {

        FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x401032,0x2e1,0x175,nullptr);

        Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x22,0x5e);
        pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
        if (pHVar5 == nullptr) {
          pHVar5 = nullptr;
        }
        else {
          pHVar5->field_0002 = 1;
          pHVar5->field_0000 = 0;
          *(undefined4 *)&pHVar5->field_0x3 = 0xffffffff;
          pHVar5->field_0001 = CASE_2;
          pHVar5->field_0007 = nullptr;
          pHVar5->field_000B = nullptr;
          pHVar5->field_000F = 0;
          *(undefined4 *)&pHVar5->field_0x1b = 1;
          pHVar5->field_0013 = 1;
          pHVar5->field_0017 = -1;
          pHVar5->field_0027 = 0;
          pHVar5->field_0023 = 0;
          pHVar5->field_002F = 1;
          pHVar5->field_002B = 1;
        }
        this_00->field_1F23 = pHVar5;
        if (pHVar5 != nullptr) {
          uVar16 = 0;
          cVar12 = '\x01';
          bVar11 = 0x10;
          iVar9 = 1;
          /* ST_CALLSITE[00598718]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
          pRVar6 = Library::DKW::DDX::FUN_006bf9f0
                             ((int *)g_ddxContext_008075A8,0x22,0x5e,0x2e1,0x175);
          /* ST_CALLSITE[0059872A]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
          local_EAX_2234 =
               HoloTy::Init(this_00->field_1F23,CASE_2,0x22,0x5e,pRVar6,iVar9,bVar11,cVar12,uVar16);
          if (local_EAX_2234 != 0) {
            pHVar5 = this_00->field_1F23;
            pHVar5->field_0002 = 1;
            pHVar5->field_0017 = pHVar5->field_0013;
            uVar16 = *(uint *)&this_00->field_1F23->field_0x3;
            if (-1 < (int)uVar16) {

              Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar16);
            }
            /* ST_CALLSITE[00598761]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
            HoloTy::NextFas(this_00->field_1F23);
            FUN_006b3af0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
          }
        }
      }
      else {
        switch(cVar12) {
        case '\x02':
        case '\x04':
        case '\x05':
        case '\a':
          if (this_00->field_1ABB != '\0') {
            cVar12 = '\0';
LAB_00598221:
            /* ST_CALLSITE[00598223]: CALL 0x0040165e; direct=0040165E FSGSTy::PrepBkgMess */
            PrepBkgMess(this_00,cVar12);
          }
          break;
        case '\n':
          if (this_00->field_1ABB != '\x01') {
            cVar12 = '\x01';
            goto LAB_00598221;
          }
        }
        switch(this_00->array_00BC[0xc].field_01DF) {
        case 2:
          /* ST_CALLSITE[00598241]: CALL 0x0040334b; direct=0040334B FSGSTy::PaintLogLogin */
          PaintLogLogin(this_00);
          local_c = (ushort *)0x2553;
          break;
        case 4:
          /* ST_CALLSITE[00598251]: CALL 0x00401c49; direct=00401C49 FSGSTy::PaintLogNew */
          PaintLogNew(this_00);
          DAT_0080735f = 0;
          local_c = (ushort *)0x2552;
          break;
        case 5:
          /* ST_CALLSITE[00598268]: CALL 0x004034a4; direct=004034A4 FSGSTy::PaintLogPsw */
          PaintLogPsw(this_00);
          local_c = (ushort *)0x2562;
          break;
        case 7:
          /* ST_CALLSITE[00598278]: CALL 0x004022c0; direct=004022C0 FSGSTy::PaintGameNew */
          PaintGameNew(this_00);
          local_c = (ushort *)0x255b;
          break;
        case 10:
          /* ST_CALLSITE[00598288]: CALL 0x004024be; direct=004024BE FSGSTy::PaintInfo */
          PaintInfo(this_00);
          local_c = (ushort *)0x259c;
        }
        uVar16 = (-(uint)(this_00->field_1ABB != '\0') & 0xffffffb4) + 0xaa;
        local_10 = (-(uint)(this_00->field_1ABB != '\0') & 0x74) + 0x106;

        FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x4035e9,0x1b8,local_10,local_c);

        Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0xb4,uVar16);
        pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
        if (pHVar5 == nullptr) {
          pHVar5 = nullptr;
        }
        else {
          pHVar5->field_0002 = 1;
          pHVar5->field_0000 = 0;
          *(undefined4 *)&pHVar5->field_0x3 = 0xffffffff;
          pHVar5->field_0001 = CASE_2;
          pHVar5->field_0007 = nullptr;
          pHVar5->field_000B = nullptr;
          pHVar5->field_000F = 0;
          *(undefined4 *)&pHVar5->field_0x1b = 1;
          pHVar5->field_0013 = 1;
          pHVar5->field_0017 = -1;
          pHVar5->field_0027 = 0;
          pHVar5->field_0023 = 0;
          pHVar5->field_002F = 1;
          pHVar5->field_002B = 1;
        }
        this_00->field_1F23 = pHVar5;
        if (pHVar5 != nullptr) {
          uVar15 = 0;
          cVar12 = '\x01';
          bVar11 = 0x10;
          iVar9 = 1;
          /* ST_CALLSITE[0059835C]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
          pRVar6 = Library::DKW::DDX::FUN_006bf9f0
                             ((int *)g_ddxContext_008075A8,0xb4,uVar16,0x1b8,local_10);
          /* ST_CALLSITE[00598370]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
          local_EAX_1280 =
               HoloTy::Init(this_00->field_1F23,CASE_2,0xb4,uVar16,pRVar6,iVar9,bVar11,cVar12,uVar15
                           );
          if (local_EAX_1280 != 0) {
            pHVar5 = this_00->field_1F23;
            pHVar5->field_0002 = 1;
            pHVar5->field_0017 = pHVar5->field_0013;
            uVar16 = *(uint *)&this_00->field_1F23->field_0x3;
            if (-1 < (int)uVar16) {

              Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar16);
            }
            /* ST_CALLSITE[005983A7]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
            HoloTy::NextFas(this_00->field_1F23);
            FUN_006b3af0((int *)g_ddxContext_008075A8,this_00->field_1ABC);
          }
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
        local_8 = 0xffffffff;
      }
    }
    switch(this_00->array_00BC[0xc].field_01DF) {
    case 2:
      local_203 = this_00->field_0008;
      local_122 = this_00->field_1ED2;
      local_210 = 0x2552;
      local_1ff = 2;
      local_1fb = 0x6954;
      local_1e9 = 0x2553;
      local_1d8 = 2;
      local_1d4 = 0x6953;
      local_1c2 = 0x2564;
      local_1b1 = 2;
      local_1ad = 0x694b;
      local_126 = 0x2336;
      local_115 = 2;
      local_111 = 0x6941;
      local_1dc = local_203;
      local_1b5 = local_203;
      local_119 = local_203;
      break;
    case 3:
      local_203 = this_00->field_0008;
      local_210 = 0x255f;
      local_1ff = 2;
      local_1fb = 0x63ff;
      local_1e9 = 0x2560;
      local_1d8 = 2;
      local_1d4 = 0x6952;
      local_14d = 0x254c;
      local_13c = 2;
      local_138 = 0x6941;
      local_126 = 0x24bc;
      local_115 = 2;
      local_111 = 0x6952;
      local_1dc = local_203;
      local_140 = local_203;
      local_119 = local_203;
      break;
    case 4:
      local_1dc = this_00->field_0008;
      local_1e9 = 0x2553;
      local_1d4 = 0x6953;
      goto LAB_00599280;
    case 5:
      local_1dc = this_00->field_0008;
      local_1e9 = 0x2561;
      local_1d4 = 0x694b;
      goto LAB_00599280;
    case 7:
      goto switchD_005987a8_caseD_7;
    case 9:
    case 10:
      local_140 = this_00->field_0008;
      goto LAB_00599290;
    }
    goto switchD_00597fa6_caseD_9;
  case CASE_8:
    this_00->field_1B48 = 99;
    this_00->field_1B44 = 0x1cd - this_00->field_1B4C;
    if (this_00->field_1B2C != 0xffffffff) {

      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1B70,this_00->field_1B2C,0xfffffffe,this_00->field_1B44,
                 this_00->field_1B48);
    }
    if (this_00->field_1B2C != 0xffffffff) {

      FUN_006b35d0((int *)this_00->field_1B70,this_00->field_1B2C);
    }
    this_00->field_1BD5 = 0x1cd - this_00->field_1BDD;
    this_00->field_1BD9 = 0x1b8 - this_00->field_1BE1;
    if (this_00->field_1BBD != 0xffffffff) {

      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1C01,this_00->field_1BBD,0xfffffffe,this_00->field_1BD5,
                 this_00->field_1BD9);
    }
    if (this_00->field_1BBD != 0xffffffff) {

      FUN_006b35d0((int *)this_00->field_1C01,this_00->field_1BBD);
    }
    this_00->field_1C6A = 0x84;
    uVar16 = 0x1bd - (this_00->field_1C6E + -7) / 2;
    this_00->field_1C66 = uVar16;
    if (this_00->field_1C4E != 0xffffffff) {

      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1C92,this_00->field_1C4E,0xfffffffe,uVar16,
                 this_00->field_1C6A);
    }
    if (this_00->field_1C4E != 0xffffffff) {

      FUN_006b35d0((int *)this_00->field_1C92,this_00->field_1C4E);
    }

    FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x4023b0,0x1bf,0x175,
                 (ushort *)&(this_00->array_00BC[0xc].field_01DB)->field_0140);

    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x13,0x5e);
    pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar5 == nullptr) {
      pHVar5 = nullptr;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      *(undefined4 *)&pHVar5->field_0x3 = 0xffffffff;
      pHVar5->field_0001 = CASE_2;
      pHVar5->field_0007 = nullptr;
      pHVar5->field_000B = nullptr;
      pHVar5->field_000F = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = -1;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    this_00->field_1F27 = pHVar5;
    if (pHVar5 != nullptr) {
      uVar16 = 0;
      cVar12 = '\x01';
      bVar11 = 0x10;
      iVar9 = 1;
      /* ST_CALLSITE[00598B1D]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
      pRVar6 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x13,0x5e,0x1bf,0x175);
      /* ST_CALLSITE[00598B2F]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_3263 =
           HoloTy::Init(this_00->field_1F27,CASE_4,0x13,0x5e,pRVar6,iVar9,bVar11,cVar12,uVar16);
      if (local_EAX_3263 != 0) {
        pHVar5 = this_00->field_1F27;
        pHVar5->field_0002 = 1;
        pHVar5->field_0017 = pHVar5->field_0013;
        uVar16 = *(uint *)&this_00->field_1F27->field_0x3;
        if (-1 < (int)uVar16) {

          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar16);
        }
        /* ST_CALLSITE[00598B66]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        HoloTy::NextFas(this_00->field_1F27);
        if (this_00->field_1B2C != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1B70,this_00->field_1B2C);
        }
        if (this_00->field_1BBD != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1C01,this_00->field_1BBD);
        }
        if (this_00->field_1C4E != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1C92,this_00->field_1C4E);
        }
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
    uVar16 = 0x308 - this_00->field_1CFF;
    this_00->field_1CFB = 99;
    this_00->field_1CF7 = uVar16;
    if (this_00->field_1CDF != 0xffffffff) {

      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1D23,this_00->field_1CDF,0xfffffffe,uVar16,
                 this_00->field_1CFB);
    }
    if (this_00->field_1CDF != 0xffffffff) {

      FUN_006b35d0((int *)this_00->field_1D23,this_00->field_1CDF);
    }
    this_00->field_1D88 = 0x308 - this_00->field_1D90;
    this_00->field_1D8C = 0x16f - this_00->field_1D94;
    if (this_00->field_1D70 != 0xffffffff) {

      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1DB4,this_00->field_1D70,0xfffffffe,this_00->field_1D88,
                 this_00->field_1D8C);
    }
    if (this_00->field_1D70 != 0xffffffff) {

      FUN_006b35d0((int *)this_00->field_1DB4,this_00->field_1D70);
    }
    this_00->field_1E1D = 0x84;
    uVar16 = 0x2f8 - (this_00->field_1E21 + -7) / 2;
    this_00->field_1E19 = uVar16;
    if (this_00->field_1E01 != 0xffffffff) {

      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1E45,this_00->field_1E01,0xfffffffe,uVar16,
                 this_00->field_1E1D);
    }
    if (this_00->field_1E01 != 0xffffffff) {

      FUN_006b35d0((int *)this_00->field_1E45,this_00->field_1E01);
    }

    FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x40303f,0x124,0x175,
                 (ushort *)&(this_00->array_00BC[0xc].field_01DB)->field_0140);

    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x1e9,0x5e);
    pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar5 == nullptr) {
      pHVar5 = nullptr;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      *(undefined4 *)&pHVar5->field_0x3 = 0xffffffff;
      pHVar5->field_0001 = CASE_2;
      pHVar5->field_0007 = nullptr;
      pHVar5->field_000B = nullptr;
      pHVar5->field_000F = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = -1;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    this_00->field_1F2B = pHVar5;
    if (pHVar5 != nullptr) {
      uVar16 = 0;
      cVar12 = '\x01';
      bVar11 = 0x10;
      iVar9 = 1;
      /* ST_CALLSITE[00598D9C]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
      pRVar6 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0x175);
      /* ST_CALLSITE[00598DB1]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_3905 =
           HoloTy::Init(this_00->field_1F2B,CASE_2,0x1e9,0x5e,pRVar6,iVar9,bVar11,cVar12,uVar16);
      if (local_EAX_3905 != 0) {
        pHVar5 = this_00->field_1F2B;
        pHVar5->field_0002 = 1;
        pHVar5->field_0017 = pHVar5->field_0013;
        uVar16 = *(uint *)&this_00->field_1F2B->field_0x3;
        if (-1 < (int)uVar16) {

          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar16);
        }
        /* ST_CALLSITE[00598DE8]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        HoloTy::NextFas(this_00->field_1F2B);
        if (this_00->field_1CDF != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1D23,this_00->field_1CDF);
        }
        if (this_00->field_1D70 != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1DB4,this_00->field_1D70);
        }
        if (this_00->field_1E01 != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1E45,this_00->field_1E01);
        }
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
    local_203 = this_00->field_0008;
    local_210 = 0x255b;
    local_1ff = 2;
    local_1fb = 0x694a;
    local_1e9 = 0x255c;
    local_1d4 = 0x694e;
    local_1c2 = 0x255d;
    local_1b1 = 2;
    local_1ad = 0x6949;
    local_1dc = local_203;
    local_1b5 = local_203;
    break;
  default:
    goto switchD_00597fa6_caseD_9;
  case CASE_A:

    FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x403981,0x174,0x175,
                 (ushort *)&(this_00->array_00BC[0xc].field_01DB)->field_0140);

    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x199,0x5e);
    pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar5 == nullptr) {
      pHVar5 = nullptr;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      *(undefined4 *)&pHVar5->field_0x3 = 0xffffffff;
      pHVar5->field_0001 = CASE_2;
      pHVar5->field_0007 = nullptr;
      pHVar5->field_000B = nullptr;
      pHVar5->field_000F = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = -1;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    this_00->field_1F2F = pHVar5;
    if (pHVar5 != nullptr) {
      uVar16 = 0;
      cVar12 = '\x01';
      bVar11 = 0x10;
      iVar9 = 1;
      /* ST_CALLSITE[00598F72]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
      pRVar6 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x199,0x5e,0x174,0x175);
      /* ST_CALLSITE[00598F87]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      uVar14 = HoloTy::Init(this_00->field_1F2F,CASE_2,0x199,0x5e,pRVar6,iVar9,bVar11,cVar12,uVar16);
      if (uVar14 != 0) {
        pHVar5 = this_00->field_1F2F;
        pHVar5->field_0002 = 1;
        pHVar5->field_0017 = pHVar5->field_0013;
        uVar16 = *(uint *)&this_00->field_1F2F->field_0x3;
        if (-1 < (int)uVar16) {

          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar16);
        }
        /* ST_CALLSITE[00598FBE]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        HoloTy::NextFas(this_00->field_1F2F);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
    uVar16 = 0x182 - this_00->field_1CFF;
    this_00->field_1CFB = 99;
    this_00->field_1CF7 = uVar16;
    if (this_00->field_1CDF != 0xffffffff) {

      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1D23,this_00->field_1CDF,0xfffffffe,uVar16,
                 this_00->field_1CFB);
    }
    if (this_00->field_1CDF != 0xffffffff) {

      FUN_006b35d0((int *)this_00->field_1D23,this_00->field_1CDF);
    }
    this_00->field_1D88 = 0x182 - this_00->field_1D90;
    this_00->field_1D8C = 0x1ce - this_00->field_1D94;
    if (this_00->field_1D70 != 0xffffffff) {

      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1DB4,this_00->field_1D70,0xfffffffe,this_00->field_1D88,
                 this_00->field_1D8C);
    }
    if (this_00->field_1D70 != 0xffffffff) {

      FUN_006b35d0((int *)this_00->field_1DB4,this_00->field_1D70);
    }
    this_00->field_1E1D = 0x84;
    uVar16 = 0x172 - (this_00->field_1E21 + -7) / 2;
    this_00->field_1E19 = uVar16;
    if (this_00->field_1E01 != 0xffffffff) {

      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1E45,this_00->field_1E01,0xfffffffe,uVar16,
                 this_00->field_1E1D);
    }
    if (this_00->field_1E01 != 0xffffffff) {

      FUN_006b35d0((int *)this_00->field_1E45,this_00->field_1E01);
    }

    FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0x174,0x175,
                 (ushort *)&(this_00->array_00BC[0xc].field_01DB)->field_0140);

    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x13,0x5e);
    pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar5 == nullptr) {
      pHVar5 = nullptr;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      *(undefined4 *)&pHVar5->field_0x3 = 0xffffffff;
      pHVar5->field_0001 = CASE_2;
      pHVar5->field_0007 = nullptr;
      pHVar5->field_000B = nullptr;
      pHVar5->field_000F = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = -1;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    this_00->field_1F2B = pHVar5;
    if (pHVar5 != nullptr) {
      uVar16 = 0;
      cVar12 = '\x01';
      bVar11 = 0x10;
      iVar9 = 1;
      /* ST_CALLSITE[005991A6]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
      pRVar6 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x13,0x5e,0x174,0x175);
      /* ST_CALLSITE[005991B8]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_4936 =
           HoloTy::Init(this_00->field_1F2B,CASE_4,0x13,0x5e,pRVar6,iVar9,bVar11,cVar12,uVar16);
      if (local_EAX_4936 != 0) {
        pHVar5 = this_00->field_1F2B;
        pHVar5->field_0002 = 1;
        pHVar5->field_0017 = pHVar5->field_0013;
        uVar16 = *(uint *)&this_00->field_1F2B->field_0x3;
        if (-1 < (int)uVar16) {

          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar16);
        }
        /* ST_CALLSITE[005991EF]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        HoloTy::NextFas(this_00->field_1F2B);
        if (this_00->field_1CDF != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1D23,this_00->field_1CDF);
        }
        if (this_00->field_1D70 != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1DB4,this_00->field_1D70);
        }
        if (this_00->field_1E01 != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1E45,this_00->field_1E01);
        }
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
switchD_005987a8_caseD_7:
    local_1dc = this_00->field_0008;
    local_1e9 = 0x24b8;
    local_1d4 = 0x63ff;
  }
LAB_00599280:
  local_1d8 = 2;
  local_140 = local_1dc;
LAB_00599290:
  local_14d = 0x254c;
  local_13c = 2;
  local_138 = 0x6941;
  local_126 = 0x24bc;
  local_115 = 2;
  local_111 = 0x6952;
  local_119 = local_140;
switchD_00597fa6_caseD_9:
  pSVar2 = this_00->array_00BC[0xc].field_01DB;
  if (pSVar2->field_02E6 != nullptr) {
    puVar4 = local_270;
    for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0xffff;
    /* ST_CALLSITE[005992F5]: CALL 0x00401717; direct=00401717 MMsgTy::SetPanel */
    MMsgTy::SetPanel(pSVar2->field_02E6,0,(int)&local_210,0,0);
    /* ST_CALLSITE[0059930D]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
    MMsgTy::StatePanel((this_00->array_00BC[0xc].field_01DB)->field_02E6,(int)local_270);
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {

      Library::DKW::DDX::FUN_006b8a60((byte *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {

      Library::DKW::DDX::FUN_006b34d0
                ((uint *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C,
                 0xfffffffe,g_cursorClass_00802A30->field_0034,g_cursorClass_00802A30->field_0038);
      g_currentExceptionFrame = local_254.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_254.previous;
  return;
}

