
void FUN_005c87c0(void)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  void *unaff_EDI;
  bool bVar7;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if ((DAT_008087b6 != 0) && (*(int *)(DAT_0081176c + 0x2f4) != 0)) {
      FUN_006e83f0(*(int *)(DAT_0081176c + 0x2f0),0x14,0x14,0x8b,(uint)DAT_008087c2);
      FUN_006b5440(*(int *)(DAT_0081176c + 0x2f0),0,0x14,0x14,*(int *)(DAT_0081176c + 0x2f4),0,0);
      if ((DAT_0080734b != '\0') &&
         ((iVar3 = *(int *)(local_8 + 0x1f84), iVar3 != 0 && (0 < *(int *)(iVar3 + 0xc))))) {
        bVar7 = *(int *)(iVar3 + 0xc) != 0;
        uVar6 = 0;
        do {
          if (bVar7) {
            pcVar5 = (char *)(*(int *)(iVar3 + 8) * uVar6 + *(int *)(iVar3 + 0x1c));
          }
          else {
            pcVar5 = (char *)0x0;
          }
          if ((((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) && (pcVar5[4] != '\0')) &&
             (pcVar5[2] != -1)) {
            switch(pcVar5[2]) {
            case '\0':
              uVar2 = 0xfc;
              break;
            case '\x01':
              uVar2 = 0xfa;
              break;
            case '\x02':
              uVar2 = 0xfb;
              break;
            case '\x03':
              uVar2 = 0xf9;
              break;
            case '\x04':
              uVar2 = 0xfd;
              break;
            case '\x05':
              uVar2 = 0xfe;
              break;
            case '\x06':
              uVar2 = 0xf3;
              break;
            case '\a':
              uVar2 = 7;
              break;
            default:
              uVar2 = 0xff;
            }
            FUN_006e8460(*(undefined4 *)(pcVar5 + 0x54),*(undefined4 *)(pcVar5 + 0x58),4,uVar2);
          }
          iVar3 = *(int *)(local_8 + 0x1f84);
          uVar6 = uVar6 + 1;
          bVar7 = uVar6 < *(uint *)(iVar3 + 0xc);
        } while ((int)uVar6 < (int)*(uint *)(iVar3 + 0xc));
      }
      if (-1 < (int)*(uint *)(DAT_0081176c + 0x2ec)) {
        FUN_006b35d0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x2ec));
      }
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x4ac,0,iVar3,&DAT_007a4ccc);
  if (iVar4 == 0) {
    FUN_006a5e40(iVar3,0,0x7cd0e8,0x4ac);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

