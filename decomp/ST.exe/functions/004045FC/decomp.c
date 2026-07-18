
void __thiscall STPlaySystemC::AddToRep(STPlaySystemC *this,undefined4 *param_1,uint param_2)

{
  STPlaySystemC *pSVar1;
  code *pcVar2;
  STPlaySystemC *pSVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar8;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  STPlaySystemC *pSStack_c;
  int *piStack_8;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    uStack_50 = DAT_00858df8;
    DAT_00858df8 = &uStack_50;
    pSStack_c = this;
    iVar4 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      puVar5 = FUN_006aac10(param_2 + 8);
      pSVar3 = pSStack_c;
      puVar5[1] = param_2;
      puVar8 = puVar5 + 2;
      for (uVar7 = param_2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar8 = *param_1;
        param_1 = param_1 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar7 = param_2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      pSVar1 = pSStack_c + 0x65;
      FUN_006b9910((undefined4 *)pSVar1,puVar5);
      iVar4 = *(int *)(pSVar3 + 0x69);
      *(uint *)(pSVar3 + 0x69) = iVar4 + 1U;
      if (0xd2 < iVar4 + 1U) {
        piStack_8 = *(int **)pSVar1;
        iVar4 = FUN_006b98c0((int *)pSVar1,piStack_8);
        if (iVar4 != 0) {
          if (piStack_8 != (int *)0x0) {
            FUN_006ab060(&piStack_8);
          }
          *(int *)(pSVar3 + 0x69) = *(int *)(pSVar3 + 0x69) + -1;
        }
      }
      DAT_00858df8 = (undefined4 *)uStack_50;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_50;
    iVar6 = FUN_006ad4d0(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x482,0,iVar4,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c8430,0x484);
  }
  return;
}

