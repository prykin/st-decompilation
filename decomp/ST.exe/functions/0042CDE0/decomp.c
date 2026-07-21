
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::PushTV */

undefined4
STAllPlayersC::PushTV(undefined4 param_1,int param_2,int param_3,char param_4,short param_5)

{
  DArrayTy *array;
  dword dVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint index;
  
  if (param_2 == 0) {
    iVar3 = (char)param_1 * 0xa62 + 0x7f4f83;
  }
  else {
    if (param_2 != 1) {
      iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x36a,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__PushTV_007a630c);
      if (iVar3 == 0) {
        return 0;
      }
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    iVar3 = (char)param_1 * 0xa62 + 0x7f4fd3;
  }
  iVar3 = iVar3 + param_3 * 0x10;
  if (*(int *)(iVar3 + 4) == (int)param_4) {
    array = *(DArrayTy **)(iVar3 + 10);
    index = 0;
    dVar1 = array->count;
    if (0 < (int)dVar1) {
      do {
        DArrayGetElement(array,index,(void *)((int)&param_1 + 2));
        if (param_1._2_2_ == param_5) {
          return 1;
        }
        index = index + 1;
      } while ((int)index < (int)dVar1);
      return 0;
    }
  }
  return 0;
}

