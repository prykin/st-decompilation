#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::InitSettMap */

void __thiscall SettMapMTy::InitSettMap(SettMapMTy *this,char param_1)

{
  AnonPointee_StartSystemTy_02F0 *pAVar1;
  code *pcVar2;
  SettMapMTy *this_00;
  int iVar3;
  DArrayTy *pDVar4;
  uint uVar5;
  AnonPointee_SettMapMTy_2204 *pAVar6;
  undefined4 *puVar7;
  HoloTy *pHVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  InternalExceptionFrame local_50;
  SettMapMTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar3 == 0) {
    DAT_00808783 = 3;
    DAT_00808754 = FUN_006e51b0(0x807620);
    this_00 = local_c;
    if (DAT_0080877e == '\0') {
      DAT_00809958 = 0xffffffff;
      local_c->field_2121 = 0xffffffff;
    }
    else {
      DAT_00809958 = 0;
      local_c->field_2121 = 0;
      DAT_00808aa8 = DAT_0080734b;
    }
    puVar7 = &local_c->field_1A5B->field_069A;
    DAT_00808aab = DAT_00809958;
    if (*puVar7 != 0) {
      FreeAndNull((void **)puVar7);
    }
    pDVar4 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x20,0xc,10);
    this_00->field_2237 = pDVar4;
    iVar3 = 1;
    pAVar1 = PTR_0081176c->field_02F0;
    this_00->field_005D = pAVar1;
    puVar7 = &pAVar1[2].field_0008;
    uVar5 = FUN_006b4fe0((int)pAVar1);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pAVar6 = (AnonPointee_SettMapMTy_2204 *)
             FUN_006b50c0(0xfa,0x16,(uint)*(ushort *)(this_00->field_005D + 0xe),uVar5,puVar7,iVar3)
    ;
    this_00->field_2204 = pAVar6;
    uVar5 = pAVar6[1].field_0008;
    if (uVar5 == 0) {
      uVar5 = ((uint)*(ushort *)&pAVar6[1].field_0x2 * pAVar6->field_0004 + 0x1f >> 3 & 0x1ffffffc)
              * pAVar6->field_0008;
    }
    puVar7 = (undefined4 *)FUN_006b4fa0((int)pAVar6);
    for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = 0xff;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    pAVar6 = this_00->field_2204;
    puVar7 = &this_00->field_2200;
    FUN_006b2330((uint)DAT_008075a8,puVar7,0x31,0x404acf,pAVar6->field_0004,pAVar6->field_0008,
                 (uint)pAVar6);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar7,0xffffffff,200,0x1dc);
    FUN_006b3af0(DAT_008075a8,*puVar7);
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005B6730::thunk_FUN_005c29b0
              ((AnonReceiver_005B6730 *)this_00,param_1);
    if (((((param_1 == '\r') || (param_1 == '\x0e')) || (param_1 == '\x0f')) || (param_1 == '\x10'))
       && (this_00->field_1E27 == 0x11)) {
      FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403b61,400,0x62,
                   (uint)&this_00->field_1A5B->field_0x140);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,200,0x1f1);
      if (PTR_0081176c->field_0560 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560,0xfffffffe,
                   PTR_0081176c->field_0578,PTR_0081176c->field_057C);
      }
      if (PTR_0081176c->field_05F1 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1,0xfffffffe,
                   PTR_0081176c->field_0609,PTR_0081176c->field_060D);
      }
      pHVar8 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar8 == (HoloTy *)0x0) {
        pHVar8 = (HoloTy *)0x0;
      }
      else {
        pHVar8->field_0002 = 1;
        pHVar8->field_0000 = 0;
        pHVar8->field_0003 = 0xffffffff;
        pHVar8->field_0001 = CASE_2;
        pHVar8->field_0007 = 0;
        pHVar8->field_000B = 0;
        *(undefined4 *)&pHVar8->field_0xf = 0;
        *(undefined4 *)&pHVar8->field_0x1b = 1;
        pHVar8->field_0013 = 1;
        pHVar8->field_0017 = 0xffffffff;
        pHVar8->field_0027 = 0;
        pHVar8->field_0023 = 0;
        pHVar8->field_002F = 1;
        pHVar8->field_002B = 1;
      }
      this_00->field_21F8 = pHVar8;
      if (pHVar8 != (HoloTy *)0x0) {
        uVar9 = 0;
        cVar11 = '\x01';
        uVar5 = 0x10;
        iVar10 = 1;
        iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,200,0x1f1,400,0x62);
        uVar5 = HoloTy::Init(this_00->field_21F8,CASE_1,200,0x1f1,iVar3,iVar10,uVar5,cVar11,uVar9);
        if (uVar5 != 0) {
          pHVar8 = this_00->field_21F8;
          pHVar8->field_0002 = 1;
          pHVar8->field_0017 = pHVar8->field_0013;
          uVar5 = this_00->field_21F8->field_0003;
          if (-1 < (int)uVar5) {
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar5);
          }
          if (PTR_0081176c->field_0560 != 0xffffffff) {
            FUN_006b3af0((int *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560);
          }
          if (PTR_0081176c->field_05F1 != 0xffffffff) {
            FUN_006b3af0((int *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1);
          }
          FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0558);
          FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0554);
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
        local_8 = 0xffffffff;
      }
    }
    else {
      if (PTR_0081176c->field_0560 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560,0xfffffffe,
                   PTR_0081176c->field_0578,PTR_0081176c->field_057C);
      }
      if (PTR_0081176c->field_05F1 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1,0xfffffffe,
                   PTR_0081176c->field_0609,PTR_0081176c->field_060D);
      }
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0558);
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0554);
    }
    FUN_006b6500(g_int_00811764,DAT_0080733c);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar10 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x4f,0,iVar3,&DAT_007a4ccc,
                              s_SettMapMTy__InitSettMap_007cd280);
  if (iVar10 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_settmobj_cpp_007cd258,0x4f);
  return;
}

