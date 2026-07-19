
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::SetCurFase */

undefined4 __thiscall STT3DSprC::SetCurFase(STT3DSprC *this,char param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  
  if (this->field_0018 != -1) {
    if ((param_1 < '\0') || (this->field_0014 + -1 < (int)param_1)) {
      iVar4 = ReportDebugMessage(s_E____titans_wlad_Tspr3d_cpp_007ac638,0x93,0,0,&DAT_007a4ccc,
                                 s_STT3DSprC__SetCurFase_wrong_leve_007ac67c);
      if (iVar4 != 0) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    else {
      iVar4 = param_1 * 0x24;
      piVar6 = (int *)(this->field_0020 + iVar4);
      piVar1 = (int *)*piVar6;
      if (piVar1 != (int *)0x0) {
        iVar2 = piVar6[6];
        if ((-1 < iVar2) && (iVar2 < *piVar1)) {
          *(undefined4 *)(piVar6[1] + iVar2 * 4) = *(undefined4 *)((int)piVar1 + iVar2 * 4 + 0x31);
        }
        *(undefined4 *)(iVar4 + 0x18 + this->field_0020) = param_2;
        return 0;
      }
    }
  }
  return 0xffffffff;
}

