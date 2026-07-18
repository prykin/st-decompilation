
undefined4 FUN_006a5210(void)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_c;
  
  local_c = 1;
  if ((DAT_007ec178 & 1) == 0) {
    return 1;
  }
  iVar4 = FUN_007318f0();
  puVar3 = DAT_0085496c;
  if ((iVar4 != -1) && (iVar4 != -2)) {
    switch(iVar4) {
    case -6:
      iVar4 = FUN_00730fa0(0,0,0,0,&DAT_007a4ccc);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      break;
    case -5:
      iVar4 = FUN_00730fa0(0,0,0,0,&DAT_007a4ccc);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      break;
    case -4:
      iVar4 = FUN_00730fa0(0,0,0,0,&DAT_007a4ccc);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      break;
    case -3:
      iVar4 = FUN_00730fa0(0,0,0,0,&DAT_007a4ccc);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      break;
    default:
      iVar4 = FUN_00730fa0(0,0,0,0,&DAT_007a4ccc);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
    }
    return 0;
  }
  do {
    if (puVar3 == (undefined4 *)0x0) {
      return local_c;
    }
    bVar2 = true;
    iVar4 = FUN_006a5130((char *)(puVar3 + 7),(char)DAT_007ec184,4);
    if (iVar4 == 0) {
      iVar4 = FUN_00730fa0(0,0,0,0,(byte *)s_DAMAGE__before__hs_block____d__a_007ec7bc);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      bVar2 = false;
    }
    iVar4 = FUN_006a5130((char *)(puVar3[4] + 0x20 + (int)puVar3),(char)DAT_007ec184,4);
    if (iVar4 == 0) {
      iVar4 = FUN_00730fa0(0,0,0,0,(byte *)s_DAMAGE__after__hs_block____d__at_007ec788);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      bVar2 = false;
    }
    if ((puVar3[5] == 0) &&
       (iVar4 = FUN_006a5130((char *)(puVar3 + 8),DAT_007ec184._1_1_,puVar3[4]), iVar4 == 0)) {
      iVar4 = FUN_00730fa0(0,0,0,0,(byte *)s_DAMAGE__on_top_of_Free_block_at_0_007ec754);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
LAB_006a541d:
      if ((puVar3[2] != 0) &&
         (iVar4 = FUN_00730fa0(0,0,0,0,(byte *)s__hs_allocated_at_file__hs__d___007ec72c),
         iVar4 == 1)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      iVar4 = FUN_00730fa0(0,0,0,0,(byte *)s__hs_located_at_0x_08X_is__u_byte_007ec6f8);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      local_c = 0;
    }
    else if (!bVar2) goto LAB_006a541d;
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}

