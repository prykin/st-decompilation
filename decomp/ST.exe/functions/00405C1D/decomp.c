
undefined4 thunk_FUN_00609b90(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  uint uVar5;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  void *pvStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((*(int *)((int)pvStack_8 + 0x234) != 0) &&
       (iVar2 = *(int *)(*(int *)((int)pvStack_8 + 0x234) + 0xc), uVar5 = 0, 0 < iVar2)) {
      do {
        iVar3 = *(int *)((int)pvStack_8 + 0x234);
        if (uVar5 < *(uint *)(iVar3 + 0xc)) {
          iVar3 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c);
        }
        else {
          iVar3 = 0;
        }
        if (iVar3 != 0) {
          if ((*(int *)((int)pvStack_8 + 0x1f5) == 0x4d) && (param_1 != 0)) {
            *(undefined4 *)(iVar3 + 4) = 0;
          }
          if (*(int *)(iVar3 + 0x3c) < 0) {
            thunk_FUN_00609d60(pvStack_8,uVar5);
          }
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar2);
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return 1;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_nick_to_field_cpp_007cf850,0x208,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  FUN_006a5e40(iVar2,0,0x7cf850,0x20a);
  return 0xffff;
}

