
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::ChangePlayerState */

void __thiscall SettMapMTy::ChangePlayerState(SettMapMTy *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  SettMapMTy *pSVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 unaff_ESI;
  char *pcVar7;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  SettMapMTy *local_8;
  
  if (*(int *)(this + 0x1f84) != 0) {
    local_4c = DAT_00858df8;
    DAT_00858df8 = &local_4c;
    local_8 = this;
    iVar4 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
    pSVar3 = local_8;
    if (iVar4 == 0) {
      iVar4 = *(int *)(local_8 + 0x1f84);
      if (param_1 < *(uint *)(iVar4 + 0xc)) {
        pcVar7 = (char *)(*(int *)(iVar4 + 8) * param_1 + *(int *)(iVar4 + 0x1c));
      }
      else {
        pcVar7 = (char *)0x0;
      }
      if (*pcVar7 != '\0') {
        if (pcVar7[1] == '\0') {
          uVar1 = param_1 + 1;
          while( true ) {
            iVar4 = *(int *)(pSVar3 + 0x1f84);
            if (uVar1 < *(uint *)(iVar4 + 0xc)) {
              pcVar5 = (char *)(*(int *)(iVar4 + 8) * uVar1 + *(int *)(iVar4 + 0x1c));
            }
            else {
              pcVar5 = (char *)0x0;
            }
            if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\0')) break;
            if (*(byte **)(pcVar5 + 0x50) != (byte *)0x0) {
              FUN_006ae110(*(byte **)(pcVar5 + 0x50));
            }
            FUN_006b0c70(*(int *)(pSVar3 + 0x1f84),uVar1);
          }
          pcVar7[1] = '\x01';
        }
        else if (*(uint *)(iVar4 + 0xc) < 0x18) {
          pcVar7[1] = '\0';
          thunk_FUN_005d00b0(local_8,(int)pcVar7,param_1 + 1);
        }
        (**(code **)(*(int *)pSVar3 + 0x2c))();
        *(int *)(pSVar3 + 0x2121) = *(int *)(pSVar3 + 0x2121) + 1;
      }
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar6 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x5ba,0,iVar4,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7cd258,0x5ba);
  }
  return;
}

