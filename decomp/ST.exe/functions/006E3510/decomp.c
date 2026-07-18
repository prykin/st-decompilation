
undefined4 FUN_006e3510(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  DWORD DVar5;
  uint *puVar6;
  undefined4 unaff_ESI;
  int iVar7;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  int local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar7 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0x44,0,iVar2,&DAT_007a4ccc);
    if (iVar7 == 0) {
      FUN_006a5e40(iVar2,0,0x7ee78c,0x45);
      return 0;
    }
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  iVar2 = **(int **)(local_c + 8);
  iVar7 = 0;
  local_8 = 0;
  do {
    if (iVar2 == 0) {
      DVar5 = timeGetTime();
      *(DWORD *)(local_c + 0x18) = DVar5;
      DAT_00856d70 = param_1;
      FUN_006e4290(0x1c,4,1,DAT_00856d6c);
      puVar6 = FUN_006ae290((uint *)0x0,5,0xc,5);
      *(uint **)(local_c + 0x10) = puVar6;
      puVar6 = FUN_006ae290((uint *)0x0,0x14,8,10);
      *(uint **)(local_c + 0xc) = puVar6;
      puVar6 = FUN_006ae290((uint *)0x0,0x14,0x20,10);
      *(uint **)(local_c + 0x28) = puVar6;
      puVar6 = FUN_006ae290((uint *)0x0,0x14,0x20,10);
      *(uint **)(local_c + 0x2c) = puVar6;
      DAT_00858df8 = (undefined4 *)local_50;
      return 1;
    }
    iVar2 = 0;
    if (0 < iVar7) {
      do {
        if (*(int *)(*(int *)(local_c + 8) + iVar2 * 8) == *(int *)(iVar7 + *(int *)(local_c + 8)))
        {
          iVar3 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0x32,0,0,
                               (byte *)s_Two_types_with_id_____lX_007ee7a0);
          if (iVar3 != 0) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          FUN_006a5e40(-0x96,DAT_007ed77c,0x7ee78c,0x33);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_8);
    }
    iVar7 = iVar7 + 8;
    local_8 = local_8 + 1;
    iVar2 = *(int *)(*(int *)(local_c + 8) + iVar7);
  } while( true );
}

