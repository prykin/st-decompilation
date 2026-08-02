#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::SetSelfCheckFlag */

void __thiscall STGameObjC::SetSelfCheckFlag(STGameObjC *this,int *param_1)

{
  DArrayTy **arg_1;
  uint uVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  byte *pbVar5;
  void *pvVar6;
  AnonPointee_STGameObjC_0195 *pAVar7;
  AnonPointee_STGameObjC_0199 *pAVar8;
  AnonPointee_STGameObjC_01AD *pAVar9;
  AnonPointee_STGameObjC_01B1 *pAVar10;
  ushort *puVar11;
  int iVar12;
  AnonPointee_STGameObjC_01B5 *pAVar13;
  AnonPointee_STGameObjC_01B9 *pAVar14;
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
    uVar1 = this->field_0020;
    if (uVar1 < 0x1af) {
      if (uVar1 == 0x1ae) {
        pAVar9 = Library::DKW::LIB::MemAlloc(0xb);
        this->field_01AD = pAVar9;
        pAVar10 = Library::DKW::LIB::MemAlloc(0xb);
        this->field_01B1 = pAVar10;
        puVar11 = Library::DKW::LIB::MemAlloc(6);
        this->field_01C5 = puVar11;
        puVar11 = Library::DKW::LIB::MemAlloc(6);
        this->field_01C9 = puVar11;
      }
      else if (uVar1 < 0x173) {
        if (uVar1 != 0x172) {
          if (uVar1 == 0x14) {
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
          else if (uVar1 != 0x5a) goto cf_common_exit_00419F6C;
        }
      }
      else if (uVar1 != 0x1a4) {
cf_common_exit_00419F6C:
        iVar12 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0x54d,0,0,"%s",
                                    "STGameObjC::SetSelfCheckFlag unknown game type");
        if (iVar12 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    else if (uVar1 != 0x1b8) {
      if (uVar1 == 1000) {
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
        pvVar6 = Library::DKW::LIB::MemAlloc(0x129);
        this->field_0185 = pvVar6;
        pvVar6 = Library::DKW::LIB::MemAlloc(0x129);
        this->field_0189 = pvVar6;
        pvVar6 = Library::DKW::LIB::MemAlloc(0x10);
        this->field_018D = pvVar6;
        pvVar6 = Library::DKW::LIB::MemAlloc(0x10);
        this->field_0191 = pvVar6;
        this->field_019D = 0;
        this->field_01A1 = 0;
        pvVar6 = Library::DKW::LIB::MemAlloc(0xc);
        this->field_01A5 = pvVar6;
        pvVar6 = Library::DKW::LIB::MemAlloc(0xc);
        this->field_01A9 = pvVar6;
        pAVar13 = Library::DKW::LIB::MemAlloc(0xb);
        this->field_01B5 = pAVar13;
        pAVar14 = Library::DKW::LIB::MemAlloc(0xb);
        this->field_01B9 = pAVar14;
      }
      else if (uVar1 != 0x3e9) goto cf_common_exit_00419F6C;
    }
  }
  (*this->vtable->vfunc_30)(this->field_0121);
  pbVar5 = this->field_0121;
  pbVar16 = this->field_011D;
  memmove(pbVar16, pbVar5, 0x36); /* compiler REP MOVS byte copy */
  iVar12 = 0;
  (*this->vtable->vfunc_34)(this->field_0129);
  puVar15 = (byte *)(this->field_0129);
  puVar17 = (byte *)(this->field_0125);
  memmove(puVar17, puVar15, 0x5c); /* compiler REP MOVS byte copy */
  iVar12 = 0;
  uVar1 = this->field_0020;
  if (uVar1 < 0x1af) {
    if (uVar1 == 0x1ae) {
      (*this->vtable->vfunc_58)(this->field_01B1);
      pAVar10 = this->field_01B1;
      pAVar9 = this->field_01AD;
      pAVar9->field_0000 = pAVar10->field_0000;
      pAVar9->field_0004 = pAVar10->field_0004;
      pAVar9->field_0008 = pAVar10->field_0008;
      pAVar9->field_000A = pAVar10->field_000A;
      (*this->vtable->vfunc_64)(this->field_01C9);
      puVar11 = this->field_01C9;
      puVar2 = this->field_01C5;
      *(undefined4 *)puVar2 = *(undefined4 *)puVar11;
      puVar2[2] = puVar11[2];
      return;
    }
    if (uVar1 < 0x173) {
      if (uVar1 == 0x172) {
        return;
      }
      if (uVar1 == 0x14) {
        arg_1 = &this->field_0171;
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
        *arg_1 = nullptr;
        this->field_0175 = nullptr;
        this->field_0179 = nullptr;
        this->field_017D = nullptr;
        this->field_0181 = nullptr;
        (*this->vtable->vfunc_40)(arg_1);
        Library::DKW::TBL::FUN_006afe40((int *)&this->field_015D,&(*arg_1)->flags);
        Library::DKW::TBL::FUN_006afe40((int *)&this->field_0161,&this->field_0175->flags);
        Library::DKW::TBL::FUN_006afe40((int *)&this->field_0165,&this->field_0179->flags);
        Library::DKW::TBL::FUN_006afe40((int *)&this->field_0169,&this->field_017D->flags);
        Library::DKW::TBL::FUN_006afe40((int *)&this->field_016D,&this->field_0181->flags);
        (*this->vtable->vfunc_4C)(this->field_0199);
        pAVar8 = this->field_0199;
        pAVar7 = this->field_0195;
        pAVar7->field_0000 = pAVar8->field_0000;
        pAVar7->field_0004 = pAVar8->field_0004;
        pAVar7->field_0008 = pAVar8->field_0008;
        pAVar7->field_000C = pAVar8->field_000C;
        pAVar7->field_0010 = pAVar8->field_0010;
        pAVar7->field_0012 = pAVar8->field_0012;
        (*this->vtable->vfunc_58)(this->field_01B1);
        pAVar10 = this->field_01B1;
        pAVar9 = this->field_01AD;
        pAVar9->field_0000 = pAVar10->field_0000;
        pAVar9->field_0004 = pAVar10->field_0004;
        pAVar9->field_0008 = pAVar10->field_0008;
        pAVar9->field_000A = pAVar10->field_000A;
        (*this->vtable->vfunc_60)(this->field_01C1);
        puVar15 = (byte *)(this->field_01C1);
        puVar17 = (byte *)(this->field_01BD);
        memmove(puVar17, puVar15, 0x240); /* compiler REP MOVS byte copy */
        return;
      }
      if (uVar1 == 0x5a) {
        return;
      }
    }
    else if (uVar1 == 0x1a4) {
      return;
    }
  }
  else {
    if (uVar1 == 0x1b8) {
      return;
    }
    if (uVar1 == 1000) {
      puVar15 = (byte *)(&this->field_0135);
      if ((DArrayTy *)this->field_0135 != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_0135);
      }
      if ((DArrayTy *)this->field_0139 != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_0139);
      }
      *puVar15 = 0;
      this->field_0139 = 0;
      (*this->vtable->vfunc_38)(puVar15);
      Library::DKW::TBL::FUN_006afe40(&this->field_012D,(uint *)*puVar15);
      Library::DKW::TBL::FUN_006afe40(&this->field_0131,(uint *)this->field_0139);
      puVar15 = (byte *)(&this->field_014D);
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
      *puVar15 = 0;
      this->field_0151 = 0;
      this->field_0155 = 0;
      this->field_0159 = 0;
      (*this->vtable->vfunc_3C)(puVar15);
      Library::DKW::TBL::FUN_006afe40(&this->field_013D,(uint *)*puVar15);
      Library::DKW::TBL::FUN_006afe40(&this->field_0141,(uint *)this->field_0151);
      Library::DKW::TBL::FUN_006afe40(&this->field_0145,(uint *)this->field_0155);
      Library::DKW::TBL::FUN_006afe40(&this->field_0149,(uint *)this->field_0159);
      (*this->vtable->vfunc_44)(this->field_0189);
      puVar15 = (byte *)(this->field_0189);
      puVar17 = (byte *)(this->field_0185);
      memmove(puVar17, puVar15, 0x129); /* compiler REP MOVS byte copy */
      (*this->vtable->vfunc_48)(this->field_0191);
      puVar17 = (byte *)(this->field_0191);
      puVar3 = this->field_018D;
      puVar15 = (byte *)(&this->field_01A1);
      *puVar3 = *puVar17;
      puVar3[1] = puVar17[1];
      puVar3[2] = puVar17[2];
      puVar3[3] = puVar17[3];
      if ((DArrayTy *)*puVar15 != nullptr) {
        DArrayDestroy((DArrayTy *)*puVar15);
        *puVar15 = 0;
      }
      if ((DArrayTy *)this->field_019D != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_019D);
        this->field_019D = 0;
      }
      (*this->vtable->vfunc_50)(puVar15);
      Library::DKW::TBL::FUN_006afe40(&this->field_019D,(uint *)*puVar15);
      (*this->vtable->vfunc_54)(this->field_01A9);
      puVar15 = (byte *)(this->field_01A9);
      puVar17 = (byte *)(this->field_01A5);
      *puVar17 = *puVar15;
      puVar17[1] = puVar15[1];
      puVar17[2] = puVar15[2];
      (*this->vtable->vfunc_5C)(this->field_01B9);
      pAVar14 = this->field_01B9;
      pAVar13 = this->field_01B5;
      pAVar13->field_0000 = pAVar14->field_0000;
      pAVar13->field_0004 = pAVar14->field_0004;
      pAVar13->field_0008 = pAVar14->field_0008;
      pAVar13->field_000A = pAVar14->field_000A;
      return;
    }
    if (uVar1 == 0x3e9) {
      return;
    }
  }
  iVar12 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0x5a5,0,0,"%s",
                              "STGameObjC::SetSelfCheckFlag unknown game type");
  if (iVar12 == 0) {
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

