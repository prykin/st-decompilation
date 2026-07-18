
void __thiscall
FUN_005d0ed0(void *this,int param_1,uint param_2,int param_3,char param_4,char *param_5)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 unaff_ESI;
  char *pcVar9;
  void *unaff_EDI;
  char *pcVar10;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int *local_8;
  
  if (*(int *)((int)this + 0x1f84) != 0) {
    local_4c = DAT_00858df8;
    DAT_00858df8 = &local_4c;
    local_8 = this;
    iVar4 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
    piVar3 = local_8;
    if (iVar4 == 0) {
      iVar4 = local_8[0x7e1];
      if (param_2 < *(uint *)(iVar4 + 0xc)) {
        iVar4 = *(int *)(iVar4 + 8) * param_2 + *(int *)(iVar4 + 0x1c);
      }
      else {
        iVar4 = 0;
      }
      if (iVar4 != 0) {
        if ((param_3 == 2) || (param_3 == 3)) {
          thunk_FUN_005cff40(local_8,param_1);
        }
        iVar4 = piVar3[0x7e1];
        if (param_2 < *(uint *)(iVar4 + 0xc)) {
          pcVar8 = (char *)(*(int *)(iVar4 + 8) * param_2 + *(int *)(iVar4 + 0x1c));
        }
        else {
          pcVar8 = (char *)0x0;
        }
        pcVar8[4] = (char)param_3;
        pcVar8[5] = param_4;
        if ((param_3 != 2) && (param_3 != 3)) {
          param_1 = 0;
        }
        *(int *)(pcVar8 + 6) = param_1;
        if (param_5 == (char *)0x0) {
          param_5 = &DAT_008016a0;
        }
        uVar6 = 0xffffffff;
        do {
          pcVar9 = param_5;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar9 = param_5 + 1;
          cVar1 = *param_5;
          param_5 = pcVar9;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar9 = pcVar9 + -uVar6;
        pcVar10 = pcVar8 + 10;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        }
        if (pcVar8[4] == '\0') {
          if (pcVar8[2] != 0xff) {
            thunk_FUN_0056a840(&DAT_00807620,pcVar8[2]);
          }
          pcVar8[2] = -1;
        }
        piVar3 = local_8;
        if (pcVar8[2] == -1) {
          pcVar8[0x4f] = '\0';
        }
        else {
          pcVar8[0x4f] = '\x01';
        }
        if ((*pcVar8 != '\0') && (pcVar8[4] != '\x02')) {
          pcVar8[1] = '\x01';
        }
        thunk_FUN_005d0150(local_8);
        if ((*(char *)((int)piVar3 + 0x1e26) != '\f') && (*(char *)((int)piVar3 + 0x1e26) != '\x10')
           ) {
          thunk_FUN_005d1380((int)piVar3);
        }
        (**(code **)(*piVar3 + 0x2c))();
        thunk_FUN_005c87c0();
        *(int *)((int)piVar3 + 0x2121) = *(int *)((int)piVar3 + 0x2121) + 1;
      }
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar5 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x605,0,iVar4,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7cd258,0x605);
  }
  return;
}

