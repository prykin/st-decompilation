
void FUN_00502fc0(void)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 unaff_ESI;
  int *piVar8;
  void *unaff_EDI;
  int *piVar9;
  undefined4 local_ac;
  undefined4 local_a8 [16];
  int local_68;
  char local_64;
  char local_63;
  byte local_4b;
  char local_34;
  void *local_c;
  uint local_8;
  
  local_8 = local_8 & 0xffffff00;
  local_ac = DAT_00858df8;
  DAT_00858df8 = &local_ac;
  iVar5 = __setjmp3(local_a8,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)local_ac;
    iVar7 = FUN_006ad4d0(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x234,0,iVar5,&DAT_007a4ccc);
    if (iVar7 == 0) {
      FUN_006a5e40(iVar5,0,0x7c2524,0x234);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar1 = (int *)((int)local_c + 0xb99);
  piVar8 = piVar1;
  piVar9 = &local_68;
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar9 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar9 = piVar9 + 1;
  }
  piVar8 = piVar1;
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  thunk_FUN_0043beb0(DAT_007fa174,2,piVar1);
  if (local_63 == *(char *)((int)local_c + 0xb9e)) {
    switch(*(char *)((int)local_c + 0xb9e)) {
    case '\x01':
      if ((local_68 == *(int *)((int)local_c + 0xb99)) &&
         (local_64 == *(char *)((int)local_c + 0xb9d))) {
        thunk_FUN_00501d00(local_c,(int *)((int)local_c + 0xb99),&local_68);
        switch(*(int *)((int)local_c + 0xb99)) {
        case 0x1a:
          goto switchD_005030a2_caseD_1a;
        case 0x1b:
        case 0x1d:
        case 0x23:
        case 0x24:
          cVar2 = *(char *)((int)local_c + 0xbcd);
          if (cVar2 == local_34) {
            DAT_00858df8 = (undefined4 *)local_ac;
            return;
          }
          if ((cVar2 != -1) && (local_8 = (uint)local_8._1_3_ << 8, cVar2 != '\0')) {
            do {
              pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)local_c + 0x2b6),1);
              thunk_FUN_00540760(*(undefined4 **)((int)local_c + 0x18c),(local_8 & 0xff) * 4 + 0x3f,
                                 0x87,'\x01',pbVar6);
              bVar4 = (byte)local_8 + 1;
              local_8 = CONCAT31(local_8._1_3_,bVar4);
            } while (bVar4 < *(byte *)((int)local_c + 0xbcd));
          }
          if ((byte)local_8 < 0x14) {
            iVar7 = 0x14 - (local_8 & 0xff);
            iVar5 = (local_8 & 0xff) * 4 + 0x3f;
            do {
              pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)local_c + 0x2b6),0);
              thunk_FUN_00540760(*(undefined4 **)((int)local_c + 0x18c),iVar5,0x87,'\x01',pbVar6);
              iVar5 = iVar5 + 4;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          if ((int)*(uint *)((int)local_c + 0x154) < 0) {
            DAT_00858df8 = (undefined4 *)local_ac;
            return;
          }
          FUN_006b3640(DAT_008075a8,*(uint *)((int)local_c + 0x154),0xffffffff,
                       *(uint *)((int)local_c + 0x48),*(uint *)((int)local_c + 0xa0));
          DAT_00858df8 = (undefined4 *)local_ac;
          return;
        default:
          DAT_00858df8 = (undefined4 *)local_ac;
          return;
        }
      }
      break;
    case '\x02':
    case '\x03':
      if ((local_68 == *(int *)((int)local_c + 0xb99)) &&
         (local_64 == *(char *)((int)local_c + 0xb9d))) {
        thunk_FUN_00501d00(local_c,(int *)((int)local_c + 0xb99),&local_68);
        DAT_00858df8 = (undefined4 *)local_ac;
        return;
      }
      break;
    case '\x04':
      if (local_68 == *(int *)((int)local_c + 0xb99)) {
        DAT_00858df8 = (undefined4 *)local_ac;
        return;
      }
      break;
    default:
      goto switchD_00503051_default;
    }
  }
  thunk_FUN_00502990();
  thunk_FUN_00503450();
  thunk_FUN_00501a10((int)local_c);
switchD_00503051_default:
  DAT_00858df8 = (undefined4 *)local_ac;
  return;
switchD_005030a2_caseD_1a:
  if (*(byte *)((int)local_c + 0xbb6) == local_4b) {
    DAT_00858df8 = (undefined4 *)local_ac;
    return;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if ((*(byte *)((int)local_c + 0xbb6) & 0xfe) != 0) {
    do {
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)local_c + 0x2b6),3);
      thunk_FUN_00540760(*(undefined4 **)((int)local_c + 0x18c),(local_8 & 0xff) * 4 + 0x3f,0x87,
                         '\x01',pbVar6);
      bVar4 = (byte)local_8 + 1;
      local_8 = CONCAT31(local_8._1_3_,bVar4);
    } while (bVar4 < *(byte *)((int)local_c + 0xbb6) >> 1);
  }
  if ((byte)local_8 < 0x14) {
    iVar7 = 0x14 - (local_8 & 0xff);
    iVar5 = (local_8 & 0xff) * 4 + 0x3f;
    do {
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)local_c + 0x2b6),0);
      thunk_FUN_00540760(*(undefined4 **)((int)local_c + 0x18c),iVar5,0x87,'\x01',pbVar6);
      iVar5 = iVar5 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((int)*(uint *)((int)local_c + 0x154) < 0) {
    DAT_00858df8 = (undefined4 *)local_ac;
    return;
  }
  FUN_006b3640(DAT_008075a8,*(uint *)((int)local_c + 0x154),0xffffffff,
               *(uint *)((int)local_c + 0x48),*(uint *)((int)local_c + 0xa0));
  DAT_00858df8 = (undefined4 *)local_ac;
  return;
}

