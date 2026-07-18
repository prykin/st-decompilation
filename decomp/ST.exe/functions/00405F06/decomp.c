
void __fastcall thunk_FUN_0057cd70(int *param_1)

{
  void *this;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined3 extraout_var;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  int iStack_8;
  
  iVar3 = thunk_FUN_0041c710((int)param_1);
  this = (void *)((int)param_1 + 0x1d5);
  if (iVar3 == 0) {
    iVar3 = 0;
    uVar4 = thunk_FUN_004ad650((int)this);
    FUN_006eabf0(*(void **)((int)param_1 + 0x211),uVar4,iVar3);
    bVar2 = thunk_FUN_0041caf0((int)param_1);
    if (CONCAT31(extraout_var,bVar2) == 1) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 1;
    uVar4 = thunk_FUN_004ad650((int)this);
    FUN_006eabf0(*(void **)((int)param_1 + 0x211),uVar4,iVar3);
    iVar3 = 1;
  }
  iVar5 = thunk_FUN_004ad650((int)this);
  FUN_006e6870(*(void **)((int)param_1 + 0x211),iVar5,iVar3);
  iVar3 = *(int *)((int)param_1 + 0x23b);
  if (iVar3 == 4) {
    iVar3 = (**(code **)(*param_1 + 0x20))();
    if (iVar3 == -1) {
      iVar3 = FUN_006ad4d0(s_E____titans_Igor_To_fish_cpp_007cb044,0x709,0,0,&DAT_007a4ccc);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if (iVar3 == 1) {
      cVar7 = '\0';
      if (*(int *)((int)param_1 + 0x267) == 0xe7) {
        cVar7 = -2;
      }
      else if (*(int *)((int)param_1 + 0x267) == 0xe9) {
        cVar7 = -1;
      }
      thunk_FUN_00417ff0(param_1,cVar7 + '\a');
      thunk_FUN_00418010(param_1,cVar7 + '\x06');
      thunk_FUN_00418030(param_1,*(short *)((int)param_1 + 0x235),*(short *)((int)param_1 + 0x237),
                         *(short *)((int)param_1 + 0x239));
      *(undefined4 *)((int)param_1 + 0x23b) = 1;
    }
  }
  else if (iVar3 == 1) {
    iVar3 = (**(code **)(*param_1 + 0x1c))();
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar4 = 0;
      }
      else {
        if (iVar3 != 2) {
          iVar3 = FUN_006ad4d0(s_E____titans_Igor_To_fish_cpp_007cb044,0x72d,0,0,&DAT_007a4ccc);
          if (iVar3 == 0) {
            return;
          }
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(uint *)((int)param_1 + 0x23f) < 0xf) goto LAB_0057cfe0;
        uVar4 = 1;
      }
      uVar6 = thunk_FUN_0057d5f0(param_1,uVar4);
      *(undefined4 *)((int)param_1 + 0x23b) = uVar6;
      *(undefined4 *)((int)param_1 + 0x23f) = 0;
    }
  }
  else if (iVar3 == 2) {
    iVar3 = thunk_FUN_00417830((int)param_1);
    if (iVar3 == 0) {
      *(undefined4 *)((int)param_1 + 0x23b) = 0;
      *(undefined4 *)((int)param_1 + 0x23f) = 7;
    }
    else if ((iVar3 != 2) && (iVar3 != 3)) {
      iVar3 = FUN_006ad4d0(s_E____titans_Igor_To_fish_cpp_007cb044,0x740,0,0,&DAT_007a4ccc);
      if (iVar3 == 0) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (iVar3 == 5) {
    iVar3 = thunk_FUN_004acd30(this,'\b');
    iVar5 = thunk_FUN_004ac910(this,'\b');
    if (iVar5 == iVar3 + -1) {
      thunk_FUN_004ac410(8);
      thunk_FUN_0057bf20(param_1);
      *(undefined4 *)((int)param_1 + 0x23b) = 3;
      return;
    }
  }
  else if ((0xf < *(uint *)((int)param_1 + 0x23f)) &&
          (iVar3 = (**(code **)(*param_1 + 0x20))(), iVar3 == 1)) {
    *(undefined4 *)((int)param_1 + 0x23f) = 0;
    uVar6 = thunk_FUN_0057d5f0(param_1,1);
    *(undefined4 *)((int)param_1 + 0x23b) = uVar6;
  }
LAB_0057cfe0:
  switch(*(undefined4 *)((int)param_1 + 0x267)) {
  case 0xe7:
    thunk_FUN_004abe40(this,'\x0e',*(uint *)(DAT_00802a38 + 0xe4) % 0x78 >> 1);
    break;
  case 0xe8:
    iVar3 = (0x18 - (int)(short)param_1[0x1b] / 0xf) % 0x18;
    uVar4 = *(uint *)(DAT_00802a38 + 0xe4) % 0x30 >> 2;
    iStack_8 = uVar4 + (iVar3 / 3) * 0xc;
    iVar3 = uVar4 + (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0xc;
    goto LAB_0057d24b;
  case 0xe9:
    iVar3 = (0x18 - (int)(short)param_1[0x1b] / 0xf) % 0x18;
    uVar4 = *(uint *)(DAT_00802a38 + 0xe4) % 0xc >> 1;
    iStack_8 = uVar4 + (iVar3 / 3) * 6;
    iVar3 = uVar4 + (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 6;
LAB_0057d24b:
    thunk_FUN_004abe40(this,'\x0e',iVar3);
    thunk_FUN_004abf00('\x0e',iStack_8);
    break;
  case 0xea:
    iVar3 = (0x18 - (int)(short)param_1[0x1b] / 0xf) % 0x18;
    thunk_FUN_004abe40(this,'\x0e',
                       (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0xf +
                       *(uint *)(DAT_00802a38 + 0xe4) % 0xf);
    thunk_FUN_004abf00('\x0e',iVar3 / 3);
    break;
  case 0xeb:
    iVar3 = (0x18 - (int)(short)param_1[0x1b] / 0xf) % 0x18;
    uVar4 = *(uint *)(DAT_00802a38 + 0xe4) % 0x14;
    thunk_FUN_004abe40(this,'\x0e',uVar4 + (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0x14);
    thunk_FUN_004abf00('\x0e',uVar4 + (iVar3 / 3) * 0x14);
    break;
  default:
    goto switchD_0057cff4_default;
  }
  thunk_FUN_004ac040('\x0e');
switchD_0057cff4_default:
  *(int *)((int)param_1 + 0x23f) = *(int *)((int)param_1 + 0x23f) + 1;
  (**(code **)(*param_1 + 0xd8))();
  return;
}

