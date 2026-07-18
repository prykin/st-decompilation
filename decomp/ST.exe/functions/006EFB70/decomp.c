
void __cdecl FUN_006efb70(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 unaff_ESI;
  int iVar3;
  void *unaff_EDI;
  undefined4 local_48;
  undefined4 local_44 [16];
  
  local_48 = DAT_00858df8;
  DAT_00858df8 = &local_48;
  iVar2 = __setjmp3(local_44,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    iVar2 = *param_1;
    if (iVar2 != 0) {
      iVar3 = 0;
      if (0 < *(int *)(iVar2 + 0x455)) {
        do {
          if (*(int *)(iVar2 + 0x459 + iVar3 * 4) != 0) {
            FUN_006ab060((undefined4 *)(iVar2 + 0x459 + iVar3 * 4));
          }
          iVar2 = *param_1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(iVar2 + 0x455));
      }
      iVar2 = 0;
      do {
        FUN_006f20e0((uint *)(iVar2 + 0x40d + *param_1));
        iVar2 = iVar2 + 4;
      } while (iVar2 < 0x40);
      FUN_006ab060(param_1);
    }
    DAT_00858df8 = (undefined4 *)local_48;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_48;
  iVar3 = FUN_006ad4d0(s_E__ourlib_Mfstmap_cpp_007eef88,0x107,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7eef88,0x109);
  return;
}

