
void FUN_006b81d0(undefined4 *param_1)

{
  if ((HMIXER)param_1[0xc] != (HMIXER)0x0) {
    mixerClose((HMIXER)param_1[0xc]);
    param_1[0xc] = 0;
  }
  FUN_006a5e90((short *)param_1);
  return;
}

