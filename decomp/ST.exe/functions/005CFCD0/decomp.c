
void __thiscall FUN_005cfcd0(void *this,int param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar6;
  undefined4 local_4c;
  undefined4 local_48 [16];
  void *local_8;
  
  if (*(int *)((int)this + 0x1f84) != 0) {
    local_4c = DAT_00858df8;
    DAT_00858df8 = &local_4c;
    local_8 = this;
    iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      uVar5 = 0;
      iVar3 = *(int *)((int)local_8 + 0x1f84);
      uVar1 = *(uint *)(iVar3 + 0xc);
      if (0 < (int)uVar1) {
        bVar6 = uVar1 != 0;
        while( true ) {
          if (bVar6) {
            iVar4 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c);
          }
          else {
            iVar4 = 0;
          }
          if (((iVar4 != 0) && (*(int *)(iVar4 + 6) == param_1)) &&
             ((*(char *)(iVar4 + 4) == '\x02' || (*(char *)(iVar4 + 4) == '\x03')))) break;
          uVar5 = uVar5 + 1;
          bVar6 = uVar5 < uVar1;
          if ((int)uVar1 <= (int)uVar5) {
            DAT_00858df8 = (undefined4 *)local_4c;
            return;
          }
        }
        *(undefined4 *)(iVar4 + 0x4b) = param_2;
        iVar3 = (uVar5 - *(int *)((int)local_8 + 0x1f88)) * 0x20;
        if (*(int *)(iVar3 + 0x1fa4 + (int)local_8) != 0) {
          *(undefined4 *)((int)local_8 + 0x2d) = 5;
          FUN_006e6080(local_8,2,*(undefined4 *)(iVar3 + 0x1fa4 + (int)local_8),
                       (undefined4 *)((int)local_8 + 0x1d));
        }
      }
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar4 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x4bf,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cd258,0x4bf);
  }
  return;
}

