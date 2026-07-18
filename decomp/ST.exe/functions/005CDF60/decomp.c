
void FUN_005cdf60(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *unaff_EDI;
  undefined4 *puVar7;
  undefined4 local_50;
  undefined4 local_4c [16];
  uint local_c;
  int local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    uVar4 = *(int *)(*(int *)(local_8 + 0x1f84) + 0xc) * 0x60;
    uVar5 = uVar4 + 9;
    local_c = uVar5;
    if (*(uint *)(local_8 + 0x222a) < uVar5) {
      iVar2 = FUN_006acf50(*(undefined4 **)(local_8 + 0x2226),uVar5);
      *(int *)(local_8 + 0x2226) = iVar2;
      *(uint *)(local_8 + 0x222a) = uVar5;
    }
    puVar7 = *(undefined4 **)(local_8 + 0x2226);
    *puVar7 = *(undefined4 *)(local_8 + 0x2121);
    puVar7[1] = DAT_00808aab;
    *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(local_8 + 0x1e26);
    puVar6 = *(undefined4 **)(*(int *)(local_8 + 0x1f84) + 0x1c);
    puVar7 = (undefined4 *)((int)puVar7 + 9);
    for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    FUN_00715360(DAT_00811764,param_1,'\"',*(char **)(local_8 + 0x2226),local_c,1,0xffffffff);
    DAT_00858df8 = (undefined4 *)local_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x230,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cd258,0x230);
  return;
}

