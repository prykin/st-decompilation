
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::ChangeMDNotify */

void __thiscall STGroupBoatC::ChangeMDNotify(STGroupBoatC *this,int param_1,uint param_2)

{
  code *pcVar1;
  STGroupBoatC *this_00;
  int iVar2;
  STFishC *this_01;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  uint *puVar5;
  int *piVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar7;
  uint uVar8;
  InternalExceptionFrame local_78;
  int local_34 [4];
  STGroupBoatC *local_24;
  int *local_20;
  int local_1c;
  STFishC *local_18;
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
  iVar2 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_24;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_78.previous;
    if (iVar2 != -0x5001fff7) {
      iVar3 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x126a,0,iVar2,
                                 &DAT_007a4ccc,s_STGroupBoatC__ChangeMDNotify_007ac310);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      RaiseInternalException(iVar2,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x126b);
    }
    return;
  }
  this_01 = (STFishC *)
            STAllPlayersC::GetObjPtr
                      (g_sTAllPlayers_007FA174,
                       CONCAT31((int3)((uint)extraout_ECX >> 8),local_24->field_0024),param_2,CASE_1
                      );
  local_18 = this_01;
  if (param_1 == 1) {
    iVar2 = (*this_01->vtable->slot_2C)();
    if ((iVar2 == 0x3b) || (iVar2 = (*this_01->vtable->slot_2C)(), iVar2 == 0x60)) {
      if ((this_00->field_0262 == 1) || (this_00->field_0262 == 0)) {
        if (this_00->field_0266 == 0) {
          RaiseInternalException
                    (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c
                     ,0x11f2);
        }
        uVar7 = 0;
        iVar2 = *(int *)(this_00->field_0266 + 0xc);
        if (0 < iVar2) {
          do {
            FUN_006acc70(this_00->field_0266,uVar7,&local_10);
            if ((short)local_10 == -1) break;
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < iVar2);
        }
        Library::DKW::TBL::FUN_006ae140((uint *)this_00->field_0266,uVar7,&param_2);
        DistributeMD(this_00,0,this_00->field_024E,this_00->field_0266,this_00->field_0029);
        this_01 = local_18;
      }
      if (this_00->field_0262 != 2) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      STFishC::sub_004162B0(this_01,&local_a,&local_8,&local_6);
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
      if (this_00->field_0266 == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                   0x11fe);
      }
      uVar7 = 0;
      iVar2 = *(int *)(this_00->field_0266 + 0xc);
      if (0 < iVar2) {
        do {
          FUN_006acc70(this_00->field_0266,uVar7,&local_10);
          if ((short)local_10 == -1) break;
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < iVar2);
      }
      puVar5 = (uint *)this_00->field_0266;
    }
    else {
      iVar2 = 0;
      if (0 < local_1c) {
        piVar6 = local_34;
        do {
          iVar3 = (*local_18->vtable->slot_2C)();
          this_01 = local_18;
          if (iVar3 == *piVar6) break;
          iVar2 = iVar2 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar2 < local_1c);
      }
      if (iVar2 == local_1c) {
        iVar2 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x120a,0,0,&DAT_007a4ccc,
                                   s_STGroupBoatC__ChangeMDNotify_inv_007ac3a0);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        RaiseInternalException
                  (-0x5001fffe,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                   0x120b);
      }
      if (this_00->field_024A != 2) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      iVar2 = (*this_01->vtable->slot_2C)();
      if (iVar2 != this_00->field_025E) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      iVar2 = (*this_01->vtable->slot_88)(local_14);
      if (iVar2 < 1) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      STFishC::sub_004162B0(this_01,&local_a,&local_8,&local_6);
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
      if (this_00->field_024E == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                   0x1215);
      }
      uVar7 = 0;
      iVar2 = *(int *)(this_00->field_024E + 0xc);
      if (0 < iVar2) {
        do {
          FUN_006acc70(this_00->field_024E,uVar7,&local_10);
          if ((short)local_10 == -1) break;
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < iVar2);
      }
      puVar5 = (uint *)this_00->field_024E;
    }
    Library::DKW::TBL::FUN_006ae140(puVar5,uVar7,&param_2);
    iVar2 = this_00->field_0029;
    iVar3 = this_00->field_0266;
    iVar4 = this_00->field_024E;
    goto LAB_004a4aab;
  }
  iVar2 = (*this_01->vtable->slot_2C)();
  if ((iVar2 == 0x3b) || (iVar3 = (*this_01->vtable->slot_2C)(), iVar2 = local_1c, iVar3 == 0x60)) {
    if ((this_00->field_0262 == 1) || (this_00->field_0262 == 0)) {
      if (this_00->field_0266 == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                   0x1226);
      }
      uVar7 = 0;
      iVar2 = *(int *)(this_00->field_0266 + 0xc);
      if (0 < iVar2) {
        do {
          FUN_006acc70(this_00->field_0266,uVar7,&local_10);
          if ((short)local_10 == (short)param_2) {
            local_10 = 0xffff;
            Library::DKW::TBL::FUN_006ae140((uint *)this_00->field_0266,uVar7,&local_10);
            break;
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < iVar2);
      }
      DistributeMD(this_00,0,this_00->field_024E,this_00->field_0266,this_00->field_0029);
      this_01 = local_18;
    }
    if (this_00->field_0262 != 2) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    STFishC::sub_004162B0(this_01,&local_a,&local_8,&local_6);
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
    if (this_00->field_0266 == 0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                 0x1234);
    }
    uVar8 = 0;
    uVar7 = *(uint *)(this_00->field_0266 + 0xc);
    if (0 < (int)uVar7) {
      do {
        FUN_006acc70(this_00->field_0266,uVar8,&local_10);
        if ((short)local_10 == (short)param_2) {
          local_10 = 0xffff;
          Library::DKW::TBL::FUN_006ae140((uint *)this_00->field_0266,uVar8,&local_10);
          break;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar7);
    }
    if (uVar8 == uVar7) {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x123b,0,0,&DAT_007a4ccc,
                                 s_STGroupBoatC__ChangeMDNotify_dep_007ac334);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar2 = 0x123c;
      goto LAB_004a4a83;
    }
  }
  else {
    iVar3 = 0;
    if (0 < local_1c) {
      local_20 = local_34;
      do {
        iVar4 = (*local_18->vtable->slot_2C)();
        if (iVar4 == *local_20) break;
        iVar3 = iVar3 + 1;
        local_20 = local_20 + 1;
      } while (iVar3 < iVar2);
    }
    if (iVar3 == iVar2) {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1246,0,0,&DAT_007a4ccc,
                                 s_STGroupBoatC__ChangeMDNotify_inv_007ac3a0);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      RaiseInternalException
                (-0x5001fffe,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                 0x1247);
    }
    if (this_00->field_024A == 0) {
      if (this_00->field_024E == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                   0x124b);
      }
      uVar7 = 0;
      iVar2 = *(int *)(this_00->field_024E + 0xc);
      if (0 < iVar2) {
        do {
          FUN_006acc70(this_00->field_024E,uVar7,&local_10);
          if ((short)local_10 == (short)param_2) {
            local_10 = 0xffff;
            Library::DKW::TBL::FUN_006ae140((uint *)this_00->field_024E,uVar7,&local_10);
            break;
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < iVar2);
      }
      DistributeMD(this_00,0,this_00->field_024E,this_00->field_0266,this_00->field_0029);
    }
    if (this_00->field_024A != 2) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    STFishC::sub_004162B0(local_18,&local_a,&local_8,&local_6);
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
    if (this_00->field_024E == 0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                 0x1259);
    }
    uVar8 = 0;
    uVar7 = *(uint *)(this_00->field_024E + 0xc);
    if (0 < (int)uVar7) {
      do {
        FUN_006acc70(this_00->field_024E,uVar8,&local_10);
        if ((short)local_10 == (short)param_2) {
          local_10 = 0xffff;
          Library::DKW::TBL::FUN_006ae140((uint *)this_00->field_024E,uVar8,&local_10);
          break;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar7);
    }
    if (uVar8 == uVar7) {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1260,0,0,&DAT_007a4ccc,
                                 s_STGroupBoatC__ChangeMDNotify_min_007ac36c);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar2 = 0x1261;
LAB_004a4a83:
      RaiseInternalException
                (-0x5001fffe,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                 iVar2);
    }
  }
  iVar2 = this_00->field_0029;
  iVar3 = this_00->field_0266;
  iVar4 = this_00->field_024E;
LAB_004a4aab:
  DistributeMD(this_00,0,iVar4,iVar3,iVar2);
  g_currentExceptionFrame = local_78.previous;
  return;
}

