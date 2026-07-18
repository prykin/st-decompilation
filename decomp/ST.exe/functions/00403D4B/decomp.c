
void __thiscall thunk_FUN_00551460(void *this,char param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  LPSTR pCVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int *piStack_8;
  
  if (*(char *)((int)this + 0x1bb) != param_1) {
    *(char *)((int)this + 0x1bb) = param_1;
    uStack_4c = DAT_00858df8;
    DAT_00858df8 = &uStack_4c;
    piStack_8 = this;
    iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
    piVar2 = piStack_8;
    if (iVar3 == 0) {
      FUN_006b55f0((undefined4 *)piStack_8[0x1a],0,0xa6,0x31,*(int *)((int)piStack_8 + 0x185),0,0xa6
                   ,0x31,0x77,0x39);
      if (piVar2[0x72] != 0) {
        FUN_006e56b0((void *)piVar2[3],piVar2[0x72]);
      }
      piVar2[0x72] = 0;
      if (piVar2[0x73] != 0) {
        FUN_006e56b0((void *)piVar2[3],piVar2[0x73]);
      }
      iVar3 = *piVar2;
      uVar12 = 1;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0xb200;
      uVar6 = 0xb1ff;
      piVar2[0x73] = 0;
      if (*(char *)((int)piVar2 + 0x1bb) == '\0') {
        pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
        iVar5 = (**(code **)(iVar3 + 4))
                          (0,1,0xac,0x57,0,1,1,pCVar4,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
        uVar12 = 1;
        iVar3 = *piVar2;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0xb202;
        uVar6 = 0xb201;
        piVar2[0x72] = iVar5;
        pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
        iVar3 = (**(code **)(iVar3 + 4))
                          (0,1,0xe5,0x57,0,1,1,pCVar4,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
        piVar2[0x73] = iVar3;
      }
      else {
        pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
        iVar3 = (**(code **)(iVar3 + 4))(0,1,0xca,0x57,0,1,1,pCVar4);
        piVar2[0x72] = iVar3;
      }
      thunk_FUN_00551b10(piVar2);
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    iVar5 = FUN_006ad4d0(s_E____titans_Andrey_tradecen_cpp_007c8624,0x81,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c8624,0x81);
  }
  return;
}

