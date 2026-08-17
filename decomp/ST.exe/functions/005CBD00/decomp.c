#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::InitSettMap */

void __thiscall SettMapMTy::InitSettMap(SettMapMTy *this,char param_1)

{
  ushort *puVar1;
  SettMapMTy *this_00;
  int iVar3;
  void **slotStorage;
  SettMapMTy_field_2237DArray *pSVar3;
  int uVar6;
  AnonPointee_SettMapMTy_2204 *pAVar4;
  undefined4 *puVar5;
  HoloTy *pHVar6;
  uint uVar9;
  int iVar10;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  char cVar11;
  ushort *puVar12;
  int iVar13;
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
    slotStorage = &(local_c->array_00BC[0xc].field_01DB)->field_069A;
    DAT_00808aab = DAT_00809958;
    if (*slotStorage != nullptr) {
      FreeAndNull(slotStorage);
    }
    pSVar3 = (SettMapMTy_field_2237DArray *)
             Library::DKW::TBL::DArrayCreate(nullptr,0x20,0xc,10);
    this_00->field_2237 = pSVar3;
    iVar13 = 1;
    puVar1 = g_startSystem_0081176C->field_02F0;
    this_00->field_005D = puVar1;
    puVar12 = puVar1 + 0x14;
    uVar6 = FUN_006b4fe0((int)puVar1);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pAVar4 = (AnonPointee_SettMapMTy_2204 *)
             FUN_006b50c0(0xfa,0x16,(uint)*(ushort *)(this_00->field_005D + 0xe),uVar6,
                          (undefined4 *)puVar12,iVar13);
    this_00->field_2204 = pAVar4;
    uVar8 = pAVar4[1].field_0008;
    if (uVar8 == 0) {
      uVar8 = ((uint)*(ushort *)&pAVar4[1].field_0x2 * pAVar4->field_0004 + 0x1f >> 3 & 0x1ffffffc)
              * pAVar4->field_0008;
    }
    puVar5 = (undefined4 *)FUN_006b4fa0((int *)pAVar4);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    pAVar4 = this_00->field_2204;
    puVar5 = &this_00->field_2200;
    FUN_006b2330(g_ddxContext_008075A8,puVar5,0x31,0x404acf,pAVar4->field_0004,pAVar4->field_0008,
                 (ushort *)pAVar4);
    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar5,0xffffffff,200,0x1dc);
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar5);
    /* ST_CALLSITE[005CBE8B]: CALL 0x004023a6; direct=004023A6 SettMapMTy::sub_005C29B0 */
    sub_005C29B0(this_00,param_1);
    if (((((param_1 == '\r') || (param_1 == '\x0e')) || (param_1 == '\x0f')) || (param_1 == '\x10'))
       && (this_00->field_1E27 == 0x11)) {
      FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x403b61,400,0x62,
                   (ushort *)&(this_00->array_00BC[0xc].field_01DB)->field_0140);
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
      pHVar6 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar6 == nullptr) {
        pHVar6 = nullptr;
      }
      else {
        pHVar6->field_0002 = 1;
        pHVar6->field_0000 = 0;
        *(undefined4 *)&pHVar6->field_0x3 = 0xffffffff;
        pHVar6->field_0001 = CASE_2;
        pHVar6->field_0007 = nullptr;
        pHVar6->field_000B = nullptr;
        pHVar6->field_000F = 0;
        *(undefined4 *)&pHVar6->field_0x1b = 1;
        pHVar6->field_0013 = 1;
        pHVar6->field_0017 = -1;
        pHVar6->field_0027 = 0;
        pHVar6->field_0023 = 0;
        pHVar6->field_002F = 1;
        pHVar6->field_002B = 1;
      }
      this_00->field_21F8 = pHVar6;
      if (pHVar6 != nullptr) {
        uVar8 = 0;
        cVar11 = '\x01';
        bVar10 = 0x10;
        iVar9 = 1;
        iVar13 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,200,0x1f1,400,0x62);
        /* ST_CALLSITE[005CBFE9]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
        uVar9 = HoloTy::Init(this_00->field_21F8,CASE_1,200,0x1f1,iVar13,iVar9,bVar10,cVar11,uVar8);
        if (uVar9 != 0) {
          pHVar6 = this_00->field_21F8;
          pHVar6->field_0002 = 1;
          pHVar6->field_0017 = pHVar6->field_0013;
          uVar8 = *(uint *)&this_00->field_21F8->field_0x3;
          if (-1 < (int)uVar8) {
            Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar8);
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

