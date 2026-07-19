
undefined4 __thiscall FUN_004ca7b0(void *this,uint param_1,int param_2)

{
  STT3DSprC *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  uint local_10;
  int local_c;
  int local_8;
  
  uVar7 = param_1;
  local_c = 0;
  this_00 = (STT3DSprC *)((int)this + 0x1d5);
  bVar5 = (byte)param_1;
  iVar1 = thunk_FUN_004acd30(this_00,bVar5);
  if (iVar1 == 0) {
    return 0;
  }
  local_8 = *(int *)((int)this + 0x245);
  puVar6 = &local_10;
  puVar4 = &param_1;
  uVar2 = thunk_FUN_004ab050();
  thunk_FUN_004cafc0(this,uVar7,uVar2,puVar4,puVar6);
  if (((int)param_1 < 0) || ((int)local_10 < 0)) {
    STT3DSprC::StopShow(this_00,bVar5);
    return 0;
  }
  if (*(int *)((int)this + 0x255) == 0) goto LAB_004ca835;
  if (local_8 == 0) {
LAB_004ca871:
    iVar1 = thunk_FUN_004acd30(this_00,bVar5);
    if (iVar1 != 1) {
      iVar3 = ((0x18 - *(int *)((int)this + 0x259) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18;
      iVar1 = param_1 * iVar3;
      thunk_FUN_004abce0(this_00,bVar5,iVar1,iVar1,'\0');
      uVar7 = param_1 * iVar3;
      goto LAB_004caaa4;
    }
  }
  else {
    if (local_8 == 1) {
      if (*(int *)((int)this + 0x24d) != 4) goto LAB_004ca871;
    }
    else if (local_8 == 6) goto LAB_004ca871;
LAB_004ca835:
    if ((*(int *)((int)this + 0x255) == 0) || (local_8 != 5)) {
      iVar1 = thunk_FUN_004acd30(this_00,bVar5);
      if (iVar1 < (int)((local_10 - param_1) + 1)) {
        iVar1 = thunk_FUN_004acd30(this_00,bVar5);
        local_10 = iVar1 + -1 + param_1;
      }
      iVar1 = *(int *)((int)this + 0x1f5) + uVar7 * 0x24;
      iVar3 = *(int *)(iVar1 + 0x10);
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar3 < *(int *)(*(int *)((int)this + 0x1f5) + 0x14 + uVar7 * 0x24)) {
        iVar1 = iVar1 - iVar3;
      }
      else {
        iVar1 = iVar3 - iVar1;
      }
      thunk_FUN_004abce0(this_00,bVar5,param_1,local_10,'\0');
      uVar7 = param_1;
      if (param_2 != 0) {
        if ((int)param_1 < (int)local_10) {
          if ((int)local_10 < (int)(iVar1 + param_1)) {
            iVar1 = 0;
          }
          uVar7 = param_1 + iVar1;
        }
        else {
          if ((int)(param_1 - iVar1) < (int)local_10) {
            iVar1 = 0;
          }
          uVar7 = param_1 - iVar1;
        }
      }
      goto LAB_004caaa4;
    }
    iVar1 = thunk_FUN_004acd30(this_00,bVar5);
    if (iVar1 != 1) {
      if (*(int *)((int)this + 0x27d) == 0x18) {
        local_c = ((0x18 - *(int *)((int)this + 0x259) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) %
                  0x18;
      }
      else if (*(int *)((int)this + 0x27d) == 8) {
        local_c = (((0x18 - *(int *)((int)this + 0x259) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) %
                  0x18) / 3;
      }
      local_8 = *(int *)(*(int *)((int)this + 0x1f5) + 0x10 + uVar7 * 0x24);
      iVar1 = *(int *)((int)this + 0x1f5) + uVar7 * 0x24;
      if (local_8 < *(int *)(iVar1 + 0x14)) {
        local_8 = *(int *)(iVar1 + 0x18) - local_8;
      }
      else {
        local_8 = local_8 - *(int *)(iVar1 + 0x18);
      }
      iVar1 = local_c + 1;
      thunk_FUN_004abce0(this_00,bVar5,param_1 * local_c,iVar1 * param_1 + -1,'\0');
      if (param_2 == 0) {
        uVar7 = param_1 * local_c;
      }
      else {
        iVar3 = param_1 * local_c;
        iVar1 = iVar1 * param_1 + -1;
        if (iVar3 < iVar1) {
          if (iVar1 < iVar3 + local_8) {
            local_8 = 0;
          }
          uVar7 = iVar3 + local_8;
        }
        else {
          if (iVar3 - local_8 < iVar1) {
            local_8 = 0;
          }
          uVar7 = iVar3 - local_8;
        }
      }
      goto LAB_004caaa4;
    }
  }
  thunk_FUN_004abce0(this_00,bVar5,0,0,'\0');
  uVar7 = 0;
LAB_004caaa4:
  STT3DSprC::SetCurFase(this_00,bVar5,uVar7);
  STT3DSprC::StartShow(this_00,bVar5,*(undefined4 *)(DAT_00802a38 + 0xe4));
  return 0;
}

