#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::SetSelfCheckFlag */

void __thiscall STGameObjC::SetSelfCheckFlag(STGameObjC *this,int *param_1)

{
  uint uVar1;
  ushort *puVar2;
  code *pcVar3;
  int iVar4;
  AnonPointee_STGameObjC_0195 *pAVar5;
  AnonPointee_STGameObjC_0199 *pAVar6;
  AnonPointee_STGameObjC_01AD *pAVar7;
  AnonPointee_STGameObjC_01B1 *pAVar8;
  ushort *puVar9;
  AnonPointee_STGameObjC_018D *pAVar10;
  AnonPointee_STGameObjC_0191 *pAVar11;
  AnonPointee_STGameObjC_01A5 *pAVar12;
  AnonPointee_STGameObjC_01A9 *pAVar13;
  AnonPointee_STGameObjC_01B5 *pAVar14;
  AnonPointee_STGameObjC_01B9 *pAVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;

  if (this->field_01CD == 1) {
    return;
  }
  if (this->field_01CD == 0) {
    this->field_01CD = 1;
    iVar4 = Library::DKW::LIB::FUN_006aac70(0x36);
    this->field_011D = iVar4;
    iVar4 = Library::DKW::LIB::FUN_006aac70(0x36);
    this->field_0121 = iVar4;
    iVar4 = Library::DKW::LIB::FUN_006aac70(0x5c);
    this->field_0125 = iVar4;
    iVar4 = Library::DKW::LIB::FUN_006aac70(0x5c);
    this->field_0129 = iVar4;
    uVar1 = this->field_0020;
    if (uVar1 < 0x1af) {
      if (uVar1 == 0x1ae) {
        pAVar7 = (AnonPointee_STGameObjC_01AD *)Library::DKW::LIB::FUN_006aac70(0xb);
        this->field_01AD = pAVar7;
        pAVar8 = (AnonPointee_STGameObjC_01B1 *)Library::DKW::LIB::FUN_006aac70(0xb);
        this->field_01B1 = pAVar8;
        puVar9 = (ushort *)Library::DKW::LIB::FUN_006aac70(6);
        this->field_01C5 = puVar9;
        puVar9 = (ushort *)Library::DKW::LIB::FUN_006aac70(6);
        this->field_01C9 = puVar9;
      }
      else if (uVar1 < 0x173) {
        if (uVar1 != 0x172) {
          if (uVar1 == 0x14) {
            this->field_015D = 0;
            this->field_0161 = 0;
            this->field_0165 = 0;
            this->field_0169 = 0;
            this->field_016D = 0;
            this->field_0171 = 0;
            this->field_0175 = 0;
            this->field_0179 = 0;
            this->field_017D = 0;
            this->field_0181 = 0;
            pAVar5 = (AnonPointee_STGameObjC_0195 *)Library::DKW::LIB::FUN_006aac70(0x13);
            this->field_0195 = pAVar5;
            pAVar6 = (AnonPointee_STGameObjC_0199 *)Library::DKW::LIB::FUN_006aac70(0x13);
            this->field_0199 = pAVar6;
            pAVar7 = (AnonPointee_STGameObjC_01AD *)Library::DKW::LIB::FUN_006aac70(0xb);
            this->field_01AD = pAVar7;
            pAVar8 = (AnonPointee_STGameObjC_01B1 *)Library::DKW::LIB::FUN_006aac70(0xb);
            this->field_01B1 = pAVar8;
            iVar4 = Library::DKW::LIB::FUN_006aac70(0x240);
            this->field_01BD = iVar4;
            iVar4 = Library::DKW::LIB::FUN_006aac70(0x240);
            this->field_01C1 = iVar4;
          }
          else if (uVar1 != 0x5a) goto cf_common_exit_00419F6C;
        }
      }
      else if (uVar1 != 0x1a4) {
cf_common_exit_00419F6C:
        iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0x54d,0,0,"%s",
                                   "STGameObjC::SetSelfCheckFlag unknown game type");
        if (iVar4 == 0) {
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
        iVar4 = Library::DKW::LIB::FUN_006aac70(0x129);
        this->field_0185 = iVar4;
        iVar4 = Library::DKW::LIB::FUN_006aac70(0x129);
        this->field_0189 = iVar4;
        pAVar10 = (AnonPointee_STGameObjC_018D *)Library::DKW::LIB::FUN_006aac70(0x10);
        this->field_018D = pAVar10;
        pAVar11 = (AnonPointee_STGameObjC_0191 *)Library::DKW::LIB::FUN_006aac70(0x10);
        this->field_0191 = pAVar11;
        this->field_019D = 0;
        this->field_01A1 = 0;
        pAVar12 = (AnonPointee_STGameObjC_01A5 *)Library::DKW::LIB::FUN_006aac70(0xc);
        this->field_01A5 = pAVar12;
        pAVar13 = (AnonPointee_STGameObjC_01A9 *)Library::DKW::LIB::FUN_006aac70(0xc);
        this->field_01A9 = pAVar13;
        pAVar14 = (AnonPointee_STGameObjC_01B5 *)Library::DKW::LIB::FUN_006aac70(0xb);
        this->field_01B5 = pAVar14;
        pAVar15 = (AnonPointee_STGameObjC_01B9 *)Library::DKW::LIB::FUN_006aac70(0xb);
        this->field_01B9 = pAVar15;
      }
      else if (uVar1 != 0x3e9) goto cf_common_exit_00419F6C;
    }
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)this->vtable->field_0030)(this->field_0121);
  puVar16 = (undefined4 *)this->field_0121;
  puVar17 = (undefined4 *)this->field_011D;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined2 *)puVar17 = *(undefined2 *)puVar16;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)this->vtable->field_0034)(this->field_0129);
  puVar16 = (undefined4 *)this->field_0129;
  puVar17 = (undefined4 *)this->field_0125;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  uVar1 = this->field_0020;
  if (uVar1 < 0x1af) {
    if (uVar1 == 0x1ae) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)this->vtable->field_0058)(this->field_01B1);
      pAVar8 = this->field_01B1;
      pAVar7 = this->field_01AD;
      pAVar7->field_0000 = pAVar8->field_0000;
      pAVar7->field_0004 = pAVar8->field_0004;
      pAVar7->field_0008 = pAVar8->field_0008;
      pAVar7->field_000A = pAVar8->field_000A;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)&this->vtable->field_0x64)(this->field_01C9);
      puVar9 = this->field_01C9;
      puVar2 = this->field_01C5;
      *(undefined4 *)puVar2 = *(undefined4 *)puVar9;
      puVar2[2] = puVar9[2];
      return;
    }
    if (uVar1 < 0x173) {
      if (uVar1 == 0x172) {
        return;
      }
      if (uVar1 == 0x14) {
        puVar16 = &this->field_0171;
        if ((DArrayTy *)this->field_0171 != (DArrayTy *)0x0) {
          DArrayDestroy((DArrayTy *)this->field_0171);
        }
        if ((DArrayTy *)this->field_0175 != (DArrayTy *)0x0) {
          DArrayDestroy((DArrayTy *)this->field_0175);
        }
        if ((DArrayTy *)this->field_0179 != (DArrayTy *)0x0) {
          DArrayDestroy((DArrayTy *)this->field_0179);
        }
        if ((DArrayTy *)this->field_017D != (DArrayTy *)0x0) {
          DArrayDestroy((DArrayTy *)this->field_017D);
        }
        if ((DArrayTy *)this->field_0181 != (DArrayTy *)0x0) {
          DArrayDestroy((DArrayTy *)this->field_0181);
        }
        *puVar16 = 0;
        this->field_0175 = 0;
        this->field_0179 = 0;
        this->field_017D = 0;
        this->field_0181 = 0;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)this->vtable->field_0040)(puVar16);
        Library::DKW::TBL::FUN_006afe40(&this->field_015D,(uint *)*puVar16);
        Library::DKW::TBL::FUN_006afe40(&this->field_0161,(uint *)this->field_0175);
        Library::DKW::TBL::FUN_006afe40(&this->field_0165,(uint *)this->field_0179);
        Library::DKW::TBL::FUN_006afe40(&this->field_0169,(uint *)this->field_017D);
        Library::DKW::TBL::FUN_006afe40(&this->field_016D,(uint *)this->field_0181);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)this->vtable->field_004C)(this->field_0199);
        pAVar6 = this->field_0199;
        pAVar5 = this->field_0195;
        pAVar5->field_0000 = pAVar6->field_0000;
        pAVar5->field_0004 = pAVar6->field_0004;
        pAVar5->field_0008 = pAVar6->field_0008;
        pAVar5->field_000C = pAVar6->field_000C;
        pAVar5->field_0010 = pAVar6->field_0010;
        pAVar5->field_0012 = pAVar6->field_0012;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)this->vtable->field_0058)(this->field_01B1);
        pAVar8 = this->field_01B1;
        pAVar7 = this->field_01AD;
        pAVar7->field_0000 = pAVar8->field_0000;
        pAVar7->field_0004 = pAVar8->field_0004;
        pAVar7->field_0008 = pAVar8->field_0008;
        pAVar7->field_000A = pAVar8->field_000A;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)this->vtable->field_0060)(this->field_01C1);
        puVar16 = (undefined4 *)this->field_01C1;
        puVar17 = (undefined4 *)this->field_01BD;
        for (iVar4 = 0x90; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar17 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar17 = puVar17 + 1;
        }
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
      puVar16 = &this->field_0135;
      if ((DArrayTy *)this->field_0135 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_0135);
      }
      if ((DArrayTy *)this->field_0139 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_0139);
      }
      *puVar16 = 0;
      this->field_0139 = 0;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)&this->vtable->field_0x38)(puVar16);
      Library::DKW::TBL::FUN_006afe40(&this->field_012D,(uint *)*puVar16);
      Library::DKW::TBL::FUN_006afe40(&this->field_0131,(uint *)this->field_0139);
      puVar16 = &this->field_014D;
      if ((DArrayTy *)this->field_014D != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_014D);
      }
      if ((DArrayTy *)this->field_0151 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_0151);
      }
      if ((DArrayTy *)this->field_0155 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_0155);
      }
      if ((DArrayTy *)this->field_0159 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_0159);
      }
      *puVar16 = 0;
      this->field_0151 = 0;
      this->field_0155 = 0;
      this->field_0159 = 0;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)&this->vtable->field_0x3c)(puVar16);
      Library::DKW::TBL::FUN_006afe40(&this->field_013D,(uint *)*puVar16);
      Library::DKW::TBL::FUN_006afe40(&this->field_0141,(uint *)this->field_0151);
      Library::DKW::TBL::FUN_006afe40(&this->field_0145,(uint *)this->field_0155);
      Library::DKW::TBL::FUN_006afe40(&this->field_0149,(uint *)this->field_0159);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)&this->vtable->field_0x44)(this->field_0189);
      puVar16 = (undefined4 *)this->field_0189;
      puVar17 = (undefined4 *)this->field_0185;
      for (iVar4 = 0x4a; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar17 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar17 = puVar17 + 1;
      }
      *(undefined1 *)puVar17 = *(undefined1 *)puVar16;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)&this->vtable->field_0x48)(this->field_0191);
      pAVar11 = this->field_0191;
      pAVar10 = this->field_018D;
      puVar16 = &this->field_01A1;
      pAVar10->field_0000 = pAVar11->field_0000;
      pAVar10->field_0004 = pAVar11->field_0004;
      pAVar10->field_0008 = pAVar11->field_0008;
      pAVar10->field_000C = pAVar11->field_000C;
      if ((DArrayTy *)*puVar16 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)*puVar16);
        *puVar16 = 0;
      }
      if ((DArrayTy *)this->field_019D != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_019D);
        this->field_019D = 0;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)&this->vtable->field_0x50)(puVar16);
      Library::DKW::TBL::FUN_006afe40(&this->field_019D,(uint *)*puVar16);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)&this->vtable->field_0x54)(this->field_01A9);
      pAVar13 = this->field_01A9;
      pAVar12 = this->field_01A5;
      pAVar12->field_0000 = pAVar13->field_0000;
      pAVar12->field_0004 = pAVar13->field_0004;
      pAVar12->field_0008 = pAVar13->field_0008;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)&this->vtable->field_0x5c)(this->field_01B9);
      pAVar15 = this->field_01B9;
      pAVar14 = this->field_01B5;
      pAVar14->field_0000 = pAVar15->field_0000;
      pAVar14->field_0004 = pAVar15->field_0004;
      pAVar14->field_0008 = pAVar15->field_0008;
      pAVar14->field_000A = pAVar15->field_000A;
      return;
    }
    if (uVar1 == 0x3e9) {
      return;
    }
  }
  iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0x5a5,0,0,"%s",
                             "STGameObjC::SetSelfCheckFlag unknown game type");
  if (iVar4 == 0) {
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

