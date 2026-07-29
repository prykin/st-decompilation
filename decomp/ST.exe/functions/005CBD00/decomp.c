#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::InitSettMap */

void __thiscall SettMapMTy::InitSettMap(SettMapMTy *this,char param_1)

{
  ushort *puVar1;
  code *pcVar2;
  SettMapMTy *this_00;
  int iVar3;
  void **value;
  SettMapMTy_field_2237DArray *pSVar4;
  int uVar6;
  AnonPointee_SettMapMTy_2204 *pAVar5;
  undefined4 *puVar6;
  HoloTy *pHVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  char cVar12;
  ushort *puVar13;
  InternalExceptionFrame local_50;
  SettMapMTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar3 == 0) {
    DAT_00808783 = 3;
    DAT_00808754 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
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
    value = &local_c->field_1A5B->field_069A;
    DAT_00808aab = DAT_00809958;
    if (*value != (void *)0x0) {
      FreeAndNull(value);
    }
    pSVar4 = (SettMapMTy_field_2237DArray *)
             Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0x20,0xc,10);
    this_00->field_2237 = pSVar4;
    iVar3 = 1;
    puVar1 = g_startSystem_0081176C->field_02F0;
    this_00->field_005D = puVar1;
    puVar13 = puVar1 + 0x14;
    uVar6 = FUN_006b4fe0((int)puVar1);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pAVar5 = (AnonPointee_SettMapMTy_2204 *)
             FUN_006b50c0(0xfa,0x16,(uint)*(ushort *)(this_00->field_005D + 0xe),uVar6,
                          (undefined4 *)puVar13,iVar3);
    this_00->field_2204 = pAVar5;
    uVar9 = pAVar5[1].field_0008;
    if (uVar9 == 0) {
      uVar9 = ((uint)*(ushort *)&pAVar5[1].field_0x2 * pAVar5->field_0004 + 0x1f >> 3 & 0x1ffffffc)
              * pAVar5->field_0008;
    }
    puVar6 = (undefined4 *)FUN_006b4fa0((int *)pAVar5);
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    pAVar5 = this_00->field_2204;
    puVar6 = &this_00->field_2200;
    FUN_006b2330(g_ddxContext_008075A8,puVar6,0x31,0x404acf,pAVar5->field_0004,pAVar5->field_0008,
                 (ushort *)pAVar5);
    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar6,0xffffffff,200,0x1dc);
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar6);
    sub_005C29B0(this_00,param_1);
    if (((((param_1 == '\r') || (param_1 == '\x0e')) || (param_1 == '\x0f')) || (param_1 == '\x10'))
       && (this_00->field_1E27 == 0x11)) {
      FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x403b61,400,0x62,
                   (ushort *)&this_00->field_1A5B->field_0140);
      Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,200,0x1f1);
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
      pHVar7 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar7 == (HoloTy *)0x0) {
        pHVar7 = (HoloTy *)0x0;
      }
      else {
        pHVar7->field_0002 = 1;
        pHVar7->field_0000 = 0;
        *(undefined4 *)&pHVar7->field_0x3 = 0xffffffff;
        pHVar7->field_0001 = CASE_2;
        pHVar7->field_0007 = (void *)0x0;
        pHVar7->field_000B = (void *)0x0;
        pHVar7->field_000F = 0;
        *(undefined4 *)&pHVar7->field_0x1b = 1;
        pHVar7->field_0013 = 1;
        pHVar7->field_0017 = -1;
        pHVar7->field_0027 = 0;
        pHVar7->field_0023 = 0;
        pHVar7->field_002F = 1;
        pHVar7->field_002B = 1;
      }
      this_00->field_21F8 = pHVar7;
      if (pHVar7 != (HoloTy *)0x0) {
        uVar9 = 0;
        cVar12 = '\x01';
        bVar11 = 0x10;
        iVar10 = 1;
        iVar3 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,200,0x1f1,400,0x62);
        uVar9 = HoloTy::Init(this_00->field_21F8,CASE_1,200,0x1f1,iVar3,iVar10,bVar11,cVar12,uVar9);
        if (uVar9 != 0) {
          pHVar7 = this_00->field_21F8;
          pHVar7->field_0002 = 1;
          pHVar7->field_0017 = pHVar7->field_0013;
          uVar9 = *(uint *)&this_00->field_21F8->field_0x3;
          if (-1 < (int)uVar9) {
            Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar9);
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
    else {
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
      Library::DKW::DDX::FUN_006b3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
      Library::DKW::DDX::FUN_006b3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
    }
    FUN_006b6500(g_int_00811764,DAT_0080733c);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar10 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x4f,0,iVar3,"%s",
                              "SettMapMTy::InitSettMap");
  if (iVar10 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\settmobj.cpp",0x4f);
  return;
}

