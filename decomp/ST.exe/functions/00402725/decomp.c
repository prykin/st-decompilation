
void thunk_FUN_005ad050(char param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  UINT UVar4;
  uint *puVar5;
  int iVar6;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  undefined4 uVar10;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar3 = __setjmp3(auStack_48,0,unaff_ESI,unaff_EBX);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_4c;
    iVar6 = FUN_006ad4d0(s_E____titans_Start_load_obj_cpp_007cc728,0x1bb,0,iVar3,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cc728,0x1bb);
    return;
  }
  FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
  thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(DAT_0081176c + 0x2c));
  if ((*(int *)(iStack_8 + 0x20b8) == 0) && (param_1 == '\0')) {
    thunk_FUN_005b68b0(DAT_0080759c,0,0,0x112,0x38,0x204,0x19d,
                       (undefined4 *)(*(int *)(iStack_8 + 0x1a5b) + 0x140));
  }
  if (((*(int *)(iStack_8 + 0x20bc) == 0) && (param_1 == '\0')) ||
     ((param_1 != '\0' && (*(char *)(iStack_8 + 0x20b4) == '\0')))) {
    thunk_FUN_005b68b0(DAT_0080759c,0,0,10,0xb4,0xf9,0x121,
                       (undefined4 *)(*(int *)(iStack_8 + 0x1a5b) + 0x140));
  }
  cVar1 = *(char *)(iStack_8 + 0x1a5f);
  if (((((cVar1 == '\f') || (cVar1 == '\x04')) || (cVar1 == '\x05')) || (cVar1 == '\x13')) &&
     (((*(int *)(iStack_8 + 0x20c0) == 0 && (param_1 == '\0')) ||
      ((param_1 != '\0' && (*(char *)(iStack_8 + 0x20b7) == '\0')))))) {
    thunk_FUN_005b69f0(DAT_0080759c,0,0,200,0x1f1,400,0x62,
                       (undefined4 *)(*(int *)(iStack_8 + 0x1a5b) + 0x140));
  }
  switch(*(undefined1 *)(iStack_8 + 0x1a5f)) {
  case 1:
  case 2:
  case 4:
  case 5:
    pvVar9 = *(void **)(DAT_0081176c + 0x30);
    UVar4 = 0x26ae;
    break;
  case 3:
    pvVar9 = *(void **)(DAT_0081176c + 0x30);
    UVar4 = 0x26af;
    break;
  default:
    goto switchD_005ad1b8_caseD_6;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    pvVar9 = *(void **)(DAT_0081176c + 0x30);
    UVar4 = 0x26ad;
    break;
  case 0x13:
    pvVar9 = *(void **)(DAT_0081176c + 0x30);
    UVar4 = (DAT_00803400 != '\f') + 0x26ad;
  }
  uVar10 = 0;
  uVar8 = 0xffffffff;
  uVar7 = 0xfffffffe;
  puVar5 = (uint *)FUN_006b0140(UVar4,DAT_00807618);
  thunk_FUN_00540890(0,0xe9,0x14,0x14c,0x18,puVar5,uVar7,uVar8,pvVar9,uVar10);
switchD_005ad1b8_caseD_6:
  DAT_00858df8 = (undefined4 *)uStack_4c;
  return;
}

