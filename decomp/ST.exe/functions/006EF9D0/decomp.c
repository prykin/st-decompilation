
short * __cdecl FUN_006ef9d0(short *param_1,int param_2,int param_3,undefined *param_4)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  short *psVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_54;
  undefined4 local_50 [16];
  int *local_10;
  short *local_c;
  int local_8;
  
  local_c = (short *)0x0;
  local_8 = 0;
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar2 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((param_1 == (short *)0x0) || (param_2 == 0)) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7eef88,0xd4);
    }
    if (param_3 == 0) {
      param_3 = param_2;
    }
    if (param_4 != (undefined *)0x0) {
      iVar2 = *(int *)((int)param_1 + 0x455);
      if (0 < iVar2) {
        piVar3 = (int *)((int)param_1 + 0x459);
        do {
          if (*piVar3 != 0) {
            local_8 = local_8 + 1;
          }
          piVar3 = piVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      (*(code *)param_4)(-local_8);
    }
    local_c = (short *)FUN_006efc50((int)*param_1,(int)param_1[1],param_2,param_3,(char)param_1[2]);
    iVar2 = 0;
    local_8 = 0;
    if (0 < *(int *)((int)param_1 + 0x455)) {
      local_10 = (int *)((int)param_1 + 0x459);
      do {
        iVar4 = *local_10;
        if (iVar4 != 0) {
          FUN_006eff90(local_c,(int)*(short *)(iVar4 + 4),(int)*(short *)(iVar4 + 6),
                       (int)*(short *)(iVar4 + 8),*(uint *)(iVar4 + 0x4a),*(ushort *)(iVar4 + 0x4e))
          ;
          if (param_4 != (undefined *)0x0) {
            (*(code *)param_4)(local_8);
          }
          local_8 = local_8 + 1;
        }
        iVar2 = iVar2 + 1;
        local_10 = local_10 + 1;
      } while (iVar2 < *(int *)((int)param_1 + 0x455));
    }
    DAT_00858df8 = (undefined4 *)local_54;
    return local_c;
  }
  DAT_00858df8 = (undefined4 *)local_54;
  iVar4 = FUN_006ad4d0(s_E__ourlib_Mfstmap_cpp_007eef88,0xe5,0,iVar2,&DAT_007a4ccc);
  if (iVar4 == 0) {
    FUN_006efb70((int *)&local_c);
    FUN_006a5e40(iVar2,0,0x7eef88,0xe9);
    return (short *)0x0;
  }
  pcVar1 = (code *)swi(3);
  psVar5 = (short *)(*pcVar1)();
  return psVar5;
}

