
void __cdecl FUN_006a5990(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)0x0;
  iVar3 = FUN_00730fa0(0,0,0,0,&DAT_007a4ccc);
  if (iVar3 == 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar2 = DAT_0085496c;
  if (param_1 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)*param_1;
  }
  do {
    if ((puVar2 == (undefined4 *)0x0) || (puVar2 == puVar5)) {
      iVar3 = FUN_00730fa0(0,0,0,0,&DAT_007a4ccc);
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      return;
    }
    uVar4 = puVar2[5] & 0xffff;
    if (((uVar4 != 3) && (uVar4 != 0)) && ((uVar4 != 2 || ((DAT_007ec178 & 0x10) != 0)))) {
      if ((void *)puVar2[2] != (void *)0x0) {
        iVar3 = thunk_FUN_006a55d0((void *)puVar2[2],1,0);
        if (iVar3 == 0) {
          iVar3 = FUN_00730fa0(0,0,0,0,(byte *)s__File_Error___d____007eca44);
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          iVar3 = FUN_00730fa0(0,0,0,0,(byte *)s__hs__d____007eca34);
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      iVar3 = FUN_00730fa0(0,0,0,0,(byte *)s___ld__007eca2c);
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = puVar2[5] & 0xffff;
      if (uVar4 == 4) {
        iVar3 = FUN_00730fa0(0,0,0,0,(byte *)s_client_block_at_0x_08X__subtype___007ec9ec);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_0085751c != (code *)0x0) {
          (*DAT_0085751c)(puVar2 + 8,puVar2[4]);
          goto LAB_006a5b2e;
        }
      }
      else if (puVar2[5] == 1) {
        iVar3 = FUN_00730fa0(0,0,0,0,(byte *)s_normal_block_at_0x_08X___u_bytes_007ec9bc);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        if (uVar4 != 2) goto LAB_006a5b2e;
        iVar3 = FUN_00730fa0(0,0,0,0,(byte *)s_crt_block_at_0x_08X__subtype__x__007ec980);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FUN_006a5be0((int)puVar2);
    }
LAB_006a5b2e:
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

