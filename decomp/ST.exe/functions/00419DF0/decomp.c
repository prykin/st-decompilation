#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::SetSelfCheckFlag */

void __thiscall STGameObjC::SetSelfCheckFlag(STGameObjC *this,int *param_1)

{
  DArrayTy **arg_1;
  uint uVar1;
  ushort *puVar2;
  code *pcVar3;
  byte *pbVar4;
  void *pvVar5;
  AnonPointee_STGameObjC_0195 *pAVar6;
  AnonPointee_STGameObjC_0199 *pAVar7;
  AnonPointee_STGameObjC_01AD *pAVar8;
  AnonPointee_STGameObjC_01B1 *pAVar9;
  ushort *puVar10;
  int iVar11;
  AnonPointee_STGameObjC_018D *pAVar12;
  AnonPointee_STGameObjC_0191 *pAVar13;
  AnonPointee_STGameObjC_01A5 *pAVar14;
  AnonPointee_STGameObjC_01A9 *pAVar15;
  AnonPointee_STGameObjC_01B5 *pAVar16;
  AnonPointee_STGameObjC_01B9 *pAVar17;
  byte *puVar18;
  byte *pbVar19;
  byte *puVar20;

  if (this->field_01CD == 1) {
    return;
  }
  if (this->field_01CD == 0) {
    this->field_01CD = 1;
    pbVar4 = (byte *)Library::DKW::LIB::FUN_006aac70(0x36);
    this->field_011D = pbVar4;
    pbVar4 = (byte *)Library::DKW::LIB::FUN_006aac70(0x36);
    this->field_0121 = pbVar4;
    pvVar5 = (void *)Library::DKW::LIB::FUN_006aac70(0x5c);
    this->field_0125 = pvVar5;
    pvVar5 = (void *)Library::DKW::LIB::FUN_006aac70(0x5c);
    this->field_0129 = pvVar5;
    uVar1 = this->field_0020;
    if (uVar1 < 0x1af) {
      if (uVar1 == 0x1ae) {
        pAVar8 = (AnonPointee_STGameObjC_01AD *)Library::DKW::LIB::FUN_006aac70(0xb);
        this->field_01AD = pAVar8;
        pAVar9 = (AnonPointee_STGameObjC_01B1 *)Library::DKW::LIB::FUN_006aac70(0xb);
        this->field_01B1 = pAVar9;
        puVar10 = (ushort *)Library::DKW::LIB::FUN_006aac70(6);
        this->field_01C5 = puVar10;
        puVar10 = (ushort *)Library::DKW::LIB::FUN_006aac70(6);
        this->field_01C9 = puVar10;
      }
      else if (uVar1 < 0x173) {
        if (uVar1 != 0x172) {
          if (uVar1 == 0x14) {
            this->field_015D = (DArrayTy *)0x0;
            this->field_0161 = (DArrayTy *)0x0;
            this->field_0165 = (DArrayTy *)0x0;
            this->field_0169 = (DArrayTy *)0x0;
            this->field_016D = (DArrayTy *)0x0;
            this->field_0171 = (DArrayTy *)0x0;
            this->field_0175 = (DArrayTy *)0x0;
            this->field_0179 = (DArrayTy *)0x0;
            this->field_017D = (DArrayTy *)0x0;
            this->field_0181 = (DArrayTy *)0x0;
            pAVar6 = (AnonPointee_STGameObjC_0195 *)Library::DKW::LIB::FUN_006aac70(0x13);
            this->field_0195 = pAVar6;
            pAVar7 = (AnonPointee_STGameObjC_0199 *)Library::DKW::LIB::FUN_006aac70(0x13);
            this->field_0199 = pAVar7;
            pAVar8 = (AnonPointee_STGameObjC_01AD *)Library::DKW::LIB::FUN_006aac70(0xb);
            this->field_01AD = pAVar8;
            pAVar9 = (AnonPointee_STGameObjC_01B1 *)Library::DKW::LIB::FUN_006aac70(0xb);
            this->field_01B1 = pAVar9;
            pvVar5 = (void *)Library::DKW::LIB::FUN_006aac70(0x240);
            this->field_01BD = pvVar5;
            pvVar5 = (void *)Library::DKW::LIB::FUN_006aac70(0x240);
            this->field_01C1 = pvVar5;
          }
          else if (uVar1 != 0x5a) goto cf_common_exit_00419F6C;
        }
      }
      else if (uVar1 != 0x1a4) {
cf_common_exit_00419F6C:
        iVar11 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0x54d,0,0,"%s",
                                    "STGameObjC::SetSelfCheckFlag unknown game type");
        if (iVar11 == 0) {
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
        iVar11 = Library::DKW::LIB::FUN_006aac70(0x129);
        this->field_0185 = iVar11;
        iVar11 = Library::DKW::LIB::FUN_006aac70(0x129);
        this->field_0189 = iVar11;
        pAVar12 = (AnonPointee_STGameObjC_018D *)Library::DKW::LIB::FUN_006aac70(0x10);
        this->field_018D = pAVar12;
        pAVar13 = (AnonPointee_STGameObjC_0191 *)Library::DKW::LIB::FUN_006aac70(0x10);
        this->field_0191 = pAVar13;
        this->field_019D = 0;
        this->field_01A1 = 0;
        pAVar14 = (AnonPointee_STGameObjC_01A5 *)Library::DKW::LIB::FUN_006aac70(0xc);
        this->field_01A5 = pAVar14;
        pAVar15 = (AnonPointee_STGameObjC_01A9 *)Library::DKW::LIB::FUN_006aac70(0xc);
        this->field_01A9 = pAVar15;
        pAVar16 = (AnonPointee_STGameObjC_01B5 *)Library::DKW::LIB::FUN_006aac70(0xb);
        this->field_01B5 = pAVar16;
        pAVar17 = (AnonPointee_STGameObjC_01B9 *)Library::DKW::LIB::FUN_006aac70(0xb);
        this->field_01B9 = pAVar17;
      }
      else if (uVar1 != 0x3e9) goto cf_common_exit_00419F6C;
    }
  }
  (*this->vtable->vfunc_30)(this->field_0121);
  pbVar4 = this->field_0121;
  pbVar19 = this->field_011D;
  memmove(pbVar19, pbVar4, 0x36); /* compiler REP MOVS byte copy */
  iVar11 = 0;
  (*this->vtable->vfunc_34)(this->field_0129);
  puVar18 = (byte *)(this->field_0129);
  puVar20 = (byte *)(this->field_0125);
  for (iVar11 = 0x17; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar20 = *puVar18;
    puVar18 = (byte *)(puVar18 + 1);
    puVar20 = (byte *)(puVar20 + 1);
  }
  uVar1 = this->field_0020;
  if (uVar1 < 0x1af) {
    if (uVar1 == 0x1ae) {
      (*this->vtable->vfunc_58)(this->field_01B1);
      pAVar9 = this->field_01B1;
      pAVar8 = this->field_01AD;
      pAVar8->field_0000 = pAVar9->field_0000;
      pAVar8->field_0004 = pAVar9->field_0004;
      pAVar8->field_0008 = pAVar9->field_0008;
      pAVar8->field_000A = pAVar9->field_000A;
      (*this->vtable->vfunc_64)(this->field_01C9);
      puVar10 = this->field_01C9;
      puVar2 = this->field_01C5;
      *(undefined4 *)puVar2 = *(undefined4 *)puVar10;
      puVar2[2] = puVar10[2];
      return;
    }
    if (uVar1 < 0x173) {
      if (uVar1 == 0x172) {
        return;
      }
      if (uVar1 == 0x14) {
        arg_1 = &this->field_0171;
        if (this->field_0171 != (DArrayTy *)0x0) {
          DArrayDestroy(this->field_0171);
        }
        if (this->field_0175 != (DArrayTy *)0x0) {
          DArrayDestroy(this->field_0175);
        }
        if (this->field_0179 != (DArrayTy *)0x0) {
          DArrayDestroy(this->field_0179);
        }
        if (this->field_017D != (DArrayTy *)0x0) {
          DArrayDestroy(this->field_017D);
        }
        if (this->field_0181 != (DArrayTy *)0x0) {
          DArrayDestroy(this->field_0181);
        }
        *arg_1 = (DArrayTy *)0x0;
        this->field_0175 = (DArrayTy *)0x0;
        this->field_0179 = (DArrayTy *)0x0;
        this->field_017D = (DArrayTy *)0x0;
        this->field_0181 = (DArrayTy *)0x0;
        (*this->vtable->vfunc_40)(arg_1);
        Library::DKW::TBL::FUN_006afe40((int *)&this->field_015D,&(*arg_1)->flags);
        Library::DKW::TBL::FUN_006afe40((int *)&this->field_0161,&this->field_0175->flags);
        Library::DKW::TBL::FUN_006afe40((int *)&this->field_0165,&this->field_0179->flags);
        Library::DKW::TBL::FUN_006afe40((int *)&this->field_0169,&this->field_017D->flags);
        Library::DKW::TBL::FUN_006afe40((int *)&this->field_016D,&this->field_0181->flags);
        (*this->vtable->vfunc_4C)(this->field_0199);
        pAVar7 = this->field_0199;
        pAVar6 = this->field_0195;
        pAVar6->field_0000 = pAVar7->field_0000;
        pAVar6->field_0004 = pAVar7->field_0004;
        pAVar6->field_0008 = pAVar7->field_0008;
        pAVar6->field_000C = pAVar7->field_000C;
        pAVar6->field_0010 = pAVar7->field_0010;
        pAVar6->field_0012 = pAVar7->field_0012;
        (*this->vtable->vfunc_58)(this->field_01B1);
        pAVar9 = this->field_01B1;
        pAVar8 = this->field_01AD;
        pAVar8->field_0000 = pAVar9->field_0000;
        pAVar8->field_0004 = pAVar9->field_0004;
        pAVar8->field_0008 = pAVar9->field_0008;
        pAVar8->field_000A = pAVar9->field_000A;
        (*this->vtable->vfunc_60)(this->field_01C1);
        puVar18 = (byte *)(this->field_01C1);
        puVar20 = (byte *)(this->field_01BD);
        memmove(puVar20, puVar18, 0x240); /* compiler REP MOVS byte copy */
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
      puVar18 = (byte *)(&this->field_0135);
      if ((DArrayTy *)this->field_0135 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_0135);
      }
      if ((DArrayTy *)this->field_0139 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_0139);
      }
      *puVar18 = 0;
      this->field_0139 = 0;
      (*this->vtable->vfunc_38)(puVar18);
      Library::DKW::TBL::FUN_006afe40(&this->field_012D,(uint *)*puVar18);
      Library::DKW::TBL::FUN_006afe40(&this->field_0131,(uint *)this->field_0139);
      puVar18 = (byte *)(&this->field_014D);
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
      *puVar18 = 0;
      this->field_0151 = 0;
      this->field_0155 = 0;
      this->field_0159 = 0;
      (*this->vtable->vfunc_3C)(puVar18);
      Library::DKW::TBL::FUN_006afe40(&this->field_013D,(uint *)*puVar18);
      Library::DKW::TBL::FUN_006afe40(&this->field_0141,(uint *)this->field_0151);
      Library::DKW::TBL::FUN_006afe40(&this->field_0145,(uint *)this->field_0155);
      Library::DKW::TBL::FUN_006afe40(&this->field_0149,(uint *)this->field_0159);
      (*this->vtable->vfunc_44)(this->field_0189);
      puVar18 = (byte *)this->field_0189;
      puVar20 = (byte *)this->field_0185;
      memmove(puVar20, puVar18, 0x129); /* compiler REP MOVS byte copy */
      (*this->vtable->vfunc_48)(this->field_0191);
      pAVar13 = this->field_0191;
      pAVar12 = this->field_018D;
      puVar18 = (byte *)(&this->field_01A1);
      pAVar12->field_0000 = pAVar13->field_0000;
      pAVar12->field_0004 = pAVar13->field_0004;
      pAVar12->field_0008 = pAVar13->field_0008;
      pAVar12->field_000C = pAVar13->field_000C;
      if ((DArrayTy *)*puVar18 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)*puVar18);
        *puVar18 = 0;
      }
      if ((DArrayTy *)this->field_019D != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_019D);
        this->field_019D = 0;
      }
      (*this->vtable->vfunc_50)(puVar18);
      Library::DKW::TBL::FUN_006afe40(&this->field_019D,(uint *)*puVar18);
      (*this->vtable->vfunc_54)(this->field_01A9);
      pAVar15 = this->field_01A9;
      pAVar14 = this->field_01A5;
      pAVar14->field_0000 = pAVar15->field_0000;
      pAVar14->field_0004 = pAVar15->field_0004;
      pAVar14->field_0008 = pAVar15->field_0008;
      (*this->vtable->vfunc_5C)(this->field_01B9);
      pAVar17 = this->field_01B9;
      pAVar16 = this->field_01B5;
      pAVar16->field_0000 = pAVar17->field_0000;
      pAVar16->field_0004 = pAVar17->field_0004;
      pAVar16->field_0008 = pAVar17->field_0008;
      pAVar16->field_000A = pAVar17->field_000A;
      return;
    }
    if (uVar1 == 0x3e9) {
      return;
    }
  }
  iVar11 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0x5a5,0,0,"%s",
                              "STGameObjC::SetSelfCheckFlag unknown game type");
  if (iVar11 == 0) {
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

