
int __thiscall
STPlaySystemC::SaveObjData
          (STPlaySystemC *this,char *param_1,byte *param_2,uint param_3,byte param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 auStack_48 [16];
  STPlaySystemC *pSStack_8;
  
  uVar4 = DAT_00858df8;
  if (*(int *)(this + 0x24) == 0) {
    return -4;
  }
  DAT_00858df8 = &stack0xffffffb4;
  pSStack_8 = this;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    FUN_006f13f0(param_4,param_1,param_2,param_3,(undefined4 *)0x0,'\x02',(uint *)0x0);
    DAT_00858df8 = (undefined1 *)uVar4;
    return 0;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x232,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7c8430,0x232);
  return iVar2;
}

