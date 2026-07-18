
void FUN_00505960(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar6;
  int iVar7;
  undefined4 *local_70;
  undefined4 local_6c [16];
  uint local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  char *local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_70 = DAT_00858df8;
  DAT_00858df8 = &local_70;
  iVar2 = __setjmp3(local_6c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = local_70;
    iVar7 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x184,0,iVar2,&DAT_007a4ccc);
    if (iVar7 == 0) {
      FUN_006a5e40(iVar2,0,0x7c2700,0x184);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006b4170(*(int *)(local_28 + 0x194),0,0x49,0x50,0x6f,0x37,0x3d);
  FUN_006b4170(*(int *)(local_28 + 0x194),0,0x4a,0x51,0x29,0x34,0x3f);
  FUN_006b4170(*(int *)(local_28 + 0x194),0,0x4b,0x52,0x27,0x32,0x3a);
  if (*(char *)(local_28 + 0x9d4) == '\x01') {
    local_20 = CONCAT31(local_20._1_3_,4);
    bVar5 = 3;
  }
  else {
    local_20 = (uint)local_20._1_3_ << 8;
    bVar5 = 4;
  }
  local_10 = CONCAT31(local_10._1_3_,bVar5);
  if (bVar5 != 0) {
    local_14 = 0;
    local_2c = local_20 & 0xff;
    local_1c = 0x54;
    local_18 = (char *)(local_28 + 0xc11 + local_2c * 6);
    local_24 = (uint)bVar5;
    do {
      if (*local_18 == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = ((uint)*(ushort *)(local_18 + 2) * 10) / (uint)*(ushort *)(local_18 + 4);
      }
      pbVar4 = (byte *)FUN_0070b3a0(*(int *)(local_28 + 0x2b2),5);
      thunk_FUN_00540760(*(undefined4 **)(local_28 + 0x194),0x74,local_1c,'\x01',pbVar4);
      local_10 = local_10 & 0xffffff00;
      if (uVar3 != 0) {
        uVar6 = 0;
        do {
          pbVar4 = (byte *)FUN_0070b3a0(*(int *)(local_28 + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)(local_28 + 0x194),uVar6 * 4 + 0x76,local_1c + 2,'\x01'
                             ,pbVar4);
          bVar5 = (byte)local_10 + 1;
          local_10 = CONCAT31(local_10._1_3_,bVar5);
          uVar6 = (uint)bVar5;
        } while (uVar6 < uVar3);
      }
      if ((byte)local_10 < 10) {
        iVar7 = 10 - (local_10 & 0xff);
        iVar2 = (local_10 & 0xff) * 4 + 0x76;
        do {
          pbVar4 = (byte *)FUN_0070b3a0(*(int *)(local_28 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(local_28 + 0x194),iVar2,local_1c + 2,'\x01',pbVar4);
          iVar2 = iVar2 + 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      wsprintfA((LPSTR)(local_28 + 0x1e1),&DAT_007c1aa4,(uint)*(ushort *)(local_18 + 2));
      iVar2 = local_1c;
      FUN_00710a90(*(int *)(local_28 + 0x194),0,0xa2,local_1c,0x15,0xc);
      FUN_007119c0((uint *)(local_28 + 0x1e1),-3,-1,5);
      if ((char)local_20 == '\0') {
        if (iVar2 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00505bca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&PTR_DAT_00505cec)[local_14])();
          return;
        }
      }
      else if (iVar2 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00505b82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&PTR_DAT_00505cdc)[local_14])();
        return;
      }
      if (*local_18 == '\0') {
        iVar7 = *(int *)(local_28 + 0x292);
      }
      else {
        iVar7 = *(int *)(local_28 + 0x28e);
      }
      pbVar4 = (byte *)FUN_0070b3a0(iVar7,(-(uint)(*local_18 != '\0') & 0x14) + 0xb + local_14 +
                                          local_2c);
      if (pbVar4 != (byte *)0x0) {
        thunk_FUN_00540760(*(undefined4 **)(local_28 + 0x194),local_c,local_8,'\x06',pbVar4);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 6;
      local_1c = iVar2 + 0xb;
      local_24 = local_24 - 1;
    } while (local_24 != 0);
  }
  DAT_00858df8 = local_70;
  return;
}

