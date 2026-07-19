
void __thiscall STFishC::LifeFish(STFishC *this,int *param_1)

{
  STT3DSprC *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined3 extraout_var;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  int iStack_8;
  
  iVar3 = thunk_FUN_0041c710((int)this);
  this_00 = (STT3DSprC *)(this + 0x1d5);
  if (iVar3 == 0) {
    iVar3 = 0;
    uVar4 = thunk_FUN_004ad650((int)this_00);
    FUN_006eabf0(*(void **)(this + 0x211),uVar4,iVar3);
    bVar2 = thunk_FUN_0041caf0((int)this);
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
    FUN_006eabf0(*(void **)(this + 0x211),uVar4,iVar3);
    iVar3 = 1;
  }
  iVar5 = thunk_FUN_004ad650((int)this_00);
  FUN_006e6870(*(void **)(this + 0x211),iVar5,iVar3);
  iVar3 = *(int *)(this + 0x23b);
  if (iVar3 == 4) {
    iVar3 = (**(code **)(*(int *)this + 0x20))();
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
      if (*(int *)(this + 0x267) == 0xe7) {
        cVar7 = -2;
      }
      else if (*(int *)(this + 0x267) == 0xe9) {
        cVar7 = -1;
      }
      thunk_FUN_00417ff0(this,cVar7 + '\a');
      thunk_FUN_00418010(this,cVar7 + '\x06');
      thunk_FUN_00418030(this,*(short *)(this + 0x235),*(short *)(this + 0x237),
                         *(short *)(this + 0x239));
      *(undefined4 *)(this + 0x23b) = 1;
    }
  }
  else if (iVar3 == 1) {
    iVar3 = (**(code **)(*(int *)this + 0x1c))();
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
        if (*(uint *)(this + 0x23f) < 0xf) goto LAB_0057cfe0;
        uVar4 = 1;
      }
      uVar6 = thunk_FUN_0057d5f0(this,uVar4);
      *(undefined4 *)(this + 0x23b) = uVar6;
      *(undefined4 *)(this + 0x23f) = 0;
    }
  }
  else if (iVar3 == 2) {
    iVar3 = thunk_FUN_00417830((int)this);
    if (iVar3 == 0) {
      *(undefined4 *)(this + 0x23b) = 0;
      *(undefined4 *)(this + 0x23f) = 7;
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
      STT3DSprC::StopShow(this_00,8);
      thunk_FUN_0057bf20(this);
      *(undefined4 *)(this + 0x23b) = 3;
      return;
    }
  }
  else if ((0xf < *(uint *)(this + 0x23f)) &&
          (iVar3 = (**(code **)(*(int *)this + 0x20))(), iVar3 == 1)) {
    *(undefined4 *)(this + 0x23f) = 0;
    uVar6 = thunk_FUN_0057d5f0(this,1);
    *(undefined4 *)(this + 0x23b) = uVar6;
  }
LAB_0057cfe0:
  switch(*(undefined4 *)(this + 0x267)) {
  case 0xe7:
    STT3DSprC::SetCurFase(this_00,'\x0e',*(uint *)(DAT_00802a38 + 0xe4) % 0x78 >> 1);
    break;
  case 0xe8:
    iVar3 = (0x18 - (int)*(short *)(this + 0x6c) / 0xf) % 0x18;
    uVar4 = *(uint *)(DAT_00802a38 + 0xe4) % 0x30 >> 2;
    iStack_8 = uVar4 + (iVar3 / 3) * 0xc;
    iVar3 = uVar4 + (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0xc;
    goto LAB_0057d24b;
  case 0xe9:
    iVar3 = (0x18 - (int)*(short *)(this + 0x6c) / 0xf) % 0x18;
    uVar4 = *(uint *)(DAT_00802a38 + 0xe4) % 0xc >> 1;
    iStack_8 = uVar4 + (iVar3 / 3) * 6;
    iVar3 = uVar4 + (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 6;
LAB_0057d24b:
    STT3DSprC::SetCurFase(this_00,'\x0e',iVar3);
    STT3DSprC::SetCurShad(this_00,'\x0e',iStack_8);
    break;
  case 0xea:
    iVar3 = (0x18 - (int)*(short *)(this + 0x6c) / 0xf) % 0x18;
    STT3DSprC::SetCurFase
              (this_00,'\x0e',
               (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0xf +
               *(uint *)(DAT_00802a38 + 0xe4) % 0xf);
    STT3DSprC::SetCurShad(this_00,'\x0e',iVar3 / 3);
    break;
  case 0xeb:
    iVar3 = (0x18 - (int)*(short *)(this + 0x6c) / 0xf) % 0x18;
    uVar4 = *(uint *)(DAT_00802a38 + 0xe4) % 0x14;
    STT3DSprC::SetCurFase
              (this_00,'\x0e',uVar4 + (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0x14);
    STT3DSprC::SetCurShad(this_00,'\x0e',uVar4 + (iVar3 / 3) * 0x14);
    break;
  default:
    goto switchD_0057cff4_default;
  }
  STT3DSprC::ShowCurFase(this_00,'\x0e');
switchD_0057cff4_default:
  *(int *)(this + 0x23f) = *(int *)(this + 0x23f) + 1;
  (**(code **)(*(int *)this + 0xd8))();
  return;
}

