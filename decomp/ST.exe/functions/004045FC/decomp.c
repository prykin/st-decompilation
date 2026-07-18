
void thunk_FUN_0054e950(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  int iStack_c;
  int *piStack_8;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    uStack_50 = DAT_00858df8;
    DAT_00858df8 = &uStack_50;
    iVar3 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      puVar4 = FUN_006aac10(param_2 + 8);
      puVar4[1] = param_2;
      puVar7 = puVar4 + 2;
      for (uVar6 = param_2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar7 = *param_1;
        param_1 = param_1 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar6 = param_2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      piVar1 = (int *)(iStack_c + 0x65);
      FUN_006b9910(piVar1,puVar4);
      uVar6 = *(int *)(iStack_c + 0x69) + 1;
      *(uint *)(iStack_c + 0x69) = uVar6;
      if (0xd2 < uVar6) {
        piStack_8 = (int *)*piVar1;
        iVar3 = FUN_006b98c0(piVar1,piStack_8);
        if (iVar3 != 0) {
          if (piStack_8 != (int *)0x0) {
            FUN_006ab060(&piStack_8);
          }
          *(int *)(iStack_c + 0x69) = *(int *)(iStack_c + 0x69) + -1;
        }
      }
      DAT_00858df8 = (undefined4 *)uStack_50;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_50;
    iVar5 = FUN_006ad4d0(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x482,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c8430,0x484);
  }
  return;
}

