#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_shark.cpp
   STSharkC::LifeShark

   [STSwitchEnumApplier] Switch target field_0257 uses
   /SubmarineTitans/Recovered/Enums/STSharkC_field_0257State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6

   [STSwitchEnumApplier] Switch target field_0257 uses
   /SubmarineTitans/Recovered/Enums/STSharkC_field_0257State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall LifeShark(STSharkC * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0058E9F8 RET | 0058ECB0 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall STSharkC::LifeShark(STSharkC *this)

{
  undefined4 *this_00;
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar5;
  uint uVar7;
  int SVar9;
  STGameObjC *pSVar8;
  int local_EAX_1222;
  int local_EAX_1250;
  STGameObjC *pSVar9;
  STSharkC_field_0257State SVar10;
  int uVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EDI;
  AnonShape_0041AF40_F59F8577 *pAVar12;
  int iVar13;
  AnonShape_0041AF40_F59F8577 local_30;
  uint local_10;
  undefined4 local_c;
  STGameObjC *local_8;

  iVar5 = thunk_FUN_0041c710((AnonShape_0041C710_C4D46939 *)this);
  this_00 = &this->field_01D5;
  if (iVar5 == 0) {
    iVar5 = 0;
    uVar7 = thunk_FUN_004ad650((STT3DSprC *)this_00);
    Library::Ourlib::ST3DSMAP::SprSetVisible((void *)this->field_0211,uVar7,iVar5);
    iVar5 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)this);
    uVar7 = (uint)(iVar5 == 1);
    iVar5 = thunk_FUN_004ad650((STT3DSprC *)this_00);
    FUN_006e6870((void *)this->field_0211,iVar5,uVar7);
  }
  else {
    iVar5 = 1;
    uVar7 = thunk_FUN_004ad650((STT3DSprC *)this_00);
    Library::Ourlib::ST3DSMAP::SprSetVisible((void *)this->field_0211,uVar7,iVar5);
    iVar13 = 1;
    iVar5 = thunk_FUN_004ad650((STT3DSprC *)this_00);
    FUN_006e6870((void *)this->field_0211,iVar5,iVar13);
  }
  if (0 < this->field_0241) {
    STT3DSprC::sub_004ACE30
              ((STT3DSprC *)this_00,PTR_00806724->entries[this->field_0241 + -1],
               (int)PTR_00806724->field_002C);
    if ((g_playSystem_00802A38->field_00E4 % 3 == 0) &&
       (iVar5 = this->field_0241 + -1, this->field_0241 = iVar5, iVar5 < 1)) {
      thunk_FUN_004aceb0(this_00,'\x0e');
    }
    goto cf_common_exit_0058E925;
  }
  if (g_playSystem_00802A38->field_00E4 <= this->field_024F) goto cf_common_exit_0058E925;
  switch(this->field_0257) {
  case CASE_0:
    iVar5 = this->vfunc_20();
    if (iVar5 == -1) {
      iVar5 = ReportDebugMessage("E:\\__titans\\Igor\\To_shark.cpp",0x2dc,0,-5,"%s",
                                 "stop move error");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\To_shark.cpp",0x2dd);
    }
    else if (iVar5 == 1) {
      SVar10 = thunk_FUN_0058f1e0(this,(uint)(0x1d < this->field_0253));
      this->field_0257 = SVar10;
      this->field_0253 = this->field_0253 + 1;
    }
    break;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  case CASE_1:
  case CASE_2:
  case CASE_3:
    iVar5 = (*this->vtable->MoveStep)((STGameObjC *)this,unaff_EDI);
    if (iVar5 == 0) {
LAB_0058ea68:
      if (this->field_023D == 0) {
        if (this->field_0253 < 0x1f) {
          if (iVar5 == 2) {
            this->field_0253 = this->field_0253 + 1;
          }
        }
        else {
          iVar5 = this->vfunc_20();
          if (iVar5 == 1) {
            this->field_0253 = 0;
            SVar10 = thunk_FUN_0058f1e0(this,1);
            this->field_0257 = SVar10;
          }
        }
      }
      else {
        sVar1 = this->field_0231;
        sVar2 = this->field_0235;
        sVar3 = this->field_0233;
        if (((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) &&
             ((-1 < sVar3 && ((sVar3 < g_worldGrid.sizeY && (-1 < sVar2)))))) &&
            (sVar2 < g_worldGrid.sizeZ)) &&
           ((((pSVar8 = (STGameObjC *)
                        STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0],
              local_8 = pSVar8, pSVar8 != nullptr &&
              (STFishC::sub_004162B0
                         ((STFishC *)pSVar8,&this->field_0231,&this->field_0233,&this->field_0235),
              this->field_0047 == this->field_0231)) && (this->field_0049 == this->field_0233)) &&
            ((this->field_004B == this->field_0235 &&
             (pSVar9 = STAllPlayersC::GetObjPtr
                                 (g_allPlayers_007FA174,*(char *)&this->field_0249,this->field_024D,
                                  CASE_1), pSVar8 == pSVar9)))))) goto LAB_0058e87e;
      }
    }
    else {
      if (iVar5 != 1) {
        if (iVar5 != 2) {
          iVar5 = ReportDebugMessage("E:\\__titans\\Igor\\To_shark.cpp",0x2d3,0,0,
                                     "%s","STSharkC::LifeShark Error Move");
          if (iVar5 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto LAB_0058ea68;
      }
      if (this->field_0257 == CASE_4) break;
      SVar9 = sub_0058F430(this);
      if (this->field_023D == 0) {
        local_EAX_1250 = sub_0058FF70(this);
        this->field_024F = local_EAX_1250;
        this->field_0257 = CASE_0;
        break;
      }
      sVar1 = this->field_0235;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_c = CONCAT22(extraout_var_00,sVar1);
      sVar2 = this->field_0233;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_10 = CONCAT22(extraout_var,sVar2);
      this->field_0257 = SVar9;
      sVar3 = this->field_0231;
      if (((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
         ((sVar2 < 0 ||
          (((g_worldGrid.sizeY <= sVar2 || (sVar1 < 0)) || (g_worldGrid.sizeZ <= sVar1)))))) {
        local_8 = nullptr;
      }
      else {
        local_8 = (STGameObjC *)
                  STGridAt3D(g_worldGrid, sVar3, sVar2, sVar1).objects[0];
      }
      if (((this->field_0047 != sVar3) || (this->field_0049 != sVar2)) ||
         ((this->field_004B != sVar1 ||
          (pSVar8 = STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,*(char *)&this->field_0249,this->field_024D,
                               CASE_1), local_8 != pSVar8)))) {
        iVar5 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004167A0::thunk_FUN_00418030
                          ((AnonReceiver_004167A0 *)this,this->field_0231,this->field_0233,
                           this->field_0235);
        thunk_FUN_00417ff0(this,8);
        thunk_FUN_00418010(this,6);
        if (iVar5 != 0) {
          local_EAX_1222 = sub_0058FF70(this);
          this->field_024F = local_EAX_1222;
          this->field_0257 = CASE_0;
        }
        break;
      }
      memset(&DAT_00811728, 0, 0x1c); /* compiler bulk-zero initialization */
      iVar5 = 0;
LAB_0058e87e:
      DAT_00811728 = 1000;
      pAVar12 = &local_30;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pAVar12 = 0;
        pAVar12 = (AnonShape_0041AF40_F59F8577 *)&pAVar12->field_0x4;
      }
      _DAT_00811730 = 0xff;
      _DAT_00811734 = 0xffff;
      STPiece<8,4>(local_30) = local_8->field_0008;
      STPiece<12,4>(local_30) = 2;
      local_30.field_0010 = 0x110;
      local_30.field_0014 = &DAT_00811728;
      local_8->GetMessage(&local_30);
      this->field_023D = 0;
      iVar5 = STT3DSprC::LoadSequence((STT3DSprC *)this_00,8,DAT_00806764,"expshark",0x1d);
      if (iVar5 != 0) {
        return;
      }
      STT3DSprC::StartShow((STT3DSprC *)this_00,8,g_playSystem_00802A38->field_00E4);
      this->field_0257 = CASE_4;
      STT3DSprC::StopShow((STT3DSprC *)this_00,0xe);
      thunk_FUN_004ad5e0((STT3DSprC *)this_00);
    }
    break;
  case CASE_4:
    iVar5 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_00,'\b');
    iVar13 = thunk_FUN_004ac910(this_00,'\b');
    if (iVar13 == iVar5 + -1) {
      this->field_0257 = CASE_7;
      STT3DSprC::StopShow((STT3DSprC *)this_00,8);
      sub_0058EFE0(this);
    }
    break;
  case CASE_5:
    iVar5 = this->vfunc_20();
    if (iVar5 == -1) {
      iVar5 = ReportDebugMessage("E:\\__titans\\Igor\\To_shark.cpp",0x265,0,0,"%s",
                                 "stop move error");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    else if (iVar5 == 1) {
      thunk_FUN_00417ff0(this,10);
      thunk_FUN_00418010(this,8);
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004167A0::thunk_FUN_00418030
                ((AnonReceiver_004167A0 *)this,this->field_0231,this->field_0233,this->field_0235);
      this->field_0257 = CASE_2;
    }
    break;
  case CASE_6:
    iVar5 = thunk_FUN_00417830((AnonShape_00417830_9254190A *)this);
    if (iVar5 == 0) {
      uVar6 = sub_0058FF70(this);
      this->field_0257 = CASE_0;
      this->field_024F = uVar6;
      this->field_0253 = 0xf;
      return;
    }
    if (((iVar5 < 2) || (3 < iVar5)) &&
       (iVar5 = ReportDebugMessage("E:\\__titans\\Igor\\To_shark.cpp",0x2f8,0,0,"%s",
                                   "STSharkC::LifeShark Error Move"), iVar5 != 0)) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  default:
    goto switchD_0058e67d_default;
  }
cf_common_exit_0058E925:
  if ((this->field_0257 != CASE_4) && (this->field_0257 != CASE_7)) {
    iVar5 = (0x18 - (int)this->field_006C / 0xf) % 0x18;
    uVar7 = g_playSystem_00802A38->field_00E4 % 0x1e;
    local_10 = uVar7 + (iVar5 / 3) * 0x1e;
    STT3DSprC::SetCurFase
              ((STT3DSprC *)this_00,'\x0e',
               uVar7 + (((iVar5 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0x1e);
    STT3DSprC::SetCurShad((STT3DSprC *)this_00,'\x0e',local_10);
    STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\x0e');
  }
  this->vfunc_D8();
switchD_0058e67d_default:
  return;
}

