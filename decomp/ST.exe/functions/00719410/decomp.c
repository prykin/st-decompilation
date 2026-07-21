
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00719410_param_2Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

undefined4 __cdecl
FUN_00719410(undefined4 param_1,Global_sub_00719410_param_2Enum param_2,undefined4 param_3)

{
  MCIERROR mcierr;
  DWORD_PTR dwParam1;
  undefined4 local_18;
  MCIDEVICEID local_14;
  char *local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_18 = 0;
  dwParam1 = 0;
  local_14 = 0;
  local_10 = (char *)0x0;
  local_c = 0;
  local_8 = 0;
  switch(param_2) {
  case CASE_0:
    local_10 = "sequencer";
    break;
  case CASE_1:
    local_10 = "waveaudio";
    break;
  case CASE_2:
    local_10 = "avivideo";
    break;
  case CASE_3:
    local_10 = "cdaudio";
    local_c = param_3;
  }
  if (param_2 < CASE_3) {
    local_c = param_1;
    dwParam1 = 0x2202;
  }
  else if (param_2 == CASE_3) {
    dwParam1 = 0x2300;
  }
  mcierr = mciSendCommandA(0,0x803,dwParam1,(DWORD_PTR)&local_18);
  if (mcierr == 0) {
    return local_14;
  }
  FUN_00719c90(mcierr,&local_14);
  return 0;
}

