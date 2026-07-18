
void thunk_FUN_005b3b00(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (*(int *)(iStack_8 + 0x1ad3) != 0) {
      iVar2 = FUN_00718f40(DAT_0080759c,(undefined4 *)(iStack_8 + 0x1adf),0,0x100,5,
                           (int *)(iStack_8 + 0x1adb),1,*(uint *)(iStack_8 + 0x61),
                           (uint *)(iStack_8 + 0x1ad7));
      if (iVar2 == -4) {
        FUN_006b0a20(DAT_0080759c,iStack_8 + 0x1adf,0,0x100,0);
        *(undefined4 *)(iStack_8 + 0x1ad3) = 0;
      }
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_main_obj_cpp_007cc8e8,0xe8,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cc8e8,0xe8);
  return;
}

