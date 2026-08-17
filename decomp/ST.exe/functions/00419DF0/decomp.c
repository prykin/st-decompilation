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
  undefined4 *puVar4;
  byte *pbVar6;
  void *pvVar7;
  AnonPointee_STGameObjC_0195 *pAVar8;
  AnonPointee_STGameObjC_0199 *pAVar9;
  AnonPointee_STGameObjC_01AD *pAVar10;
  AnonPointee_STGameObjC_01B1 *pAVar11;
  ushort *puVar12;
  int local_EAX_402;
  AnonPointee_STGameObjC_01B5 *pAVar13;
  AnonPointee_STGameObjC_01B9 *pAVar14;
  int iVar13;
  int iVar15;
  byte *puVar16;
  byte *pbVar17;
  byte *puVar18;

  if (this->field_01CD == 1) {
    return;
  }
  if (this->field_01CD == 0) {
    this->field_01CD = 1;
    pbVar6 = Library::DKW::LIB::MemAlloc(0x36);
    this->field_011D = pbVar6;
    pbVar6 = Library::DKW::LIB::MemAlloc(0x36);
    this->field_0121 = pbVar6;
    pvVar7 = Library::DKW::LIB::MemAlloc(0x5c);
    this->field_0125 = pvVar7;
    pvVar7 = Library::DKW::LIB::MemAlloc(0x5c);
    this->field_0129 = pvVar7;
    uVar2 = this->field_0020;
    if (uVar2 < 0x1af) {
      if (uVar2 == 0x1ae) {
        pAVar10 = Library::DKW::LIB::MemAlloc(0xb);
        this->field_01AD = pAVar10;
        pAVar11 = Library::DKW::LIB::MemAlloc(0xb);
        this->field_01B1 = pAVar11;
        puVar12 = Library::DKW::LIB::MemAlloc(6);
        this->field_01C5 = puVar12;
        puVar12 = Library::DKW::LIB::MemAlloc(6);
        this->field_01C9 = puVar12;
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
            pAVar8 = Library::DKW::LIB::MemAlloc(0x13);
            this->field_0195 = pAVar8;
            pAVar9 = Library::DKW::LIB::MemAlloc(0x13);
            this->field_0199 = pAVar9;
            pAVar10 = Library::DKW::LIB::MemAlloc(0xb);
            this->field_01AD = pAVar10;
            pAVar11 = Library::DKW::LIB::MemAlloc(0xb);
            this->field_01B1 = pAVar11;
            pvVar7 = Library::DKW::LIB::MemAlloc(0x240);
            this->field_01BD = pvVar7;
            pvVar7 = Library::DKW::LIB::MemAlloc(0x240);
            this->field_01C1 = pvVar7;
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
        this->field_012D = 0;
        this->field_0131 = 0;
        this->field_0135 = 0;
        this->field_0139 = 0;
        this->field_013D = 0;
        this->field_0141 = 0;
        this->field_0145 = 0;
        this->field_0149 = 0;
        this->field_014D = 0;
        this->field_0151 = 0;
        this->field_0155 = 0;
        this->field_0159 = 0;
        pvVar7 = Library::DKW::LIB::MemAlloc(0x129);
        this->field_0185 = pvVar7;
        pvVar7 = Library::DKW::LIB::MemAlloc(0x129);
        this->field_0189 = pvVar7;
        pvVar7 = Library::DKW::LIB::MemAlloc(0x10);
        this->field_018D = pvVar7;
        pvVar7 = Library::DKW::LIB::MemAlloc(0x10);
        this->field_0191 = pvVar7;
        this->field_019D = 0;
        this->field_01A1 = 0;
        pvVar7 = Library::DKW::LIB::MemAlloc(0xc);
        this->field_01A5 = pvVar7;
        pvVar7 = Library::DKW::LIB::MemAlloc(0xc);
        this->field_01A9 = pvVar7;
        pAVar13 = Library::DKW::LIB::MemAlloc(0xb);
        this->field_01B5 = pAVar13;
        pAVar14 = Library::DKW::LIB::MemAlloc(0xb);
        this->field_01B9 = pAVar14;
      }
      else if (uVar2 != 0x3e9) goto cf_common_exit_00419F6C;
    }
  }
  /* ST_CALLSITE[0041A060]: CALL dword ptr [EAX + 0x30] */
  (*this->vtable->vfunc_30)((short)this->field_0121);
  pbVar6 = this->field_0121;
  pbVar17 = this->field_011D;
  memmove(pbVar17, pbVar6, 0x36); /* compiler REP MOVS byte copy */
  iVar15 = 0;
  /* ST_CALLSITE[0041A083]: CALL dword ptr [EDX + 0x34] */
  (*this->vtable->vfunc_34)((short)this->field_0129);
  puVar16 = (byte *)(this->field_0129);
  puVar18 = (byte *)(this->field_0125);
  memmove(puVar18, puVar16, 0x5c); /* compiler REP MOVS byte copy */
  iVar15 = 0;
  uVar2 = this->field_0020;
  if (uVar2 < 0x1af) {
    if (uVar2 == 0x1ae) {
      /* ST_CALLSITE[0041A23F]: CALL dword ptr [EDX + 0x58] */
      (*this->vtable->vfunc_58)((short)this->field_01B1);
      pAVar11 = this->field_01B1;
      pAVar10 = this->field_01AD;
      pAVar10->field_0000 = pAVar11->field_0000;
      pAVar10->field_0004 = pAVar11->field_0004;
      pAVar10->field_0008 = pAVar11->field_0008;
      pAVar10->field_000A = pAVar11->field_000A;
      /* ST_CALLSITE[0041A271]: CALL dword ptr [EDX + 0x64] */
      (*this->vtable->vfunc_64)((short)this->field_01C9);
      puVar12 = this->field_01C9;
      puVar3 = this->field_01C5;
      *(undefined4 *)puVar3 = *(undefined4 *)puVar12;
      puVar3[2] = puVar12[2];
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
        pAVar9 = this->field_0199;
        pAVar8 = this->field_0195;
        pAVar8->field_0000 = pAVar9->field_0000;
        pAVar8->field_0004 = pAVar9->field_0004;
        pAVar8->field_0008 = pAVar9->field_0008;
        pAVar8->field_000C = pAVar9->field_000C;
        pAVar8->field_0010 = pAVar9->field_0010;
        pAVar8->field_0012 = pAVar9->field_0012;
        /* ST_CALLSITE[0041A1DB]: CALL dword ptr [EDX + 0x58] */
        (*this->vtable->vfunc_58)((short)this->field_01B1);
        pAVar11 = this->field_01B1;
        pAVar10 = this->field_01AD;
        pAVar10->field_0000 = pAVar11->field_0000;
        pAVar10->field_0004 = pAVar11->field_0004;
        pAVar10->field_0008 = pAVar11->field_0008;
        pAVar10->field_000A = pAVar11->field_000A;
        /* ST_CALLSITE[0041A20D]: CALL dword ptr [EDX + 0x60] */
        (*this->vtable->vfunc_60)((short)this->field_01C1);
        puVar16 = (byte *)(this->field_01C1);
        puVar18 = (byte *)(this->field_01BD);
        memmove(puVar18, puVar16, 0x240); /* compiler REP MOVS byte copy */
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
      puVar16 = (byte *)(&this->field_0135);
      if ((DArrayTy *)this->field_0135 != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_0135);
      }
      if ((DArrayTy *)this->field_0139 != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_0139);
      }
      *puVar16 = 0;
      this->field_0139 = 0;
      /* ST_CALLSITE[0041A30A]: CALL dword ptr [EDX + 0x38] */
      (*this->vtable->vfunc_38)((short)puVar16);
      Library::DKW::TBL::FUN_006afe40(&this->field_012D,(uint *)*puVar16);
      Library::DKW::TBL::FUN_006afe40(&this->field_0131,(uint *)this->field_0139);
      puVar16 = (byte *)(&this->field_014D);
      if ((DArrayTy *)this->field_014D != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_014D);
      }
      if ((DArrayTy *)this->field_0151 != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_0151);
      }
      if ((DArrayTy *)this->field_0155 != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_0155);
      }
      if ((DArrayTy *)this->field_0159 != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_0159);
      }
      *puVar16 = 0;
      this->field_0151 = 0;
      this->field_0155 = 0;
      this->field_0159 = 0;
      /* ST_CALLSITE[0041A385]: CALL dword ptr [EDX + 0x3c] */
      (*this->vtable->vfunc_3C)((short)puVar16);
      Library::DKW::TBL::FUN_006afe40(&this->field_013D,(uint *)*puVar16);
      Library::DKW::TBL::FUN_006afe40(&this->field_0141,(uint *)this->field_0151);
      Library::DKW::TBL::FUN_006afe40(&this->field_0145,(uint *)this->field_0155);
      Library::DKW::TBL::FUN_006afe40(&this->field_0149,(uint *)this->field_0159);
      /* ST_CALLSITE[0041A3D3]: CALL dword ptr [EAX + 0x44] */
      (*this->vtable->vfunc_44)((short)this->field_0189);
      puVar16 = (byte *)(this->field_0189);
      puVar18 = (byte *)(this->field_0185);
      memmove(puVar18, puVar16, 0x129); /* compiler REP MOVS byte copy */
      /* ST_CALLSITE[0041A3F5]: CALL dword ptr [EDX + 0x48] */
      (*this->vtable->vfunc_48)((short)this->field_0191);
      puVar18 = (byte *)(this->field_0191);
      puVar4 = this->field_018D;
      puVar16 = (byte *)(&this->field_01A1);
      *puVar4 = *puVar18;
      puVar4[1] = puVar18[1];
      puVar4[2] = puVar18[2];
      puVar4[3] = puVar18[3];
      if ((DArrayTy *)*puVar16 != nullptr) {
        DArrayDestroy((DArrayTy *)*puVar16);
        *puVar16 = 0;
      }
      if ((DArrayTy *)this->field_019D != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_019D);
        this->field_019D = 0;
      }
      /* ST_CALLSITE[0041A453]: CALL dword ptr [EDX + 0x50] */
      (*this->vtable->vfunc_50)((short)puVar16);
      Library::DKW::TBL::FUN_006afe40(&this->field_019D,(uint *)*puVar16);
      /* ST_CALLSITE[0041A46A]: CALL dword ptr [EAX + 0x54] */
      (*this->vtable->vfunc_54)((short)this->field_01A9);
      puVar16 = (byte *)(this->field_01A9);
      puVar18 = (byte *)(this->field_01A5);
      *puVar18 = *puVar16;
      puVar18[1] = puVar16[1];
      puVar18[2] = puVar16[2];
      /* ST_CALLSITE[0041A494]: CALL dword ptr [EAX + 0x5c] */
      (*this->vtable->vfunc_5C)((short)this->field_01B9);
      pAVar14 = this->field_01B9;
      pAVar13 = this->field_01B5;
      pAVar13->field_0000 = pAVar14->field_0000;
      pAVar13->field_0004 = pAVar14->field_0004;
      pAVar13->field_0008 = pAVar14->field_0008;
      pAVar13->field_000A = pAVar14->field_000A;
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

