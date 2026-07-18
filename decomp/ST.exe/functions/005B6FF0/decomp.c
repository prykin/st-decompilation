
void FUN_005b6ff0(void)

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
    iVar2 = 0xd;
    puVar4 = (uint *)(local_8 + 0x66);
    do {
      if (*puVar4 != 0) {
        FUN_006e56b0(*(void **)(local_8 + 0xc),*puVar4);
      }
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined4 *)(local_8 + 0x1cff) = 0;
    if (*(uint *)(local_8 + 0x1cfb) != 0xffffffff) {
      FUN_006b3730(*(uint **)(local_8 + 0x1d3f),*(uint *)(local_8 + 0x1cfb),
                   *(uint *)(local_8 + 0x1cff),*(uint *)(local_8 + 0x1d13),
                   *(uint *)(local_8 + 0x1d17));
    }
    if (*(uint *)(local_8 + 0x1cfb) != 0xffffffff) {
      FUN_006b3af0(*(int **)(local_8 + 0x1d3f),*(uint *)(local_8 + 0x1cfb));
    }
    if (*(uint *)(local_8 + 0x1d8c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(local_8 + 0x1dd0),*(uint *)(local_8 + 0x1d8c));
    }
    iVar2 = 0;
    if (*(char *)(local_8 + 0x9a) != '\0') {
      puVar4 = (uint *)(local_8 + 0xe7);
      do {
        puVar4[1] = 0;
        if (*puVar4 != 0xffffffff) {
          FUN_006b3730((uint *)puVar4[0x11],*puVar4,puVar4[1],puVar4[6],puVar4[7]);
        }
        if (*puVar4 != 0xffffffff) {
          FUN_006b3af0((int *)puVar4[0x11],*puVar4);
        }
        if (*(uint *)((int)puVar4 + 0x91) != 0xffffffff) {
          FUN_006b3af0(*(int **)((int)puVar4 + 0xd5),*(uint *)((int)puVar4 + 0x91));
        }
        if ((*(char *)((int)puVar4 + -5) != '\0') && (*(uint *)((int)puVar4 + 0x122) != 0xffffffff))
        {
          FUN_006b3af0(*(int **)((int)puVar4 + 0x166),*(uint *)((int)puVar4 + 0x122));
        }
        iVar2 = iVar2 + 1;
        puVar4 = (uint *)((int)puVar4 + 0x1fb);
      } while (iVar2 < (int)(uint)*(byte *)(local_8 + 0x9a));
    }
    *(undefined1 *)(local_8 + 0x65) = 2;
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x41,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7ccb74,0x41);
  return;
}

