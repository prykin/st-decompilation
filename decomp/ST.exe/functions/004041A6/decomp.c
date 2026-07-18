
void __thiscall thunk_FUN_005d06c0(void *this,uint param_1,char param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar7;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int *piStack_8;
  
  if (*(int *)((int)this + 0x1f84) != 0) {
    uStack_4c = DAT_00858df8;
    DAT_00858df8 = &uStack_4c;
    piStack_8 = this;
    iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
    piVar2 = piStack_8;
    if (iVar3 == 0) {
      iVar3 = piStack_8[0x7e1];
      if (param_1 < *(uint *)(iVar3 + 0xc)) {
        pcVar4 = (char *)(*(int *)(iVar3 + 8) * param_1 + *(int *)(iVar3 + 0x1c));
      }
      else {
        pcVar4 = (char *)0x0;
      }
      if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
        pcVar4[3] = param_2;
        if ((pcVar4[4] == '\x02') && (*(int *)(pcVar4 + 6) == DAT_0080877f)) {
          DAT_0080874e = param_2;
        }
        iVar3 = piStack_8[0x7e1];
        uVar6 = param_1 + 1;
        bVar7 = uVar6 < *(uint *)(iVar3 + 0xc);
        if ((int)uVar6 < (int)*(uint *)(iVar3 + 0xc)) {
          do {
            if (bVar7) {
              pcVar4 = (char *)(*(int *)(iVar3 + 8) * uVar6 + *(int *)(iVar3 + 0x1c));
            }
            else {
              pcVar4 = (char *)0x0;
            }
            if ((pcVar4 == (char *)0x0) || (*pcVar4 != '\0')) break;
            pcVar4[3] = param_2;
            if (*(int *)(pcVar4 + 6) == DAT_0080877f) {
              DAT_0080874e = param_2;
            }
            iVar3 = piStack_8[0x7e1];
            uVar6 = uVar6 + 1;
            bVar7 = uVar6 < *(uint *)(iVar3 + 0xc);
          } while ((int)uVar6 < (int)*(uint *)(iVar3 + 0xc));
        }
        (**(code **)(*piStack_8 + 0x2c))();
        *(int *)((int)piVar2 + 0x2121) = *(int *)((int)piVar2 + 0x2121) + 1;
      }
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    iVar5 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x57d,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cd258,0x57d);
  }
  return;
}

