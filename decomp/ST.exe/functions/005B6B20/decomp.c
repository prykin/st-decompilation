
void FUN_005b6b20(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_48 [16];
  int local_8;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    *(int *)(DAT_0081176c + 0x2e6) = local_8;
    *(undefined1 *)(local_8 + 0x9a) = 8;
    thunk_FUN_005b5240((undefined4 *)(local_8 + 0x9b),s_MM_MBUT12_007ccc10,0x194,0x213,0x24,0x12,
                       0x12,7,0xa0,0x31,0x14,0,0,0,0,0,0x4b,0,0,0,0,0,-1,-1);
    thunk_FUN_005b5240((undefined4 *)(local_8 + 0x296),s_MM_MBUT08_007ccc04,0x25c,0x213,0xf,0x14,2,8
                       ,0xa0,0x34,0x14,0,0,0,0,0,0x4b,0,0,0,0,0,-1,-1);
    thunk_FUN_005b5240((undefined4 *)(local_8 + 0x491),s_MM_MBUT09_007ccbf8,0x261,0x1da,0x10,0x12,1,
                       7,0xa0,0x34,0xf,0,0,0,0,0,0x4b,0,0,0,0,0,-1,-1);
    thunk_FUN_005b5240((undefined4 *)(local_8 + 0x68c),s_MM_MBUT10_007ccbec,0x264,0x1a3,0x10,0x10,2,
                       6,0x9e,0x33,10,0,0,0,0,0,0x4b,0,0,0,0,0,-1,-1);
    thunk_FUN_005b5240((undefined4 *)(local_8 + 0x887),s_MM_MBUT07_007ccbe0,0,0x1a3,0x2f,0x10,0x1c,6
                       ,0x9d,0x31,10,0,0,0,0,0,0x4b,0,0,0,0,0,-1,-1);
    thunk_FUN_005b5240((undefined4 *)(local_8 + 0xa82),s_MM_MBUT06_007ccbd4,0,0x1da,0x32,0x12,0x1d,7
                       ,0xa0,0x32,0xf,0,0,0,0,0,0x4b,0,0,0,0,0,-1,-1);
    thunk_FUN_005b5240((undefined4 *)(local_8 + 0xc7d),s_MM_MBUT05_007ccbc8,0,0x213,0x34,0x13,0x21,9
                       ,0xa0,0x33,0x14,0,0,0,0,0,0x4b,0,0,0,0,0,-1,-1);
    thunk_FUN_005b5240((undefined4 *)(local_8 + 0xe78),s_MM_MBUT11_007ccbbc,0xb4,0x213,0x37,0x12,
                       0x26,8,0xa0,0x30,0x14,0,0,0,0,0,0x4b,0,0,0,0,0,-1,-1);
    thunk_FUN_005b5240((undefined4 *)(local_8 + 0x1caf),s_MM_TABLO_007ccbb0,0x30,0x203,0xb5,0x11,0,0
                       ,0,0,0x14,0,0,0,0,0,0x4b,0,0,0,0,0,-1,-1);
    thunk_FUN_005b6ff0();
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x22,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7ccb74,0x22);
  return;
}

