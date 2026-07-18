
void __thiscall thunk_FUN_006a09f0(void *this,byte *param_1,uint param_2)

{
  CHAR aCStack_108 [260];
  
  wsprintfA(aCStack_108,s__s_08u_007d86bc,&DAT_007c8400,*(undefined4 *)((int)this + 0x570b));
  FUN_006f13f0(0xc,aCStack_108,param_1,param_2,(undefined4 *)0x0,'\0',(uint *)0x0);
  *(int *)((int)this + 0x570b) = *(int *)((int)this + 0x570b) + 1;
  return;
}

