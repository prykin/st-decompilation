
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::SaveObjData */

int __thiscall
STPlaySystemC::SaveObjData(STPlaySystemC *this,undefined4 param_1,byte *param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined1 *puVar4;
  undefined4 local_68 [16];
  CHAR local_28 [32];
  STPlaySystemC *local_8;
  
  puVar4 = DAT_00858df8;
  if (*(int *)(this + 0x24) == 0) {
    return -4;
  }
  DAT_00858df8 = &stack0xffffff94;
  local_8 = this;
  iVar2 = __setjmp3(local_68,0,unaff_ESI,puVar4);
  if (iVar2 == 0) {
    wsprintfA(local_28,s__s_08ld_007c8530,PTR_DAT_007c83b0,param_1);
    FUN_006f13f0(0xc,local_28,param_2,param_3,(undefined4 *)0x0,'\x02',(uint *)0x0);
    DAT_00858df8 = puVar4;
    return 0;
  }
  DAT_00858df8 = puVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x218,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7c8430,0x218);
  return iVar2;
}

