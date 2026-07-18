
void FUN_005926e0(void)

{
  undefined4 uVar1;
  code *pcVar2;
  void *this;
  int iVar3;
  BITMAPINFO *pBVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  int *piVar7;
  void *unaff_EDI;
  uint uVar8;
  char cVar9;
  undefined4 local_68;
  undefined4 local_64 [16];
  int local_24 [7];
  void *local_8;
  
  local_68 = DAT_00858df8;
  DAT_00858df8 = &local_68;
  iVar3 = __setjmp3(local_64,0,unaff_EDI,unaff_ESI);
  this = local_8;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_68;
    iVar5 = FUN_006ad4d0(s_E____titans_Start_camp_obj_cpp_007cbcd4,0x1b3,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cbcd4,0x1b3);
    return;
  }
  if (*(int *)(DAT_0081176c + 0x28) == 0) goto LAB_00592b82;
  if (*(char *)((int)local_8 + 0x1be7) != '\0') goto LAB_00592b7c;
  local_24[5] = *(int *)((int)local_8 + 0x1be8);
  puVar6 = (undefined4 *)((int)local_8 + 0x1bd7);
  iVar3 = 4;
  do {
    if ((int *)*puVar6 != (int *)0x0) {
      thunk_FUN_005926a0((int *)*puVar6);
    }
    puVar6 = puVar6 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar1 = *(undefined4 *)((int)this + 0x1be8);
  switch(uVar1) {
  case 0:
  case 3:
  case 6:
    local_24[0] = 0;
    local_24[1] = 2;
    local_24[2] = 4;
    local_24[3] = 3;
    local_24[4] = 1;
    break;
  case 1:
  case 4:
    local_24[0] = 0;
    local_24[1] = 5;
    local_24[2] = 7;
    local_24[3] = 6;
    local_24[4] = 1;
    break;
  case 2:
  case 5:
    local_24[1] = 10;
    local_24[0] = 8;
    local_24[2] = 0xc;
    local_24[3] = 0xb;
    local_24[4] = 9;
    break;
  case 7:
    local_24[0] = 5;
    local_24[1] = 7;
    local_24[2] = 9;
    local_24[3] = 8;
    local_24[4] = 6;
    break;
  case 8:
    local_24[0] = 10;
    local_24[1] = 0xc;
    local_24[2] = 0xe;
    local_24[3] = 0xd;
    local_24[4] = 0xb;
  }
  switch(uVar1) {
  default:
    iVar3 = 0;
    break;
  case 3:
  case 4:
  case 5:
    iVar3 = 1;
    break;
  case 6:
  case 7:
  case 8:
    iVar3 = 2;
  }
  if (*(int *)((int)this + (local_24[2] + iVar3 * 0xf) * 4 + 0x1b13) == 0)
  goto switchD_00592962_caseD_1;
  switch(uVar1) {
  default:
    iVar3 = 0;
    break;
  case 3:
  case 4:
  case 5:
    iVar3 = 1;
    break;
  case 6:
  case 7:
  case 8:
    iVar3 = 2;
  }
  switch(uVar1) {
  default:
    iVar5 = 0;
    break;
  case 3:
  case 4:
  case 5:
    iVar5 = 1;
    break;
  case 6:
  case 7:
  case 8:
    iVar5 = 2;
  }
  if (*(int *)(*(int *)((int)this + (local_24[2] + iVar3 * 0xf) * 4 + 0x1b13) + 0x14) -
      *(int *)(*(int *)((int)this + (local_24[2] + iVar5 * 0xf) * 4 + 0x1b13) + 0x18) != 1)
  goto switchD_00592962_caseD_1;
  switch(uVar1) {
  case 0:
  case 1:
    iVar3 = (DAT_0080874e != 1) + 1;
    goto LAB_00592933;
  case 2:
  case 5:
  case 8:
    iVar3 = (uint)DAT_0080874e * 3 + -3;
LAB_00592933:
    *(int *)((int)this + 0x1be8) = iVar3;
    break;
  case 3:
  case 4:
    *(uint *)((int)this + 0x1be8) = (DAT_0080874e != 2) + 4;
    break;
  case 6:
  case 7:
    *(uint *)((int)this + 0x1be8) = (DAT_0080874e != 3) + 7;
  }
  switch(*(undefined4 *)((int)this + 0x1be8)) {
  case 0:
  case 2:
  case 3:
  case 5:
  case 6:
  case 8:
    thunk_FUN_00568bc0(&DAT_00807658,1);
  }
  switch(*(undefined4 *)((int)this + 0x1be8)) {
  case 0:
    thunk_FUN_005b6730(this,0x15,'\0',1);
    iVar3 = 1;
    cVar9 = '\x02';
    uVar8 = 0x18;
    break;
  default:
    goto switchD_00592962_caseD_1;
  case 2:
    iVar3 = -1;
    cVar9 = '\x01';
    uVar8 = 0x1b;
    break;
  case 3:
    thunk_FUN_005b6730(this,0x16,'\0',1);
    iVar3 = 1;
    cVar9 = '\x02';
    uVar8 = 0x19;
    break;
  case 5:
    iVar3 = -1;
    cVar9 = '\x01';
    uVar8 = 0x1c;
    break;
  case 6:
    thunk_FUN_005b6730(this,0x17,'\0',1);
    iVar3 = 1;
    cVar9 = '\x02';
    uVar8 = 0x1a;
    break;
  case 8:
    iVar3 = -1;
    cVar9 = '\x01';
    uVar8 = 0x1d;
  }
  thunk_FUN_005b6730(this,uVar8,cVar9,iVar3);
switchD_00592962_caseD_1:
  if (local_24[5] != *(int *)((int)this + 0x1be8)) {
    piVar7 = (int *)((int)this + 0x1b13);
    local_24[5] = 3;
    do {
      iVar3 = 0xf;
      do {
        if (*piVar7 != 0) {
          FUN_006c4aa0(*piVar7);
        }
        piVar7 = piVar7 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_24[5] = local_24[5] + -1;
    } while (local_24[5] != 0);
    switch(*(undefined4 *)((int)this + 0x1be8)) {
    case 0:
    case 3:
    case 6:
      local_24[0] = 0;
      local_24[1] = 2;
      local_24[2] = 4;
      local_24[3] = 3;
      local_24[4] = 1;
      break;
    case 1:
    case 4:
      local_24[0] = 0;
      local_24[1] = 5;
      local_24[2] = 7;
      local_24[3] = 6;
      local_24[4] = 1;
      break;
    case 2:
    case 5:
      local_24[0] = 8;
      local_24[1] = 10;
      local_24[2] = 0xc;
      local_24[3] = 0xb;
      local_24[4] = 9;
      break;
    case 7:
      local_24[0] = 5;
      local_24[1] = 7;
      local_24[2] = 9;
      local_24[3] = 8;
      local_24[4] = 6;
      break;
    case 8:
      local_24[0] = 10;
      local_24[1] = 0xc;
      local_24[2] = 0xe;
      local_24[3] = 0xd;
      local_24[4] = 0xb;
    }
  }
  piVar7 = local_24;
  local_24[5] = 5;
  do {
    switch(*(undefined4 *)((int)this + 0x1be8)) {
    default:
      iVar3 = 0;
      break;
    case 3:
    case 4:
    case 5:
      iVar3 = 1;
      break;
    case 6:
    case 7:
    case 8:
      iVar3 = 2;
    }
    if (*(int *)((int)this + (*piVar7 + iVar3 * 0xf) * 4 + 0x1b13) != 0) {
      switch(*(undefined4 *)((int)this + 0x1be8)) {
      default:
        iVar3 = 0;
        break;
      case 3:
      case 4:
      case 5:
        iVar3 = 1;
        break;
      case 6:
      case 7:
      case 8:
        iVar3 = 2;
      }
      thunk_FUN_005926a0(*(int **)((int)this + (*piVar7 + iVar3 * 0xf) * 4 + 0x1b13));
    }
    piVar7 = piVar7 + 1;
    local_24[5] = local_24[5] + -1;
  } while (local_24[5] != 0);
  if (*(int *)((int)this + 0x1be8) == 1) {
    *(undefined1 *)((int)this + 0x1be7) = 4;
  }
  else {
    *(undefined1 *)((int)this + 0x1be7) = 3;
  }
LAB_00592b7c:
  *(char *)((int)this + 0x1be7) = *(char *)((int)this + 0x1be7) + -1;
LAB_00592b82:
  local_24[5] = 0x2e;
  local_24[6] = 0x24c;
  do {
    iVar3 = *(int *)(local_24[6] + DAT_0081176c);
    if (iVar3 != 0) {
      piVar7 = (int *)(local_24[5] + 0x25c + DAT_0081176c);
      if (*(char *)(local_24[5] + 0x270 + DAT_0081176c) == '\0') {
        uVar8 = piVar7[2];
      }
      else {
        uVar8 = piVar7[3];
      }
      if (uVar8 <= (uint)(*(int *)((int)local_8 + 0x61) - piVar7[4])) {
        pBVar4 = (BITMAPINFO *)FUN_0070b3a0(iVar3,(int)*(short *)(iVar3 + 0x29));
        FUN_006b5f80(DAT_008075a8,*piVar7,piVar7[1],(int)*(short *)(iVar3 + 0x2c),
                     (int)*(short *)(iVar3 + 0x2e));
        thunk_FUN_005403c0(*piVar7,piVar7[1],'\x01',pBVar4);
        if ((char)piVar7[5] != '\0') {
          *(undefined1 *)(piVar7 + 5) = 0;
        }
        piVar7[4] = *(int *)((int)local_8 + 0x61);
        switch(*(undefined2 *)((int)piVar7 + 0x15)) {
        case 0:
          *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x29) + 1;
          if (*(short *)(iVar3 + 0x23) <= *(short *)(iVar3 + 0x29)) {
            *(undefined2 *)(iVar3 + 0x29) = 0;
            *(undefined1 *)(piVar7 + 5) = 1;
          }
          break;
        case 1:
          *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x29) + -1;
          if (*(short *)(iVar3 + 0x29) < 0) {
            *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x23) + -1;
            *(undefined1 *)(piVar7 + 5) = 1;
          }
          break;
        case 2:
          *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x29) + 1;
          if (*(short *)(iVar3 + 0x23) <= *(short *)(iVar3 + 0x29)) {
            *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x23) + -1;
            *(undefined1 *)(piVar7 + 5) = 1;
            *(undefined2 *)((int)piVar7 + 0x15) = 3;
          }
          break;
        case 3:
          *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x29) + -1;
          if (*(short *)(iVar3 + 0x29) < 0) {
            *(undefined2 *)(iVar3 + 0x29) = 0;
            *(undefined1 *)(piVar7 + 5) = 1;
            *(undefined2 *)((int)piVar7 + 0x15) = 2;
          }
        }
      }
    }
    local_24[6] = local_24[6] + 4;
    local_24[5] = local_24[5] + 0x17;
  } while (local_24[6] < 0x25c);
  DAT_00858df8 = (undefined4 *)local_68;
  return;
}

