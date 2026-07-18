
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Rubb.cpp
   STRubbishC::RubbishCreatePart */

int __thiscall STRubbishC::RubbishCreatePart(STRubbishC *this)

{
  code *pcVar1;
  int iVar2;
  STRubbishC *pSVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  STRubbishC *local_c;
  int local_8;
  
  local_8 = -1;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  local_c = this;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar6 = FUN_006ad4d0(s_E____titans_nick_to_Rubb_cpp_007d1798,0xd9,0,iVar2,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar2,0,0x7d1798,0xdb);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  pSVar3 = local_c + 0x1e5;
  iVar2 = 0;
  iVar6 = local_8;
  do {
    if (*(int *)pSVar3 == 0) {
      local_8 = iVar6;
      puVar4 = (undefined4 *)FUN_006aac70(0x3e);
      *(undefined4 **)(local_c + iVar2 * 4 + 0x1e5) = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        *(undefined2 *)puVar4 = 0;
        iVar6 = iVar2;
        if (local_c[0x1f9] != (STRubbishC)0x0) {
          puVar4 = (undefined4 *)FUN_0072e530(0x40);
          if (puVar4 == (undefined4 *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = thunk_FUN_004ab810(puVar4);
          }
          *(undefined4 *)(*(int *)(local_c + iVar2 * 4 + 0x1e5) + 0x10) = uVar5;
        }
      }
      DAT_00858df8 = (undefined4 *)local_50;
      return iVar6;
    }
    iVar6 = 5;
    iVar2 = iVar2 + 1;
    pSVar3 = pSVar3 + 4;
  } while (iVar2 < 5);
  DAT_00858df8 = (undefined4 *)local_50;
  return 5;
}

