#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::ChangeMDNotify */

void __thiscall STGroupBoatC::ChangeMDNotify(STGroupBoatC *this,int param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  STGroupBoatC *this_00;
  int iVar3;
  STGameObjC *this_01;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  DArrayTy *pDVar9;
  DArrayTy *pDVar10;
  DArrayTy *pDVar11;
  InternalExceptionFrame local_78;
  int local_34 [4];
  STGroupBoatC *local_24;
  int *local_20;
  int local_1c;
  STGameObjC *local_18;
  undefined1 local_14 [4];
  undefined4 local_10;
  short local_a;
  short local_8;
  short local_6;

  local_1c = 4;
  local_34[0] = 0x38;
  local_34[1] = 0x39;
  local_34[2] = 0x4f;
  local_34[3] = 0x5e;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_24 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  this_00 = local_24;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_78.previous;
    if (iVar3 != -0x5001fff7) {
      iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x126a,0,iVar3,
                                 "%s","STGroupBoatC::ChangeMDNotify");
      if (iVar4 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x126b);
    }
    return;
  }
  this_01 = STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,local_24->field_0024,param_2,CASE_1);
  local_18 = this_01;
  if (param_1 == 1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar3 = (**(code **)&this_01->vtable->field_0x2c)();
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if ((iVar3 == 0x3b) || (iVar3 = (**(code **)&this_01->vtable->field_0x2c)(), iVar3 == 0x60)) {
      if ((this_00->field_0262 == 1) || (this_00->field_0262 == 0)) {
        if (this_00->field_0266 == (uint *)0x0) {
          RaiseInternalException
                    (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0x11f2);
        }
        uVar8 = 0;
        uVar1 = this_00->field_0266[3];
        if (0 < (int)uVar1) {
          do {
            DArrayGetElement((DArrayTy *)this_00->field_0266,uVar8,&local_10);
            if ((short)local_10 == -1) break;
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < (int)uVar1);
        }
        Library::DKW::TBL::FUN_006ae140(this_00->field_0266,uVar8,&param_2);
        DistributeMD(this_00,0,(DArrayTy *)this_00->field_024E,(DArrayTy *)this_00->field_0266,
                     (DArrayTy *)this_00->field_0029);
        this_01 = local_18;
      }
      if (this_00->field_0262 != 2) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      STFishC::sub_004162B0((STFishC *)this_01,&local_a,&local_8,&local_6);
      if (local_a < (short)this_00->field_026A) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_0270 + -1 + (int)(short)this_00->field_026A < (int)local_a) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (local_8 < (short)this_00->field_026C) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_0272 + -1 + (int)(short)this_00->field_026C < (int)local_8) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (local_6 < (short)this_00->field_026E) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_0274 + -1 + (int)(short)this_00->field_026E < (int)local_6) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_0266 == (uint *)0x0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x11fe);
      }
      uVar8 = 0;
      uVar1 = this_00->field_0266[3];
      if (0 < (int)uVar1) {
        do {
          DArrayGetElement((DArrayTy *)this_00->field_0266,uVar8,&local_10);
          if ((short)local_10 == -1) break;
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar1);
      }
      puVar6 = this_00->field_0266;
    }
    else {
      iVar3 = 0;
      if (0 < local_1c) {
        piVar7 = local_34;
        do {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar4 = (**(code **)&local_18->vtable->field_0x2c)();
          this_01 = local_18;
          if (iVar4 == *piVar7) break;
          iVar3 = iVar3 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar3 < local_1c);
      }
      if (iVar3 == local_1c) {
        iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x120a,0,0,"%s",
                                   "STGroupBoatC::ChangeMDNotify invalid type");
        if (iVar3 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        RaiseInternalException
                  (-0x5001fffe,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x120b);
      }
      if (this_00->field_024A != 2) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar3 = (**(code **)&this_01->vtable->field_0x2c)();
      if (iVar3 != this_00->field_025E) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar3 = (**(code **)&this_01->vtable->field_0x88)(local_14);
      if (iVar3 < 1) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      STFishC::sub_004162B0((STFishC *)this_01,&local_a,&local_8,&local_6);
      if (local_a < (short)this_00->field_0252) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_0258 + -1 + (int)(short)this_00->field_0252 < (int)local_a) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (local_8 < (short)this_00->field_0254) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_025A + -1 + (int)(short)this_00->field_0254 < (int)local_8) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (local_6 < (short)this_00->field_0256) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_025C + -1 + (int)(short)this_00->field_0256 < (int)local_6) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_024E == (uint *)0x0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x1215);
      }
      uVar8 = 0;
      uVar1 = this_00->field_024E[3];
      if (0 < (int)uVar1) {
        do {
          DArrayGetElement((DArrayTy *)this_00->field_024E,uVar8,&local_10);
          if ((short)local_10 == -1) break;
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar1);
      }
      puVar6 = this_00->field_024E;
    }
    Library::DKW::TBL::FUN_006ae140(puVar6,uVar8,&param_2);
    pDVar11 = (DArrayTy *)this_00->field_0029;
    pDVar10 = (DArrayTy *)this_00->field_0266;
    pDVar9 = (DArrayTy *)this_00->field_024E;
    goto LAB_004a4aab;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar3 = (**(code **)&this_01->vtable->field_0x2c)();
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  if ((iVar3 == 0x3b) ||
     (iVar4 = (**(code **)&this_01->vtable->field_0x2c)(), iVar3 = local_1c, iVar4 == 0x60)) {
    if ((this_00->field_0262 == 1) || (this_00->field_0262 == 0)) {
      if (this_00->field_0266 == (uint *)0x0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x1226);
      }
      uVar8 = 0;
      uVar1 = this_00->field_0266[3];
      if (0 < (int)uVar1) {
        do {
          DArrayGetElement((DArrayTy *)this_00->field_0266,uVar8,&local_10);
          if ((short)local_10 == (short)param_2) {
            local_10 = 0xffff;
            Library::DKW::TBL::FUN_006ae140(this_00->field_0266,uVar8,&local_10);
            break;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar1);
      }
      DistributeMD(this_00,0,(DArrayTy *)this_00->field_024E,(DArrayTy *)this_00->field_0266,
                   (DArrayTy *)this_00->field_0029);
      this_01 = local_18;
    }
    if (this_00->field_0262 != 2) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    STFishC::sub_004162B0((STFishC *)this_01,&local_a,&local_8,&local_6);
    if (local_a < (short)this_00->field_026A) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_0270 + -1 + (int)(short)this_00->field_026A < (int)local_a) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (local_8 < (short)this_00->field_026C) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_0272 + -1 + (int)(short)this_00->field_026C < (int)local_8) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (local_6 < (short)this_00->field_026E) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_0274 + -1 + (int)(short)this_00->field_026E < (int)local_6) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_0266 == (uint *)0x0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x1234);
    }
    uVar8 = 0;
    uVar1 = this_00->field_0266[3];
    if (0 < (int)uVar1) {
      do {
        DArrayGetElement((DArrayTy *)this_00->field_0266,uVar8,&local_10);
        if ((short)local_10 == (short)param_2) {
          local_10 = 0xffff;
          Library::DKW::TBL::FUN_006ae140(this_00->field_0266,uVar8,&local_10);
          break;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
    if (uVar8 == uVar1) {
      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x123b,0,0,"%s",
                                 "STGroupBoatC::ChangeMDNotify depot is absent");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar3 = 0x123c;
      goto LAB_004a4a83;
    }
  }
  else {
    iVar4 = 0;
    if (0 < local_1c) {
      local_20 = local_34;
      do {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar5 = (**(code **)&local_18->vtable->field_0x2c)();
        if (iVar5 == *local_20) break;
        iVar4 = iVar4 + 1;
        local_20 = local_20 + 1;
      } while (iVar4 < iVar3);
    }
    if (iVar4 == iVar3) {
      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x1246,0,0,"%s",
                                 "STGroupBoatC::ChangeMDNotify invalid type");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException
                (-0x5001fffe,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x1247);
    }
    if (this_00->field_024A == 0) {
      if (this_00->field_024E == (uint *)0x0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x124b);
      }
      uVar8 = 0;
      uVar1 = this_00->field_024E[3];
      if (0 < (int)uVar1) {
        do {
          DArrayGetElement((DArrayTy *)this_00->field_024E,uVar8,&local_10);
          if ((short)local_10 == (short)param_2) {
            local_10 = 0xffff;
            Library::DKW::TBL::FUN_006ae140(this_00->field_024E,uVar8,&local_10);
            break;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar1);
      }
      DistributeMD(this_00,0,(DArrayTy *)this_00->field_024E,(DArrayTy *)this_00->field_0266,
                   (DArrayTy *)this_00->field_0029);
    }
    if (this_00->field_024A != 2) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    STFishC::sub_004162B0((STFishC *)local_18,&local_a,&local_8,&local_6);
    if (local_a < (short)this_00->field_0252) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_0258 + -1 + (int)(short)this_00->field_0252 < (int)local_a) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (local_8 < (short)this_00->field_0254) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_025A + -1 + (int)(short)this_00->field_0254 < (int)local_8) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (local_6 < (short)this_00->field_0256) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_025C + -1 + (int)(short)this_00->field_0256 < (int)local_6) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_024E == (uint *)0x0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x1259);
    }
    uVar8 = 0;
    uVar1 = this_00->field_024E[3];
    if (0 < (int)uVar1) {
      do {
        DArrayGetElement((DArrayTy *)this_00->field_024E,uVar8,&local_10);
        if ((short)local_10 == (short)param_2) {
          local_10 = 0xffff;
          Library::DKW::TBL::FUN_006ae140(this_00->field_024E,uVar8,&local_10);
          break;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
    if (uVar8 == uVar1) {
      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x1260,0,0,"%s",
                                 "STGroupBoatC::ChangeMDNotify mine is absent");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar3 = 0x1261;
LAB_004a4a83:
      RaiseInternalException
                (-0x5001fffe,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 iVar3);
    }
  }
  pDVar11 = (DArrayTy *)this_00->field_0029;
  pDVar10 = (DArrayTy *)this_00->field_0266;
  pDVar9 = (DArrayTy *)this_00->field_024E;
LAB_004a4aab:
  DistributeMD(this_00,0,pDVar9,pDVar10,pDVar11);
  g_currentExceptionFrame = local_78.previous;
  return;
}

