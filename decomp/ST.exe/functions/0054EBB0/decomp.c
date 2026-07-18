
void __thiscall FUN_0054ebb0(void *this,char *param_1,uint param_2)

{
  DWORD DVar1;
  
  *(undefined4 *)param_1 = *(undefined4 *)((int)this + 0x41);
  *(int *)((int)this + 0x41) = *(int *)((int)this + 0x41) + 1;
  thunk_FUN_0054e950((undefined4 *)param_1,param_2);
  DVar1 = timeGetTime();
  *(DWORD *)((int)this + 0x7f) = DVar1;
  FUN_00715360(DAT_00811764,0,'1',param_1,param_2,1,*(undefined4 *)param_1);
  return;
}

