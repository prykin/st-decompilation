
void __thiscall
FUN_0055a620(void *this,int param_1,int param_2,undefined1 param_3,uint param_4,int param_5,
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
  undefined4 local_60;
  undefined4 local_5c [17];
  int local_18;
  void *local_14;
  int local_10;
  int local_c;
  undefined *local_8;
  
  if ((((*(int *)((int)this + 0x114) != 0) && (-1 < param_5)) && (param_4 < 8)) &&
     ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[param_4 * 0x51] < 8)))) {
    local_14 = this;
    if (*(int *)((int)this + param_4 * 4 + 0xd4) == 0) {
      local_60 = DAT_00858df8;
      DAT_00858df8 = &local_60;
      iVar4 = __setjmp3(local_5c,0,unaff_EDI,unaff_ESI);
      this = local_14;
      if (iVar4 != 0) {
        DAT_00858df8 = (undefined4 *)local_60;
        iVar4 = FUN_006ad4d0(s_E____titans_grig_visible_cpp_007c92cc,0x3a3,0,iVar4,&DAT_007a4ccc);
        if (iVar4 == 0) {
          return;
        }
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar5 = FUN_006aac10(*(int *)((int)local_14 + 0x24) * *(int *)((int)local_14 + 0x20));
      *(undefined4 **)((int)this + param_4 * 4 + 0xd4) = puVar5;
      DAT_00858df8 = (undefined4 *)local_60;
    }
    if ((param_7 & 0x1000) != 0) {
      thunk_FUN_0055bb00(this,6,(short)param_1,(short)param_2,param_3,param_4,(char)param_5,param_6)
      ;
    }
    if ((param_7 & 0x40) != 0) {
      if (param_5 < 0) {
        param_5 = 0;
      }
      local_c = param_5 * 2 + 1;
      local_18 = param_1 - param_5;
      iVar4 = param_2 - param_5;
      puVar6 = thunk_FUN_005532f0(param_5);
      if (0 < local_c) {
        local_10 = local_c;
        local_8 = puVar6;
        do {
          iVar7 = 0;
          iVar9 = local_18;
          do {
            if ((puVar6 == (undefined *)0x0) || (local_8[iVar7] != '\0')) {
              if ((iVar9 < 0) ||
                 (((*(int *)((int)this + 0x20) <= iVar9 || (iVar4 < 0)) ||
                  (*(int *)((int)this + 0x24) <= iVar4)))) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                iVar8 = *(int *)((int)this + 0x20) * iVar4 +
                        *(int *)((int)this + param_4 * 4 + 0xd4);
                cVar1 = *(char *)(iVar8 + iVar9);
                if (cVar1 != -1) {
                  *(char *)(iVar8 + iVar9) = cVar1 + '\x01';
                }
              }
            }
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
          } while (iVar7 < local_c);
          local_8 = local_8 + local_c;
          iVar4 = iVar4 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
    }
  }
  return;
}

