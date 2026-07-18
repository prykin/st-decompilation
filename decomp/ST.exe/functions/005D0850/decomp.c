
void __thiscall FUN_005d0850(void *this,uint param_1,char param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  char *pcVar6;
  void *unaff_EDI;
  bool bVar7;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int *local_8;
  
  if (*(int *)((int)this + 0x1f84) != 0) {
    local_4c = DAT_00858df8;
    DAT_00858df8 = &local_4c;
    local_8 = this;
    iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
    piVar2 = local_8;
    if (iVar3 == 0) {
      iVar3 = local_8[0x7e1];
      if (param_1 < *(uint *)(iVar3 + 0xc)) {
        pcVar6 = (char *)(*(int *)(iVar3 + 8) * param_1 + *(int *)(iVar3 + 0x1c));
      }
      else {
        pcVar6 = (char *)0x0;
      }
      if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) {
        if (pcVar6[2] != 0xff) {
          thunk_FUN_0056a840(&DAT_00807620,pcVar6[2]);
        }
        pcVar6[2] = param_2;
        if ((pcVar6[4] == '\x02') && (*(int *)(pcVar6 + 6) == DAT_0080877f)) {
          DAT_0080874d = param_2;
        }
        iVar3 = piVar2[0x7e1];
        uVar5 = param_1 + 1;
        bVar7 = uVar5 < *(uint *)(iVar3 + 0xc);
        if ((int)uVar5 < (int)*(uint *)(iVar3 + 0xc)) {
          do {
            if (bVar7) {
              pcVar6 = (char *)(*(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c));
            }
            else {
              pcVar6 = (char *)0x0;
            }
            if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\0')) break;
            pcVar6[2] = param_2;
            if (*(int *)(pcVar6 + 6) == DAT_0080877f) {
              DAT_0080874d = param_2;
            }
            iVar3 = piVar2[0x7e1];
            uVar5 = uVar5 + 1;
            bVar7 = uVar5 < *(uint *)(iVar3 + 0xc);
          } while ((int)uVar5 < (int)*(uint *)(iVar3 + 0xc));
        }
        (**(code **)(*piVar2 + 0x2c))();
        thunk_FUN_005c87c0();
        *(int *)((int)piVar2 + 0x2121) = *(int *)((int)piVar2 + 0x2121) + 1;
      }
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar4 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x598,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cd258,0x598);
  }
  return;
}

