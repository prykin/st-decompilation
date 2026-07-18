
void FUN_00500bd0(void)

{
  byte *pbVar1;
  code *pcVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  byte bVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar10;
  undefined4 local_60;
  undefined4 local_5c [16];
  byte *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_60 = DAT_00858df8;
  DAT_00858df8 = &local_60;
  iVar5 = __setjmp3(local_5c,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)local_60;
    iVar8 = FUN_006ad4d0(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x226,0,iVar5,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7c23cc,0x226);
    return;
  }
  local_c = local_c & 0xffffff00;
  do {
    uVar6 = local_c & 0xff;
    pbVar1 = (byte *)(uVar6 + 0x2a8 + local_10);
    if ((*(char *)(uVar6 + 0x2a8 + local_10) != -1) &&
       (199 < (uint)(*(int *)(local_10 + 0x38) - *(int *)(local_10 + 0x2aa + uVar6 * 4)))) {
      *(int *)(local_10 + 0x2aa + uVar6 * 4) = *(int *)(local_10 + 0x38);
      local_1c = (byte *)(uVar6 + 0x2a6 + local_10);
      bVar9 = *(char *)(uVar6 + 0x2a6 + local_10) + 1;
      *local_1c = bVar9;
      switch(bVar9) {
      case 1:
      case 3:
      case 5:
        if (DAT_0080874e == '\x03') {
          if ((char)local_c == '\0') {
            local_8 = CONCAT31(local_8._1_3_,*(undefined1 *)(local_10 + 0x2a8));
          }
          else {
            local_8 = CONCAT31(local_8._1_3_,*pbVar1 + 0x19);
          }
        }
        else {
          local_8 = CONCAT31(local_8._1_3_,1);
        }
        break;
      case 2:
      case 4:
        if (DAT_0080874e == '\x03') {
          if ((char)local_c == '\0') {
LAB_00500d33:
            local_8 = CONCAT31(local_8._1_3_,*(char *)(local_10 + 0x2a8) + '\x05');
          }
          else {
            local_8 = CONCAT31(local_8._1_3_,*pbVar1 + 0x14);
          }
        }
        else {
LAB_00500d40:
          local_8 = CONCAT31(local_8._1_3_,2);
        }
        break;
      default:
        if ((char)local_c == '\0') {
          cVar4 = *(char *)(*(byte *)(local_10 + 0x2a8) + 0xb8d + local_10);
        }
        else {
          cVar4 = *(char *)(*pbVar1 + 0xc7b + local_10);
        }
        if (cVar4 == '\0') {
          if (DAT_0080874e != '\x03') goto LAB_00500d40;
          if ((char)local_c == '\0') goto LAB_00500d33;
          local_8 = CONCAT31(local_8._1_3_,*pbVar1 + 0x14);
        }
        else if (DAT_0080874e == '\x03') {
          if ((char)local_c == '\0') {
            local_8 = CONCAT31(local_8._1_3_,*(undefined1 *)(local_10 + 0x2a8));
          }
          else {
            local_8 = CONCAT31(local_8._1_3_,*pbVar1 + 0x19);
          }
        }
        else {
          local_8 = (uint)local_8._1_3_ << 8;
        }
      }
      if (bVar9 < 7) {
        if (DAT_0080874e == '\x03') {
          if ((char)local_c == '\0') {
            uVar6 = (uint)*(byte *)(local_10 + 0x2a8);
            pbVar7 = (byte *)FUN_0070b3a0(*(int *)(local_10 + 0x2a2),local_8 & 0xff);
            puVar10 = *(undefined4 **)(local_10 + 0x18c);
            iVar5 = (5 - uVar6) * 0xb;
          }
          else {
            uVar6 = (uint)*pbVar1;
            pbVar7 = (byte *)FUN_0070b3a0(*(int *)(local_10 + 0x2a2),local_8 & 0xff);
            puVar10 = *(undefined4 **)(local_10 + 0x194);
            iVar5 = uVar6 * 0xb + 0x87;
          }
          thunk_FUN_00540760(puVar10,iVar5,uVar6 * 0xb + 0xb,'\x06',pbVar7);
          bVar9 = (-((char)local_c != '\0') & 2U) + 3;
          local_14 = CONCAT31(local_14._1_3_,bVar9);
          if (bVar9 < 0xb) {
            uVar3 = (uint)bVar9;
            uVar6 = *(uint *)(local_10 + 0x148 + uVar3 * 4);
joined_r0x00500e7c:
            if (-1 < (int)uVar6) {
              FUN_006b3640(DAT_008075a8,uVar6,0xffffffff,*(uint *)(local_10 + 0x3c + uVar3 * 4),
                           *(uint *)(local_10 + 0x94 + uVar3 * 4));
            }
          }
        }
        else {
          if ((char)local_c == '\0') {
            puVar10 = *(undefined4 **)(local_10 + 0x188);
          }
          else {
            puVar10 = *(undefined4 **)(local_10 + 0x198);
          }
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)(local_10 + 0x2a2),local_8 & 0xff);
          thunk_FUN_00540760(puVar10,7,(uint)*pbVar1 * 0x1d + 6,'\x01',pbVar7);
          bVar9 = (-((char)local_c != '\0') & 4U) + 2;
          local_18 = CONCAT31(local_18._1_3_,bVar9);
          if (bVar9 < 0xb) {
            uVar3 = (uint)bVar9;
            uVar6 = *(uint *)(local_10 + 0x148 + uVar3 * 4);
            goto joined_r0x00500e7c;
          }
        }
      }
      if (5 < *local_1c) {
        *pbVar1 = 0xff;
      }
    }
    bVar9 = (char)local_c + 1;
    local_c = CONCAT31(local_c._1_3_,bVar9);
    if (1 < bVar9) {
      DAT_00858df8 = (undefined4 *)local_60;
      return;
    }
  } while( true );
}

