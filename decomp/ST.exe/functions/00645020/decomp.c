
int __thiscall FUN_00645020(void *this,int param_1,uint *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  uint uVar4;
  void *unaff_EDI;
  undefined4 local_5c;
  undefined4 local_58 [16];
  int local_18;
  int local_14;
  void *local_10;
  int local_c;
  int local_8;
  
  local_c = *(int *)(*(int *)((int)this + 0x241) + 0xc);
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  local_10 = this;
  iVar2 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  iVar3 = local_c;
  if (iVar2 == 0) {
    if (local_c == 0) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7d25c0,0x466);
    }
    uVar4 = 0;
    local_8 = 0;
    *param_2 = 0xffffffff;
    if (0 < iVar3) {
      while (FUN_006acc70(*(int *)((int)local_10 + 0x241),uVar4,&local_18), local_18 != param_1) {
        uVar4 = uVar4 + 1;
        if (iVar3 <= (int)uVar4) {
          DAT_00858df8 = (undefined4 *)local_5c;
          return local_8;
        }
      }
      local_8 = (local_14 != 1) + 1;
      *param_2 = uVar4;
    }
    DAT_00858df8 = (undefined4 *)local_5c;
    return local_8;
  }
  DAT_00858df8 = (undefined4 *)local_5c;
  if (iVar2 != -0x5001fff7) {
    iVar3 = FUN_006ad4d0(s_E____titans_nick_to_torp_cpp_007d25c0,0x471,0,iVar2,&DAT_007a4ccc);
    if (iVar3 == 0) {
      FUN_006a5e40(iVar2,0,0x7d25c0,0x472);
      return -1;
    }
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  *param_2 = 0xffffffff;
  return 0;
}

