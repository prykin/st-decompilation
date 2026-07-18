
/* Recovered from embedded debug metadata:
   E:\__titans\Maps\gen_map.cpp
   CGenerate::CteateField */

undefined4 __thiscall
CGenerate::CteateField
          (CGenerate *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,int param_6)

{
  code *pcVar1;
  CGenerate *pCVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  undefined4 local_c;
  CGenerate *local_8;
  
  local_c = 0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  local_8 = this;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    iVar3 = param_1 * param_2;
    *(int *)(local_8 + 0x582f) = iVar3;
    *(int *)(local_8 + 0x5833) = param_1;
    *(undefined4 *)(local_8 + 0x583f) = 0;
    *(undefined4 *)(local_8 + 0x5843) = param_4;
    *(int *)(local_8 + 0x5837) = iVar3 / param_1;
    *(undefined4 *)(local_8 + 0x583b) = param_5;
    *(undefined4 *)(local_8 + 0x5847) = param_3;
    iVar3 = FUN_006aac70(iVar3);
    *(int *)(pCVar2 + 0x584b) = iVar3;
    iVar3 = FUN_006aac70(*(int *)(pCVar2 + 0x582f) * ((-(uint)(param_6 != 0) & 7) + 1) * 2);
    *(int *)(pCVar2 + 0x584f) = iVar3;
    puVar4 = FUN_006ae290((uint *)0x0,10,0x1d,10);
    *(uint **)(pCVar2 + 0x5853) = puVar4;
    DAT_00858df8 = (undefined4 *)local_50;
    if (((*(int *)(pCVar2 + 0x584b) == 0) || (*(int *)(pCVar2 + 0x584f) == 0)) ||
       (uVar5 = 1, *(int *)(pCVar2 + 0x5853) == 0)) {
      return local_c;
    }
  }
  else {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar6 = FUN_006ad4d0(s_E____titans_Maps_gen_map_cpp_007d85fc,0x330,0,iVar3,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    FUN_006a5e40(iVar3,0,0x7d85fc,0x332);
    uVar5 = 0xffff;
  }
  return uVar5;
}

