
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::PushTV */

undefined4
STAllPlayersC::PushTV(undefined4 param_1,int param_2,int param_3,char param_4,short param_5)

{
  AnonShape_006ACC70_C8641025 *pAVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    iVar4 = (char)param_1 * 0xa62 + 0x7f4f83;
  }
  else {
    if (param_2 != 1) {
      iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x36a,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__PushTV_007a630c);
      if (iVar4 == 0) {
        return 0;
      }
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    iVar4 = (char)param_1 * 0xa62 + 0x7f4fd3;
  }
  iVar4 = iVar4 + param_3 * 0x10;
  if (*(int *)(iVar4 + 4) == (int)param_4) {
    pAVar1 = *(AnonShape_006ACC70_C8641025 **)(iVar4 + 10);
    uVar6 = 0;
    uVar2 = pAVar1->field_000C;
    if (0 < (int)uVar2) {
      do {
        FUN_006acc70(pAVar1,uVar6,(undefined4 *)((int)&param_1 + 2));
        if (param_1._2_2_ == param_5) {
          return 1;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar2);
      return 0;
    }
  }
  return 0;
}

