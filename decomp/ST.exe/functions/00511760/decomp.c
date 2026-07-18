
void FUN_00511760(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar4;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  int local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (*(uint *)(local_c + 0x17c) != 0) {
      FUN_006e56b0(*(void **)(local_c + 0xc),*(uint *)(local_c + 0x17c));
    }
    *(undefined4 *)(local_c + 0x17c) = 0;
    puVar4 = (uint *)(local_c + 0x180);
    local_8 = 7;
    do {
      if (*puVar4 != 0) {
        FUN_006e56b0(*(void **)(local_c + 0xc),*puVar4);
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (*(uint *)(local_c + 0x19c) != 0) {
      FUN_006e56b0(*(void **)(local_c + 0xc),*(uint *)(local_c + 0x19c));
    }
    *(undefined4 *)(local_c + 0x19c) = 0;
    if (*(byte **)(local_c + 0x1b3) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(local_c + 0x1b3));
    }
    *(undefined4 *)(local_c + 0x1b3) = 0;
    if (*(byte **)(local_c + 0x1bb) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(local_c + 0x1bb));
    }
    *(undefined4 *)(local_c + 0x1bb) = 0;
    if (*(byte **)(local_c + 0x1cb) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(local_c + 0x1cb));
    }
    *(undefined4 *)(local_c + 0x1cb) = 0;
    if (*(byte **)(local_c + 0x1d7) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(local_c + 0x1d7));
    }
    *(undefined4 *)(local_c + 0x1d7) = 0;
    if (*(byte **)(local_c + 0x1d3) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(local_c + 0x1d3));
    }
    *(undefined4 *)(local_c + 0x1d3) = 0;
    puVar4 = (uint *)(local_c + 0x1f0);
    local_8 = 10;
    do {
      if (*puVar4 != 0) {
        FUN_006f20e0(puVar4);
      }
      puVar4 = puVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    *(undefined4 *)(local_c + 0x238) = 0;
    *(undefined4 *)(local_c + 0x248) = 0;
    *(undefined4 *)(local_c + 0x22c) = 0;
    *(undefined4 *)(local_c + 0x228) = 0;
    *(undefined4 *)(local_c + 0x234) = 0;
    *(undefined4 *)(local_c + 0x230) = 0;
    *(undefined4 *)(local_c + 0x224) = 0;
    *(undefined4 *)(local_c + 0x220) = 0;
    *(undefined4 *)(local_c + 0x244) = 0;
    *(undefined4 *)(local_c + 0x240) = 0;
    *(undefined4 *)(local_c + 0x23c) = 0;
    if (*(uint **)(local_c + 0x1e0) != (uint *)0x0) {
      FUN_00710560(*(uint **)(local_c + 0x1e0));
      *(undefined4 *)(local_c + 0x1e0) = 0;
    }
    if (*(uint **)(local_c + 0x1e4) != (uint *)0x0) {
      FUN_00710560(*(uint **)(local_c + 0x1e4));
      *(undefined4 *)(local_c + 0x1e4) = 0;
    }
    if (*(uint **)(local_c + 0x1e8) != (uint *)0x0) {
      FUN_00710560(*(uint **)(local_c + 0x1e8));
      *(undefined4 *)(local_c + 0x1e8) = 0;
    }
    if (*(int *)(local_c + 0x218) != 0) {
      FUN_006ab060((undefined4 *)(local_c + 0x218));
    }
    if (*(int *)(local_c + 0x1ec) != 0) {
      FUN_006ab060((undefined4 *)(local_c + 0x1ec));
    }
    if (*(int *)(local_c + 0x24c) != 0) {
      FUN_006f20e0((uint *)(local_c + 0x24c));
    }
    if (*(int *)(local_c + 0x1dc) != 0) {
      FUN_006f20e0((uint *)(local_c + 0x1dc));
    }
    if (*(int *)(local_c + 0x21c) != 0) {
      FUN_006f20e0((uint *)(local_c + 0x21c));
    }
    DAT_00801690 = 0;
    DAT_00858df8 = (undefined4 *)local_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0xcf,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c383c,0xcf);
  return;
}

