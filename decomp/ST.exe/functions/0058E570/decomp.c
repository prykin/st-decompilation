#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_shark.cpp
   STSharkC::LifeShark

   [STSwitchEnumApplier] Switch target field_0257 uses
   /SubmarineTitans/Recovered/Enums/STSharkC_field_0257State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

void __thiscall STSharkC::LifeShark(STSharkC *this,int *param_1)

{
  undefined4 *this_00;
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  STFishC *pSVar7;
  STFishC *pSVar8;
  STSharkC_field_0257State SVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EDI;
  undefined4 *puVar10;
  undefined4 **ppuVar11;
  int iVar12;
  undefined4 *local_30 [8];
  uint local_10;
  undefined4 local_c;
  STFishC *local_8;

  iVar5 = thunk_FUN_0041c710((int)this);
  this_00 = &this->field_01D5;
  if (iVar5 == 0) {
    iVar5 = 0;
    uVar6 = thunk_FUN_004ad650((int)this_00);
    FUN_006eabf0((void *)this->field_0211,uVar6,iVar5);
    iVar5 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)this);
    uVar6 = (uint)(iVar5 == 1);
    iVar5 = thunk_FUN_004ad650((int)this_00);
    FUN_006e6870((void *)this->field_0211,iVar5,uVar6);
  }
  else {
    iVar5 = 1;
    uVar6 = thunk_FUN_004ad650((int)this_00);
    FUN_006eabf0((void *)this->field_0211,uVar6,iVar5);
    iVar12 = 1;
    iVar5 = thunk_FUN_004ad650((int)this_00);
    FUN_006e6870((void *)this->field_0211,iVar5,iVar12);
  }
  if (0 < (int)this->field_0241) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_004ace30(this_00,*(uint *)(DAT_00806724 + 0x2c + this->field_0241 * 4),
                       (int)*(short *)(DAT_00806724 + 0x2c));
    if (((uint)PTR_00802a38->field_00E4 % 3 == 0) &&
       (iVar5 = this->field_0241 + -1, this->field_0241 = iVar5, iVar5 < 1)) {
      thunk_FUN_004aceb0(this_00,'\x0e');
    }
    goto cf_common_exit_0058E925;
  }
  if ((uint)PTR_00802a38->field_00E4 <= (uint)this->field_024F) goto cf_common_exit_0058E925;
  switch(this->field_0257) {
  case CASE_0:
    iVar5 = (*this->vtable->vfunc_20)();
    if (iVar5 == -1) {
      iVar5 = ReportDebugMessage(s_E____titans_Igor_To_shark_cpp_007cbb7c,0x2dc,0,-5,&DAT_007a4ccc,
                                 s_stop_move_error_007ad3a0);
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,s_E____titans_Igor_To_shark_cpp_007cbb7c,0x2dd);
    }
    else if (iVar5 == 1) {
      SVar9 = thunk_FUN_0058f1e0(this,(uint)(0x1d < (int)this->field_0253));
      this->field_0257 = SVar9;
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
        if ((int)this->field_0253 < 0x1f) {
          if (iVar5 == 2) {
            this->field_0253 = this->field_0253 + 1;
          }
        }
        else {
          iVar5 = (*this->vtable->vfunc_20)();
          if (iVar5 == 1) {
            this->field_0253 = 0;
            SVar9 = thunk_FUN_0058f1e0(this,1);
            this->field_0257 = SVar9;
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
           /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
           ((((pSVar7 = (STFishC *)
                        g_worldGrid.cells
                        [(int)g_worldGrid.planeStride * (int)sVar2 +
                         (int)g_worldGrid.sizeX * (int)sVar3 + (int)sVar1].objects[0],
              local_8 = pSVar7, pSVar7 != (STFishC *)0x0 &&
              (STFishC::sub_004162B0(pSVar7,&this->field_0231,&this->field_0233,&this->field_0235),
              this->field_0047 == this->field_0231)) && (this->field_0049 == this->field_0233)) &&
            ((this->field_004B == this->field_0235 &&
             (pSVar8 = (STFishC *)
                       STAllPlayersC::GetObjPtr
                                 (g_sTAllPlayers_007FA174,this->field_0x249,
                                  CONCAT22(extraout_var_01,this->field_024D),CASE_1),
             pSVar7 == pSVar8)))))) goto LAB_0058e87e;
      }
    }
    else {
      if (iVar5 != 1) {
        if (iVar5 != 2) {
          iVar5 = ReportDebugMessage(s_E____titans_Igor_To_shark_cpp_007cbb7c,0x2d3,0,0,
                                     &DAT_007a4ccc,s_STSharkC__LifeShark_Error_Move_007cbbcc);
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
        iVar5 = thunk_FUN_0058ff70((AnonShape_0058FF70_CCAF0F72 *)this);
        this->field_024F = iVar5;
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
        local_8 = (STFishC *)0x0;
      }
      else {
        local_8 = (STFishC *)
                  g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar2 +
                   (int)sVar3].objects[0];
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if (((this->field_0047 != sVar3) || (this->field_0049 != sVar2)) ||
         ((this->field_004B != sVar1 ||
          (pSVar7 = (STFishC *)
                    STAllPlayersC::GetObjPtr
                              (g_sTAllPlayers_007FA174,this->field_0x249,
                               CONCAT22((short)(SVar9 >> 0x10),this->field_024D),CASE_1),
          local_8 != pSVar7)))) {
        iVar5 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00417FF0::thunk_FUN_00418030
                          ((AnonReceiver_00417FF0 *)this,this->field_0231,this->field_0233,
                           this->field_0235);
        thunk_FUN_00417ff0(this,8);
        thunk_FUN_00418010(this,6);
        if (iVar5 != 0) {
          iVar5 = thunk_FUN_0058ff70((AnonShape_0058FF70_CCAF0F72 *)this);
          this->field_024F = iVar5;
          this->field_0257 = CASE_0;
        }
        break;
      }
      puVar10 = &DAT_00811728;
      for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
LAB_0058e87e:
      DAT_00811728 = 1000;
      ppuVar11 = local_30;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *ppuVar11 = (undefined4 *)0x0;
        ppuVar11 = ppuVar11 + 1;
      }
      _DAT_00811730 = 0xff;
      _DAT_00811734 = 0xffff;
      local_30[2] = *(undefined4 **)&local_8->field_0x8;
      local_30[3] = (undefined4 *)0x2;
      local_30[4] = (undefined4 *)0x110;
      local_30[5] = &DAT_00811728;
      (*local_8->vtable->GetMessage)(local_8,(int)local_30);
      this->field_023D = 0;
      iVar5 = STT3DSprC::LoadSequence((STT3DSprC *)this_00,8,DAT_00806764,s_expshark_007cbb28,0x1d);
      if (iVar5 != 0) {
        return;
      }
      STT3DSprC::StartShow((STT3DSprC *)this_00,8,PTR_00802a38->field_00E4);
      this->field_0257 = CASE_4;
      STT3DSprC::StopShow((STT3DSprC *)this_00,0xe);
      thunk_FUN_004ad5e0((int)this_00);
    }
    break;
  case CASE_4:
    iVar5 = thunk_FUN_004acd30(this_00,'\b');
    iVar12 = thunk_FUN_004ac910(this_00,'\b');
    if (iVar12 == iVar5 + -1) {
      this->field_0257 = CASE_6|CASE_1;
      STT3DSprC::StopShow((STT3DSprC *)this_00,8);
      thunk_FUN_0058efe0((STJellyGunC *)this);
    }
    break;
  case CASE_5:
    iVar5 = (*this->vtable->vfunc_20)();
    if (iVar5 == -1) {
      iVar5 = ReportDebugMessage(s_E____titans_Igor_To_shark_cpp_007cbb7c,0x265,0,0,&DAT_007a4ccc,
                                 s_stop_move_error_007ad3a0);
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    else if (iVar5 == 1) {
      thunk_FUN_00417ff0(this,10);
      thunk_FUN_00418010(this,8);
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00417FF0::thunk_FUN_00418030
                ((AnonReceiver_00417FF0 *)this,this->field_0231,this->field_0233,this->field_0235);
      this->field_0257 = CASE_2;
    }
    break;
  case CASE_6:
    iVar5 = thunk_FUN_00417830((AnonShape_00417830_9254190A *)this);
    if (iVar5 == 0) {
      iVar5 = thunk_FUN_0058ff70((AnonShape_0058FF70_CCAF0F72 *)this);
      this->field_0257 = CASE_0;
      this->field_024F = iVar5;
      this->field_0253 = 0xf;
      return;
    }
    if (((iVar5 < 2) || (3 < iVar5)) &&
       (iVar5 = ReportDebugMessage(s_E____titans_Igor_To_shark_cpp_007cbb7c,0x2f8,0,0,&DAT_007a4ccc,
                                   s_STSharkC__LifeShark_Error_Move_007cbbcc), iVar5 != 0)) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  default:
    goto switchD_0058e67d_default;
  }
cf_common_exit_0058E925:
  if ((this->field_0257 != CASE_4) && (this->field_0257 != (CASE_6|CASE_1))) {
    iVar5 = (0x18 - (int)this->field_006C / 0xf) % 0x18;
    uVar6 = (uint)PTR_00802a38->field_00E4 % 0x1e;
    local_10 = uVar6 + (iVar5 / 3) * 0x1e;
    STT3DSprC::SetCurFase
              ((STT3DSprC *)this_00,'\x0e',
               uVar6 + (((iVar5 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0x1e);
    STT3DSprC::SetCurShad((STT3DSprC *)this_00,'\x0e',local_10);
    STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\x0e');
  }
  (*this->vtable->vfunc_D8)();
switchD_0058e67d_default:
  return;
}

