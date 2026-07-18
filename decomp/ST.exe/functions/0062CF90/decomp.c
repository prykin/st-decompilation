
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_rab3m.cpp
   STManRub3C::AddNewRub3 */

uint __thiscall STManRub3C::AddNewRub3(STManRub3C *this,int *param_1)

{
  code *pcVar1;
  STManRub3C *pSVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar8;
  undefined4 local_74;
  undefined4 local_70 [16];
  int local_30 [4];
  int local_20;
  int local_1c;
  int local_18;
  uint local_10;
  STManRub3C *local_c;
  int *local_8;
  
  local_10 = 0xffffffff;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  local_8 = param_1;
  local_74 = DAT_00858df8;
  DAT_00858df8 = &local_74;
  local_c = this;
  iVar4 = __setjmp3(local_70,0,unaff_EDI,unaff_ESI);
  piVar3 = local_8;
  pSVar2 = local_c;
  if (iVar4 == 0) {
    if (*(int *)(local_c + *local_8 * 4 + 0x30) == 0) {
      puVar5 = FUN_006ae290((uint *)0x0,10,0x20,10);
      *(uint **)(pSVar2 + *piVar3 * 4 + 0x30) = puVar5;
    }
    if (*(int *)(pSVar2 + *piVar3 * 4 + 0x30) != 0) {
      piVar8 = local_30;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar8 = 0;
        piVar8 = piVar8 + 1;
      }
      local_20 = piVar3[4];
      local_18 = piVar3[6];
      local_1c = piVar3[5];
      local_30[1] = piVar3[1];
      local_30[2] = piVar3[2];
      local_30[3] = piVar3[3];
      uVar6 = FUN_006ae1c0(*(uint **)(pSVar2 + *piVar3 * 4 + 0x30),local_30);
      DAT_00858df8 = (undefined4 *)local_74;
      return uVar6;
    }
    DAT_00858df8 = (undefined4 *)local_74;
    return local_10;
  }
  DAT_00858df8 = (undefined4 *)local_74;
  iVar7 = FUN_006ad4d0(s_E____titans_nick_to_rab3m_cpp_007d13ec,0x86,0,iVar4,&DAT_007a4ccc);
  if (iVar7 != 0) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  FUN_006a5e40(iVar4,0,0x7d13ec,0x88);
  return 0xffff;
}

