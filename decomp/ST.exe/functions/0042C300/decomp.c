
undefined4 FUN_0042c300(undefined4 param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  STAllPlayersC *in_ECX;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  
  iVar2 = param_3;
  iVar5 = 0;
  if (param_2 == 0) {
    iVar5 = (int)&DAT_007f4f83 + (char)param_1 * 0xa62;
    if (param_3 == 0) {
      thunk_FUN_0043fc50(1,0);
      uVar7 = 2;
    }
    else {
      uVar7 = 0xe;
    }
  }
  else {
    if (param_2 != 1) {
      RaiseInternalException
                (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x28f);
      goto LAB_0042c3a0;
    }
    iVar5 = (int)&DAT_007f4fd3 + (char)param_1 * 0xa62;
    if (param_3 == 0) {
      thunk_FUN_0043fc50(4,0);
      uVar7 = 5;
    }
    else {
      uVar7 = 0xf;
    }
  }
  thunk_FUN_0043fc50(uVar7,0);
LAB_0042c3a0:
  piVar4 = (int *)(iVar2 * 0x10 + iVar5);
  if (((*piVar4 == 0x3c) || (*piVar4 == 0x19a)) && (piVar4[1] == (int)(char)param_4)) {
    puVar1 = *(uint **)((int)piVar4 + 10);
    uVar6 = 0;
    param_2 = puVar1[3];
    if (0 < (int)param_2) {
      do {
        FUN_006acc70((int)puVar1,uVar6,&param_1);
        if ((short)param_1 == (short)param_5) {
          piVar3 = (int *)STAllPlayersC::GetObjPtr(in_ECX,param_4,param_5,1);
          (**(code **)(*piVar3 + 0xe8))(0);
          param_1 = 0xffff;
          Library::DKW::TBL::FUN_006ae140(puVar1,uVar6,&param_1);
          *(short *)((int)piVar4 + 0xe) = *(short *)((int)piVar4 + 0xe) + -1;
          if (*(short *)((int)piVar4 + 0xe) == 0) {
            FUN_006ae110(*(byte **)((int)piVar4 + 10));
            *(undefined4 *)((int)piVar4 + 10) = 0;
            *piVar4 = 0;
          }
          return 0;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)param_2);
    }
  }
  return 0xffffffff;
}

