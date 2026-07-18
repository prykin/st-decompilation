
void FUN_005b7340(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  uint *puVar4;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (*(uint *)(local_8 + 0x1cfb) != 0xffffffff) {
      FUN_006b3730(*(uint **)(local_8 + 0x1d3f),*(uint *)(local_8 + 0x1cfb),
                   *(uint *)(local_8 + 0x1cff),*(uint *)(local_8 + 0x1d13),
                   *(uint *)(local_8 + 0x1d17));
    }
    if (*(uint *)(local_8 + 0x1d8c) != 0xffffffff) {
      FUN_006b3730(*(uint **)(local_8 + 0x1dd0),*(uint *)(local_8 + 0x1d8c),
                   *(uint *)(local_8 + 0x1d90),*(uint *)(local_8 + 0x1da4),
                   *(uint *)(local_8 + 0x1da8));
    }
    iVar2 = 0;
    if (*(char *)(local_8 + 0x9a) != '\0') {
      puVar4 = (uint *)(local_8 + 0xff);
      do {
        if (puVar4[-6] != 0xffffffff) {
          FUN_006b3730((uint *)puVar4[0xb],puVar4[-6],puVar4[-5],*puVar4,puVar4[1]);
        }
        if (*(uint *)((int)puVar4 + 0x79) != 0xffffffff) {
          FUN_006b3730(*(uint **)((int)puVar4 + 0xbd),*(uint *)((int)puVar4 + 0x79),
                       *(uint *)((int)puVar4 + 0x7d),*(uint *)((int)puVar4 + 0x91),
                       *(uint *)((int)puVar4 + 0x95));
        }
        if ((*(char *)((int)puVar4 + -0x1d) != '\0') &&
           (*(uint *)((int)puVar4 + 0x10a) != 0xffffffff)) {
          FUN_006b3730(*(uint **)((int)puVar4 + 0x14e),*(uint *)((int)puVar4 + 0x10a),
                       *(uint *)((int)puVar4 + 0x10e),*(uint *)((int)puVar4 + 0x122),
                       *(uint *)((int)puVar4 + 0x126));
        }
        iVar2 = iVar2 + 1;
        puVar4 = (uint *)((int)puVar4 + 0x1fb);
      } while (iVar2 < (int)(uint)*(byte *)(local_8 + 0x9a));
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x59,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7ccb74,0x59);
  return;
}

