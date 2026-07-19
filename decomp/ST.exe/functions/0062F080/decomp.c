
undefined4 __thiscall
FUN_0062f080(void *this,int param_1,undefined4 param_2,STRubbishC_LoadImagSpr_param_4Enum param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x1e5);
  if (((iVar1 != 0) && (*(void **)(iVar1 + 0x10) != (void *)0x0)) &&
     (iVar1 = STRubbishC::LoadImagSpr
                        (this,*(void **)(iVar1 + 0x10),(int *)(iVar1 + 0x14),param_2,param_3),
     iVar1 == 0)) {
    return 1;
  }
  return 0;
}

