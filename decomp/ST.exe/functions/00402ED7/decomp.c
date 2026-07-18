
undefined4 __fastcall thunk_FUN_004e04a0(int param_1)

{
  STT3DSprC *this;
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbStack_8;
  
  iVar3 = 0;
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x5ac);
  pbStack_8 = (byte *)0x0;
  switch(iVar1) {
  case 0x38:
  case 0x39:
  case 0x4f:
  case 0x5e:
    switch(*(undefined4 *)(param_1 + 0x4e8)) {
    case 0:
switchD_004e04e5_caseD_0:
      STT3DSprC::StopShow((STT3DSprC *)(param_1 + 0x1d5),0xb);
      break;
    case 1:
      if (iVar1 == 0x5e) {
        pbStack_8 = (byte *)s_corisi_lid_007bf988;
      }
      else {
LAB_004e05d3:
        pbStack_8 = (byte *)s_mine_ani1_lid_007bf934;
      }
      break;
    case 2:
      switch(iVar1) {
      case 0x38:
        pbStack_8 = (byte *)s_mine_ani1_gld_007bf978;
        break;
      case 0x39:
        pbStack_8 = (byte *)s_mine_ani1_cor_007bf954;
        break;
      case 0x4f:
        pbStack_8 = (byte *)s_mine_ani1_met_007bf944;
        break;
      case 0x5e:
        pbStack_8 = (byte *)s_corisi_ani1_cor_007bf964;
      }
      break;
    case 3:
      if (iVar1 != 0x5e) goto LAB_004e05d3;
      pbStack_8 = (byte *)s_corisi_lid_007bf988;
    }
    break;
  case 0x3b:
  case 0x52:
    switch(*(undefined4 *)(param_1 + 0x4e8)) {
    case 0:
      goto switchD_004e04e5_caseD_0;
    case 1:
    case 3:
      pbStack_8 = (byte *)s_depo_ani1_lid_007bf998;
      break;
    case 2:
      iVar1 = *(int *)(param_1 + 0x4dc);
      if (iVar1 == 0xdc) {
        pbStack_8 = (byte *)s_depo_ani1_gld_007bf9a8;
      }
      else if (iVar1 == 0xdd) {
        pbStack_8 = (byte *)s_depo_ani1_cor_007bf9b8;
      }
      else if (iVar1 == 0xde) {
        pbStack_8 = (byte *)s_depo_ani1_met_007bf9c8;
      }
    }
    break;
  case 0x60:
    switch(*(undefined4 *)(param_1 + 0x4e8)) {
    case 0:
      goto switchD_004e04e5_caseD_0;
    case 1:
    case 3:
      pbStack_8 = (byte *)s_silo_ani1_lid_007bf9d8;
      break;
    case 2:
      pbStack_8 = (byte *)s_silo_ani1_cor_007bf9e8;
    }
  }
  if (*(int *)(param_1 + 0x4e8) == 0) {
    return 0;
  }
  this = (STT3DSprC *)(param_1 + 0x1d5);
  iVar1 = STT3DSprC::LoadSequence(this,0xb,DAT_0080678c,pbStack_8,0x1d);
  if (iVar1 != 0) {
    FUN_006a5e40(iVar1,DAT_007ed77c,0x7bf910,0xc3);
  }
  iVar1 = *(int *)(param_1 + 0x4e8);
  if (iVar1 == 1) {
    iVar2 = **(int **)(*(int *)(param_1 + 0x1f5) + 0x18c);
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        iVar3 = **(int **)(*(int *)(param_1 + 0x1f5) + 0x18c) + -1;
        iVar2 = 0;
      }
      goto LAB_004e068c;
    }
    iVar1 = *(int *)(param_1 + 0x5ac);
    if (((iVar1 != 0x3b) && (iVar1 != 0x60)) && (iVar1 != 0x52)) {
      iVar3 = **(int **)(*(int *)(param_1 + 0x1f5) + 0x18c) + -1;
      iVar2 = 0;
      goto LAB_004e068c;
    }
    iVar2 = **(int **)(*(int *)(param_1 + 0x1f5) + 0x18c);
  }
  iVar3 = 0;
  iVar2 = iVar2 + -1;
LAB_004e068c:
  thunk_FUN_004abce0(this,0xb,iVar3,iVar2,'\0');
  thunk_FUN_004abe40(this,'\v',iVar3);
  STT3DSprC::StartShow(this,0xb,*(undefined4 *)(DAT_00802a38 + 0xe4));
  return 0;
}

