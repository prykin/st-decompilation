
void __thiscall
VisibleClassTy::SetZoneMin1
          (VisibleClassTy *this,int param_1,int param_2,undefined1 param_3,uint param_4,int param_5,
          undefined4 param_6,uint param_7)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_ESI;
  int iVar9;
  void *unaff_EDI;
  undefined4 uStack_60;
  undefined4 auStack_5c [17];
  int iStack_18;
  VisibleClassTy *pVStack_14;
  int iStack_10;
  int iStack_c;
  undefined *puStack_8;
  
  if ((((*(int *)(this + 0x114) != 0) && (-1 < param_5)) && (param_4 < 8)) &&
     ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[param_4 * 0x51] < 8)))) {
    pVStack_14 = this;
    if (*(int *)(this + param_4 * 4 + 0xb4) == 0) {
      uStack_60 = DAT_00858df8;
      DAT_00858df8 = &uStack_60;
      iVar4 = __setjmp3(auStack_5c,0,unaff_EDI,unaff_ESI);
      this = pVStack_14;
      if (iVar4 != 0) {
        DAT_00858df8 = (undefined4 *)uStack_60;
        iVar4 = FUN_006ad4d0(s_E____titans_grig_visible_cpp_007c92cc,0x35f,0,iVar4,&DAT_007a4ccc);
        if (iVar4 == 0) {
          return;
        }
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar5 = FUN_006aac10(*(int *)(pVStack_14 + 0x24) * *(int *)(pVStack_14 + 0x20));
      *(undefined4 **)(this + param_4 * 4 + 0xb4) = puVar5;
      DAT_00858df8 = (undefined4 *)uStack_60;
    }
    if ((param_7 & 0x1000) != 0) {
      thunk_FUN_0055bb00(this,5,(short)param_1,(short)param_2,param_3,param_4,(char)param_5,param_6)
      ;
    }
    if ((param_7 & 0x20) != 0) {
      if (param_5 < 0) {
        param_5 = 0;
      }
      iStack_c = param_5 * 2 + 1;
      iStack_18 = param_1 - param_5;
      iVar4 = param_2 - param_5;
      puVar6 = thunk_FUN_005532f0(param_5);
      if (0 < iStack_c) {
        iStack_10 = iStack_c;
        puStack_8 = puVar6;
        do {
          iVar7 = 0;
          iVar9 = iStack_18;
          do {
            if ((puVar6 == (undefined *)0x0) || (puStack_8[iVar7] != '\0')) {
              if ((iVar9 < 0) ||
                 (((*(int *)(this + 0x20) <= iVar9 || (iVar4 < 0)) ||
                  (*(int *)(this + 0x24) <= iVar4)))) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                iVar8 = *(int *)(this + 0x20) * iVar4 + *(int *)(this + param_4 * 4 + 0xb4);
                cVar1 = *(char *)(iVar8 + iVar9);
                if (cVar1 != -1) {
                  *(char *)(iVar8 + iVar9) = cVar1 + '\x01';
                }
              }
            }
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
          } while (iVar7 < iStack_c);
          puStack_8 = puStack_8 + iStack_c;
          iVar4 = iVar4 + 1;
          iStack_10 = iStack_10 + -1;
        } while (iStack_10 != 0);
      }
    }
  }
  return;
}

