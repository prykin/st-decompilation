
void __thiscall FUN_005503c0(void *this,int param_1)

{
  if (DAT_00808788 == 0) {
    *(int *)((int)this + 0xf4) = param_1;
    DAT_00808788 = 1;
    if (g_optPanel_008016DC != (OptPanelTy *)0x0) {
      OptPanelTy::Question(g_optPanel_008016DC,'\a');
      return;
    }
    *(undefined4 *)((int)this + 0xd0) = 0x44ff;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0x20))((int)this + 0xc0);
  }
  return;
}

