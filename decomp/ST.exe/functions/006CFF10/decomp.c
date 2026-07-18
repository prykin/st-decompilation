
int FUN_006cff10(int *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                uint param_7,uint param_8,uint param_9)

{
  uint *puVar1;
  undefined4 unaff_ESI;
  int iVar2;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  int *local_c;
  uint *local_8;
  
  local_c = param_1;
  if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
  }
  local_8 = FUN_006aac10(0x69);
  if (local_8 == (uint *)0x0) {
    iVar2 = -2;
  }
  else {
    local_8[3] = param_8;
    local_8[4] = param_9;
    local_8[1] = param_4;
    local_8[2] = param_5;
    local_8[5] = 0x50;
    local_50 = DAT_00858df8;
    DAT_00858df8 = &local_50;
    iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
    puVar1 = local_8;
    if (iVar2 == 0) {
      iVar2 = FUN_006b2330((uint)local_c,local_8,param_3,0x6d0020,param_6,param_7,(uint)local_8);
      if (iVar2 != 0) {
        FUN_006a5e40(iVar2,DAT_007ed77c,0x7ee1b4,0x3f);
      }
      *param_2 = *puVar1;
      DAT_00858df8 = (undefined4 *)local_50;
    }
    else {
      DAT_00858df8 = (undefined4 *)local_50;
      FUN_006a5e90(local_8);
    }
  }
  if ((*(uint *)(*local_c + 8) & 0x4000000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(*local_c + 0x4f0));
  }
  return iVar2;
}

