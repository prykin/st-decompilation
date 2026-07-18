
void __thiscall FUN_004f8020(void *this,char param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)((int)this + 0xb63);
  if (param_1 == '\0') {
    pcVar1 = (char *)((int)this + 0xc51);
  }
  if ((((*pcVar1 != '\0') && (DAT_00808784 == 0)) && (DAT_00808788 == 0)) &&
     ((DAT_0080878c == 0 && (DAT_00808790 == 0)))) {
    STAllPlayersC::SetActivePanel(DAT_007fa174,(uint)(param_1 == '\0'),0,param_2);
  }
  return;
}

