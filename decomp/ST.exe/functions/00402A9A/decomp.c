
void __thiscall SettMapTy::PaintSC(SettMapTy *this)

{
  code *pcVar1;
  SettMapTy *pSVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 unaff_ESI;
  uint uVar7;
  void *unaff_EDI;
  bool bVar8;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  SettMapTy *pSStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pSStack_8 = this;
  iVar4 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    if ((DAT_008087b6 != 0) && (*(int *)(DAT_0081176c + 0x2f4) != 0)) {
      FUN_006e83f0(*(int *)(DAT_0081176c + 0x2f0),0x14,0x14,0x8b,(uint)DAT_008087c2);
      FUN_006b5440(*(int *)(DAT_0081176c + 0x2f0),0,0x14,0x14,*(int *)(DAT_0081176c + 0x2f4),0,0);
      pSVar2 = pSStack_8;
      if ((DAT_0080734b != '\0') &&
         ((iVar4 = *(int *)(pSStack_8 + 0x1f84), iVar4 != 0 && (0 < *(int *)(iVar4 + 0xc))))) {
        bVar8 = *(int *)(iVar4 + 0xc) != 0;
        uVar7 = 0;
        do {
          if (bVar8) {
            pcVar6 = (char *)(*(int *)(iVar4 + 8) * uVar7 + *(int *)(iVar4 + 0x1c));
          }
          else {
            pcVar6 = (char *)0x0;
          }
          if ((((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) && (pcVar6[4] != '\0')) &&
             (pcVar6[2] != -1)) {
            switch(pcVar6[2]) {
            case '\0':
              uVar3 = 0xfc;
              break;
            case '\x01':
              uVar3 = 0xfa;
              break;
            case '\x02':
              uVar3 = 0xfb;
              break;
            case '\x03':
              uVar3 = 0xf9;
              break;
            case '\x04':
              uVar3 = 0xfd;
              break;
            case '\x05':
              uVar3 = 0xfe;
              break;
            case '\x06':
              uVar3 = 0xf3;
              break;
            case '\a':
              uVar3 = 7;
              break;
            default:
              uVar3 = 0xff;
            }
            FUN_006e8460(*(undefined4 *)(pcVar6 + 0x54),*(undefined4 *)(pcVar6 + 0x58),4,uVar3);
          }
          iVar4 = *(int *)(pSVar2 + 0x1f84);
          uVar7 = uVar7 + 1;
          bVar8 = uVar7 < *(uint *)(iVar4 + 0xc);
        } while ((int)uVar7 < (int)*(uint *)(iVar4 + 0xc));
      }
      if (-1 < (int)*(uint *)(DAT_0081176c + 0x2ec)) {
        FUN_006b35d0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x2ec));
      }
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x4ac,0,iVar4,&DAT_007a4ccc);
  if (iVar5 == 0) {
    FUN_006a5e40(iVar4,0,0x7cd0e8,0x4ac);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

