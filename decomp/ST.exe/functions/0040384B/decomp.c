
undefined4 __thiscall thunk_FUN_004ca7b0(void *this,uint param_1,int param_2)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  
  uVar7 = param_1;
  iStack_c = 0;
  this_00 = (void *)((int)this + 0x1d5);
  bVar5 = (byte)param_1;
  iVar1 = thunk_FUN_004acd30(this_00,bVar5);
  if (iVar1 == 0) {
    return 0;
  }
  iStack_8 = *(int *)((int)this + 0x245);
  puVar6 = &uStack_10;
  puVar4 = &param_1;
  uVar2 = thunk_FUN_004ab050();
  thunk_FUN_004cafc0(this,uVar7,uVar2,puVar4,puVar6);
  if (((int)param_1 < 0) || ((int)uStack_10 < 0)) {
    thunk_FUN_004ac410(bVar5);
    return 0;
  }
  if (*(int *)((int)this + 0x255) == 0) goto LAB_004ca835;
  if (iStack_8 == 0) {
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
    if (iStack_8 == 1) {
      if (*(int *)((int)this + 0x24d) != 4) goto LAB_004ca871;
    }
    else if (iStack_8 == 6) goto LAB_004ca871;
LAB_004ca835:
    if ((*(int *)((int)this + 0x255) == 0) || (iStack_8 != 5)) {
      iVar1 = thunk_FUN_004acd30(this_00,bVar5);
      if (iVar1 < (int)((uStack_10 - param_1) + 1)) {
        iVar1 = thunk_FUN_004acd30(this_00,bVar5);
        uStack_10 = iVar1 + -1 + param_1;
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
      thunk_FUN_004abce0(this_00,bVar5,param_1,uStack_10,'\0');
      uVar7 = param_1;
      if (param_2 != 0) {
        if ((int)param_1 < (int)uStack_10) {
          if ((int)uStack_10 < (int)(iVar1 + param_1)) {
            iVar1 = 0;
          }
          uVar7 = param_1 + iVar1;
        }
        else {
          if ((int)(param_1 - iVar1) < (int)uStack_10) {
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
        iStack_c = ((0x18 - *(int *)((int)this + 0x259) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) %
                   0x18;
      }
      else if (*(int *)((int)this + 0x27d) == 8) {
        iStack_c = (((0x18 - *(int *)((int)this + 0x259) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) %
                   0x18) / 3;
      }
      iStack_8 = *(int *)(*(int *)((int)this + 0x1f5) + 0x10 + uVar7 * 0x24);
      iVar1 = *(int *)((int)this + 0x1f5) + uVar7 * 0x24;
      if (iStack_8 < *(int *)(iVar1 + 0x14)) {
        iStack_8 = *(int *)(iVar1 + 0x18) - iStack_8;
      }
      else {
        iStack_8 = iStack_8 - *(int *)(iVar1 + 0x18);
      }
      iVar1 = iStack_c + 1;
      thunk_FUN_004abce0(this_00,bVar5,param_1 * iStack_c,iVar1 * param_1 + -1,'\0');
      if (param_2 == 0) {
        uVar7 = param_1 * iStack_c;
      }
      else {
        iVar3 = param_1 * iStack_c;
        iVar1 = iVar1 * param_1 + -1;
        if (iVar3 < iVar1) {
          if (iVar1 < iVar3 + iStack_8) {
            iStack_8 = 0;
          }
          uVar7 = iVar3 + iStack_8;
        }
        else {
          if (iVar3 - iStack_8 < iVar1) {
            iStack_8 = 0;
          }
          uVar7 = iVar3 - iStack_8;
        }
      }
      goto LAB_004caaa4;
    }
  }
  thunk_FUN_004abce0(this_00,bVar5,0,0,'\0');
  uVar7 = 0;
LAB_004caaa4:
  thunk_FUN_004abe40(this_00,bVar5,uVar7);
  thunk_FUN_004ac1a0(bVar5,*(undefined4 *)(DAT_00802a38 + 0xe4));
  return 0;
}

