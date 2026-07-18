
void FUN_00543600(undefined4 param_1)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  ushort *local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    FUN_007158a0(DAT_008075a8,0,'\a',(undefined4 *)0x0,0,0);
    FUN_006b88d0((undefined4 *)(local_c + 0xad),DAT_0080759c,0,(BITMAPINFO *)0x0,0x8000000,0,
                 (BITMAPINFO *)0x0,0);
    thunk_FUN_00543ad0(param_1,s_CUR_MENU_007c7dd4,0x32,(BITMAPINFO *)0x0,0,-1,-1);
    puVar4 = FUN_00709af0(DAT_00806784,0xb,(byte *)s_INF_DEEPS_007c7dc8,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)(local_c + 0x4e3) = puVar4;
    puVar4 = FUN_00709af0(DAT_00806784,0x13,(byte *)s_CUR_CONFIRM_007c7db8,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)(local_c + 0x4e7) = puVar4;
    local_8 = FUN_006f1ce0(1,s_CURSOR_PAL_007c7da8,(int *)0x0,1);
    puVar4 = local_8 + 0x14;
    iVar3 = 1;
    uVar5 = FUN_006b4fe0((int)local_8);
    uVar6 = FUN_006b50c0(800,0x96,(uint)local_8[7],uVar5,(undefined4 *)puVar4,iVar3);
    *(undefined4 *)(local_c + 0x4d2) = uVar6;
    FUN_006f20e0((uint *)&local_8);
    puVar1 = (uint *)(local_c + 0x4d6);
    FUN_006b2330((uint)DAT_008075a8,puVar1,1,0x4047ff,0,0,*(uint *)(local_c + 0x4d2));
    FUN_006b28c0((int)DAT_008075a8,*puVar1,1);
    FUN_006b3af0(DAT_008075a8,*puVar1);
    DAT_00858df8 = (undefined4 *)local_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x65,0,iVar3,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(-0x34,0,0x7c7d60,0x66);
  return;
}

