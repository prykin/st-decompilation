
void __thiscall FUN_004cafc0(void *this,int param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
  iVar2 = (uVar1 & 0xff) - 1;
  iVar3 = *(int *)((int)this + 0x5ac);
  if (iVar3 == 0x32) {
    thunk_FUN_004cfa00(this,param_1,param_2,(int *)param_3,(int *)param_4);
    return;
  }
  if (iVar3 == 0x5c) {
    thunk_FUN_004cfbe0(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (iVar3 == 0x40) {
    thunk_FUN_004cfff0(this,param_1,param_2,(int *)param_3,(int *)param_4);
    return;
  }
  if (iVar3 == 0x49) {
    thunk_FUN_004cfde0(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (iVar3 == 0x4d) {
    thunk_FUN_004deeb0(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (iVar3 == 0x4c) {
    thunk_FUN_004dcaa0(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (iVar3 == 0x43) {
    thunk_FUN_004df6f0(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (iVar3 == 0x44) {
    thunk_FUN_004dea90(this,param_1,param_2,(int *)param_3,(int *)param_4);
    return;
  }
  if (iVar3 == 0x52) {
    thunk_FUN_004ec700(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (iVar3 == 0x5f) {
    thunk_FUN_004ec900(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (iVar3 == 0x68) {
    thunk_FUN_004dc4b0(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (iVar3 == 0x37) {
    thunk_FUN_004e8e50(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (iVar3 == 99) {
    thunk_FUN_004b7b20(this,param_1,param_2,param_3,param_4);
    return;
  }
  iVar4 = *(int *)((int)this + 0x245);
  if ((iVar4 == 1) && (*(int *)((int)this + 0x24d) == 4)) {
    iVar4 = 4;
  }
  switch(param_1) {
  case 7:
    if (iVar3 == 0x4e) {
      switch(*(undefined4 *)((int)this + 0x4d0)) {
      case 0:
      case 2:
      case 3:
      case 4:
      case 5:
        *param_4 = 0;
        *param_3 = 0;
        break;
      case 1:
        *param_3 = 0;
        *param_4 = 0x11;
      }
    }
    if (*(int *)((int)this + 0x5ac) == 0x72) {
      switch(*(undefined4 *)((int)this + 0x4d0)) {
      case 0:
      case 2:
      case 3:
      case 4:
      case 5:
        *param_4 = 0;
        *param_3 = 0;
        break;
      case 1:
        *param_3 = *(uint *)((&PTR_DAT_007b8310)[iVar4] +
                            (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
        *param_4 = *(uint *)((&PTR_DAT_007b8310)[iVar4] +
                            (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
      }
    }
    if (*(int *)((int)this + 0x5ac) != 0x70) {
      return;
    }
    switch(*(undefined4 *)((int)this + 0x4d0)) {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
      *param_4 = 0;
      *param_3 = 0;
      return;
    case 1:
      *param_3 = 0;
      *param_4 = 0x11;
      return;
    default:
      return;
    }
  case 8:
  case 9:
    goto switchD_004cb1d7_caseD_8;
  default:
    goto switchD_004cb1d7_caseD_a;
  case 0xc:
    switch(iVar3) {
    case 0x33:
      if (*(int *)((int)this + 0x520) == 0) {
switchD_004cb5c6_caseD_1:
        uVar1 = *(uint *)((&PTR_DAT_007b8310)[iVar4] +
                         (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
        *param_4 = uVar1;
        *param_3 = uVar1;
        return;
      }
      break;
    case 0x35:
    case 0x45:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
      if (*(int *)((int)this + 0x4d0) != 0) {
        *param_3 = *(uint *)((&PTR_DAT_007b8310)[iVar4] +
                            (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
        *param_4 = *(uint *)((&PTR_DAT_007b8310)[iVar4] +
                            (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
        return;
      }
switchD_004cb5c6_caseD_2:
      uVar1 = *(uint *)((&PTR_DAT_007b8310)[iVar4] +
                       (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
      *param_4 = uVar1;
      *param_3 = uVar1;
      return;
    case 0x38:
    case 0x39:
    case 0x4f:
    case 0x5e:
      if (*(int *)((int)this + 0x4d0) == 0) goto switchD_004cb5c6_caseD_1;
      if (*(int *)((int)this + 0x4d0) != 1) {
        return;
      }
      break;
    case 0x4e:
      switch(*(undefined4 *)((int)this + 0x4d0)) {
      case 0:
switchD_004cb5c6_caseD_0:
        *param_4 = 0;
        *param_3 = 0;
        return;
      case 1:
        goto switchD_004cb5c6_caseD_1;
      case 2:
        goto switchD_004cb5c6_caseD_2;
      case 3:
        break;
      case 4:
switchD_004cb5c6_caseD_4:
        uVar1 = *(uint *)((&PTR_DAT_007b8310)[iVar4] +
                         (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
        *param_4 = uVar1;
        *param_3 = uVar1;
        return;
      case 5:
switchD_004cb5c6_caseD_5:
        *param_3 = *(uint *)((&PTR_DAT_007b8310)[iVar4] +
                            (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
        *param_4 = *(uint *)((&PTR_DAT_007b8310)[iVar4] +
                            (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
        return;
      default:
        goto switchD_004cb1d7_caseD_a;
      }
    case 0x70:
      switch(*(undefined4 *)((int)this + 0x4d0)) {
      case 0:
        goto switchD_004cb5c6_caseD_0;
      case 1:
        goto switchD_004cb5c6_caseD_1;
      case 2:
        goto switchD_004cb5c6_caseD_2;
      case 3:
        break;
      case 4:
        goto switchD_004cb5c6_caseD_4;
      case 5:
        goto switchD_004cb5c6_caseD_5;
      default:
        goto switchD_004cb1d7_caseD_a;
      }
    }
    *param_3 = *(uint *)((&PTR_DAT_007b8310)[iVar4] +
                        (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
    *param_4 = *(uint *)((&PTR_DAT_007b8310)[iVar4] +
                        (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
    return;
  case 0xd:
    break;
  case 0xe:
    goto switchD_004cb1d7_caseD_e;
  }
  if ((iVar3 == 0x4f) &&
     (iVar3 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d)), (char)iVar3 == '\x02')) {
    *param_4 = 0;
    *param_3 = 0;
    return;
  }
switchD_004cb1d7_caseD_e:
  if ((*(int *)((int)this + 0x5ac) == 0x4f) &&
     (iVar3 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d)), (char)iVar3 == '\x02')) {
    if (*(int *)((int)this + 0x4d0) != 1) {
      uVar1 = *(uint *)((&PTR_DAT_007b5170)[iVar4] +
                       (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
      *param_4 = uVar1;
      *param_3 = uVar1;
      return;
    }
  }
  else {
    iVar3 = *(int *)((int)this + 0x5ac);
    if (iVar3 == 0x6e) {
      switch(*(undefined4 *)((int)this + 0x4d0)) {
      case 0:
        goto switchD_004cb2cd_caseD_0;
      case 1:
switchD_004cb2cd_caseD_1:
        *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar4] +
                            (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
        *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar4] +
                            (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
        return;
      case 2:
switchD_004cb2cd_caseD_2:
        uVar1 = *(uint *)((&PTR_DAT_007b5170)[iVar4] +
                         (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
        *param_4 = uVar1;
        *param_3 = uVar1;
        return;
      case 3:
        *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar4] +
                            (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
        *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar4] +
                            (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
        return;
      default:
switchD_004cb1d7_caseD_a:
        return;
      }
    }
switchD_004cb1d7_caseD_8:
    if (iVar3 == 0x72) {
      switch(*(undefined4 *)((int)this + 0x4d0)) {
      case 0:
      case 1:
      case 2:
switchD_004cb2cd_caseD_0:
        uVar1 = *(uint *)((&PTR_DAT_007b5170)[iVar4] +
                         (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
        *param_4 = uVar1;
        *param_3 = uVar1;
        return;
      case 3:
        goto switchD_004cb2cd_caseD_1;
      case 4:
        goto switchD_004cb2cd_caseD_2;
      case 5:
        *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar4] +
                            (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
        *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar4] +
                            (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
        return;
      default:
        goto switchD_004cb1d7_caseD_a;
      }
    }
  }
  *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar4] +
                      (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
  *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar4] +
                      (param_2 + (iVar2 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
  return;
}

