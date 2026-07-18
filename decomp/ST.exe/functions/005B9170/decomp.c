
void FUN_005b9170(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  undefined4 local_54;
  undefined4 local_50 [16];
  void *local_10;
  uint local_c;
  uint local_8;
  
  bVar6 = 0;
  local_c = local_c & 0xffffff00;
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar2 = __setjmp3(local_50,0,unaff_ESI,unaff_EBX);
  if (iVar2 == 0) {
    thunk_FUN_005b6480();
    bVar5 = 0;
    local_8 = local_8 & 0xffffff00;
    if (*(char *)((int)local_10 + 0x9a) != '\0') {
      do {
        uVar3 = local_8 & 0xff;
        *(undefined4 *)((int)local_10 + uVar3 * 0x1fb + 0x127) =
             *(undefined4 *)((int)local_10 + 0x61);
        *(uint *)((int)local_10 + uVar3 * 0x1fb + 0x123) = ((local_c & 0xff) + 1) * 100;
        if (*(int *)((int)local_10 + uVar3 * 0x1fb + 0xbc) != 0) {
          local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
        }
        bVar5 = bVar5 + 1;
        local_8 = CONCAT31(local_8._1_3_,bVar5);
      } while (bVar5 < *(byte *)((int)local_10 + 0x9a));
    }
    local_8 = local_8 & 0xffffff00;
    if (*(char *)((int)local_10 + 0x9a) != '\0') {
      do {
        uVar3 = *(uint *)((int)local_10 + (local_8 & 0xff) * 0x1fb + 0x178);
        if (uVar3 != 0xffffffff) {
          FUN_006b3af0(*(int **)((int)local_10 + (local_8 & 0xff) * 0x1fb + 0x1bc),uVar3);
        }
        bVar6 = bVar6 + 1;
        local_8 = CONCAT31(local_8._1_3_,bVar6);
      } while (bVar6 < *(byte *)((int)local_10 + 0x9a));
    }
    thunk_FUN_005b8c70(local_10,1,1,1);
    DAT_00858df8 = (undefined4 *)local_54;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_54;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x1d3,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7ccb74,0x1d3);
  return;
}

