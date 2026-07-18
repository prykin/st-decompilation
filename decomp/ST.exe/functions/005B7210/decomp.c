
void FUN_005b7210(void)

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
      FUN_006b34d0(*(uint **)(local_8 + 0x1d3f),*(uint *)(local_8 + 0x1cfb),0xfffffffe,
                   *(uint *)(local_8 + 0x1d13),*(uint *)(local_8 + 0x1d17));
    }
    iVar2 = 0;
    if (*(char *)(local_8 + 0x9a) != '\0') {
      puVar4 = (uint *)(local_8 + 0xe7);
      do {
        if (*puVar4 != 0xffffffff) {
          FUN_006b34d0((uint *)puVar4[0x11],*puVar4,0xfffffffe,puVar4[6],puVar4[7]);
        }
        iVar2 = iVar2 + 1;
        puVar4 = (uint *)((int)puVar4 + 0x1fb);
      } while (iVar2 < (int)(uint)*(byte *)(local_8 + 0x9a));
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x4b,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7ccb74,0x4b);
  return;
}

