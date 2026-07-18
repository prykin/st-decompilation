
void __thiscall FUN_00505230(void *this,int param_1)

{
  code *pcVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte bVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar8;
  char *pcVar9;
  bool bVar10;
  undefined4 *local_70;
  undefined4 local_6c [16];
  void *local_2c;
  int local_28;
  char *local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  byte local_6;
  char local_5;
  
  if (DAT_0080874e == '\x01') {
    bVar10 = *(char *)((int)this + 0x9d4) != '\x01';
  }
  else {
    bVar10 = *(char *)((int)this + 0x9d4) == '\x01';
  }
  local_5 = bVar10 + '\x05';
  local_70 = DAT_00858df8;
  DAT_00858df8 = &local_70;
  local_2c = this;
  iVar4 = __setjmp3(local_6c,0,unaff_EDI,unaff_ESI);
  pvVar2 = local_2c;
  if (iVar4 != 0) {
    DAT_00858df8 = local_70;
    iVar6 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x153,0,iVar4,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar4,0,0x7c2700,0x153);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  thunk_FUN_00540760(*(undefined4 **)((int)local_2c + 0x194),param_1,0x36,'\x01',
                     *(byte **)((int)local_2c + 0x9f9));
  pcVar9 = (char *)((int)pvVar2 + 0xc11);
  local_6 = 0;
  local_28 = -1;
  do {
    pbVar5 = (byte *)0x0;
    if (local_5 != '\x05') {
      switch(local_28) {
      case 0:
      case 1:
      case 4:
      case 5:
        goto switchD_005052d8_caseD_2;
      case 2:
        local_14 = CONCAT31(local_14._1_3_,1);
        break;
      case 3:
        goto switchD_005052d8_caseD_5;
      case 6:
        goto switchD_005052d8_caseD_4;
      case 7:
        local_14 = CONCAT31(local_14._1_3_,5);
        break;
      case 8:
        local_14 = CONCAT31(local_14._1_3_,2);
        break;
      default:
        goto switchD_005052d8_default;
      }
      goto LAB_0050530c;
    }
    switch(local_28) {
    case 2:
    case 3:
    case 6:
    case 7:
    case 8:
      goto switchD_005052d8_caseD_2;
    case 4:
switchD_005052d8_caseD_4:
      local_14 = CONCAT31(local_14._1_3_,3);
      break;
    case 5:
switchD_005052d8_caseD_5:
      local_14 = CONCAT31(local_14._1_3_,4);
      break;
    default:
switchD_005052d8_default:
      local_14 = CONCAT31(local_14._1_3_,local_6);
    }
LAB_0050530c:
    local_24 = pcVar9;
    if (DAT_007fa174 != 0) {
      switch(local_28) {
      case 0:
        local_10 = 0xf;
        local_c = 0xe;
        if (*pcVar9 == '\0') {
LAB_005053b0:
          iVar6 = *(int *)((int)pvVar2 + 0x292);
          iVar4 = 1;
        }
        else {
          if (DAT_0080874e == '\x01') {
            iVar4 = 6;
          }
          else {
            if (DAT_0080874e != '\x02') goto LAB_005053b0;
            iVar4 = 0x83;
          }
          iVar4 = thunk_FUN_004e60d0((uint)DAT_0080874d,iVar4);
          iVar4 = iVar4 + 5;
          iVar6 = *(int *)((int)pvVar2 + 0x28e);
        }
        break;
      case 1:
        local_10 = 0xf;
        local_c = 0x1a;
        if (*pcVar9 == '\0') {
          iVar6 = *(int *)((int)pvVar2 + 0x292);
          iVar4 = 2;
        }
        else if (DAT_0080874e == '\x01') {
          iVar4 = thunk_FUN_004e60d0((uint)DAT_0080874d,6);
          iVar4 = iVar4 + 10;
          iVar6 = *(int *)((int)pvVar2 + 0x28e);
        }
        else if (DAT_0080874e == '\x02') {
          iVar4 = thunk_FUN_004e60d0((uint)DAT_0080874d,0x83);
          iVar6 = *(int *)((int)pvVar2 + 0x28e);
          iVar4 = iVar4 + 10;
        }
        else {
          iVar6 = *(int *)((int)pvVar2 + 0x292);
          iVar4 = 2;
        }
        break;
      case 2:
        local_10 = 0x16;
        local_c = 0xf;
        if (*pcVar9 == '\0') {
          iVar4 = 9;
LAB_00505581:
          iVar6 = *(int *)((int)pvVar2 + 0x292);
        }
        else {
          iVar6 = *(int *)((int)pvVar2 + 0x28e);
          iVar4 = 0x1d;
        }
        break;
      case 3:
        local_10 = 0x1d;
        local_c = 0x31;
        if (*pcVar9 == '\0') {
          iVar6 = *(int *)((int)pvVar2 + 0x292);
          iVar4 = 4;
        }
        else {
          iVar6 = *(int *)((int)pvVar2 + 0x28e);
          iVar4 = 0x10;
        }
        break;
      case 4:
        local_10 = 0x1b;
        local_c = 0x25;
        if (*pcVar9 == '\0') {
          iVar6 = *(int *)((int)pvVar2 + 0x292);
          iVar4 = 6;
        }
        else {
          iVar6 = *(int *)((int)pvVar2 + 0x28e);
          iVar4 = 0x17;
        }
        break;
      case 5:
        local_10 = 0x28;
        local_c = 0x32;
        if (*pcVar9 == '\0') {
          iVar4 = 5;
          goto LAB_00505581;
        }
        iVar6 = *(int *)((int)pvVar2 + 0x28e);
        iVar4 = 0x19;
        break;
      case 6:
        local_10 = 0x1f;
        local_c = 0x22;
        if (*pcVar9 == '\0') {
          iVar6 = *(int *)((int)pvVar2 + 0x292);
          iVar4 = 7;
        }
        else {
          iVar6 = *(int *)((int)pvVar2 + 0x28e);
          iVar4 = 0x18;
        }
        break;
      case 7:
        local_10 = 0x1e;
        local_c = 0x3b;
        if (*pcVar9 == '\0') {
          iVar6 = *(int *)((int)pvVar2 + 0x292);
          iVar4 = 8;
        }
        else {
          iVar6 = *(int *)((int)pvVar2 + 0x28e);
          iVar4 = 0x16;
        }
        break;
      case 8:
        local_10 = 0x28;
        local_c = 0x19;
        if (*pcVar9 == '\0') {
          iVar4 = 3;
          goto LAB_00505581;
        }
        iVar6 = *(int *)((int)pvVar2 + 0x28e);
        iVar4 = 0xf;
        break;
      case -1:
        local_10 = 0xf;
        local_c = 4;
        if (DAT_0080874e == '\x01') {
          iVar4 = thunk_FUN_004e60d0((uint)DAT_0080874d,6);
          iVar6 = *(int *)((int)pvVar2 + 0x28e);
        }
        else if (DAT_0080874e == '\x02') {
          iVar4 = thunk_FUN_004e60d0((uint)DAT_0080874d,0x83);
          iVar6 = *(int *)((int)pvVar2 + 0x28e);
        }
        else {
          iVar6 = *(int *)((int)pvVar2 + 0x292);
          iVar4 = 0;
        }
        break;
      default:
        goto switchD_00505324_default;
      }
      pbVar5 = (byte *)FUN_0070b3a0(iVar6,iVar4);
    }
switchD_00505324_default:
    if (pbVar5 != (byte *)0x0) {
      thunk_FUN_00540760(*(undefined4 **)((int)pvVar2 + 0x194),local_10 + 0xf + param_1,
                         local_c + 0x36,'\x06',pbVar5);
    }
    uVar3 = local_14;
    if (*pcVar9 == '\0') {
      local_1c = 0;
    }
    else {
      local_1c = ((uint)*(ushort *)(pcVar9 + 2) * 0xf) / (uint)*(ushort *)(pcVar9 + 4);
    }
    local_18 = local_18 & 0xffffff00;
    if (local_1c != 0) {
      uVar8 = 0;
      local_20 = (local_14 & 0xff) * 0xb + 0x3b;
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvVar2 + 0x2b6),3);
        thunk_FUN_00540760(*(undefined4 **)((int)pvVar2 + 0x194),param_1 + 0x4d + uVar8 * 4,local_20
                           ,'\x01',pbVar5);
        bVar7 = (byte)local_18 + 1;
        local_18 = CONCAT31(local_18._1_3_,bVar7);
        uVar8 = (uint)bVar7;
      } while (uVar8 < local_1c);
    }
    if ((byte)local_18 < 0xf) {
      local_20 = (uVar3 & 0xff) * 0xb + 0x3b;
      iVar4 = 0xf - (local_18 & 0xff);
      local_1c = param_1 + 0x4d + (local_18 & 0xff) * 4;
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvVar2 + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)((int)pvVar2 + 0x194),local_1c,local_20,'\x01',pbVar5);
        local_1c = local_1c + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    wsprintfA((LPSTR)((int)pvVar2 + 0x1e1),&DAT_007c1890,(uint)*(ushort *)(local_24 + 2));
    FUN_00710a90(*(int *)((int)pvVar2 + 0x194),0,param_1 + 0x8f,(uVar3 & 0xff) * 0xb + 0x39,0x23,0xc
                );
    FUN_00711b70((uint *)((int)pvVar2 + 0x1e1),-3,-1,0,-1,-1);
    pcVar9 = local_24;
switchD_005052d8_caseD_2:
    local_6 = local_6 + 1;
    local_28 = local_28 + 1;
    pcVar9 = pcVar9 + 6;
    if (9 < local_6) {
      DAT_00858df8 = local_70;
      return;
    }
  } while( true );
}

