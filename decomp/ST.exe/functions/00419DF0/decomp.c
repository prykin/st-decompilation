#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::SetSelfCheckFlag
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall SetSelfCheckFlag(STGameObjC * this) Evidence: every machine RET purges exactly 0
   explicit stack bytes; current signature describes 4; removed trailing parameter slots have no
   listing references; ret_sites=0041A226 RET | 0041A28F RET | 0041A4BE RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall STGameObjC::SetSelfCheckFlag(STGameObjC *this)

{
  DArrayTy **ppDVar1;
  uint uVar2;
  ushort *puVar3;
  byte *pbVar5;
  void *pvVar6;
  AnonPointee_STGameObjC_0195 *pAVar7;
  AnonPointee_STGameObjC_0199 *pAVar8;
  AnonPointee_STGameObjC_01AD *pAVar9;
  AnonPointee_STGameObjC_01B1 *pAVar10;
  ushort *puVar11;
  int local_EAX_402;
  AnonPointee_STGameObjC_01B5 *pAVar12;
  AnonPointee_STGameObjC_01B9 *pAVar13;
  int iVar13;
  int iVar14;
  byte *puVar15;
  byte *pbVar16;
  byte *puVar17;

  if (this->field_01CD == 1) {
    return;
  }
  if (this->field_01CD == 0) {
    this->field_01CD = 1;
    pbVar5 = Library::DKW::LIB::MemAlloc(0x36);
    this->field_011D = pbVar5;
    pbVar5 = Library::DKW::LIB::MemAlloc(0x36);
    this->field_0121 = pbVar5;
    pvVar6 = Library::DKW::LIB::MemAlloc(0x5c);
    this->field_0125 = pvVar6;
    pvVar6 = Library::DKW::LIB::MemAlloc(0x5c);
    this->field_0129 = pvVar6;
    uVar2 = this->field_0020;
    if (uVar2 < 0x1af) {
      if (uVar2 == 0x1ae) {
        pAVar9 = Library::DKW::LIB::MemAlloc(0xb);
        this->field_01AD = pAVar9;
        pAVar10 = Library::DKW::LIB::MemAlloc(0xb);
        this->field_01B1 = pAVar10;
        puVar11 = Library::DKW::LIB::MemAlloc(6);
        this->field_01C5 = puVar11;
        puVar11 = Library::DKW::LIB::MemAlloc(6);
        this->field_01C9 = puVar11;
      }
      else if (uVar2 < 0x173) {
        if (uVar2 != 0x172) {
          if (uVar2 == 0x14) {
            this->field_015D = nullptr;
            this->field_0161 = nullptr;
            this->field_0165 = nullptr;
            this->field_0169 = nullptr;
            this->field_016D = nullptr;
            this->field_0171 = nullptr;
            this->field_0175 = nullptr;
            this->field_0179 = nullptr;
            this->field_017D = nullptr;
            this->field_0181 = nullptr;
            pAVar7 = Library::DKW::LIB::MemAlloc(0x13);
            this->field_0195 = pAVar7;
            pAVar8 = Library::DKW::LIB::MemAlloc(0x13);
            this->field_0199 = pAVar8;
            pAVar9 = Library::DKW::LIB::MemAlloc(0xb);
            this->field_01AD = pAVar9;
            pAVar10 = Library::DKW::LIB::MemAlloc(0xb);
            this->field_01B1 = pAVar10;
            pvVar6 = Library::DKW::LIB::MemAlloc(0x240);
            this->field_01BD = pvVar6;
            pvVar6 = Library::DKW::LIB::MemAlloc(0x240);
            this->field_01C1 = pvVar6;
          }
          else if (uVar2 != 0x5a) goto cf_common_exit_00419F6C;
        }
      }
      else if (uVar2 != 0x1a4) {
cf_common_exit_00419F6C:
        local_EAX_402 =
             ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0x54d,0,0,"%s",
                                "STGameObjC::SetSelfCheckFlag unknown game type");
        if (local_EAX_402 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    else if (uVar2 != 0x1b8) {
      if (uVar2 == 1000) {
        this->field_012D = nullptr;
        this->field_0131 = nullptr;
        this->field_0135 = nullptr;
        this->field_0139 = nullptr;
        this->field_013D = nullptr;
        this->field_0141 = nullptr;
        this->field_0145 = nullptr;
        this->field_0149 = nullptr;
        this->field_014D = nullptr;
        this->field_0151 = nullptr;
        this->field_0155 = nullptr;
        this->field_0159 = nullptr;
        pvVar6 = Library::DKW::LIB::MemAlloc(0x129);
        this->field_0185 = pvVar6;
        pvVar6 = Library::DKW::LIB::MemAlloc(0x129);
        this->field_0189 = pvVar6;
        pvVar6 = Library::DKW::LIB::MemAlloc(0x10);
        this->field_018D = pvVar6;
        pvVar6 = Library::DKW::LIB::MemAlloc(0x10);
        this->field_0191 = pvVar6;
        this->field_019D = nullptr;
        this->field_01A1 = nullptr;
        pvVar6 = Library::DKW::LIB::MemAlloc(0xc);
        this->field_01A5 = pvVar6;
        pvVar6 = Library::DKW::LIB::MemAlloc(0xc);
        this->field_01A9 = pvVar6;
        pAVar12 = Library::DKW::LIB::MemAlloc(0xb);
        this->field_01B5 = pAVar12;
        pAVar13 = Library::DKW::LIB::MemAlloc(0xb);
        this->field_01B9 = pAVar13;
      }
      else if (uVar2 != 0x3e9) goto cf_common_exit_00419F6C;
    }
  }
  /* ST_CALLSITE[0041A060]: CALL dword ptr [EAX + 0x30] */
  (*this->vtable->vfunc_30)((short)this->field_0121);
  pbVar5 = this->field_0121;
  pbVar16 = this->field_011D;
  memmove(pbVar16, pbVar5, 0x36); /* compiler REP MOVS byte copy */
  iVar14 = 0;
  /* ST_CALLSITE[0041A083]: CALL dword ptr [EDX + 0x34] */
  (*this->vtable->vfunc_34)((short)this->field_0129);
  puVar15 = (byte *)(this->field_0129);
  puVar17 = (byte *)(this->field_0125);
  memmove(puVar17, puVar15, 0x5c); /* compiler REP MOVS byte copy */
  iVar14 = 0;
  uVar2 = this->field_0020;
  if (uVar2 < 0x1af) {
    if (uVar2 == 0x1ae) {
      /* ST_CALLSITE[0041A23F]: CALL dword ptr [EDX + 0x58] */
      (*this->vtable->vfunc_58)((short)this->field_01B1);
      pAVar10 = this->field_01B1;
      pAVar9 = this->field_01AD;
      pAVar9->field_0000 = pAVar10->field_0000;
      pAVar9->field_0004 = pAVar10->field_0004;
      pAVar9->field_0008 = pAVar10->field_0008;
      pAVar9->field_000A = pAVar10->field_000A;
      /* ST_CALLSITE[0041A271]: CALL dword ptr [EDX + 0x64] */
      (*this->vtable->vfunc_64)((short)this->field_01C9);
      puVar11 = this->field_01C9;
      puVar3 = this->field_01C5;
      *(undefined4 *)puVar3 = *(undefined4 *)puVar11;
      puVar3[2] = puVar11[2];
      return;
    }
    if (uVar2 < 0x173) {
      if (uVar2 == 0x172) {
        return;
      }
      if (uVar2 == 0x14) {
        ppDVar1 = &this->field_0171;
        if (this->field_0171 != nullptr) {
          DArrayDestroy(this->field_0171);
        }
        if (this->field_0175 != nullptr) {
          DArrayDestroy(this->field_0175);
        }
        if (this->field_0179 != nullptr) {
          DArrayDestroy(this->field_0179);
        }
        if (this->field_017D != nullptr) {
          DArrayDestroy(this->field_017D);
        }
        if (this->field_0181 != nullptr) {
          DArrayDestroy(this->field_0181);
        }
        *ppDVar1 = nullptr;
        this->field_0175 = nullptr;
        this->field_0179 = nullptr;
        this->field_017D = nullptr;
        this->field_0181 = nullptr;
        /* ST_CALLSITE[0041A13E]: CALL dword ptr [EAX + 0x40] */
        (*this->vtable->vfunc_40)((short)ppDVar1);
        Library::DKW::TBL::FUN_006afe40((int *)&this->field_015D,&(*ppDVar1)->flags);
        Library::DKW::TBL::FUN_006afe40((int *)&this->field_0161,&this->field_0175->flags);
        Library::DKW::TBL::FUN_006afe40((int *)&this->field_0165,&this->field_0179->flags);
        Library::DKW::TBL::FUN_006afe40((int *)&this->field_0169,&this->field_017D->flags);
        Library::DKW::TBL::FUN_006afe40((int *)&this->field_016D,&this->field_0181->flags);
        /* ST_CALLSITE[0041A19D]: CALL dword ptr [EDX + 0x4c] */
        (*this->vtable->vfunc_4C)((short)this->field_0199);
        pAVar8 = this->field_0199;
        pAVar7 = this->field_0195;
        pAVar7->field_0000 = pAVar8->field_0000;
        pAVar7->field_0004 = pAVar8->field_0004;
        pAVar7->field_0008 = pAVar8->field_0008;
        pAVar7->field_000C = pAVar8->field_000C;
        pAVar7->field_0010 = pAVar8->field_0010;
        pAVar7->field_0012 = pAVar8->field_0012;
        /* ST_CALLSITE[0041A1DB]: CALL dword ptr [EDX + 0x58] */
        (*this->vtable->vfunc_58)((short)this->field_01B1);
        pAVar10 = this->field_01B1;
        pAVar9 = this->field_01AD;
        pAVar9->field_0000 = pAVar10->field_0000;
        pAVar9->field_0004 = pAVar10->field_0004;
        pAVar9->field_0008 = pAVar10->field_0008;
        pAVar9->field_000A = pAVar10->field_000A;
        /* ST_CALLSITE[0041A20D]: CALL dword ptr [EDX + 0x60] */
        (*this->vtable->vfunc_60)((short)this->field_01C1);
        puVar15 = (byte *)(this->field_01C1);
        puVar17 = (byte *)(this->field_01BD);
        memmove(puVar17, puVar15, 0x240); /* compiler REP MOVS byte copy */
        return;
      }
      if (uVar2 == 0x5a) {
        return;
      }
    }
    else if (uVar2 == 0x1a4) {
      return;
    }
  }
  else {
    if (uVar2 == 0x1b8) {
      return;
    }
    if (uVar2 == 1000) {
      ppDVar1 = &this->field_0135;
      if (this->field_0135 != nullptr) {
        DArrayDestroy(this->field_0135);
      }
      if (this->field_0139 != nullptr) {
        DArrayDestroy(this->field_0139);
      }
      *ppDVar1 = nullptr;
      this->field_0139 = nullptr;
      /* ST_CALLSITE[0041A30A]: CALL dword ptr [EDX + 0x38] */
      (*this->vtable->vfunc_38)((short)ppDVar1);
      Library::DKW::TBL::FUN_006afe40((int *)&this->field_012D,&(*ppDVar1)->flags);
      Library::DKW::TBL::FUN_006afe40((int *)&this->field_0131,&this->field_0139->flags);
      ppDVar1 = &this->field_014D;
      if (this->field_014D != nullptr) {
        DArrayDestroy(this->field_014D);
      }
      if (this->field_0151 != nullptr) {
        DArrayDestroy(this->field_0151);
      }
      if (this->field_0155 != nullptr) {
        DArrayDestroy(this->field_0155);
      }
      if (this->field_0159 != nullptr) {
        DArrayDestroy(this->field_0159);
      }
      *ppDVar1 = nullptr;
      this->field_0151 = nullptr;
      this->field_0155 = nullptr;
      this->field_0159 = nullptr;
      /* ST_CALLSITE[0041A385]: CALL dword ptr [EDX + 0x3c] */
      (*this->vtable->vfunc_3C)((short)ppDVar1);
      Library::DKW::TBL::FUN_006afe40((int *)&this->field_013D,&(*ppDVar1)->flags);
      Library::DKW::TBL::FUN_006afe40((int *)&this->field_0141,&this->field_0151->flags);
      Library::DKW::TBL::FUN_006afe40((int *)&this->field_0145,&this->field_0155->flags);
      Library::DKW::TBL::FUN_006afe40((int *)&this->field_0149,&this->field_0159->flags);
      /* ST_CALLSITE[0041A3D3]: CALL dword ptr [EAX + 0x44] */
      (*this->vtable->vfunc_44)((short)this->field_0189);
      puVar15 = (byte *)(this->field_0189);
      puVar17 = (byte *)(this->field_0185);
      memmove(puVar17, puVar15, 0x129); /* compiler REP MOVS byte copy */
      /* ST_CALLSITE[0041A3F5]: CALL dword ptr [EDX + 0x48] */
      (*this->vtable->vfunc_48)((short)this->field_0191);
      puVar15 = (byte *)(this->field_0191);
      puVar17 = (byte *)(this->field_018D);
      ppDVar1 = &this->field_01A1;
      *puVar17 = *puVar15;
      puVar17[1] = puVar15[1];
      puVar17[2] = puVar15[2];
      puVar17[3] = puVar15[3];
      if (*ppDVar1 != nullptr) {
        DArrayDestroy(*ppDVar1);
        *ppDVar1 = nullptr;
      }
      if (this->field_019D != nullptr) {
        DArrayDestroy(this->field_019D);
        this->field_019D = nullptr;
      }
      /* ST_CALLSITE[0041A453]: CALL dword ptr [EDX + 0x50] */
      (*this->vtable->vfunc_50)((short)ppDVar1);
      Library::DKW::TBL::FUN_006afe40((int *)&this->field_019D,&(*ppDVar1)->flags);
      /* ST_CALLSITE[0041A46A]: CALL dword ptr [EAX + 0x54] */
      (*this->vtable->vfunc_54)((short)this->field_01A9);
      puVar15 = (byte *)(this->field_01A9);
      puVar17 = (byte *)(this->field_01A5);
      *puVar17 = *puVar15;
      puVar17[1] = puVar15[1];
      puVar17[2] = puVar15[2];
      /* ST_CALLSITE[0041A494]: CALL dword ptr [EAX + 0x5c] */
      (*this->vtable->vfunc_5C)((short)this->field_01B9);
      pAVar13 = this->field_01B9;
      pAVar12 = this->field_01B5;
      pAVar12->field_0000 = pAVar13->field_0000;
      pAVar12->field_0004 = pAVar13->field_0004;
      pAVar12->field_0008 = pAVar13->field_0008;
      pAVar12->field_000A = pAVar13->field_000A;
      return;
    }
    if (uVar2 == 0x3e9) {
      return;
    }
  }
  iVar13 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0x5a5,0,0,"%s",
                              "STGameObjC::SetSelfCheckFlag unknown game type");
  if (iVar13 == 0) {
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

