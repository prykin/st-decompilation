
void __thiscall thunk_FUN_005cff40(void *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar7;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  void *pvStack_8;
  
  if (*(int *)((int)this + 0x1f84) != 0) {
    uStack_4c = DAT_00858df8;
    DAT_00858df8 = &uStack_4c;
    pvStack_8 = this;
    iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      uVar6 = 0;
      iVar3 = *(int *)((int)pvStack_8 + 0x1f84);
      uVar1 = *(uint *)(iVar3 + 0xc);
      if (0 < (int)uVar1) {
        bVar7 = uVar1 != 0;
        while( true ) {
          if (bVar7) {
            pcVar4 = (char *)(*(int *)(iVar3 + 8) * uVar6 + *(int *)(iVar3 + 0x1c));
          }
          else {
            pcVar4 = (char *)0x0;
          }
          if ((pcVar4 != (char *)0x0) &&
             (((pcVar4[4] == '\x02' || (pcVar4[4] == '\x03')) && (*(int *)(pcVar4 + 6) == param_1)))
             ) break;
          uVar6 = uVar6 + 1;
          bVar7 = uVar6 < uVar1;
          if ((int)uVar1 <= (int)uVar6) {
            DAT_00858df8 = (undefined4 *)uStack_4c;
            return;
          }
        }
        pcVar4[6] = '\0';
        pcVar4[7] = '\0';
        pcVar4[8] = '\0';
        pcVar4[9] = '\0';
        pcVar4[4] = '\x01';
        pcVar4[1] = '\x01';
        if ((*pcVar4 != '\0') && ((byte)pcVar4[2] < 8)) {
          thunk_FUN_0056a840(&DAT_00807620,pcVar4[2]);
        }
      }
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    iVar5 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x4dc,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cd258,0x4dc);
  }
  return;
}

