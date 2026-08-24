#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::ChangeMDNotify */

void __thiscall STGroupBoatC::ChangeMDNotify(STGroupBoatC *this,int param_1,uint param_2)

{
  dword dVar1;
  STGroupBoatC *this_00;
  int local_EAX_70;
  STGameObjC *this_01;
  int iVar5;
  int iVar6;
  int local_EAX_228;
  int iVar7;
  int local_EAX_1110;
  int local_EAX_1610;
  int iVar3;
  int iVar4;
  DArrayTy *pDVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  DArrayTy *pDVar12;
  DArrayTy *pDVar13;
  InternalExceptionFrame local_78;
  int local_34 [4];
  STGroupBoatC *local_24;
  int *local_20;
  int local_1c;
  STGameObjC *local_18;
  undefined1 local_14 [4];
  uint local_10;
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
  local_EAX_70 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  this_00 = local_24;
  if (local_EAX_70 != 0) {
    g_currentExceptionFrame = local_78.previous;
    if (local_EAX_70 != -0x5001fff7) {
      iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x126a,0,local_EAX_70,
                                 "%s","STGroupBoatC::ChangeMDNotify");
      if (iVar4 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(local_EAX_70,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x126b);
    }
    return;
  }
  /* ST_CALLSITE[004A42AB]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
  this_01 = STAllPlayersC::GetObjPtr
                      (g_allPlayers_007FA174,local_24->field_0024,(ushort)param_2,CASE_1);
  local_18 = this_01;
  if (param_1 == 1) {
    /* ST_CALLSITE[004A42C5]: CALL dword ptr [EDX + 0x2c] */
    iVar5 = this_01->vfunc_2C();
    /* ST_CALLSITE[004A42D5]: CALL dword ptr [EAX + 0x2c] */
    if ((iVar5 == 0x3b) || (iVar5 = this_01->vfunc_2C(), iVar5 == 0x60)) {
      if ((this_00->field_0262 == 1) || (this_00->field_0262 == 0)) {
        if (this_00->field_0266 == nullptr) {
          RaiseInternalException
                    (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0x11f2);
        }
        uVar10 = 0;
        dVar1 = this_00->field_0266->count;
        if (0 < (int)dVar1) {
          do {
            DArrayGetElement(this_00->field_0266,uVar10,&local_10);
            if ((short)local_10 == -1) break;
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)dVar1);
        }
        Library::DKW::TBL::DArrayPut(this_00->field_0266,uVar10,&param_2);
        /* ST_CALLSITE[004A4508]: CALL 0x0040143d; direct=0040143D STGroupBoatC::DistributeMD */
        DistributeMD(this_00,0,this_00->field_024E,this_00->field_0266,
                     (DArrayTy *)this_00->field_0029);
        this_01 = local_18;
      }
      if (this_00->field_0262 != 2) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      /* ST_CALLSITE[004A452B]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
      STFishC::sub_004162B0((STFishC *)this_01,&local_a,&local_8,&local_6);
      if (local_a < this_00->field_026A) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_0270 + -1 + (int)this_00->field_026A < (int)local_a) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (local_8 < this_00->field_026C) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_0272 + -1 + (int)this_00->field_026C < (int)local_8) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (local_6 < this_00->field_026E) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_0274 + -1 + (int)this_00->field_026E < (int)local_6) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_0266 == nullptr) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x11fe);
      }
      uVar10 = 0;
      dVar1 = this_00->field_0266->count;
      if (0 < (int)dVar1) {
        do {
          DArrayGetElement(this_00->field_0266,uVar10,&local_10);
          if ((short)local_10 == -1) break;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)dVar1);
      }
      pDVar8 = this_00->field_0266;
    }
    else {
      iVar5 = 0;
      if (0 < local_1c) {
        piVar9 = local_34;
        do {
          /* ST_CALLSITE[004A42F2]: CALL dword ptr [EDX + 0x2c] */
          iVar6 = local_18->vfunc_2C();
          this_01 = local_18;
          if (iVar6 == *piVar9) break;
          iVar5 = iVar5 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar5 < local_1c);
      }
      if (iVar5 == local_1c) {
        local_EAX_228 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x120a,0,0,"%s",
                                "STGroupBoatC::ChangeMDNotify invalid type");
        if (local_EAX_228 != 0) {
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
      /* ST_CALLSITE[004A435C]: CALL dword ptr [EDX + 0x2c] */
      iVar5 = this_01->vfunc_2C();
      if (iVar5 != this_00->field_025E) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      /* ST_CALLSITE[004A4373]: CALL dword ptr [EAX + 0x88] */
      iVar5 = (*this_01->vtable->vfunc_88)(local_14);
      if (iVar5 < 1) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      /* ST_CALLSITE[004A438F]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
      STFishC::sub_004162B0((STFishC *)this_01,&local_a,&local_8,&local_6);
      if (local_a < this_00->field_0252) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_0258 + -1 + (int)this_00->field_0252 < (int)local_a) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (local_8 < this_00->field_0254) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_025A + -1 + (int)this_00->field_0254 < (int)local_8) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (local_6 < this_00->field_0256) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_025C + -1 + (int)this_00->field_0256 < (int)local_6) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_024E == nullptr) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x1215);
      }
      uVar10 = 0;
      dVar1 = this_00->field_024E->count;
      if (0 < (int)dVar1) {
        do {
          DArrayGetElement(this_00->field_024E,uVar10,&local_10);
          if ((short)local_10 == -1) break;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)dVar1);
      }
      pDVar8 = this_00->field_024E;
    }
    Library::DKW::TBL::DArrayPut(pDVar8,uVar10,&param_2);
    pDVar8 = (DArrayTy *)this_00->field_0029;
    pDVar13 = this_00->field_0266;
    pDVar12 = this_00->field_024E;
    goto LAB_004a4aab;
  }
  /* ST_CALLSITE[004A4635]: CALL dword ptr [EAX + 0x2c] */
  iVar5 = this_01->vfunc_2C();
  if ((iVar5 == 0x3b) ||
     /* ST_CALLSITE[004A4645]: CALL dword ptr [EDX + 0x2c] */
     (iVar6 = this_01->vfunc_2C(), iVar5 = local_1c, iVar6 == 0x60)) {
    if ((this_00->field_0262 == 1) || (this_00->field_0262 == 0)) {
      if (this_00->field_0266 == nullptr) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x1226);
      }
      uVar10 = 0;
      dVar1 = this_00->field_0266->count;
      if (0 < (int)dVar1) {
        do {
          DArrayGetElement(this_00->field_0266,uVar10,&local_10);
          if ((short)local_10 == (short)param_2) {
            local_10 = 0xffff;
            Library::DKW::TBL::DArrayPut(this_00->field_0266,uVar10,&local_10);
            break;
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)dVar1);
      }
      /* ST_CALLSITE[004A4938]: CALL 0x0040143d; direct=0040143D STGroupBoatC::DistributeMD */
      DistributeMD(this_00,0,this_00->field_024E,this_00->field_0266,(DArrayTy *)this_00->field_0029
                  );
      this_01 = local_18;
    }
    if (this_00->field_0262 != 2) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    /* ST_CALLSITE[004A495B]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
    STFishC::sub_004162B0((STFishC *)this_01,&local_a,&local_8,&local_6);
    if (local_a < this_00->field_026A) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_0270 + -1 + (int)this_00->field_026A < (int)local_a) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (local_8 < this_00->field_026C) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_0272 + -1 + (int)this_00->field_026C < (int)local_8) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (local_6 < this_00->field_026E) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_0274 + -1 + (int)this_00->field_026E < (int)local_6) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_0266 == nullptr) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x1234);
    }
    uVar11 = 0;
    uVar10 = this_00->field_0266->count;
    if (0 < (int)uVar10) {
      do {
        DArrayGetElement(this_00->field_0266,uVar11,&local_10);
        if ((short)local_10 == (short)param_2) {
          local_10 = 0xffff;
          Library::DKW::TBL::DArrayPut(this_00->field_0266,uVar11,&local_10);
          break;
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar10);
    }
    if (uVar11 == uVar10) {
      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x123b,0,0,"%s",
                                 "STGroupBoatC::ChangeMDNotify depot is absent");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = 0x123c;
      goto LAB_004a4a83;
    }
  }
  else {
    iVar6 = 0;
    if (0 < local_1c) {
      local_20 = local_34;
      do {
        /* ST_CALLSITE[004A4665]: CALL dword ptr [EDX + 0x2c] */
        iVar7 = local_18->vfunc_2C();
        if (iVar7 == *local_20) break;
        iVar6 = iVar6 + 1;
        local_20 = local_20 + 1;
      } while (iVar6 < iVar5);
    }
    if (iVar6 == iVar5) {
      local_EAX_1110 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x1246,0,0,"%s",
                              "STGroupBoatC::ChangeMDNotify invalid type");
      if (local_EAX_1110 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException
                (-0x5001fffe,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x1247);
    }
    if (this_00->field_024A == 0) {
      if (this_00->field_024E == nullptr) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x124b);
      }
      uVar10 = 0;
      dVar1 = this_00->field_024E->count;
      if (0 < (int)dVar1) {
        do {
          DArrayGetElement(this_00->field_024E,uVar10,&local_10);
          if ((short)local_10 == (short)param_2) {
            local_10 = 0xffff;
            Library::DKW::TBL::DArrayPut(this_00->field_024E,uVar10,&local_10);
            break;
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)dVar1);
      }
      /* ST_CALLSITE[004A474F]: CALL 0x0040143d; direct=0040143D STGroupBoatC::DistributeMD */
      DistributeMD(this_00,0,this_00->field_024E,this_00->field_0266,(DArrayTy *)this_00->field_0029
                  );
    }
    if (this_00->field_024A != 2) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    /* ST_CALLSITE[004A4770]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
    STFishC::sub_004162B0((STFishC *)local_18,&local_a,&local_8,&local_6);
    if (local_a < this_00->field_0252) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_0258 + -1 + (int)this_00->field_0252 < (int)local_a) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (local_8 < this_00->field_0254) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_025A + -1 + (int)this_00->field_0254 < (int)local_8) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (local_6 < this_00->field_0256) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_025C + -1 + (int)this_00->field_0256 < (int)local_6) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_024E == nullptr) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x1259);
    }
    uVar11 = 0;
    uVar10 = this_00->field_024E->count;
    if (0 < (int)uVar10) {
      do {
        DArrayGetElement(this_00->field_024E,uVar11,&local_10);
        if ((short)local_10 == (short)param_2) {
          local_10 = 0xffff;
          Library::DKW::TBL::DArrayPut(this_00->field_024E,uVar11,&local_10);
          break;
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar10);
    }
    if (uVar11 == uVar10) {
      local_EAX_1610 =
           ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x1260,0,0,"%s",
                              "STGroupBoatC::ChangeMDNotify mine is absent");
      if (local_EAX_1610 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = 0x1261;
LAB_004a4a83:
      RaiseInternalException
                (-0x5001fffe,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 iVar5);
    }
  }
  pDVar8 = (DArrayTy *)this_00->field_0029;
  pDVar13 = this_00->field_0266;
  pDVar12 = this_00->field_024E;
LAB_004a4aab:
  /* ST_CALLSITE[004A4AAF]: CALL 0x0040143d; direct=0040143D STGroupBoatC::DistributeMD */
  DistributeMD(this_00,0,pDVar12,pDVar13,pDVar8);
  g_currentExceptionFrame = local_78.previous;
  return;
}

