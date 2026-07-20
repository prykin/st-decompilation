
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_fish.cpp
   STFishC::LifeFish
   
   [STSwitchEnumApplier] Switch target field_0267 uses
   /SubmarineTitans/Recovered/Enums/STFishC_field_0267State. Cases:
   CASE_E7=231;CASE_E8=232;CASE_E9=233;CASE_EA=234;CASE_EB=235 */

void __thiscall STFishC::LifeFish(STFishC *this,int *param_1)

{
  undefined4 *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined3 extraout_var;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  int *unaff_EDI;
  uint local_8;
  
  iVar3 = thunk_FUN_0041c710((int)this);
  this_00 = &this->field_01D5;
  if (iVar3 == 0) {
    iVar3 = 0;
    uVar4 = thunk_FUN_004ad650((int)this_00);
    FUN_006eabf0((void *)this->field_0211,uVar4,iVar3);
    bVar2 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)this);
    if (CONCAT31(extraout_var,bVar2) == 1) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 1;
    uVar4 = thunk_FUN_004ad650((int)this_00);
    FUN_006eabf0((void *)this->field_0211,uVar4,iVar3);
    iVar3 = 1;
  }
  iVar5 = thunk_FUN_004ad650((int)this_00);
  FUN_006e6870((void *)this->field_0211,iVar5,iVar3);
  iVar3 = this->field_023B;
  if (iVar3 == 4) {
    iVar3 = (*this->vtable->vfunc_20)();
    if (iVar3 == -1) {
      iVar3 = ReportDebugMessage(s_E____titans_Igor_To_fish_cpp_007cb044,0x709,0,0,&DAT_007a4ccc,
                                 s_stop_move_error_007ad3a0);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if (iVar3 == 1) {
      cVar7 = '\0';
      if (this->field_0267 == CASE_E7) {
        cVar7 = -2;
      }
      else if (this->field_0267 == CASE_E9) {
        cVar7 = -1;
      }
      thunk_FUN_00417ff0(this,cVar7 + '\a');
      thunk_FUN_00418010(this,cVar7 + '\x06');
      thunk_FUN_00418030(this,this->field_0235,this->field_0237,this->field_0239);
      this->field_023B = 1;
    }
  }
  else if (iVar3 == 1) {
    iVar3 = (*this->vtable->MoveStep)((STGameObjC *)this,unaff_EDI);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar4 = 0;
      }
      else {
        if (iVar3 != 2) {
          iVar3 = ReportDebugMessage(s_E____titans_Igor_To_fish_cpp_007cb044,0x72d,0,0,&DAT_007a4ccc
                                     ,s_STFishC__LifeFish_Error_Move_007cb068);
          if (iVar3 == 0) {
            return;
          }
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((uint)this->field_023F < 0xf) goto LAB_0057cfe0;
        uVar4 = 1;
      }
      uVar6 = sub_0057D5F0(this,uVar4);
      this->field_023B = uVar6;
      this->field_023F = 0;
    }
  }
  else if (iVar3 == 2) {
    iVar3 = thunk_FUN_00417830((AnonShape_00417830_9254190A *)this);
    if (iVar3 == 0) {
      this->field_023B = 0;
      this->field_023F = 7;
    }
    else if ((iVar3 != 2) && (iVar3 != 3)) {
      iVar3 = ReportDebugMessage(s_E____titans_Igor_To_fish_cpp_007cb044,0x740,0,0,&DAT_007a4ccc,
                                 s_STFishC__LifeFish_Error_Move_007cb068);
      if (iVar3 == 0) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (iVar3 == 5) {
    iVar3 = thunk_FUN_004acd30(this_00,'\b');
    iVar5 = thunk_FUN_004ac910(this_00,'\b');
    if (iVar5 == iVar3 + -1) {
      STT3DSprC::StopShow((STT3DSprC *)this_00,8);
      thunk_FUN_0057bf20((STJellyGunC *)this);
      this->field_023B = 3;
      return;
    }
  }
  else if ((0xf < (uint)this->field_023F) && (iVar3 = (*this->vtable->vfunc_20)(), iVar3 == 1)) {
    this->field_023F = 0;
    uVar6 = sub_0057D5F0(this,1);
    this->field_023B = uVar6;
  }
LAB_0057cfe0:
  switch(this->field_0267) {
  case CASE_E7:
    STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\x0e',(uint)PTR_00802a38->field_00E4 % 0x78 >> 1);
    break;
  case CASE_E8:
    iVar3 = (0x18 - (int)(short)this->field_006C / 0xf) % 0x18;
    uVar4 = (uint)PTR_00802a38->field_00E4 % 0x30 >> 2;
    local_8 = uVar4 + (iVar3 / 3) * 0xc;
    uVar4 = uVar4 + (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0xc;
    goto LAB_0057d24b;
  case CASE_E9:
    iVar3 = (0x18 - (int)(short)this->field_006C / 0xf) % 0x18;
    uVar4 = (uint)PTR_00802a38->field_00E4 % 0xc >> 1;
    local_8 = uVar4 + (iVar3 / 3) * 6;
    uVar4 = uVar4 + (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 6;
LAB_0057d24b:
    STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\x0e',uVar4);
    STT3DSprC::SetCurShad((STT3DSprC *)this_00,'\x0e',local_8);
    break;
  case CASE_EA:
    iVar3 = (0x18 - (int)(short)this->field_006C / 0xf) % 0x18;
    STT3DSprC::SetCurFase
              ((STT3DSprC *)this_00,'\x0e',
               (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0xf +
               (uint)PTR_00802a38->field_00E4 % 0xf);
    STT3DSprC::SetCurShad((STT3DSprC *)this_00,'\x0e',iVar3 / 3);
    break;
  case CASE_EB:
    iVar3 = (0x18 - (int)(short)this->field_006C / 0xf) % 0x18;
    uVar4 = (uint)PTR_00802a38->field_00E4 % 0x14;
    STT3DSprC::SetCurFase
              ((STT3DSprC *)this_00,'\x0e',
               uVar4 + (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0x14);
    STT3DSprC::SetCurShad((STT3DSprC *)this_00,'\x0e',uVar4 + (iVar3 / 3) * 0x14);
    break;
  default:
    goto switchD_0057cff4_default;
  }
  STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\x0e');
switchD_0057cff4_default:
  this->field_023F = this->field_023F + 1;
  (*this->vtable->vfunc_D8)();
  return;
}

