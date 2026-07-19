
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
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 *puVar8;
  undefined2 extraout_var_01;
  undefined4 *puVar9;
  STSharkC_field_0257State SVar10;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  int *unaff_EDI;
  undefined4 **ppuVar11;
  int iVar12;
  undefined4 *local_30 [8];
  int local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  iVar6 = thunk_FUN_0041c710((int)this);
  this_00 = &this->field_01D5;
  if (iVar6 == 0) {
    iVar6 = 0;
    uVar7 = thunk_FUN_004ad650((int)this_00);
    FUN_006eabf0((void *)this->field_0211,uVar7,iVar6);
    bVar5 = thunk_FUN_0041caf0((int)this);
    uVar7 = (uint)(CONCAT31(extraout_var,bVar5) == 1);
    iVar6 = thunk_FUN_004ad650((int)this_00);
    FUN_006e6870((void *)this->field_0211,iVar6,uVar7);
  }
  else {
    iVar6 = 1;
    uVar7 = thunk_FUN_004ad650((int)this_00);
    FUN_006eabf0((void *)this->field_0211,uVar7,iVar6);
    iVar12 = 1;
    iVar6 = thunk_FUN_004ad650((int)this_00);
    FUN_006e6870((void *)this->field_0211,iVar6,iVar12);
  }
  if (0 < (int)this->field_0241) {
    thunk_FUN_004ace30(this_00,*(uint *)(DAT_00806724 + 0x2c + this->field_0241 * 4),
                       (int)*(short *)(DAT_00806724 + 0x2c));
    if ((*(uint *)(DAT_00802a38 + 0xe4) % 3 == 0) &&
       (iVar6 = this->field_0241 + -1, this->field_0241 = iVar6, iVar6 < 1)) {
      thunk_FUN_004aceb0(this_00,'\x0e');
    }
    goto cf_common_exit_0058E925;
  }
  if (*(uint *)(DAT_00802a38 + 0xe4) <= (uint)this->field_024F) goto cf_common_exit_0058E925;
  switch(this->field_0257) {
  case CASE_0:
    iVar6 = (*this->vtable->slot_20)();
    if (iVar6 == -1) {
      iVar6 = ReportDebugMessage(s_E____titans_Igor_To_shark_cpp_007cbb7c,0x2dc,0,-5,&DAT_007a4ccc,
                                 s_stop_move_error_007ad3a0);
      if (iVar6 != 0) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_Igor_To_shark_cpp_007cbb7c,0x2dd);
    }
    else if (iVar6 == 1) {
      SVar10 = thunk_FUN_0058f1e0(this,(uint)(0x1d < (int)this->field_0253));
      this->field_0257 = SVar10;
      this->field_0253 = this->field_0253 + 1;
    }
    break;
  case CASE_1:
  case CASE_2:
  case CASE_3:
    iVar6 = (*this->vtable->MoveStep)((STGameObjC *)this,unaff_EDI);
    if (iVar6 == 0) {
LAB_0058ea68:
      if (this->field_023D == 0) {
        if ((int)this->field_0253 < 0x1f) {
          if (iVar6 == 2) {
            this->field_0253 = this->field_0253 + 1;
          }
        }
        else {
          iVar6 = (*this->vtable->slot_20)();
          if (iVar6 == 1) {
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
        if (((((-1 < sVar1) && (sVar1 < DAT_007fb240)) &&
             ((-1 < sVar3 && ((sVar3 < DAT_007fb242 && (-1 < sVar2)))))) && (sVar2 < DAT_007fb244))
           && ((((puVar8 = *(undefined4 **)
                            (DAT_007fb248 +
                            ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                            (int)sVar1) * 8), local_8 = puVar8, puVar8 != (undefined4 *)0x0 &&
                 (thunk_FUN_004162b0(puVar8,&this->field_0231,&this->field_0233,&this->field_0235),
                 this->field_0047 == this->field_0231)) && (this->field_0049 == this->field_0233))
               && ((this->field_004B == this->field_0235 &&
                   (puVar9 = (undefined4 *)
                             STAllPlayersC::GetObjPtr
                                       (DAT_007fa174,
                                        CONCAT31((int3)(CONCAT22(extraout_var_01,this->field_0049)
                                                       >> 8),this->field_0x249),
                                        CONCAT22(extraout_var_04,this->field_024D),CASE_1),
                   puVar8 == puVar9)))))) goto LAB_0058e87e;
      }
    }
    else {
      if (iVar6 != 1) {
        if (iVar6 != 2) {
          iVar6 = ReportDebugMessage(s_E____titans_Igor_To_shark_cpp_007cbb7c,0x2d3,0,0,
                                     &DAT_007a4ccc,s_STSharkC__LifeShark_Error_Move_007cbbcc);
          if (iVar6 == 0) {
            return;
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        goto LAB_0058ea68;
      }
      if (this->field_0257 == CASE_4) break;
      bVar5 = thunk_FUN_0058f430((int)this);
      if (this->field_023D == 0) {
        iVar6 = thunk_FUN_0058ff70((int)this);
        this->field_024F = iVar6;
        this->field_0257 = CASE_0;
        break;
      }
      sVar1 = this->field_0235;
      local_c = CONCAT22(extraout_var_03,sVar1);
      sVar2 = this->field_0233;
      local_10 = CONCAT22(extraout_var_02,sVar2);
      this->field_0257 = CONCAT31(extraout_var_00,bVar5);
      sVar3 = this->field_0231;
      if (((sVar3 < 0) || (DAT_007fb240 <= sVar3)) ||
         ((sVar2 < 0 || (((DAT_007fb242 <= sVar2 || (sVar1 < 0)) || (DAT_007fb244 <= sVar1)))))) {
        local_8 = (undefined4 *)0x0;
      }
      else {
        local_8 = *(undefined4 **)
                   (DAT_007fb248 +
                   ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sVar2 + (int)sVar3) *
                   8);
      }
      if (((this->field_0047 != sVar3) || (this->field_0049 != sVar2)) ||
         ((this->field_004B != sVar1 ||
          (puVar8 = (undefined4 *)
                    STAllPlayersC::GetObjPtr
                              (DAT_007fa174,CONCAT31((int3)((uint)local_10 >> 8),this->field_0x249),
                               CONCAT22((short)((uint3)extraout_var_00 >> 8),this->field_024D),
                               CASE_1), local_8 != puVar8)))) {
        iVar6 = thunk_FUN_00418030(this,this->field_0231,this->field_0233,this->field_0235);
        thunk_FUN_00417ff0(this,8);
        thunk_FUN_00418010(this,6);
        if (iVar6 != 0) {
          iVar6 = thunk_FUN_0058ff70((int)this);
          this->field_024F = iVar6;
          this->field_0257 = CASE_0;
        }
        break;
      }
      puVar8 = &DAT_00811728;
      for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
LAB_0058e87e:
      DAT_00811728 = 1000;
      ppuVar11 = local_30;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *ppuVar11 = (undefined4 *)0x0;
        ppuVar11 = ppuVar11 + 1;
      }
      _DAT_00811730 = 0xff;
      _DAT_00811734 = 0xffff;
      local_30[2] = (undefined4 *)local_8[2];
      local_30[3] = (undefined4 *)0x2;
      local_30[4] = (undefined4 *)0x110;
      local_30[5] = &DAT_00811728;
      (**(code **)*local_8)(local_30);
      this->field_023D = 0;
      iVar6 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)this_00,8,DAT_00806764,(byte *)s_expshark_007cbb28,0x1d);
      if (iVar6 != 0) {
        return;
      }
      STT3DSprC::StartShow((STT3DSprC *)this_00,8,*(undefined4 *)(DAT_00802a38 + 0xe4));
      this->field_0257 = CASE_4;
      STT3DSprC::StopShow((STT3DSprC *)this_00,0xe);
      thunk_FUN_004ad5e0((int)this_00);
    }
    break;
  case CASE_4:
    iVar6 = thunk_FUN_004acd30(this_00,'\b');
    iVar12 = thunk_FUN_004ac910(this_00,'\b');
    if (iVar12 == iVar6 + -1) {
      this->field_0257 = CASE_6|CASE_1;
      STT3DSprC::StopShow((STT3DSprC *)this_00,8);
      thunk_FUN_0058efe0(this);
    }
    break;
  case CASE_5:
    iVar6 = (*this->vtable->slot_20)();
    if (iVar6 == -1) {
      iVar6 = ReportDebugMessage(s_E____titans_Igor_To_shark_cpp_007cbb7c,0x265,0,0,&DAT_007a4ccc,
                                 s_stop_move_error_007ad3a0);
      if (iVar6 != 0) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (iVar6 == 1) {
      thunk_FUN_00417ff0(this,10);
      thunk_FUN_00418010(this,8);
      thunk_FUN_00418030(this,this->field_0231,this->field_0233,this->field_0235);
      this->field_0257 = CASE_2;
    }
    break;
  case CASE_6:
    iVar6 = thunk_FUN_00417830((int)this);
    if (iVar6 == 0) {
      iVar6 = thunk_FUN_0058ff70((int)this);
      this->field_0257 = CASE_0;
      this->field_024F = iVar6;
      this->field_0253 = 0xf;
      return;
    }
    if (((iVar6 < 2) || (3 < iVar6)) &&
       (iVar6 = ReportDebugMessage(s_E____titans_Igor_To_shark_cpp_007cbb7c,0x2f8,0,0,&DAT_007a4ccc,
                                   s_STSharkC__LifeShark_Error_Move_007cbbcc), iVar6 != 0)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  default:
    goto switchD_0058e67d_default;
  }
cf_common_exit_0058E925:
  if ((this->field_0257 != CASE_4) && (this->field_0257 != (CASE_6|CASE_1))) {
    iVar6 = (0x18 - (int)(short)this->field_006C / 0xf) % 0x18;
    uVar7 = *(uint *)(DAT_00802a38 + 0xe4) % 0x1e;
    local_10 = uVar7 + (iVar6 / 3) * 0x1e;
    STT3DSprC::SetCurFase
              ((STT3DSprC *)this_00,'\x0e',
               uVar7 + (((iVar6 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0x1e);
    STT3DSprC::SetCurShad((STT3DSprC *)this_00,'\x0e',local_10);
    STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\x0e');
  }
  (*this->vtable->slot_D8)();
switchD_0058e67d_default:
  return;
}

